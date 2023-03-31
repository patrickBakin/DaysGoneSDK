#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cin_main_menu.cin_main_menu_C.SetHeroBike
struct Acin_main_menu_C_SetHeroBike_Params
{
	class UBendSavePlayerProfile*                      Save_Data;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function cin_main_menu.cin_main_menu_C.ReceiveBeginPlay
struct Acin_main_menu_C_ReceiveBeginPlay_Params
{
};

// Function cin_main_menu.cin_main_menu_C.OptionSelected
struct Acin_main_menu_C_OptionSelected_Params
{
};

// Function cin_main_menu.cin_main_menu_C.DeveloperLoad
struct Acin_main_menu_C_DeveloperLoad_Params
{
};

// Function cin_main_menu.cin_main_menu_C.UnlockFullMapNav
struct Acin_main_menu_C_UnlockFullMapNav_Params
{
};

// Function cin_main_menu.cin_main_menu_C.NewGameLoad
struct Acin_main_menu_C_NewGameLoad_Params
{
};

// Function cin_main_menu.cin_main_menu_C.UnlockNewGameMap
struct Acin_main_menu_C_UnlockNewGameMap_Params
{
};

// Function cin_main_menu.cin_main_menu_C.OnFadeFromBlackStart_MM_Event_1
struct Acin_main_menu_C_OnFadeFromBlackStart_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function cin_main_menu.cin_main_menu_C.FinishedLoading
struct Acin_main_menu_C_FinishedLoading_Params
{
};

// Function cin_main_menu.cin_main_menu_C.MainMenuMusicStop
struct Acin_main_menu_C_MainMenuMusicStop_Params
{
};

// Function cin_main_menu.cin_main_menu_C.MainMenuMusicStart
struct Acin_main_menu_C_MainMenuMusicStart_Params
{
};

// Function cin_main_menu.cin_main_menu_C.OnDisplayCalibrationClosed
struct Acin_main_menu_C_OnDisplayCalibrationClosed_Params
{
};

// Function cin_main_menu.cin_main_menu_C.ExecuteUbergraph_cin_main_menu
struct Acin_main_menu_C_ExecuteUbergraph_cin_main_menu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
