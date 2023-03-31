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

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowFuelCondition
struct ABP_AmbientEventBase_C_LowFuelCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowAmmoCondition
struct ABP_AmbientEventBase_C_LowAmmoCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetActorWorldLocations_AmbientEventBase
struct ABP_AmbientEventBase_C_GetActorWorldLocations_AmbientEventBase_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CentralWorldLocationAndRadius
struct ABP_AmbientEventBase_C_CentralWorldLocationAndRadius_Params
{
	TArray<struct FVector>                             WorldLocations;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReturnWorldLocationArrayOfActors
struct ABP_AmbientEventBase_C_ReturnWorldLocationArrayOfActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             WorldLocations;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToMarker
struct ABP_AmbientEventBase_C_MoveMarkerIconToMarker_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToSelf
struct ABP_AmbientEventBase_C_MoveMarkerIconToSelf_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetNextTrackingArea
struct ABP_AmbientEventBase_C_GetNextTrackingArea_Params
{
	struct FName                                       CurrentArea;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSection;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerToTrackingArea
struct ABP_AmbientEventBase_C_MoveMarkerToTrackingArea_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MovedMarker;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CalculateSuggestedMarkerLocation
struct ABP_AmbientEventBase_C_CalculateSuggestedMarkerLocation_Params
{
	TArray<struct FVector>                             AdditionalWorldLocations;                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationAndRadius
struct ABP_AmbientEventBase_C_AverageWorldLocationAndRadius_Params
{
	TArray<struct FVector>                             WorldLocations;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationOfSpawnsAndPOIs
struct ABP_AmbientEventBase_C_AverageWorldLocationOfSpawnsAndPOIs_Params
{
	TArray<class AAmbientSpawnLocation_C*>             AmbientSpawnLocations;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ABendPOI*>                            BendPOIs;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.HideItems
struct ABP_AmbientEventBase_C_HideItems_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DetermineItemType
struct ABP_AmbientEventBase_C_DetermineItemType_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddVectorToGameDatabase
struct ABP_AmbientEventBase_C_AddVectorToGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetVectorFromGameDatabase
struct ABP_AmbientEventBase_C_GetVectorFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VectorPresent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteVectorFromGameDatabase
struct ABP_AmbientEventBase_C_DeleteVectorFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VectorPresent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               VectorDeleted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddStringToGameDatabase
struct ABP_AmbientEventBase_C_AddStringToGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetStringFromGameDatabase
struct ABP_AmbientEventBase_C_GetStringFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StringPresent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteStringFromGameDatabase
struct ABP_AmbientEventBase_C_DeleteStringFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StringPresent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               StringDeleted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddFloatToGameDatabase
struct ABP_AmbientEventBase_C_AddFloatToGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetFloatFromGameDatabase
struct ABP_AmbientEventBase_C_GetFloatFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FloatPresent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteFloatFromGameDatabase
struct ABP_AmbientEventBase_C_DeleteFloatFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FloatPresent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FloatDeleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CompleteAmbientEvent
struct ABP_AmbientEventBase_C_CompleteAmbientEvent_Params
{
	TEnumAsByte<EAmbientEventCompletionStatus>         CompletionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddIntToGameDatabase
struct ABP_AmbientEventBase_C_AddIntToGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetIntFromGameDatabase
struct ABP_AmbientEventBase_C_GetIntFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IntPresent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteIntFromGameDatabase
struct ABP_AmbientEventBase_C_DeleteIntFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IntPresent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IntDeleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddBoolToGameDatabase
struct ABP_AmbientEventBase_C_AddBoolToGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetBoolFromGameDatabase
struct ABP_AmbientEventBase_C_GetBoolFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolPresent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteBoolFromGameDatabase
struct ABP_AmbientEventBase_C_DeleteBoolFromGameDatabase_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameDatabaseCategory>                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolPresent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolDeleted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GenerateGameDatabaseKey
struct ABP_AmbientEventBase_C_GenerateGameDatabaseKey_Params
{
	struct FString                                     KeySuffix;                                                // (Parm, ZeroConstructor)
	struct FName                                       DesignDBKey;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.UserConstructionScript
struct ABP_AmbientEventBase_C_UserConstructionScript_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventRunning
struct ABP_AmbientEventBase_C_OnEventRunning_Params
{
	class ABendAmbientEventMarker*                     EventMarker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventReRunning
struct ABP_AmbientEventBase_C_OnEventReRunning_Params
{
	class ABendAmbientEventMarker*                     EventMarker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventUnloading
struct ABP_AmbientEventBase_C_OnEventUnloading_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventComplete
struct ABP_AmbientEventBase_C_OnEventComplete_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReceiveBeginPlay
struct ABP_AmbientEventBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_ItemEvent
struct ABP_AmbientEventBase_C_Running_ItemEvent_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_ItemEvent
struct ABP_AmbientEventBase_C_ReRunning_ItemEvent_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Unloading_ItemEvent
struct ABP_AmbientEventBase_C_Unloading_ItemEvent_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_ItemEvent
struct ABP_AmbientEventBase_C_Complete_ItemEvent_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnPlayerDied
struct ABP_AmbientEventBase_C_OnPlayerDied_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.SaveGameDatabaseVariables_AmbientEventBase
struct ABP_AmbientEventBase_C_SaveGameDatabaseVariables_AmbientEventBase_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.BindEventsForTracking
struct ABP_AmbientEventBase_C_BindEventsForTracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.TrackingSectionCompleted
struct ABP_AmbientEventBase_C_TrackingSectionCompleted_Params
{
	struct FName                                       SectionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature
struct ABP_AmbientEventBase_C_BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.InitializeTrackingMarkers
struct ABP_AmbientEventBase_C_InitializeTrackingMarkers_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_Tracking
struct ABP_AmbientEventBase_C_Running_Tracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_Tracking
struct ABP_AmbientEventBase_C_ReRunning_Tracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_Tracking
struct ABP_AmbientEventBase_C_Complete_Tracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.StartedTracking
struct ABP_AmbientEventBase_C_StartedTracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.FinishedTracking
struct ABP_AmbientEventBase_C_FinishedTracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.EndTracking
struct ABP_AmbientEventBase_C_EndTracking_Params
{
};

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ExecuteUbergraph_BP_AmbientEventBase
struct ABP_AmbientEventBase_C_ExecuteUbergraph_BP_AmbientEventBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
