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

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.MapIconState
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_MapIconState_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.UserConstructionScript
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ReceiveBeginPlay
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnDiscovered_BunkerData
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnDiscovered_BunkerData_Params
{
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnJobResetCalled_Event_1
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnJobResetCalled_Event_1_Params
{
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor
struct ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
