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

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.I_DisplayFuelInteract
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayInteract                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToFuel                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ObjectAnimAnchorRef            (Parm, IsPlainOldData)
// struct FTransform              WidgetTransform                (Parm, IsPlainOldData)
// bool                           NeedsRefilling                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::I_DisplayFuelInteract(bool DisplayInteract, class AActor* ActorToFuel, const struct FTransform& ObjectAnimAnchorRef, const struct FTransform& WidgetTransform, bool* NeedsRefilling)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.I_DisplayFuelInteract");

	ABend_WpnGasCan_C_I_DisplayFuelInteract_Params params;
	params.DisplayInteract = DisplayInteract;
	params.ActorToFuel = ActorToFuel;
	params.ObjectAnimAnchorRef = ObjectAnimAnchorRef;
	params.WidgetTransform = WidgetTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsRefilling != nullptr)
		*NeedsRefilling = params.NeedsRefilling;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::ShowTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ShowTutorial");

	ABend_WpnGasCan_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetAnchorForAnimations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnimIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABend_WpnGasCan_C::GetAnchorForAnimations(int AnimIndex, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetAnchorForAnimations");

	ABend_WpnGasCan_C_GetAnchorForAnimations_Params params;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayRunSloshSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::PlayRunSloshSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayRunSloshSound");

	ABend_WpnGasCan_C_PlayRunSloshSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayThrowSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::PlayThrowSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayThrowSound");

	ABend_WpnGasCan_C_PlayThrowSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetFuelStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::GetFuelStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetFuelStatus");

	ABend_WpnGasCan_C_GetFuelStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.AddFuel
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::AddFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.AddFuel");

	ABend_WpnGasCan_C_AddFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.UserConstructionScript");

	ABend_WpnGasCan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_502
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABend_WpnGasCan_C::InpActEvt_Interact2_UniqueObjectNameForCooking_502(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_502");

	ABend_WpnGasCan_C_InpActEvt_Interact2_UniqueObjectNameForCooking_502_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_501
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABend_WpnGasCan_C::InpActEvt_Interact2_UniqueObjectNameForCooking_501(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_501");

	ABend_WpnGasCan_C_InpActEvt_Interact2_UniqueObjectNameForCooking_501_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginFillingVO
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::BeginFillingVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginFillingVO");

	ABend_WpnGasCan_C_BeginFillingVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EndFillingVO
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::EndFillingVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.EndFillingVO");

	ABend_WpnGasCan_C_EndFillingVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ResetVO
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::ResetVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ResetVO");

	ABend_WpnGasCan_C_ResetVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveTick");

	ABend_WpnGasCan_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.Failed_LoopRefueling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::Failed_LoopRefueling(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.Failed_LoopRefueling");

	ABend_WpnGasCan_C_Failed_LoopRefueling_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginRefueling
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::BeginRefueling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginRefueling");

	ABend_WpnGasCan_C_BeginRefueling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnInputEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateInputInteract*     InputInteract                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::OnInputEnd(class USlateInputInteract* InputInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnInputEnd");

	ABend_WpnGasCan_C_OnInputEnd_Params params;
	params.InputInteract = InputInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnThrowWeapon
// (Event, Public, BlueprintEvent)

void ABend_WpnGasCan_C::OnThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnThrowWeapon");

	ABend_WpnGasCan_C_OnThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.TurnOffInteract
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::TurnOffInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.TurnOffInteract");

	ABend_WpnGasCan_C_TurnOffInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterComplete
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::EnterComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterComplete");

	ABend_WpnGasCan_C_EnterComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::EnterFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterFailed");

	ABend_WpnGasCan_C_EnterFailed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimComplete
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::ExitAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimComplete");

	ABend_WpnGasCan_C_ExitAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::ExitAnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimFailed");

	ABend_WpnGasCan_C_ExitAnimFailed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.WeaponRelease
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::WeaponRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.WeaponRelease");

	ABend_WpnGasCan_C_WeaponRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnGasCan_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveBeginPlay");

	ABend_WpnGasCan_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnBegin
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::InteractOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnBegin");

	ABend_WpnGasCan_C_InteractOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnEnd
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::InteractOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnEnd");

	ABend_WpnGasCan_C_InteractOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.DisplaySlateInteract
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::DisplaySlateInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.DisplaySlateInteract");

	ABend_WpnGasCan_C_DisplaySlateInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReleaseTheInteract
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::ReleaseTheInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReleaseTheInteract");

	ABend_WpnGasCan_C_ReleaseTheInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnDrawFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnGasCan_C::OnDrawFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnDrawFinished");

	ABend_WpnGasCan_C_OnDrawFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnHolsterStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnGasCan_C::OnHolsterStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnHolsterStarted");

	ABend_WpnGasCan_C_OnHolsterStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GasCanCloseTutorial
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::GasCanCloseTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.GasCanCloseTutorial");

	ABend_WpnGasCan_C_GasCanCloseTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReadyToDrop
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::ReadyToDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReadyToDrop");

	ABend_WpnGasCan_C_ReadyToDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveEndPlay");

	ABend_WpnGasCan_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExecuteUbergraph_Bend_WpnGasCan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGasCan_C::ExecuteUbergraph_Bend_WpnGasCan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExecuteUbergraph_Bend_WpnGasCan");

	ABend_WpnGasCan_C_ExecuteUbergraph_Bend_WpnGasCan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::RefuelingFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingFinished__DelegateSignature");

	ABend_WpnGasCan_C_RefuelingFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABend_WpnGasCan_C::RefuelingStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingStarted__DelegateSignature");

	ABend_WpnGasCan_C_RefuelingStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
