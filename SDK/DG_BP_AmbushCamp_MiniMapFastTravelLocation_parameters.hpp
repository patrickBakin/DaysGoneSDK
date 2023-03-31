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

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UpdateFastTravelLocation
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_UpdateFastTravelLocation_Params
{
	bool                                               FastTravelAvailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.MapIconState
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_MapIconState_Params
{
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.CampCleared
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_CampCleared_Params
{
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UserConstructionScript
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_UserConstructionScript_Params
{
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ReceiveBeginPlay
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnMapTaken_Event_1
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnMapTaken_Event_1_Params
{
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnJobResetCalled_Event_1
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnJobResetCalled_Event_1_Params
{
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation
struct ABP_AmbushCamp_MiniMapFastTravelLocation_C_ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
