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

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GetText_1
struct UHUD_DebugLoaderBase_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Tick
struct UHUD_DebugLoaderBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Construct
struct UHUD_DebugLoaderBase_C_Construct_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Reset
struct UHUD_DebugLoaderBase_C_Reset_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GoToLast
struct UHUD_DebugLoaderBase_C_GoToLast_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.CirclePressed
struct UHUD_DebugLoaderBase_C_CirclePressed_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.XPressed
struct UHUD_DebugLoaderBase_C_XPressed_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.SetUpDefaults
struct UHUD_DebugLoaderBase_C_SetUpDefaults_Params
{
};

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.ExecuteUbergraph_HUD_DebugLoaderBase
struct UHUD_DebugLoaderBase_C_ExecuteUbergraph_HUD_DebugLoaderBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
