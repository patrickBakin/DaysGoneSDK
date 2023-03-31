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

// Function Pause_Controls.Pause_Controls_C.DLCCanOpenOptionsMenu
struct APause_Controls_C_DLCCanOpenOptionsMenu_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pause_Controls.Pause_Controls_C.ForceCloseWeaponWheel
struct APause_Controls_C_ForceCloseWeaponWheel_Params
{
};

// Function Pause_Controls.Pause_Controls_C.UserConstructionScript
struct APause_Controls_C_UserConstructionScript_Params
{
};

// Function Pause_Controls.Pause_Controls_C.InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222
struct APause_Controls_C_InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Pause_Controls.Pause_Controls_C.ReceiveBeginPlay
struct APause_Controls_C_ReceiveBeginPlay_Params
{
};

// Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputEnabled
struct APause_Controls_C_ReceiveActorOnInputEnabled_Params
{
};

// Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputDisabled
struct APause_Controls_C_ReceiveActorOnInputDisabled_Params
{
};

// Function Pause_Controls.Pause_Controls_C.ExecuteUbergraph_Pause_Controls
struct APause_Controls_C_ExecuteUbergraph_Pause_Controls_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
