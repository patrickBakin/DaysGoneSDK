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

// Function BP_WaypointWidget.BP_WaypointWidget_C.Configure
struct ABP_WaypointWidget_C_Configure_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaypointWidget.BP_WaypointWidget_C.SetMarkerTexture
struct ABP_WaypointWidget_C_SetMarkerTexture_Params
{
	class UTexture2D*                                  InTex;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaypointWidget.BP_WaypointWidget_C.UserConstructionScript
struct ABP_WaypointWidget_C_UserConstructionScript_Params
{
};

// Function BP_WaypointWidget.BP_WaypointWidget_C.ReceiveBeginPlay
struct ABP_WaypointWidget_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaypointWidget.BP_WaypointWidget_C.OnDistanceChanged
struct ABP_WaypointWidget_C_OnDistanceChanged_Params
{
	struct FText*                                      DistanceText;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_WaypointWidget.BP_WaypointWidget_C.ExecuteUbergraph_BP_WaypointWidget
struct ABP_WaypointWidget_C_ExecuteUbergraph_BP_WaypointWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
