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

// Function BP_Storm_Manager.BP_Storm_Manager_C.HandleStormEvents
struct ABP_Storm_Manager_C_HandleStormEvents_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.SpawnAmbientStorm
struct ABP_Storm_Manager_C_SpawnAmbientStorm_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.AmbientStormManager
struct ABP_Storm_Manager_C_AmbientStormManager_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.UpdateManager
struct ABP_Storm_Manager_C_UpdateManager_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.InventoryStormsAndTargets
struct ABP_Storm_Manager_C_InventoryStormsAndTargets_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.UserConstructionScript
struct ABP_Storm_Manager_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveTick
struct ABP_Storm_Manager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.Editor Tick
struct ABP_Storm_Manager_C_Editor_Tick_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.Spawn Storm
struct ABP_Storm_Manager_C_Spawn_Storm_Params
{
	class UClass*                                      Storm_Type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Storm_Formed_Position;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Storm_Direction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Lifetime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Formation___Fade_Rate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Spawn_Distance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Storm_Forms_Instantly;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Storm_Never_Ends;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ambiently_Spawned;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.DisableStormEvents
struct ABP_Storm_Manager_C_DisableStormEvents_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveBeginPlay
struct ABP_Storm_Manager_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm_Manager.BP_Storm_Manager_C.ExecuteUbergraph_BP_Storm_Manager
struct ABP_Storm_Manager_C_ExecuteUbergraph_BP_Storm_Manager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
