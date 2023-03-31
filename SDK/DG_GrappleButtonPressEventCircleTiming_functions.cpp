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

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::StartPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartPosition");

	AGrappleButtonPressEventCircleTiming_C_StartPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdatePosition
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdatePosition");

	AGrappleButtonPressEventCircleTiming_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetupNewGrappleButtonPressEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          SuccessPressRate               (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinGrappleTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Fail_Grapple               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Screen_Location                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Follow_Actor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Follow_Component               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Follow_Socket_In_Actor         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start_On_Play                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            GrappleTiers                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerInputButton> PrevButton                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float SuccessPressRate, float MinGrappleTime, bool Can_Fail_Grapple, const struct FVector2D& Screen_Location, class AActor* Follow_Actor, class UActorComponent* Follow_Component, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, int GrappleTiers, bool Debug, TEnumAsByte<EControllerInputButton> PrevButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetupNewGrappleButtonPressEvent");

	AGrappleButtonPressEventCircleTiming_C_SetupNewGrappleButtonPressEvent_Params params;
	params.Button = Button;
	params.SuccessPressRate = SuccessPressRate;
	params.MinGrappleTime = MinGrappleTime;
	params.Can_Fail_Grapple = Can_Fail_Grapple;
	params.Screen_Location = Screen_Location;
	params.Follow_Actor = Follow_Actor;
	params.Follow_Component = Follow_Component;
	params.Follow_Socket_In_Actor = Follow_Socket_In_Actor;
	params.Start_On_Play = Start_On_Play;
	params.GrappleTiers = GrappleTiers;
	params.Debug = Debug;
	params.PrevButton = PrevButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.GetCompletionPercent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrappleButtonPressEventCircleTiming_C::GetCompletionPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.GetCompletionPercent");

	AGrappleButtonPressEventCircleTiming_C_GetCompletionPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdateCompletion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::UpdateCompletion(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdateCompletion");

	AGrappleButtonPressEventCircleTiming_C_UpdateCompletion_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CheckForSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::CheckForSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CheckForSuccess");

	AGrappleButtonPressEventCircleTiming_C_CheckForSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.HandleInput
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::HandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.HandleInput");

	AGrappleButtonPressEventCircleTiming_C_HandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::StopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StopAnimation");

	AGrappleButtonPressEventCircleTiming_C_StopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::ChangeButtonAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonAlpha");

	AGrappleButtonPressEventCircleTiming_C_ChangeButtonAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::ChangeButtonColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonColor");

	AGrappleButtonPressEventCircleTiming_C_ChangeButtonColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.DestroySelf");

	AGrappleButtonPressEventCircleTiming_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CreateUMG_Widget
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::CreateUMG_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CreateUMG_Widget");

	AGrappleButtonPressEventCircleTiming_C_CreateUMG_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UserConstructionScript");

	AGrappleButtonPressEventCircleTiming_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveBeginPlay");

	AGrappleButtonPressEventCircleTiming_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveTick");

	AGrappleButtonPressEventCircleTiming_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventActivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::NotifyButtonEventActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventActivated");

	AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventDeactivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::NotifyButtonEventDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventDeactivated");

	AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventFail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::SetButtonEventFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventFail");

	AGrappleButtonPressEventCircleTiming_C_SetButtonEventFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventSuccessful
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::SetButtonEventSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventSuccessful");

	AGrappleButtonPressEventCircleTiming_C_SetButtonEventSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.PlayerDied
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

void AGrappleButtonPressEventCircleTiming_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.PlayerDied");

	AGrappleButtonPressEventCircleTiming_C_PlayerDied_Params params;
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


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartButtonEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::StartButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartButtonEvent");

	AGrappleButtonPressEventCircleTiming_C_StartButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.TimeScaleInputEvent
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::TimeScaleInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.TimeScaleInputEvent");

	AGrappleButtonPressEventCircleTiming_C_TimeScaleInputEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventReleased
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::NotifyButtonEventReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventReleased");

	AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEvent
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEventCircleTiming_C::NotifyButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEvent");

	AGrappleButtonPressEventCircleTiming_C_NotifyButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.OnComplete_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_GrappleSuccessType> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::OnComplete_Event_1(TEnumAsByte<EUI_GrappleSuccessType> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.OnComplete_Event_1");

	AGrappleButtonPressEventCircleTiming_C_OnComplete_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ExecuteUbergraph_GrappleButtonPressEventCircleTiming
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEventCircleTiming_C::ExecuteUbergraph_GrappleButtonPressEventCircleTiming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ExecuteUbergraph_GrappleButtonPressEventCircleTiming");

	AGrappleButtonPressEventCircleTiming_C_ExecuteUbergraph_GrappleButtonPressEventCircleTiming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
