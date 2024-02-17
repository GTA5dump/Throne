#pragma once
namespace Mod_Hub_Base
{
	void ScriptMain();
	void ScriptImGuiMain();
}
enum Submenu : std::uint32_t
{
	Home_Menu,
	Local_Menu,

	Vehicle_Menu,
	Weapon_Menu,
	Spawner_Menu,
	Teleport_Menu,
	Speed_Menu,
	RemovalsP,
	FriendlyP,
	GriefingP,
	TeleportP,
	Airports,
	IPLs,
	Landmarks,
	Safehouses,
	Shops,
	World,
	Animations,
	Scenarios,
	Trails,
	HandTrailsNEW,
	Vehicles_Spawner_Settings,
	Acrobatics,

	Misc_Menu,

	Protection_Main,

	Online_P_List,
	Selected_P_Menu,

	SubmenuSettings,
	SubmenuSettingsHeader,
	SubmenuSettingsHeaderStaticBackground,
	SubmenuSettingsHeaderGradientBackground,
	SubmenuSettingsHeaderText,
	SubmenuSettingsSubmenuBar,
	SubmenuSettingsOption,
	SubmenuSettingsFooter,
	SubmenuSettingsDescription,
	SubmenuSettingsInput,
	Bool_Menu
};