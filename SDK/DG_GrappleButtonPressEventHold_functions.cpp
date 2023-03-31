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

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetPositionOfWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::SetPositionOfWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetPositionOfWidget");

	AGrappleButtonPressEventHold_C_SetPositionOfWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetupNewGrappleButtonPressEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinGrappleTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Fail_Grapple               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Follow_Actor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Follow_Socket_In_Actor         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start_On_Play                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerInputButton> PrevButton                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float MinGrappleTime, bool Can_Fail_Grapple, class AActor* Follow_Actor, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, TEnumAsByte<EControllerInputButton> PrevButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetupNewGrappleButtonPressEvent");

	AGrappleButtonPressEventHold_C_SetupNewGrappleButtonPressEvent_Params params;
	params.Button = Button;
	params.MinGrappleTime = MinGrappleTime;
	params.Can_Fail_Grapple = Can_Fail_Grapple;
	params.Follow_Actor = Follow_Actor;
	params.Follow_Socket_In_Actor = Follow_Socket_In_Actor;
	params.Start_On_Play = Start_On_Play;
	params.PrevButton = PrevButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.GetCompletionPercent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrappleButtonPressEventHold_C::GetCompletionPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.GetCompletionPercent");

	AGrappleButtonPressEventHold_C_GetCompletionPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UpdateCompletion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::UpdateCompletion(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UpdateCompletion");

	AGrappleButtonPressEventHold_C_UpdateCompletion_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CheckForSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::CheckForSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CheckForSuccess");

	AGrappleButtonPressEventHold_C_CheckForSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.HandleInput
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::HandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.HandleInput");

	AGrappleButtonPressEventHold_C_HandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::StopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StopAnimation");

	AGrappleButtonPressEventHold_C_StopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::ChangeButtonAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonAlpha");

	AGrappleButtonPressEventHold_C_ChangeButtonAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::ChangeButtonColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonColor");

	AGrappleButtonPressEventHold_C_ChangeButtonColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DestroySelf");

	AGrappleButtonPressEventHold_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CreateUMG_Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::CreateUMG_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CreateUMG_Widget");

	AGrappleButtonPressEventHold_C_CreateUMG_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UserConstructionScript");

	AGrappleButtonPressEventHold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__FinishedFunc
// (BlueprintEvent)

void AGrappleButtonPressEventHold_C::ButtonFadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__FinishedFunc");

	AGrappleButtonPressEventHold_C_ButtonFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__UpdateFunc
// (BlueprintEvent)

void AGrappleButtonPressEventHold_C::ButtonFadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__UpdateFunc");

	AGrappleButtonPressEventHold_C_ButtonFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventHold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveBeginPlay");

	AGrappleButtonPressEventHold_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveTick");

	AGrappleButtonPressEventHold_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventActivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventHold_C::NotifyButtonEventActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventActivated");

	AGrappleButtonPressEventHold_C_NotifyButtonEventActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventDeactivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventHold_C::NotifyButtonEventDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventDeactivated");

	AGrappleButtonPressEventHold_C_NotifyButtonEventDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEvent
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventHold_C::NotifyButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEvent");

	AGrappleButtonPressEventHold_C_NotifyButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFade
// (BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::ButtonFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFade");

	AGrappleButtonPressEventHold_C_ButtonFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventFail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::SetButtonEventFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventFail");

	AGrappleButtonPressEventHold_C_SetButtonEventFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventSuccessful
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::SetButtonEventSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventSuccessful");

	AGrappleButtonPressEventHold_C_SetButtonEventSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.PlayerDied");

	AGrappleButtonPressEventHold_C_PlayerDied_Params params;
	params.ActualDamage = ActualDamage;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StartButtonEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::StartButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StartButtonEvent");

	AGrappleButtonPressEventHold_C_StartButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventReleased
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventHold_C::NotifyButtonEventReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventReleased");

	AGrappleButtonPressEventHold_C_NotifyButtonEventReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DebugDraw
// (BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::DebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DebugDraw");

	AGrappleButtonPressEventHold_C_DebugDraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.OnSuccess_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventHold_C::OnSuccess_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.OnSuccess_Event_1");

	AGrappleButtonPressEventHold_C_OnSuccess_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveEndPlay");

	AGrappleButtonPressEventHold_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ExecuteUbergraph_GrappleButtonPressEventHold
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventHold_C::ExecuteUbergraph_GrappleButtonPressEventHold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ExecuteUbergraph_GrappleButtonPressEventHold");

	AGrappleButtonPressEventHold_C_ExecuteUbergraph_GrappleButtonPressEventHold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
