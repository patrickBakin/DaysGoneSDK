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

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HasEverBeenSearched
struct ABend_SearchBody_Pickup_C_HasEverBeenSearched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.IsMaxedOnSearchLoot
struct ABend_SearchBody_Pickup_C_IsMaxedOnSearchLoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AttemptToSearchBodyFromAreaPickup
struct ABend_SearchBody_Pickup_C_AttemptToSearchBodyFromAreaPickup_Params
{
	struct FVector*                                    PlayerPositions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleTrophies
struct ABend_SearchBody_Pickup_C_HandleTrophies_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleNotify
struct ABend_SearchBody_Pickup_C_HandleNotify_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Non-TableDrops
struct ABend_SearchBody_Pickup_C_Non_TableDrops_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetupSearchBody
struct ABend_SearchBody_Pickup_C_SetupSearchBody_Params
{
	class UAnimSequenceBase*                           Anim_Sequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimSequenceCrouched;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterClass>                       Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SubClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachTo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryIDDetails>                 Non_Table_Drops;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumItemSpawns;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   PawnPointer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPickups;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TrackInSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UserConstructionScript
struct ABend_SearchBody_Pickup_C_UserConstructionScript_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Complete
struct ABend_SearchBody_Pickup_C_Complete_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Failed
struct ABend_SearchBody_Pickup_C_Failed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandlePickupLogic
struct ABend_SearchBody_Pickup_C_HandlePickupLogic_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleFinishedPickupLogic
struct ABend_SearchBody_Pickup_C_HandleFinishedPickupLogic_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleBeganInteract
struct ABend_SearchBody_Pickup_C_HandleBeganInteract_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInputSucceeded
struct ABend_SearchBody_Pickup_C_OnInputSucceeded_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.InitInteract
struct ABend_SearchBody_Pickup_C_InitInteract_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadLookAtIndex
struct ABend_SearchBody_Pickup_C_LoadLookAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AsynchLoadLookDone
struct ABend_SearchBody_Pickup_C_AsynchLoadLookDone_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LootingFinished
struct ABend_SearchBody_Pickup_C_LootingFinished_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredAdvertiseRange
struct ABend_SearchBody_Pickup_C_EnteredAdvertiseRange_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LeftAdvertiseRange
struct ABend_SearchBody_Pickup_C_LeftAdvertiseRange_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredInteractRange
struct ABend_SearchBody_Pickup_C_EnteredInteractRange_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInventoryModifiedDelegate_Event_1
struct ABend_SearchBody_Pickup_C_OnInventoryModifiedDelegate_Event_1_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EventAnimPickup
struct ABend_SearchBody_Pickup_C_EventAnimPickup_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotify;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnbindAnimNotify
struct ABend_SearchBody_Pickup_C_UnbindAnimNotify_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.BindAnimNotify
struct ABend_SearchBody_Pickup_C_BindAnimNotify_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.CheckQueue
struct ABend_SearchBody_Pickup_C_CheckQueue_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePreSaveGameLoaded
struct ABend_SearchBody_Pickup_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceiveEndPlay
struct ABend_SearchBody_Pickup_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnableOrDisableInteraction
struct ABend_SearchBody_Pickup_C_EnableOrDisableInteraction_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HideBody
struct ABend_SearchBody_Pickup_C_HideBody_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnhideBody
struct ABend_SearchBody_Pickup_C_UnhideBody_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetInteractionFinished
struct ABend_SearchBody_Pickup_C_SetInteractionFinished_Params
{
	bool*                                              InteractCompleted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TurnOffIfOneUseInteract;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.PostSetup
struct ABend_SearchBody_Pickup_C_PostSetup_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnReturnedToPool_Event_1
struct ABend_SearchBody_Pickup_C_OnReturnedToPool_Event_1_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ForceInventoryModificationUpdate
struct ABend_SearchBody_Pickup_C_ForceInventoryModificationUpdate_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ResetTheInteraction
struct ABend_SearchBody_Pickup_C_ResetTheInteraction_Params
{
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePostSaveGameLoaded
struct ABend_SearchBody_Pickup_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadMeshSwapLookAtIndex
struct ABend_SearchBody_Pickup_C_LoadMeshSwapLookAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ExecuteUbergraph_Bend_SearchBody_Pickup
struct ABend_SearchBody_Pickup_C_ExecuteUbergraph_Bend_SearchBody_Pickup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnPickup__DelegateSignature
struct ABend_SearchBody_Pickup_C_OnPickup__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
