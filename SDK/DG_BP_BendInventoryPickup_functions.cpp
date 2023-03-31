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

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.LastCheckWasFullOnObject
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BendInventoryPickup_C::LastCheckWasFullOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.LastCheckWasFullOnObject");

	ABP_BendInventoryPickup_C_LastCheckWasFullOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Get Comparison Shown By Weapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    Weapon_Item                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Comparison_               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::Get_Comparison_Shown_By_Weapon(class UInventoryWeaponItem* Weapon_Item, bool* Show_Comparison_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Get Comparison Shown By Weapon");

	ABP_BendInventoryPickup_C_Get_Comparison_Shown_By_Weapon_Params params;
	params.Weapon_Item = Weapon_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show_Comparison_ != nullptr)
		*Show_Comparison_ = params.Show_Comparison_;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetAdvertisePosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BendInventoryPickup_C::SetAdvertisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetAdvertisePosition");

	ABP_BendInventoryPickup_C_SetAdvertisePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.AttemptTakeItemFromAreaPickup
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BendInventoryPickup_C::AttemptTakeItemFromAreaPickup(struct FVector* PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.AttemptTakeItemFromAreaPickup");

	ABP_BendInventoryPickup_C_AttemptTakeItemFromAreaPickup_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.IsWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponType>       WeaponType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::IsWeapon(bool* IsWeapon, TEnumAsByte<EWeaponType>* WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.IsWeapon");

	ABP_BendInventoryPickup_C_IsWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
	if (WeaponType != nullptr)
		*WeaponType = params.WeaponType;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetUpAnimOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseAnchor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Anchor                         (Parm, IsPlainOldData)
// struct FName                   ref                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InteractRangeOverride          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartEnabled_                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SetUpAnimOverride(class UAnimSequenceBase* Animation, bool UseAnchor, const struct FTransform& Anchor, const struct FName& ref, bool InteractRangeOverride, bool StartEnabled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetUpAnimOverride");

	ABP_BendInventoryPickup_C_SetUpAnimOverride_Params params;
	params.Animation = Animation;
	params.UseAnchor = UseAnchor;
	params.Anchor = Anchor;
	params.ref = ref;
	params.InteractRangeOverride = InteractRangeOverride;
	params.StartEnabled_ = StartEnabled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::PlayPickupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupAnimation");

	ABP_BendInventoryPickup_C_PlayPickupAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UserConstructionScript");

	ABP_BendInventoryPickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complete
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complete");

	ABP_BendInventoryPickup_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Failed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::Failed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Failed");

	ABP_BendInventoryPickup_C_Failed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.EventAnimPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::EventAnimPickup(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.EventAnimPickup");

	ABP_BendInventoryPickup_C_EventAnimPickup_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPickupAccepted
// (Event, Protected, BlueprintEvent)

void ABP_BendInventoryPickup_C::OnPickupAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPickupAccepted");

	ABP_BendInventoryPickup_C_OnPickupAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SlateInputInteractEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateInputInteract*     InputInteract                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SlateInputInteractEnd(class USlateInputInteract* InputInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SlateInputInteractEnd");

	ABP_BendInventoryPickup_C_SlateInputInteractEnd_Params params;
	params.InputInteract = InputInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnNotificationTextureLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D**             Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::OnNotificationTextureLoaded(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnNotificationTextureLoaded");

	ABP_BendInventoryPickup_C_OnNotificationTextureLoaded_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForcePickup
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::ForcePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForcePickup");

	ABP_BendInventoryPickup_C_ForcePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceiveMoveCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceiveMoveCompleted_Event_1");

	ABP_BendInventoryPickup_C_ReceiveMoveCompleted_Event_1_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Pre_InputStartPressTemp
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::Pre_InputStartPressTemp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Pre_InputStartPressTemp");

	ABP_BendInventoryPickup_C_Pre_InputStartPressTemp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DoAutoNav
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::DoAutoNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DoAutoNav");

	ABP_BendInventoryPickup_C_DoAutoNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.StartTheInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::StartTheInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.StartTheInteraction");

	ABP_BendInventoryPickup_C_StartTheInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::PlayPickupEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupEffects");

	ABP_BendInventoryPickup_C_PlayPickupEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPerformActionMid
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FromAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AlreadyDidPickup               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::OnPerformActionMid(bool* FromAnim, bool* AlreadyDidPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPerformActionMid");

	ABP_BendInventoryPickup_C_OnPerformActionMid_Params params;
	params.FromAnim = FromAnim;
	params.AlreadyDidPickup = AlreadyDidPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::PlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayAnimation");

	ABP_BendInventoryPickup_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Tutorials
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::Tutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Tutorials");

	ABP_BendInventoryPickup_C_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.TryMeleeTutorial
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::TryMeleeTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.TryMeleeTutorial");

	ABP_BendInventoryPickup_C_TryMeleeTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DisplayHudNotificationInternal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             NotifyTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::DisplayHudNotificationInternal(class UTexture2D** NotifyTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DisplayHudNotificationInternal");

	ABP_BendInventoryPickup_C_DisplayHudNotificationInternal_Params params;
	params.NotifyTexture = NotifyTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::CallNotifyForInteractEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractEnd");

	ABP_BendInventoryPickup_C_CallNotifyForInteractEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractStart
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::CallNotifyForInteractStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractStart");

	ABP_BendInventoryPickup_C_CallNotifyForInteractStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForExactMomentOfPickup
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::CallNotifyForExactMomentOfPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForExactMomentOfPickup");

	ABP_BendInventoryPickup_C_CallNotifyForExactMomentOfPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetNotificationDetails
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGunAmmoPickup                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SetNotificationDetails(bool* IsGunAmmoPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetNotificationDetails");

	ABP_BendInventoryPickup_C_SetNotificationDetails_Params params;
	params.IsGunAmmoPickup = IsGunAmmoPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetMeleeWeaponType
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::SetMeleeWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetMeleeWeaponType");

	ABP_BendInventoryPickup_C_SetMeleeWeaponType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetIconColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RedIcon                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SetIconColor(bool* RedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetIconColor");

	ABP_BendInventoryPickup_C_SetIconColor_Params params;
	params.RedIcon = RedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complain
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::Complain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complain");

	ABP_BendInventoryPickup_C_Complain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.renameActor
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::renameActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.renameActor");

	ABP_BendInventoryPickup_C_renameActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetGlint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SetGlint(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetGlint");

	ABP_BendInventoryPickup_C_SetGlint_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetColorToFriendly
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Friendly                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::SetColorToFriendly(bool* Friendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetColorToFriendly");

	ABP_BendInventoryPickup_C_SetColorToFriendly_Params params;
	params.Friendly = Friendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UnbindMoveComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::UnbindMoveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UnbindMoveComplete");

	ABP_BendInventoryPickup_C_UnbindMoveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.BeginTheInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::BeginTheInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.BeginTheInteract");

	ABP_BendInventoryPickup_C_BeginTheInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::InteractOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnBegin");

	ABP_BendInventoryPickup_C_InteractOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::InteractOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnEnd");

	ABP_BendInventoryPickup_C_InteractOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceivePostSaveGameLoaded");

	ABP_BendInventoryPickup_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::InputPressStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressStarted");

	ABP_BendInventoryPickup_C_InputPressStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::InputPressReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressReleased");

	ABP_BendInventoryPickup_C_InputPressReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForceResetWithCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::ForceResetWithCount(int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForceResetWithCount");

	ABP_BendInventoryPickup_C_ForceResetWithCount_Params params;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExecuteUbergraph_BP_BendInventoryPickup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::ExecuteUbergraph_BP_BendInventoryPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExecuteUbergraph_BP_BendInventoryPickup");

	ABP_BendInventoryPickup_C_ExecuteUbergraph_BP_BendInventoryPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PickupStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::PickupStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PickupStarted__DelegateSignature");

	ABP_BendInventoryPickup_C_PickupStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DidAnimComplete                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_C::InteractEnded__DelegateSignature(bool DidAnimComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractEnded__DelegateSignature");

	ABP_BendInventoryPickup_C_InteractEnded__DelegateSignature_Params params;
	params.DidAnimComplete = DidAnimComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExactMomentOfPickup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_C::ExactMomentOfPickup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExactMomentOfPickup__DelegateSignature");

	ABP_BendInventoryPickup_C_ExactMomentOfPickup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
