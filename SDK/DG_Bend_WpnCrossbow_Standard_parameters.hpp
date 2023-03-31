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

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.DoIHaveIncendiaryBolts
struct ABend_WpnCrossbow_Standard_C_DoIHaveIncendiaryBolts_Params
{
	bool                                               HaveIncendiaryBolts;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.UserConstructionScript
struct ABend_WpnCrossbow_Standard_C_UserConstructionScript_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnFired
struct ABend_WpnCrossbow_Standard_C_OnFired_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnDrawStarted
struct ABend_WpnCrossbow_Standard_C_OnDrawStarted_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnClipLoaded
struct ABend_WpnCrossbow_Standard_C_OnClipLoaded_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnHolsterStarted
struct ABend_WpnCrossbow_Standard_C_OnHolsterStarted_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadStarted
struct ABend_WpnCrossbow_Standard_C_OnReloadStarted_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadFinished
struct ABend_WpnCrossbow_Standard_C_OnReloadFinished_Params
{
};

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.ExecuteUbergraph_Bend_WpnCrossbow_Standard
struct ABend_WpnCrossbow_Standard_C_ExecuteUbergraph_Bend_WpnCrossbow_Standard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
