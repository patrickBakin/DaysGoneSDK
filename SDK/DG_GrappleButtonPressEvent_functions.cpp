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

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::StartPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartPosition");

	AGrappleButtonPressEvent_C_StartPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OffsetBasedOnButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEvent_C::OffsetBasedOnButton(const struct FVector2D& InPosition, struct FVector2D* OutPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OffsetBasedOnButton");

	AGrappleButtonPressEvent_C_OffsetBasedOnButton_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetupNewGrappleButtonPressEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          SuccessPressRate               (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxGrappleTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Fail_Grapple               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Screen_Location                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Follow_Actor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Follow_Component               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Follow_Socket_In_Actor         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start_On_Play                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            GrappleTiers                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEvent_C::SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float SuccessPressRate, float MaxGrappleTime, bool Can_Fail_Grapple, const struct FVector2D& Screen_Location, class AActor* Follow_Actor, class UActorComponent* Follow_Component, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, int GrappleTiers, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetupNewGrappleButtonPressEvent");

	AGrappleButtonPressEvent_C_SetupNewGrappleButtonPressEvent_Params params;
	params.Button = Button;
	params.SuccessPressRate = SuccessPressRate;
	params.MaxGrappleTime = MaxGrappleTime;
	params.Can_Fail_Grapple = Can_Fail_Grapple;
	params.Screen_Location = Screen_Location;
	params.Follow_Actor = Follow_Actor;
	params.Follow_Component = Follow_Component;
	params.Follow_Socket_In_Actor = Follow_Socket_In_Actor;
	params.Start_On_Play = Start_On_Play;
	params.GrappleTiers = GrappleTiers;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.GetCompletionPercent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrappleButtonPressEvent_C::GetCompletionPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.GetCompletionPercent");

	AGrappleButtonPressEvent_C_GetCompletionPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.CheckForSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::CheckForSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.CheckForSuccess");

	AGrappleButtonPressEvent_C_CheckForSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.HandleInput
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::HandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.HandleInput");

	AGrappleButtonPressEvent_C_HandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.DestroySelf");

	AGrappleButtonPressEvent_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.UserConstructionScript");

	AGrappleButtonPressEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveBeginPlay");

	AGrappleButtonPressEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventActivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEvent_C::NotifyButtonEventActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventActivated");

	AGrappleButtonPressEvent_C_NotifyButtonEventActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventDeactivated
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEvent_C::NotifyButtonEventDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventDeactivated");

	AGrappleButtonPressEvent_C_NotifyButtonEventDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEvent
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEvent_C::NotifyButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEvent");

	AGrappleButtonPressEvent_C_NotifyButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ButtonFade
// (BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::ButtonFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ButtonFade");

	AGrappleButtonPressEvent_C_ButtonFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventFail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::SetButtonEventFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventFail");

	AGrappleButtonPressEvent_C_SetButtonEventFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventSuccessful
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::SetButtonEventSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventSuccessful");

	AGrappleButtonPressEvent_C_SetButtonEventSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.PlayerDied
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

void AGrappleButtonPressEvent_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.PlayerDied");

	AGrappleButtonPressEvent_C_PlayerDied_Params params;
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


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartButtonEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::StartButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartButtonEvent");

	AGrappleButtonPressEvent_C_StartButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.TimeScaleInputEvent
// (Event, Public, BlueprintEvent)

void AGrappleButtonPressEvent_C::TimeScaleInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.TimeScaleInputEvent");

	AGrappleButtonPressEvent_C_TimeScaleInputEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnSuccess_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGrappleButtonPressEvent_C::OnSuccess_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnSuccess_Event_1");

	AGrappleButtonPressEvent_C_OnSuccess_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnCompletionPercentChanged
// (Event, Protected, BlueprintEvent)

void AGrappleButtonPressEvent_C::OnCompletionPercentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnCompletionPercentChanged");

	AGrappleButtonPressEvent_C_OnCompletionPercentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEvent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveEndPlay");

	AGrappleButtonPressEvent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ExecuteUbergraph_GrappleButtonPressEvent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrappleButtonPressEvent_C::ExecuteUbergraph_GrappleButtonPressEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ExecuteUbergraph_GrappleButtonPressEvent");

	AGrappleButtonPressEvent_C_ExecuteUbergraph_GrappleButtonPressEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
