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

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAnyAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedsAmmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::DoesPlayerNeedAnyAmmo(bool* NeedsAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAnyAmmo");

	ABP_BikeRepair_C_DoesPlayerNeedAnyAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsAmmo != nullptr)
		*NeedsAmmo = params.NeedsAmmo;
}


// Function BP_BikeRepair.BP_BikeRepair_C.FillPlayersAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::FillPlayersAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.FillPlayersAmmo");

	ABP_BikeRepair_C_FillPlayersAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.CheckIfSecondaryInteractAnchorIsValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::CheckIfSecondaryInteractAnchorIsValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.CheckIfSecondaryInteractAnchorIsValid");

	ABP_BikeRepair_C_CheckIfSecondaryInteractAnchorIsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAmmoFromBike
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedsAmmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::DoesPlayerNeedAmmoFromBike(bool* NeedsAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAmmoFromBike");

	ABP_BikeRepair_C_DoesPlayerNeedAmmoFromBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsAmmo != nullptr)
		*NeedsAmmo = params.NeedsAmmo;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetScrapRepairRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::SetScrapRepairRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetScrapRepairRate");

	ABP_BikeRepair_C_SetScrapRepairRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.GetAmmoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBendWidgetComponent*    AmmoWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::GetAmmoWidget(class UBendWidgetComponent** AmmoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.GetAmmoWidget");

	ABP_BikeRepair_C_GetAmmoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoWidget != nullptr)
		*AmmoWidget = params.AmmoWidget;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmoHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemTagSlot   AmmoSlotRef                    (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryItemTagSlot   NewParam                       (Parm, OutParm)

void ABP_BikeRepair_C::SetBikeAmmoHelper(const struct FInventoryItemTagSlot& AmmoSlotRef, int Count, struct FInventoryItemTagSlot* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmoHelper");

	ABP_BikeRepair_C_SetBikeAmmoHelper_Params params;
	params.AmmoSlotRef = AmmoSlotRef;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_BikeRepair.BP_BikeRepair_C.GetBikeAmmoCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoTag                        (Parm)
// int                            RemainingAmmo                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::GetBikeAmmoCount(const struct FGameplayTag& AmmoTag, int* RemainingAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.GetBikeAmmoCount");

	ABP_BikeRepair_C_GetBikeAmmoCount_Params params;
	params.AmmoTag = AmmoTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingAmmo != nullptr)
		*RemainingAmmo = params.RemainingAmmo;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoToSet                      (Parm)
// int                            AmmoCount                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::SetBikeAmmo(const struct FGameplayTag& AmmoToSet, int AmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmo");

	ABP_BikeRepair_C_SetBikeAmmo_Params params;
	params.AmmoToSet = AmmoToSet;
	params.AmmoCount = AmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DisplayAmmoNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             WeaponRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::DisplayAmmoNotification(class ABendWeapon* WeaponRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DisplayAmmoNotification");

	ABP_BikeRepair_C_DisplayAmmoNotification_Params params;
	params.WeaponRef = WeaponRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetAmmoDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoTag                        (Parm)

void ABP_BikeRepair_C::SetAmmoDefaults(const struct FGameplayTag& AmmoTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetAmmoDefaults");

	ABP_BikeRepair_C_SetAmmoDefaults_Params params;
	params.AmmoTag = AmmoTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.CanTakeAllAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoTag                        (Parm)
// bool                           HasMoreAmmo                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::CanTakeAllAmmo(const struct FGameplayTag& AmmoTag, bool* HasMoreAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.CanTakeAllAmmo");

	ABP_BikeRepair_C_CanTakeAllAmmo_Params params;
	params.AmmoTag = AmmoTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMoreAmmo != nullptr)
		*HasMoreAmmo = params.HasMoreAmmo;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DoesBikeHaveAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoTag                        (Parm)
// bool                           HasAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::DoesBikeHaveAmmo(const struct FGameplayTag& AmmoTag, bool* HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesBikeHaveAmmo");

	ABP_BikeRepair_C_DoesBikeHaveAmmo_Params params;
	params.AmmoTag = AmmoTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAmmo != nullptr)
		*HasAmmo = params.HasAmmo;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetCurrentAmmoCap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::SetCurrentAmmoCap(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetCurrentAmmoCap");

	ABP_BikeRepair_C_SetCurrentAmmoCap_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary1AmmoType
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::DoesPlayerNeedPrimary1AmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary1AmmoType");

	ABP_BikeRepair_C_DoesPlayerNeedPrimary1AmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary0AmmoType
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::DoesPlayerNeedPrimary0AmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary0AmmoType");

	ABP_BikeRepair_C_DoesPlayerNeedPrimary0AmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.GiveThePlayerAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AmmoTag                        (Parm)
// int                            weaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::GiveThePlayerAmmo(const struct FGameplayTag& AmmoTag, int weaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.GiveThePlayerAmmo");

	ABP_BikeRepair_C_GiveThePlayerAmmo_Params params;
	params.AmmoTag = AmmoTag;
	params.weaponSlot = weaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.GetCurrentWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::GetCurrentWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.GetCurrentWeapons");

	ABP_BikeRepair_C_GetCurrentWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedSecondaryAmmoType
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::DoesPlayerNeedSecondaryAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedSecondaryAmmoType");

	ABP_BikeRepair_C_DoesPlayerNeedSecondaryAmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.CanDoSecondaryInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::CanDoSecondaryInteract(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.CanDoSecondaryInteract");

	ABP_BikeRepair_C_CanDoSecondaryInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BP_BikeRepair.BP_BikeRepair_C.SetAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::SetAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.SetAnimation");

	ABP_BikeRepair_C_SetAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.PlayEndingVO
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::PlayEndingVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.PlayEndingVO");

	ABP_BikeRepair_C_PlayEndingVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Repair Bike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ScrapFinish                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::Repair_Bike(bool ScrapFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Repair Bike");

	ABP_BikeRepair_C_Repair_Bike_Params params;
	params.ScrapFinish = ScrapFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.UserConstructionScript");

	ABP_BikeRepair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_226
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_BikeRepair_C::InpActEvt_Interact4_UniqueObjectNameForCooking_226(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_226");

	ABP_BikeRepair_C_InpActEvt_Interact4_UniqueObjectNameForCooking_226_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_225
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_BikeRepair_C::InpActEvt_Interact4_UniqueObjectNameForCooking_225(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_225");

	ABP_BikeRepair_C_InpActEvt_Interact4_UniqueObjectNameForCooking_225_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.CheckAmmoInteraction
// (Event, Public, BlueprintEvent)

void ABP_BikeRepair_C::CheckAmmoInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.CheckAmmoInteraction");

	ABP_BikeRepair_C_CheckAmmoInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InteractOnBegin
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::InteractOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InteractOnBegin");

	ABP_BikeRepair_C_InteractOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InteractOnEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::InteractOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InteractOnEnd");

	ABP_BikeRepair_C_InteractOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InputSlateInteractEnd_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateInputInteract*     InputInteract                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::InputSlateInteractEnd_Copy(class USlateInputInteract* InputInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InputSlateInteractEnd_Copy");

	ABP_BikeRepair_C_InputSlateInteractEnd_Copy_Params params;
	params.InputInteract = InputInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.RecheckAmmoStocks
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::RecheckAmmoStocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.RecheckAmmoStocks");

	ABP_BikeRepair_C_RecheckAmmoStocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimIn
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::Complete_AnimIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimIn");

	ABP_BikeRepair_C_Complete_AnimIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::Failed_AnimIn(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimIn");

	ABP_BikeRepair_C_Failed_AnimIn_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::Failed_AnimLoop(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimLoop");

	ABP_BikeRepair_C_Failed_AnimLoop_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimOut
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::Complete_AnimOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimOut");

	ABP_BikeRepair_C_Complete_AnimOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::Failed_AnimOut(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimOut");

	ABP_BikeRepair_C_Failed_AnimOut_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BikeRepair_C::BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BikeRepair_C_BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BikeRepair_C::BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BikeRepair_C_BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.UpdateInteractDetails
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::UpdateInteractDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.UpdateInteractDetails");

	ABP_BikeRepair_C_UpdateInteractDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InputSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::InputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InputSuccess");

	ABP_BikeRepair_C_InputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InputFailed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::InputFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InputFailed");

	ABP_BikeRepair_C_InputFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.UpdateCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TurnOn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::UpdateCollision(bool* TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.UpdateCollision");

	ABP_BikeRepair_C_UpdateCollision_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BikeRepair_C_BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BikeRepair_C_BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.ReceiveTick");

	ABP_BikeRepair_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.InputStartedPress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::InputStartedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.InputStartedPress");

	ABP_BikeRepair_C_InputStartedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.OnScrapRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           RemovedCount                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::OnScrapRemoved(int* RemovedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.OnScrapRemoved");

	ABP_BikeRepair_C_OnScrapRemoved_Params params;
	params.RemovedCount = RemovedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.OnRepairProgressChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         RepairProgress                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::OnRepairProgressChanged(float* RepairProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.OnRepairProgressChanged");

	ABP_BikeRepair_C_OnRepairProgressChanged_Params params;
	params.RepairProgress = RepairProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.OnBikeRepairBeginEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsRepairing                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::OnBikeRepairBeginEnd(bool* IsRepairing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.OnBikeRepairBeginEnd");

	ABP_BikeRepair_C_OnBikeRepairBeginEnd_Params params;
	params.IsRepairing = IsRepairing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.StopRepairSound
// (BlueprintCallable, BlueprintEvent)

void ABP_BikeRepair_C::StopRepairSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.StopRepairSound");

	ABP_BikeRepair_C_StopRepairSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.OnVehicleKnockedOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::OnVehicleKnockedOver(class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.OnVehicleKnockedOver");

	ABP_BikeRepair_C_OnVehicleKnockedOver_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeRepair.BP_BikeRepair_C.ExecuteUbergraph_BP_BikeRepair
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeRepair_C::ExecuteUbergraph_BP_BikeRepair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeRepair.BP_BikeRepair_C.ExecuteUbergraph_BP_BikeRepair");

	ABP_BikeRepair_C_ExecuteUbergraph_BP_BikeRepair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
