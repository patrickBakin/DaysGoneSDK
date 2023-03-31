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

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Scale
struct UGrenadeThreatIndicator_C_Scale_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Remove
struct UGrenadeThreatIndicator_C_Remove_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetVisible
struct UGrenadeThreatIndicator_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.UpdateScreenPosition
struct UGrenadeThreatIndicator_C_UpdateScreenPosition_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Init
struct UGrenadeThreatIndicator_C_Init_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetWarning State
struct UGrenadeThreatIndicator_C_SetWarning_State_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Construct
struct UGrenadeThreatIndicator_C_Construct_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Tick
struct UGrenadeThreatIndicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.OnPlayerThrew
struct UGrenadeThreatIndicator_C_OnPlayerThrew_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.ExecuteUbergraph_GrenadeThreatIndicator
struct UGrenadeThreatIndicator_C_ExecuteUbergraph_GrenadeThreatIndicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.PlayerThrew__DelegateSignature
struct UGrenadeThreatIndicator_C_PlayerThrew__DelegateSignature_Params
{
};

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Initialized__DelegateSignature
struct UGrenadeThreatIndicator_C_Initialized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
