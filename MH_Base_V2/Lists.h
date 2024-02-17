#pragma once
#include "stdafx.h"

namespace Mod_Hub_Base::Lists
{
	inline const char* HeaderTypesFrontend[] =  {
		"Static",
		"Gradient",
		"Game YTD",
		"YTD"
	};

	inline UserInterface::HeaderType HeaderTypesBackend[] =  {
		UserInterface::HeaderType::Static,
		UserInterface::HeaderType::Gradient,
		UserInterface::HeaderType::Game_YTD,
		UserInterface::HeaderType::YTD,
	};

	inline std::size_t HeaderTypesPosition = 1;

	inline const char* DemoList[10] =  {
		"One",
		"Two",
		"Three",
		"Four",
		"Five",
		"Six",
		"Seven",
		"Eight",
		"Nine",
		"Ten"
	};

	inline std::size_t DemoListPos = 0;
}
