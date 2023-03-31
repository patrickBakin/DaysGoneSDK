// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HasEverBeenSearched
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_SearchBody_Pickup_C::HasEverBeenSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HasEverBeenSearched");

	ABend_SearchBody_Pickup_C_HasEverBeenSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.IsMaxedOnSearchLoot
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_SearchBody_Pickup_C::IsMaxedOnSearchLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.IsMaxedOnSearchLoot");

	ABend_SearchBody_Pickup_C_IsMaxedOnSearchLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AttemptToSearchBodyFromAreaPickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                PlayerPositions                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_SearchBody_Pickup_C::AttemptToSearchBodyFromAreaPickup(struct FVector* PlayerPositions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AttemptToSearchBodyFromAreaPickup");

	ABend_SearchBody_Pickup_C_AttemptToSearchBodyFromAreaPickup_Params params;
	params.PlayerPositions = PlayerPositions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleTrophies
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::HandleTrophies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleTrophies");

	ABend_SearchBody_Pickup_C_HandleTrophies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::HandleNotify(class UInventoryItem* Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleNotify");

	ABend_SearchBody_Pickup_C_HandleNotify_Params params;
	params.Item = Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Non-TableDrops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::Non_TableDrops()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Non-TableDrops");

	ABend_SearchBody_Pickup_C_Non_TableDrops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetupSearchBody
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Anim_Sequence                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       AnimSequenceCrouched           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterClass>   Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SubClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachTo                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocket                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInventoryIDDetails> Non_Table_Drops                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumItemSpawns                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               PawnPointer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowPickups                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TrackInSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::SetupSearchBody(class UAnimSequenceBase* Anim_Sequence, class UAnimSequenceBase* AnimSequenceCrouched, TEnumAsByte<ECharacterClass> Class, const struct FName& SubClass, class USceneComponent* AttachTo, const struct FName& AttachSocket, float Delay, int NumItemSpawns, class ABendPawn* PawnPointer, bool AllowPickups, bool TrackInSaveGame, TArray<struct FInventoryIDDetails>* Non_Table_Drops)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetupSearchBody");

	ABend_SearchBody_Pickup_C_SetupSearchBody_Params params;
	params.Anim_Sequence = Anim_Sequence;
	params.AnimSequenceCrouched = AnimSequenceCrouched;
	params.Class = Class;
	params.SubClass = SubClass;
	params.AttachTo = AttachTo;
	params.AttachSocket = AttachSocket;
	params.Delay = Delay;
	params.NumItemSpawns = NumItemSpawns;
	params.PawnPointer = PawnPointer;
	params.AllowPickups = AllowPickups;
	params.TrackInSaveGame = TrackInSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Non_Table_Drops != nullptr)
		*Non_Table_Drops = params.Non_Table_Drops;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UserConstructionScript");

	ABend_SearchBody_Pickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Complete
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Complete");

	ABend_SearchBody_Pickup_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Failed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::Failed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.Failed");

	ABend_SearchBody_Pickup_C_Failed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandlePickupLogic
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::HandlePickupLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandlePickupLogic");

	ABend_SearchBody_Pickup_C_HandlePickupLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleFinishedPickupLogic
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::HandleFinishedPickupLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleFinishedPickupLogic");

	ABend_SearchBody_Pickup_C_HandleFinishedPickupLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleBeganInteract
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::HandleBeganInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HandleBeganInteract");

	ABend_SearchBody_Pickup_C_HandleBeganInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInputSucceeded
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::OnInputSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInputSucceeded");

	ABend_SearchBody_Pickup_C_OnInputSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.InitInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::InitInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.InitInteract");

	ABend_SearchBody_Pickup_C_InitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadLookAtIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::LoadLookAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadLookAtIndex");

	ABend_SearchBody_Pickup_C_LoadLookAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AsynchLoadLookDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void ABend_SearchBody_Pickup_C::AsynchLoadLookDone(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.AsynchLoadLookDone");

	ABend_SearchBody_Pickup_C_AsynchLoadLookDone_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LootingFinished
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::LootingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LootingFinished");

	ABend_SearchBody_Pickup_C_LootingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredAdvertiseRange
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::EnteredAdvertiseRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredAdvertiseRange");

	ABend_SearchBody_Pickup_C_EnteredAdvertiseRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LeftAdvertiseRange
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::LeftAdvertiseRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LeftAdvertiseRange");

	ABend_SearchBody_Pickup_C_LeftAdvertiseRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredInteractRange
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::EnteredInteractRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnteredInteractRange");

	ABend_SearchBody_Pickup_C_EnteredInteractRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInventoryModifiedDelegate_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_SearchBody_Pickup_C::OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnInventoryModifiedDelegate_Event_1");

	ABend_SearchBody_Pickup_C_OnInventoryModifiedDelegate_Event_1_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EventAnimPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::EventAnimPickup(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EventAnimPickup");

	ABend_SearchBody_Pickup_C_EventAnimPickup_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnbindAnimNotify
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::UnbindAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnbindAnimNotify");

	ABend_SearchBody_Pickup_C_UnbindAnimNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.BindAnimNotify
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::BindAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.BindAnimNotify");

	ABend_SearchBody_Pickup_C_BindAnimNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.CheckQueue
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::CheckQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.CheckQueue");

	ABend_SearchBody_Pickup_C_CheckQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePreSaveGameLoaded");

	ABend_SearchBody_Pickup_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceiveEndPlay");

	ABend_SearchBody_Pickup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnableOrDisableInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::EnableOrDisableInteraction(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.EnableOrDisableInteraction");

	ABend_SearchBody_Pickup_C_EnableOrDisableInteraction_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HideBody
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::HideBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.HideBody");

	ABend_SearchBody_Pickup_C_HideBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnhideBody
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::UnhideBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.UnhideBody");

	ABend_SearchBody_Pickup_C_UnhideBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetInteractionFinished
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InteractCompleted              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TurnOffIfOneUseInteract        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::SetInteractionFinished(bool* InteractCompleted, bool* TurnOffIfOneUseInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.SetInteractionFinished");

	ABend_SearchBody_Pickup_C_SetInteractionFinished_Params params;
	params.InteractCompleted = InteractCompleted;
	params.TurnOffIfOneUseInteract = TurnOffIfOneUseInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.PostSetup
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::PostSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.PostSetup");

	ABend_SearchBody_Pickup_C_PostSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnReturnedToPool_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::OnReturnedToPool_Event_1(class ABendAIController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnReturnedToPool_Event_1");

	ABend_SearchBody_Pickup_C_OnReturnedToPool_Event_1_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ForceInventoryModificationUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::ForceInventoryModificationUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ForceInventoryModificationUpdate");

	ABend_SearchBody_Pickup_C_ForceInventoryModificationUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ResetTheInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::ResetTheInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ResetTheInteraction");

	ABend_SearchBody_Pickup_C_ResetTheInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ReceivePostSaveGameLoaded");

	ABend_SearchBody_Pickup_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadMeshSwapLookAtIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::LoadMeshSwapLookAtIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.LoadMeshSwapLookAtIndex");

	ABend_SearchBody_Pickup_C_LoadMeshSwapLookAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ExecuteUbergraph_Bend_SearchBody_Pickup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_C::ExecuteUbergraph_Bend_SearchBody_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.ExecuteUbergraph_Bend_SearchBody_Pickup");

	ABend_SearchBody_Pickup_C_ExecuteUbergraph_Bend_SearchBody_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnPickup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_C::OnPickup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C.OnPickup__DelegateSignature");

	ABend_SearchBody_Pickup_C_OnPickup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
