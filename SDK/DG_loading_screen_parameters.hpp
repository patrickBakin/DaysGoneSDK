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

// Function loading_screen.cin_main_menu_C.ReceiveBeginPlay
struct Acin_main_menu_C_ReceiveBeginPlay_Params
{
};

// Function loading_screen.cin_main_menu_C.ReceiveEndPlay
struct Acin_main_menu_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function loading_screen.cin_main_menu_C.ExecuteUbergraph_loading_screen
struct Acin_main_menu_C_ExecuteUbergraph_loading_screen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
