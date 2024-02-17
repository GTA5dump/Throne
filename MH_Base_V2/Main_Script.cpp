#include "stdafx.h"

int id = 0; // there fitsr id of your pic (0 or 1) 
int customtimer;
const char* pic_id;
std::string placeholderStr;

bool First_start = true;
void fisrt_start()

{
	using namespace Mod_Hub_Base;

	
}
inline std::size_t DemoListPos = 0;
inline std::size_t DemoListPos1 = 0;
inline std::size_t DemoListPos2 = 0;
inline std::size_t DemoListPos3 = 0;
inline std::size_t DemoListPos4 = 0;
inline std::size_t DemoListPos5 = 0;
inline std::size_t DemoListPos6 = 0;
inline std::size_t DemoListPos7 = 0;
inline std::size_t DemoListPos8 = 0;
inline std::size_t DemoListPos9 = 0;
inline std::size_t DemoListPos10 = 0;
inline std::size_t DemoListPos11 = 0;
inline std::size_t DemoListPos12 = 0;
inline std::size_t DemoListPos13 = 0;
inline std::size_t DemoListPos14 = 0;
inline std::size_t DemoListPos15 = 0;
inline std::size_t DemoListPos16 = 0;
inline std::size_t DemoListPos17 = 0;
inline std::size_t DemoListPos18 = 0;
inline std::size_t DemoListPos19 = 0;
inline std::size_t DemoListPos20 = 0;
inline std::size_t DemoListPos21 = 0;
inline std::size_t DemoListPos22 = 0;
inline std::size_t DemoListPos23 = 0;
inline std::size_t DemoListPos24 = 0;
inline std::size_t DemoListPos25 = 0;
inline std::size_t DemoListPos26 = 0;
inline std::size_t DemoListPos27 = 0;
inline std::size_t DemoListPos28 = 0;
inline std::size_t DemoListPos29 = 0;
inline std::size_t DemoListPos30 = 0;
inline std::size_t DemoListPos31 = 0;
inline std::size_t PedIndex = 0;

static const char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA", "BOMBUSHKA",
	"ALPHAZ1", "TULA", "ROGUE", "PYRO", "MOGUL",
	"NOKOTA", "MOLOTOK", "SEABREEZE", "MICROLIGHT", "HOWARD",
	"STARLING", "AVENGER2", "VOLATOL", "STRIKEFORCE"
};
static const char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON", "STAFFORD", "NEBULA"
};
static const char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER", "PBUS2"
};
static const char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARZE", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON", "COMET4", "COMET5", "NEON", "PARIAH", "RAIDEN", "REVOLTER", "SENTINEL3", "STREITER", "Z190",
	"GB200", "HOTRING", "ITALIGTO", "SCHLAGEN", "ZR380", "ZR3802", "ZR3803",
	"DRAFTER", "JUGULAR", "LOCUST", "NEO", "PARAGON", "PARAGON2"
};
static const char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2", "RAPIDGT3", "RETINUE", "DELUXO", "GT500",
	"SAVESTRA", "STROMBERG", "VISERIS", "CHEBUREK", "FAGALOA", "JESTER3", "MICHELLI", "SWINGER",
	"DYNASTY", "PEYOTE2", "ZION3"
};
static const char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1", "XA21", "VIGILANTE",
	"CYCLONE", "VISIONE", "AUTARCH", "SC1", "ENTITY2", "TAIPAN", "TEZERACT", "TYRANT", "SCRAMJET", "DEVESTE",
	"EMERUS", "KRIEGER", "S80", "THRAX", "ZORRUSSO"
};
static const char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2", "PATRIOT2", "TOROS", "NOVAK"
};
static const char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static const char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static const char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static const char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2", "SPEEDO4"
};
static const char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static const char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3", "MULE4", "POUNDER2", "TERROBYTE", "CERBERUS2", "CERBERUSS3",
	"CERBERUS"
};
static const char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY", "ISSI3", "ISSI6", "ISSI4", "ISSI5",
	"ISSI7"
};
static const char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static const char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static const char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT", "RIOT2"
};
static const char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS", "HUNTER", "HAVOK", "AKULA", "SEASPARROW",
	"BLIMP3"
};
static const char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static const char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO", "BARRAGE", "CHERNOBOG", "KHANJALI", "THRUSTER", "SCARAB", "SCARAB2", "SCARAB3"
};
static const char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2", "OPPRESSOR", "AVENGER", "OPPRESSOR2", "DEATHBIKE2",
	"DEATHBIKE3", "DEATHBIKE", "RROCKET"
};
static const char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2", "HERMES", "HUSTLER", "YOSEMITE", "DOMINATOR3", "ELLIE",
	"IMPALER3", "SLAMVAN6", "DOMINATOR6", "IMPALER4","SLAMVAN4","SLAMVAN5",
	"DOMINATOR4", "DOMINATOR5", "BRUISER", "BRUISER2", "BRUISER3", "RCBANDITO", "IMPALER2",
	"TULIP", "CLIQUE", "VAMOS", "IMPERATOR", "IMPERATOR2", "IMPERATOR3",
	"DEVIANT", "IMPALER", "GAUNTLET3", "GAUNTLET4"
};
static const char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5", "KAMACHO", "RIATA", "CARACARA", "FREECRAWLER", "MENACER",
	"MONSTER4", "MONSTER5", "BRUTUS", "BRUTUS2", "BRUTUS3", "MONSTER3",
	"CARACARA2", "HELLION"
};

static const char* CriminalEnterprise1[] = {
	"CONADA", "CORSITA", "GREENWOOD", "LM87", "TENF", "TORERO2", "VIGERO2", "SM722", "RHINEHART", "DRAUGUR", "POSTLUDE", "KANJOSJ", "OMNISEGT",
	"RUINER4",
};

static const char* DrugWars1[] = {
	"BOOR", "BRICKADE2", "BROADWAY", "CARGOPLANE2", "ENTITY3", "EUDORA", "EVERON2", "ISSI8", "JOURNEY2", "MANCHEZ3", "PANTHERE", "POWERSURGE", "R300", "SURFER3", "TAHOMA", "TULIP2", "PANTHERE",

};


bool spawn_in_vehicle = false;
bool engine_on = false;
bool spawn_god = false;


void spawn_vehicle(char* toSpawn) {
	Hash model = GAMEPLAY::GET_HASH_KEY(toSpawn);
	if (STREAMING::IS_MODEL_VALID(model))
	{
		STREAMING::REQUEST_MODEL(model);
		while (!STREAMING::HAS_MODEL_LOADED(model)) Mod_Hub_Base::WAIT(0);
		Vector3 ourCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		float forward = 5.f;
		float heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		float xVector = forward * sin(degToRad(heading)) * -1.f;
		float yVector = forward * cos(degToRad(heading));
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x9090;
		Vehicle veh = VEHICLE::CREATE_VEHICLE(model, ourCoords.x + xVector, ourCoords.y + yVector, ourCoords.z, heading, true, true);
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x0574;
		RequestControlOfEnt(veh);
		if (spawn_in_vehicle)
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
		}
		if (engine_on)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(veh, true, true, true);
		}
		if (spawn_god)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(veh, true);
		}
		DECORATOR::DECOR_SET_INT(veh, "MPBitset", 0);
		auto networkId = NETWORK::VEH_TO_NET(veh);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veh))
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(networkId, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);


	}
}



Vector3 get_blip_marker()
{
	static Vector3 zero;
	Vector3 coords;

	bool blipFound = false;
	// search for marker blip
	int blipIterator = UI::_GET_BLIP_INFO_ID_ITERATOR();
	for (Blip i = UI::GET_FIRST_BLIP_INFO_ID(blipIterator); UI::DOES_BLIP_EXIST(i) != 0; i = UI::GET_NEXT_BLIP_INFO_ID(blipIterator))
	{
		if (UI::GET_BLIP_INFO_ID_TYPE(i) == 4)
		{
			coords = UI::GET_BLIP_INFO_ID_COORD(i);
			blipFound = true;
			break;
		}
	}
	if (blipFound)
	{
		return coords;
	}

	return zero;
}
void teleport_to_coords(Entity e, Vector3 coords)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(e, coords.x, coords.y, coords.z, 0, 0, 1);
	WAIT(0);
}


namespace Mod_Hub_Base
{
	void main() {
		using namespace UserInterface;
		while (true) {

			


			g_UiManager->OnTick();
			/* Features */
			Function_update_Loop();
			if (First_start)
			{
				fisrt_start();
				First_start = false;
			}
			g_UiManager->AddSubmenu<RegularSubmenu>("Home", Home_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Player", nullptr, Local_Menu);
					sub->AddOption<SubOption>("Weapon", nullptr, Weapon_Menu);
					sub->AddOption<SubOption>("Teleport", nullptr, Teleport_Menu);
					sub->AddOption<SubOption>("Vehicle", nullptr, Vehicle_Menu);
					sub->AddOption<SubOption>("Spawner", nullptr, Spawner_Menu);
					sub->AddOption<SubOption>("Network", nullptr, Online_P_List);
					sub->AddOption<SubOption>("World", nullptr, World);
					sub->AddOption<SubOption>("Miscellaneous", nullptr, Misc_Menu);
					sub->AddOption<SubOption>("Settings", nullptr, SubmenuSettings);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Player", Local_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("God mode", nullptr, &Godmode, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Invisible", nullptr, &Invisible, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Never Wanted", nullptr, &NeverWanted, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Super Run", nullptr, &SlideRun, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("SuperMan", nullptr, &SuperManBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("No Clip", nullptr, &NoClip, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Super Jump", nullptr, &SuperJump, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Max Health", "Maxing Health.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200); });
					sub->AddOption<RegularOption>("Max Armour", "You will get max armour.", []
						{
							PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), 200);
						});
					sub->AddOption<RegularOption>("Clean", nullptr, [] { PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID()); });
					sub->AddOption<RegularOption>("Dry", nullptr, [] { PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID()); });
					sub->AddOption<RegularOption>("Skydive", nullptr, [] { Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0); WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("gadget_parachute"), 1, 0); ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), me.x, me.y, me.z + 1000, 0, 0, 0, 0); });
					sub->AddOption<RegularOption>("Suicide", "You will die.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0); });
					sub->AddOption<RegularOption>("Skip Cutscene", "This option will skip the current Cutscene", []
						{
							CUTSCENE::STOP_CUTSCENE(true);
							CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
						});
					sub->AddOption<RegularOption>("Clone Ped", "This will clone your current ped", []
						{
							PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 1, 1, 1);

						});
					sub->AddOption<RegularOption>("6 Star Wanted", "6 Star wanted", []
						{
							GAMEPLAY::SET_FAKE_WANTED_LEVEL(6);
						});
					sub->AddOption<RegularOption>("Clear 6 Star Wanted", "6 Star wanted", []
						{
							GAMEPLAY::SET_FAKE_WANTED_LEVEL(0);
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Weapon", Weapon_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("No Reload", nullptr, &NoWeaponReloadBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Infinite Ammo", nullptr, &InfiniteAmmo, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Ped Gun", nullptr, &PedGunBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Drive Gun", nullptr, &driveitgun, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Teleport Gun", nullptr, &TeleportGun, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Airstrike Gun", nullptr, &AirstrikeGun, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Give All Weapons", nullptr, giveWeapon);
					sub->AddOption<RegularOption>("Give All MK2", nullptr, giveWeaponmk2);

				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle", Vehicle_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Vehicle God", nullptr, &VehicleGodmodeBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Vehicle Invis", nullptr, &VehicleInvisibleBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Horn Boost", nullptr, &boostbool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("NoLockOn", nullptr, &NoLockOnBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Seatbelt", nullptr, &NoRagdollAndSeatbeltBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Super Brakes", nullptr, &SuperBrakesBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Car Jump", nullptr, &VehicleJump, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Car Fly", nullptr, &FlyCar, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Drive On Water", nullptr, &DriveOnWater, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Drift Mode [SHIFT]", nullptr, &DriftMode, BoolDisplay::OnOff_Icon);
					sub->AddOption<SubOption>("Vehicle Speed", nullptr, Speed_Menu);
					sub->AddOption<RegularOption>("Full Tune", nullptr, maxvehicle);
					sub->AddOption<RegularOption>("Repair", nullptr, fixVeh);
					sub->AddOption<RegularOption>("Flip", nullptr, flip);
					sub->AddOption<RegularOption>("Delete", nullptr, deleteveh);

				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle Speed", Speed_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("5X Speed", nullptr, fivespeed);
					sub->AddOption<RegularOption>("10X Speed", nullptr, tenspeed);
					sub->AddOption<RegularOption>("50X Speed", nullptr, fiftyspeed);
					sub->AddOption<RegularOption>("God Speed", nullptr, godspeed);
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle Spawner", Spawner_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Drug Wars DLC", nullptr, &DrugWars1, &DemoListPos26, false, [] { spawn_vehicle((char*)DrugWars1[DemoListPos26]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Criminal Enterprise DLC", nullptr, &CriminalEnterprise1, &DemoListPos25, false, [] { spawn_vehicle((char*)CriminalEnterprise1[DemoListPos25]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sports", nullptr, &Sports1, &DemoListPos2, false, [] { spawn_vehicle((char*)Sports1[DemoListPos2]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sport Classic", nullptr, &SportsClassics1, &DemoListPos3, false, [] { spawn_vehicle((char*)SportsClassics1[DemoListPos3]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Super", nullptr, &Super1, &DemoListPos24, false, [] { spawn_vehicle((char*)Super1[DemoListPos24]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Offroad", nullptr, &OffRoad1, &DemoListPos4, false, [] { spawn_vehicle((char*)OffRoad1[DemoListPos4]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sedans", nullptr, &Sedans1, &DemoListPos5, false, [] { spawn_vehicle((char*)Sedans1[DemoListPos5]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Coupes", nullptr, &Coupes1, &DemoListPos6, false, [] { spawn_vehicle((char*)Coupes1[DemoListPos6]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Muscle", nullptr, &Muscle1, &DemoListPos7, false, [] { spawn_vehicle((char*)Muscle1[DemoListPos7]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Boats", nullptr, &Boats1, &DemoListPos8, false, [] { spawn_vehicle((char*)Boats1[DemoListPos8]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos9, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos9]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Compacts", nullptr, &Compacts1, &DemoListPos10, false, [] { spawn_vehicle((char*)Compacts1[DemoListPos10]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Cycles", nullptr, &Cycles1, &DemoListPos11, false, [] { spawn_vehicle((char*)Cycles1[DemoListPos11]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Emergency", nullptr, &Emergency1, &DemoListPos12, false, [] { spawn_vehicle((char*)Emergency1[DemoListPos12]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos13, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos13]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Helicopters", nullptr, &Helicopters1, &DemoListPos14, false, [] { spawn_vehicle((char*)Helicopters1[DemoListPos14]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Industrial", nullptr, &Industrial1, &DemoListPos15, false, [] { spawn_vehicle((char*)Industrial1[DemoListPos15]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Military", nullptr, &Military1, &DemoListPos16, false, [] { spawn_vehicle((char*)Military1[DemoListPos16]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Motorcycles", nullptr, &Motorcycles1, &DemoListPos17, false, [] { spawn_vehicle((char*)Motorcycles1[DemoListPos17]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Planes", nullptr, &Planes1, &DemoListPos18, false, [] { spawn_vehicle((char*)Planes1[DemoListPos18]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Service", nullptr, &Service1, &DemoListPos19, false, [] { spawn_vehicle((char*)Service1[DemoListPos19]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("SUV", nullptr, &SUVs1, &DemoListPos20, false, [] { spawn_vehicle((char*)SUVs1[DemoListPos20]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Trailer", nullptr, &Trailer1, &DemoListPos21, false, [] { spawn_vehicle((char*)Trailer1[DemoListPos21]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Trains", nullptr, &Trains1, &DemoListPos22, false, [] { spawn_vehicle((char*)Trains1[DemoListPos22]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Utility", nullptr, &Utility1, &DemoListPos23, false, [] { spawn_vehicle((char*)Utility1[DemoListPos23]);	});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("World", World, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Jump Around Mode", nullptr, &JumpAround, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Asteroid Shower", nullptr, &Shower, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Launch Vehicles", nullptr, &JumpingVehicles, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Kill Nearby Peds", nullptr, &KillPeds, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Boost Nearby Vehicles", nullptr, []
						{
							const int ElementAmount = 10;
							const int ArrSize = ElementAmount * 2 + 2;

							Vehicle* vehs = new Vehicle[ArrSize];
							vehs[0] = ElementAmount;
							int VehFound = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), vehs);

							for (int i = 0; i < VehFound; i++)
							{
								int OffsetID = i * 2 + 2;

								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehs[OffsetID]))
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehs[OffsetID], 70.f);
								else
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehs[OffsetID]);
							}

							delete vehs;
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Teleport", Teleport_Menu, [](RegularSubmenu* sub)
				{

					sub->AddOption<RegularOption>("Teleport to marker", nullptr, teleport_to_marker);

					sub->AddOption<SubOption>("Airports", nullptr, Airports); //done
					sub->AddOption<SubOption>("IPLs", nullptr, IPLs); //done
					sub->AddOption<SubOption>("Landmarks", nullptr, Landmarks); //done
					sub->AddOption<SubOption>("Safe Houses", nullptr, Safehouses); //done
					sub->AddOption<SubOption>("Shops", nullptr, Shops); //done
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Safe Houses", Safehouses, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Franklins House", "Teleport to Franklins House", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 7.1190f, 536.6150f, 176.0280f);
						});
					sub->AddOption<RegularOption>("Franklins House 2", "Teleport to Franklins House 2", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -14.3803f, -1483.510f, 31.1044f);
						});
					sub->AddOption<RegularOption>("Michaels House", "Teleport to Michaels House", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -14.3803f, -1483.510f, 31.1044f);
						});
					sub->AddOption<RegularOption>("Trevors House", "Teleport to Trevors House", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 1972.6100f, 3817.0400f, 33.4283f);
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Shops", Shops, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Barber Shop", "Teleport to Barber Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -1293.231f, -1117.002f, 6.6402f);
						});
					sub->AddOption<RegularOption>("Tattoo Shop", "Teleport to Tattoo Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 319.7877f, 172.2311f, 103.7454f);
						});
					sub->AddOption<RegularOption>("Clothes Shop", "Teleport to Clothes Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -718.91, -158.16, 37.00);
						});
					sub->AddOption<RegularOption>("Gun Shop", "Teleport to Gun Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 247.3652, -45.8777, 69.9411);
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Airports", Airports, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("LSIA Airport", "Teleport to LSIA Airport", []
						{
							Vector3 Coords;
							Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Sandy Shores Airport", "Teleport to Sandy Shores Airport", []
						{
							Vector3 Coords;
							Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("IPLs", IPLs, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Life Invader Office", "Teleport to Life Invader Office", []
						{
							STREAMING::REQUEST_IPL("facelobby");
							STREAMING::REQUEST_IPL("facelobbyfake");
							Vector3 Coords;
							Coords.x = -1047.9f; Coords.y = -233.0f; Coords.z = 39.0f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -1047.9f, -233.0f, 39.0f);

						});
					sub->AddOption<RegularOption>("North Yankton", "Teleport to North Yankton", []
						{
							STREAMING::REQUEST_IPL("prologue01");
							STREAMING::REQUEST_IPL("Prologue01c");
							STREAMING::REQUEST_IPL("Prologue01d");
							STREAMING::REQUEST_IPL("Prologue01e");
							STREAMING::REQUEST_IPL("Prologue01f");
							STREAMING::REQUEST_IPL("Prologue01g");
							STREAMING::REQUEST_IPL("prologue01h");
							STREAMING::REQUEST_IPL("prologue01i");
							STREAMING::REQUEST_IPL("prologue01j");
							STREAMING::REQUEST_IPL("prologue01k");
							STREAMING::REQUEST_IPL("prologue01z");
							STREAMING::REQUEST_IPL("prologue02");
							STREAMING::REQUEST_IPL("prologue03");
							STREAMING::REQUEST_IPL("prologue03b");
							STREAMING::REQUEST_IPL("prologue03_grv_cov");
							STREAMING::REQUEST_IPL("prologue03_grv_dug");
							STREAMING::REQUEST_IPL("prologue03_grv_fun");
							STREAMING::REQUEST_IPL("prologue04");
							STREAMING::REQUEST_IPL("prologue04b");
							STREAMING::REQUEST_IPL("prologue04_cover");
							STREAMING::REQUEST_IPL("prologue05");
							STREAMING::REQUEST_IPL("prologue05b");
							STREAMING::REQUEST_IPL("prologue06");
							STREAMING::REQUEST_IPL("prologue06b");
							STREAMING::REQUEST_IPL("prologue06_int");
							STREAMING::REQUEST_IPL("prologuerd");
							STREAMING::REQUEST_IPL("prologuerdb");
							STREAMING::REQUEST_IPL("prologue_DistantLights");
							STREAMING::REQUEST_IPL("prologue_grv_torch");
							STREAMING::REQUEST_IPL("prologue_m2_door");
							STREAMING::REQUEST_IPL("prologue_LODLights");
							STREAMING::REQUEST_IPL("DES_ProTree_start");
							Vector3 Coords;
							//	g_Logger->Info("Set Peds At Coords.");
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 3595.39673f, -4893.727f, 115.838394f);
						});
					sub->AddOption<RegularOption>("Custom Yacht ", "Teleport to Custom Yacht", []
						{
							STREAMING::REQUEST_IPL("smboat");
							Vector3 Coords;
							Coords.x = -2045.8f; Coords.y = -1031.2f; Coords.z = 11.9f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -2045.8f, -1031.2f, 11.9f);

						});
					sub->AddOption<RegularOption>("Jewelry Store", "Teleport to Jewelry Store", []
						{
							STREAMING::REQUEST_IPL("jewel2fake");
							STREAMING::REQUEST_IPL("post_hiest_unload");
							STREAMING::REQUEST_IPL("bh1_16_refurb");
							Vector3 Coords;
							Coords.x = -630.4f; Coords.y = -236.7f; Coords.z = 40.0f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

						});
					sub->AddOption<RegularOption>("Cargoship", "Teleport to Cargoship", []
						{
							STREAMING::REQUEST_IPL("cargoship");
							Vector3 Coords;
							Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 9.3192f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

						});
					sub->AddOption<RegularOption>("Oneil Farm", "Teleport to Oneil Farm", []
						{
							STREAMING::REMOVE_IPL("farm_burnt");
							STREAMING::REMOVE_IPL("farm_burnt_props");
							STREAMING::REQUEST_IPL("farm");
							STREAMING::REQUEST_IPL("farm_props");
							STREAMING::REQUEST_IPL("farmint");
							STREAMING::REQUEST_IPL("farmint_cap");
							Vector3 Coords;
							Coords.x = 2441.2f; Coords.y = 4968.5f; Coords.z = 51.7f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

						});
					sub->AddOption<RegularOption>("Hospital ", "Teleport to Hospital", []
						{
							STREAMING::REQUEST_IPL("RC12B_HospitalInterior");
							STREAMING::REQUEST_IPL("RC12B_Destroyed");
							Vector3 Coords;
							Coords.x = 356.8f; Coords.y = -590.1f; Coords.z = 43.3f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
							;
						});
					sub->AddOption<RegularOption>("Morgue", "Teleport to Morgue", []
						{
							STREAMING::REQUEST_IPL("Coroner_Int_on");
							Vector3 Coords;
							Coords.x = 244.9f; Coords.y = -1374.7f; Coords.z = 39.5f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Landmarks", Landmarks, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("FBI", "Teleport to FBI", []
						{
							Vector3 Coords;
							Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Human Labs", "Teleport to Human Labs", []
						{
							Vector3 Coords;
							Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("MMI", "Teleport to MMI", []
						{
							Vector3 Coords;
							Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Waterfall", "Teleport to Waterfall", []
						{
							Vector3 Coords;
							Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Crane Top", "Teleport to Crane Top", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -119.8790f, -977.3570f, 304.2491f);
						});
					sub->AddOption<RegularOption>("Mount Chiliad", "Teleport to Mount Chilliad", []
						{
							Vector3 Coords;
							Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Maze Bank", "Teleport to Maze Bank", []
						{
							Vector3 Coords;
							Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Military Base", "Teleport to Military Base", []
						{
							Vector3 Coords;
							Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Zancudo Tower", "Teleport to Zancudo Tower", []
						{
							Vector3 Coords;
							Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Mask Shop", "Teleport to Mask Shop", []
						{
							Vector3 Coords;
							Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("LSC", "Teleport to LSC", []
						{
							Vector3 Coords;
							Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Misc", Misc_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Esp", nullptr, &PlayerESPBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Name Esp", nullptr, &PlayerNameESPBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Esp Box", nullptr, &ESPBox, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Aimbot", nullptr, &AimBot, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("No Gravity", nullptr, &NoGravityBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("No Collision", nullptr, &Collision, BoolDisplay::OnOff_Icon);


				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Protection", Protection_Main, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("DeSync Protection", nullptr, &DesyncProtection, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Kick Protection", nullptr, &KickProtec, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Anti CEO Kick", nullptr, &Protections::Anti_CEO_Kick, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Anti CEO Ban", nullptr, &Protections::Anti_CEO_Ban, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Anti Karma", nullptr, &Protections::g_Karma, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Block Crashes", nullptr, &Crash, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Block Force Apartment", nullptr, &apBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Infinite Loading", nullptr, &InfLoad, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Block Island", nullptr, &BlockCayo, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Freeze", nullptr, &Freeze, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Fire", nullptr, &FireBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Explosion", nullptr, &ExplosionBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Remove Weapon", nullptr, &WeaBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Give Weapon", nullptr, &WeaponBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Report", nullptr, &ReportBlock, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Log Script Events", nullptr, &g_LogScriptEvents, BoolDisplay::OnOff_Icon);
				});

			

			g_UiManager->AddSubmenu<RegularSubmenu>("Players", Online_P_List, [](RegularSubmenu* sub)
				{
					for (std::uint32_t i = 0; i < 32; ++i)
					{
						if (auto ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))
						{
							sub->AddOption<SubOption>(PLAYER::GET_PLAYER_NAME(i), nullptr, Selected_P_Menu, [=]
								{
									g_SelectedPlayer = i;
								});
						}
					}
				});


			g_UiManager->AddSubmenu<RegularSubmenu>(PLAYER::GET_PLAYER_NAME(g_SelectedPlayer), Selected_P_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Removals", nullptr, RemovalsP);
					sub->AddOption<SubOption>("Friendly", nullptr, FriendlyP);
					sub->AddOption<SubOption>("Griefing", nullptr, GriefingP);
					sub->AddOption<SubOption>("Teleport", nullptr, TeleportP);
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Teleport", TeleportP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Teleport To Player Vehicle", "Teleports Into Player Vehicle.", [] { PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), true);

					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), -1)); });


					sub->AddOption<RegularOption>("Teleport To Player", "Teleport To Player.", [] { Entity handle;
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
					PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) ? handle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) : handle = PLAYER::PLAYER_PED_ID();
					ENTITY::SET_ENTITY_COORDS(handle, coords.x, coords.y, coords.z, false, false, false, false);

						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Griefing", GriefingP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Remove All Weapons", "Removes all weapons from player.", [] {
						WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1);
						Log::Msg(" || Player has no weapons LMAO");
						});

					sub->AddOption<RegularOption>("Cage Player", "Trap player to cage.", [] {
						Vector3 PedCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
						OBJECT::CREATE_OBJECT(959275690, PedCoords.x, PedCoords.y, PedCoords.z - 1.f, true, false, false);
						Log::Msg(" || Too easy! :P");
						});
					sub->AddOption<RegularOption>("Tube Trap", "Trap player to tube.", [] {
						Vector3 remotePos = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
						Object obj = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY("stt_prop_stunt_tube_fn_01"), remotePos.x, remotePos.y, remotePos.z - 1.f, true, false, true);
						ENTITY::SET_ENTITY_ROTATION(obj, 0.0f, 90.0f, 0.0f, 0, true);
						});
					sub->AddOption<RegularOption>("Container Trap", "Trap in container", [] {
						Vector3 remotePos = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
						Object obj = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY("prop_container_05a"), remotePos.x, remotePos.y, remotePos.z - 2.f, true, false, true);
						ENTITY::SET_ENTITY_ROTATION(obj, 0.0f, 90.0f, 0.0f, 0, true);
						});

					sub->AddOption<RegularOption>("Explode", "Explode Player.", [] { 		Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
					FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 1000.f); });

					sub->AddOption<RegularOption>("Airstrike", "Booooooooom!", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					Ped playerPed = PLAYER::PLAYER_PED_ID();
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					Hash airStrike = GAMEPLAY::GET_HASH_KEY("WEAPON_AIRSTRIKE_ROCKET");
					WEAPON::REQUEST_WEAPON_ASSET(airStrike, 31, false);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(airStrike))
						WAIT(0);
					GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords.x, coords.y, coords.z + 50.f, coords.x, coords.y, coords.z, 250, 1, airStrike, playerPed, 1, 0, -1.0); });

					sub->AddOption<RegularOption>("CEO Kick Player", "Kick player from CEO.", [] {
						DWORD64 args[4] = { CEO_KICK/*Event code*/, g_SelectedPlayer, 0, 5 };
						hooks.trigger_script_event(1, args, 4, 1 << g_SelectedPlayer);
						Log::Msg(" || Player got CEO Kicked. Fix your menu please :)");
						});
					sub->AddOption<RegularOption>("CEO Ban Player", "Ban player from CEO.", [] {
						DWORD64 args[3] = { CEO_BAN/*Event code*/, g_SelectedPlayer, 1 };
						hooks.trigger_script_event(1, args, 3, 1 << g_SelectedPlayer);
						Log::Msg(" || Player got CEO Banned.");
						});

					sub->AddOption<RegularOption>("Kick From Vehicle", "Kicks Player Out Of A Vehicle.", [] { Ped playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					RequestControlOfEnt(playerPed);
					AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
					AI::CLEAR_PED_TASKS(playerPed);
					AI::CLEAR_PED_SECONDARY_TASK(playerPed); });

					sub->AddOption<RegularOption>("Delete Player Vehicle", "Deletes Players Vehicle.", [] { Ped playerPed = PLAYER::PLAYER_PED_ID();
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
					{
						Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(playerVeh);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(playerVeh))
						{
							if (ENTITY::DOES_ENTITY_EXIST(playerVeh))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playerVeh, 1, 1);
								VEHICLE::DELETE_VEHICLE(&playerVeh);
							}
						}
					}
						});
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Friendly", FriendlyP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Give All Weapons", nullptr, []
						{
							Hash NormalWeapons[]{ GAMEPLAY::GET_HASH_KEY("weapon_revolver_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_snspistol_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_smg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_pumpshotgun_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_assaultrifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_carbinerifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_specialcarbine_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_bullpuprifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_combatmg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_heavysniper_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_marksmanrifle_mk2"), 0xAF3696A1, 0x476BF155, 0xB62D1F670, 0xDFE37640, 0xC1B3C3D1, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, GAMEPLAY::GET_HASH_KEY("WEAPON_HATCHET"), GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN") };
							for (int i = 0; i < (sizeof(NormalWeapons) / 4); i++)
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), NormalWeapons[i], 9999, 1);
						});
					sub->AddOption<RegularOption>("Drop Armour", "Drop Armour.", [] { Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(1274757841, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });

					sub->AddOption<RegularOption>("Drop Parachute", "Drop Parachute.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(1735599485, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });


					sub->AddOption<RegularOption>("Drop Snacks", "Drop Snacks.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(483577702, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Removals", RemovalsP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Host Kick", "Host Kick Player.", [] {
						{

							if (g_SelectedPlayer != PLAYER::PLAYER_ID())
								NETWORK::NETWORK_SESSION_KICK_PLAYER(g_SelectedPlayer);
						}
						});
					sub->AddOption<RegularOption>(("Vehicle Crash"), nullptr, [] { vehcrash(); });
					sub->AddOption<RegularOption>("Model Crash", nullptr, []
						{
							Player playa = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
							STREAMING::REQUEST_MODEL(0x856cfb02);
							while (!STREAMING::HAS_MODEL_LOADED(0x856cfb02)) SYSTEM::WAIT(0);
							Vector3 fposition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playa, 0.0, 5.0, 0.0);
							PED::CREATE_PED(1, 0x856cfb02, fposition.x, fposition.y, fposition.z, ENTITY::GET_ENTITY_HEADING(playa), TRUE, TRUE);
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Settings", SubmenuSettings, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Header", nullptr, SubmenuSettingsHeader);
					sub->AddOption<SubOption>("Infobar", nullptr, SubmenuSettingsSubmenuBar);
					sub->AddOption<SubOption>("Options", nullptr, SubmenuSettingsOption);
					sub->AddOption<SubOption>("Footer", nullptr, SubmenuSettingsFooter);
					sub->AddOption<SubOption>("Description", nullptr, SubmenuSettingsDescription);
					sub->AddOption<SubOption>("Input", nullptr, SubmenuSettingsInput);
					sub->AddOption<SubOption>("Toggle Menu", nullptr, Bool_Menu);
					sub->AddOption<NumberOption<float>>("X Position", nullptr, &g_UiManager->m_PosX, 0.f, 1.f, 0.01f, 2);
					sub->AddOption<NumberOption<float>>("Y Position", nullptr, &g_UiManager->m_PosY, 0.f, 1.f, 0.01f, 2);
					sub->AddOption<NumberOption<float>>("Width", nullptr, &g_UiManager->m_Width, 0.01f, 1.f, 0.01f, 2);
					sub->AddOption<BoolOption<bool>>("Controller input", nullptr, &g_UiManager->m_Controllerinput, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Sounds", nullptr, &g_UiManager->m_Sounds, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("ImGui Menu", "Start ImGui Menu", &g_UiManager->m_ImGuiActive, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<std::atomic_bool>>("Log Window", nullptr, &g_Settings.m_LogWindow, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Log Script Events", nullptr, &g_LogScriptEvents, BoolDisplay::OnOff_Icon);

					sub->AddOption<RegularOption>("Unload", "Unload the menu.", [] {Mod_running = false; });
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Bool Option", Bool_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Toggle Rainbow Bool", nullptr, &g_UiManager->Toggle_RainbowBool, BoolDisplay::OnOff_Icon);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Infobar", SubmenuSettingsSubmenuBar, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_SubmenuBarHeight, 0.01f, 0.1f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", nullptr, &g_UiManager->m_SubmenuBarTextSize, 0.01f, 1.f, 0.01f, 2);

					sub->AddOption<NumberOption<std::uint8_t>>("Background R", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background G", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background B", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background A", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text R", nullptr, &g_UiManager->m_SubmenuBarTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text G", nullptr, &g_UiManager->m_SubmenuBarTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text B", nullptr, &g_UiManager->m_SubmenuBarTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text A", nullptr, &g_UiManager->m_SubmenuBarTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Options", SubmenuSettingsOption, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_OptionHeight, 0.01f, 0.1f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", nullptr, &g_UiManager->m_OptionTextSize, 0.01f, 1.f, 0.01f, 2);

					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background R", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background G", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background B", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background A", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background R", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background G", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background B", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background A", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));

					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text R", nullptr, &g_UiManager->m_OptionSelectedTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text G", nullptr, &g_UiManager->m_OptionSelectedTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text B", nullptr, &g_UiManager->m_OptionSelectedTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text A", nullptr, &g_UiManager->m_OptionSelectedTextColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text R", nullptr, &g_UiManager->m_OptionUnselectedTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text G", nullptr, &g_UiManager->m_OptionUnselectedTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text B", nullptr, &g_UiManager->m_OptionUnselectedTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text A", nullptr, &g_UiManager->m_OptionUnselectedTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Footer", SubmenuSettingsFooter, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_FooterHeight, 0.01f, 0.1f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Sprite Size", nullptr, &g_UiManager->m_FooterSpriteSize, 0.01f, 1.f, 0.001f, 3);

					sub->AddOption<NumberOption<std::uint8_t>>("Background R", nullptr, &g_UiManager->m_FooterBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background G", nullptr, &g_UiManager->m_FooterBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background B", nullptr, &g_UiManager->m_FooterBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background A", nullptr, &g_UiManager->m_FooterBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite R", nullptr, &g_UiManager->m_FooterSpriteColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite G", nullptr, &g_UiManager->m_FooterSpriteColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite B", nullptr, &g_UiManager->m_FooterSpriteColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite A", nullptr, &g_UiManager->m_FooterSpriteColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header", SubmenuSettingsHeader, [](RegularSubmenu* sub)
				{
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Type", nullptr, &Lists::HeaderTypesFrontend, &Lists::HeaderTypesPosition, true, []
						{
							g_UiManager->m_HeaderType = Lists::HeaderTypesBackend[Lists::HeaderTypesPosition];
						});

					switch (g_UiManager->m_HeaderType)
					{
					case HeaderType::Static:
						sub->AddOption<SubOption>("Background", nullptr, SubmenuSettingsHeaderStaticBackground);
						break;
					case HeaderType::Gradient:
						sub->AddOption<SubOption>("Gradient", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					case HeaderType::Game_YTD:
						sub->AddOption<SubOption>("Game YTD", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					case HeaderType::YTD:
						sub->AddOption<SubOption>("YTD", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					}

					sub->AddOption<SubOption>("Text", nullptr, SubmenuSettingsHeaderText);
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_HeaderHeight, 0.01f, 0.2f, 0.001f, 3);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Background", SubmenuSettingsHeaderStaticBackground, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<std::uint8_t>>("R", nullptr, &g_UiManager->m_HeaderBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G", nullptr, &g_UiManager->m_HeaderBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B", nullptr, &g_UiManager->m_HeaderBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A", nullptr, &g_UiManager->m_HeaderBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Gradient", SubmenuSettingsHeaderGradientBackground, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Transparent", nullptr, &g_UiManager->m_HeaderGradientTransparent, BoolDisplay::YesNo);
					sub->AddOption<BoolOption<bool>>("Flip", nullptr, &g_UiManager->m_HeaderGradientFlip, BoolDisplay::YesNo);

					sub->AddOption<NumberOption<std::uint8_t>>("R1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("R2", nullptr, &g_UiManager->m_HeaderGradientColorRight.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G2", nullptr, &g_UiManager->m_HeaderGradientColorRight.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B2", nullptr, &g_UiManager->m_HeaderGradientColorRight.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A2", nullptr, &g_UiManager->m_HeaderGradientColorRight.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Text", SubmenuSettingsHeaderText, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Enable Rainbow Title", nullptr, &g_UiManager->Rainbowmenu_titleBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Enable", nullptr, &g_UiManager->m_HeaderText, BoolDisplay::OnOff_Icon);
					sub->AddOption<NumberOption<float>>("Size", nullptr, &g_UiManager->m_HeaderTextSize, 0.1f, 2.f, 0.01f, 2);
					sub->AddOption<NumberOption<std::uint8_t>>("R", nullptr, &g_UiManager->m_HeaderTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G", nullptr, &g_UiManager->m_HeaderTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B", nullptr, &g_UiManager->m_HeaderTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A", nullptr, &g_UiManager->m_HeaderTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Description", SubmenuSettingsDescription, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Padding", "Padding before the description rect.", &g_UiManager->m_DescriptionHeightPadding, 0.01f, 1.f, 0.001f,
					3);
					sub->AddOption<NumberOption<float>>("Height", "Size of the description rect.", &g_UiManager->m_DescriptionHeight, 0.01f, 1.f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", "Size of the description text.", &g_UiManager->m_DescriptionTextSize, 0.1f, 2.f, 0.01f, 2);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Input", SubmenuSettingsInput, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<std::int32_t>>("Open Delay", nullptr, &g_UiManager->m_OpenDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Back Delay", nullptr, &g_UiManager->m_BackDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Enter Delay", nullptr, &g_UiManager->m_EnterDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Vertical Delay", nullptr, &g_UiManager->m_VerticalDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Horizontal Delay", nullptr, &g_UiManager->m_HorizontalDelay, 10, 1000, 10, 0);
				});

			//here is more test stuff you can look at
			/*g_UiManager->AddSubmenu<RegularSubmenu>(BIG_TRANSLATE("Demo_sub"), SubmenuTest, [](RegularSubmenu* sub)
		{
			sub->AddOption<RegularOption>(BIG_TRANSLATE("RegularOption_demo"), "A regular option.", []
			{
				g_Logger->Info("You pressed the test option");
			});

			static bool testBool1{};
			sub->AddOption<BoolOption<bool>>(BIG_TRANSLATE("BoolOnOff_demo"), nullptr, &testBool1, BoolDisplay::OnOff_Icon);
			static bool testBool2{};
			sub->AddOption<BoolOption<bool>>(BIG_TRANSLATE("BoolYesNo_demo"), nullptr, &testBool2, BoolDisplay::YesNo);

			static std::int32_t int32Test{ 69 };
			sub->AddOption<NumberOption<std::int32_t>>("Int32", nullptr, &int32Test, 0, 100);

			static std::int64_t int64Test{ 420 };
			sub->AddOption<NumberOption<std::int64_t>>("Int64", nullptr, &int64Test, 0, 1000, 10);

			static float floatTest{ 6.9f };
			sub->AddOption<NumberOption<float>>("Float", nullptr, &floatTest, 0.f, 10.f, 0.1f, 1);

			static std::vector<std::uint64_t> vector{ 1, 2, 3 };
			static std::size_t vectorPos{};

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Array", nullptr, &Lists::DemoList, &Lists::DemoListPos);
			sub->AddOption<ChooseOption<std::uint64_t, std::size_t>>("Vector", nullptr, &vector, &vectorPos);
		});*/

			WAIT(0);
		}
	}

	void ScriptMain() {
		srand(GetTickCount());
		main();
	}

	//ImgUi Menu
	void ScriptImGuiMain() {
		//ImGui Menu
		if (g_UiManager->m_Opened && g_UiManager->m_ImGuiActive)
		{
			g_Settings.m_LockMouse = true;

			ImGui::SetNextWindowSize(ImVec2(800, 550), ImGuiCond_FirstUseEver);
			ImGui::SetNextWindowPos(ImVec2(500, 500), ImGuiCond_FirstUseEver);
			if (ImGui::Begin("Throne GUI : " Mod_Menu_Name)) {

				ImGui::Checkbox("Throne GUI", &g_UiManager->m_ImGuiActive);

				if (ImGui::Button("Print Hello"))
					Log::Msg("Heeelo BROOOOOOOOOOOO");

				ImGui::End();
			}
		}
		else
			g_Settings.m_LockMouse = false;

		//sample
		if (ImGui::Begin("Throne Menu")) {
			ImGui::Text("Dobrodosli: %s", g_GameVariables->m_GameBuild);
			ImGui::End();
		}
	}
}
