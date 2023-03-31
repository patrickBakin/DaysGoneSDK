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

// Function DebugToggle_Controls.DebugToggle_Controls_C.UserConstructionScript
struct ADebugToggle_Controls_C_UserConstructionScript_Params
{
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202
struct ADebugToggle_Controls_C_InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveBeginPlay
struct ADebugToggle_Controls_C_ReceiveBeginPlay_Params
{
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputEnabled
struct ADebugToggle_Controls_C_ReceiveActorOnInputEnabled_Params
{
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputDisabled
struct ADebugToggle_Controls_C_ReceiveActorOnInputDisabled_Params
{
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveTick
struct ADebugToggle_Controls_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugToggle_Controls.DebugToggle_Controls_C.ExecuteUbergraph_DebugToggle_Controls
struct ADebugToggle_Controls_C_ExecuteUbergraph_DebugToggle_Controls_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
