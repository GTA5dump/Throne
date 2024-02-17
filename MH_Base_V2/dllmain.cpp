// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

void Logger(const char* fmt, ...)
{
	printf(fmt);
}
DWORD WINAPI ControlThread(LPVOID lpParam)
{
	using namespace Mod_Hub_Base;
	if (AllocConsole()) {
		freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
		SetConsoleTitleW(L"" Mod_Menu_Name);
		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
	}
	Hooking::StartHook((HMODULE)lpParam); // this always loadng first
	g_Hooking = std::make_unique<Hooking>();
	g_Hooking->Hook();
	g_D3DRenderer = std::make_unique<D3DRenderer>();

	//MessageBoxA(NULL, Mod_Menu_Name " LOADED!", "LOADED!", MB_ICONINFORMATION);
	Log::Msg(Mod_Menu_Name " <!> loaded!");
	while (Mod_running)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
		std::this_thread::yield();
		if (GetAsyncKeyState(VK_DELETE)) { Mod_running = false; }
	}

	Hooking::Cleanup();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ControlThread, hModule, NULL, NULL);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}