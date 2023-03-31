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

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.MakeActionPressEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SuccessfulInputsNeeded         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LengthOfEventInSeconds         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailOnTimeExpire               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DecayRatePerSecond             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FollowActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         FollowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FollowSocketInActor            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartOnPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ConsumeInputs                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnButtonReleased        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Combat_Prompts> CombatPrompt                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSocketOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableCheckForSuccess         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::MakeActionPressEvent(const struct FName& ActionName, int SuccessfulInputsNeeded, float HoldTime, float LengthOfEventInSeconds, bool FailOnTimeExpire, float DecayRatePerSecond, const struct FVector2D& ScreenLocation, class AActor* FollowActor, class UActorComponent* FollowComponent, const struct FName& FollowSocketInActor, bool StartOnPlay, bool Debug, bool ConsumeInputs, bool TriggerOnButtonReleased, TEnumAsByte<Enum_Combat_Prompts> CombatPrompt, const struct FVector& SocketOffset, bool UseSocketOverride, bool DisableCheckForSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.MakeActionPressEvent");

	ABP_ButtonPressEvent_C_MakeActionPressEvent_Params params;
	params.ActionName = ActionName;
	params.SuccessfulInputsNeeded = SuccessfulInputsNeeded;
	params.HoldTime = HoldTime;
	params.LengthOfEventInSeconds = LengthOfEventInSeconds;
	params.FailOnTimeExpire = FailOnTimeExpire;
	params.DecayRatePerSecond = DecayRatePerSecond;
	params.ScreenLocation = ScreenLocation;
	params.FollowActor = FollowActor;
	params.FollowComponent = FollowComponent;
	params.FollowSocketInActor = FollowSocketInActor;
	params.StartOnPlay = StartOnPlay;
	params.Debug = Debug;
	params.ConsumeInputs = ConsumeInputs;
	params.TriggerOnButtonReleased = TriggerOnButtonReleased;
	params.CombatPrompt = CombatPrompt;
	params.SocketOffset = SocketOffset;
	params.UseSocketOverride = UseSocketOverride;
	params.DisableCheckForSuccess = DisableCheckForSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.AutoCompleteButtonEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AutoComplete                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::AutoCompleteButtonEvent(bool* AutoComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.AutoCompleteButtonEvent");

	ABP_ButtonPressEvent_C_AutoCompleteButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutoComplete != nullptr)
		*AutoComplete = params.AutoComplete;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.EaseInOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewIn_                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PrevIn                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::EaseInOut(const struct FVector2D& NewIn_, const struct FVector2D& PrevIn, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.EaseInOut");

	ABP_ButtonPressEvent_C_EaseInOut_Params params;
	params.NewIn_ = NewIn_;
	params.PrevIn = PrevIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartPosition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::StartPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartPosition");

	ABP_ButtonPressEvent_C_StartPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CountHoldTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::CountHoldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CountHoldTime");

	ABP_ButtonPressEvent_C_CountHoldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonPress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::HandleButtonPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonPress");

	ABP_ButtonPressEvent_C_HandleButtonPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonRelease
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::HandleButtonRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonRelease");

	ABP_ButtonPressEvent_C_HandleButtonRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.IsButtonEventComplete
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ButtonPressEvent_C::IsButtonEventComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.IsButtonEventComplete");

	ABP_ButtonPressEvent_C_IsButtonEventComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SafeGuardCheckDefaultActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::SafeGuardCheckDefaultActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SafeGuardCheckDefaultActor");

	ABP_ButtonPressEvent_C_SafeGuardCheckDefaultActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::StopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopAnimation");

	ABP_ButtonPressEvent_C_StopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CreateUMG_Widget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::CreateUMG_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CreateUMG_Widget");

	ABP_ButtonPressEvent_C_CreateUMG_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetPositionOfWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::SetPositionOfWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetPositionOfWidget");

	ABP_ButtonPressEvent_C_SetPositionOfWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ChangeButtonColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::ChangeButtonColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ChangeButtonColor");

	ABP_ButtonPressEvent_C_ChangeButtonColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.DestroySelf");

	ABP_ButtonPressEvent_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CheckForSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::CheckForSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CheckForSuccess");

	ABP_ButtonPressEvent_C_CheckForSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetUpNewButtonPressEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SuccessfulInputsNeeded         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LengthOfEventInSeconds         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailOnTimeExpire               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DecayRatePerSecond             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FollowActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         FollowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FollowSocketInActor            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartOnPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ConsumeInputs                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// bool                           TriggerOnButtonReleased        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Combat_Prompts> CombatPrompt                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSocketOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableCheckForSuccess         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::SetUpNewButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, int SuccessfulInputsNeeded, float HoldTime, float LengthOfEventInSeconds, bool FailOnTimeExpire, float DecayRatePerSecond, const struct FVector2D& ScreenLocation, class AActor* FollowActor, class UActorComponent* FollowComponent, const struct FName& FollowSocketInActor, bool StartOnPlay, bool Debug, bool ConsumeInputs, const struct FText& Text, bool TriggerOnButtonReleased, TEnumAsByte<Enum_Combat_Prompts> CombatPrompt, const struct FVector& SocketOffset, bool UseSocketOverride, bool DisableCheckForSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetUpNewButtonPressEvent");

	ABP_ButtonPressEvent_C_SetUpNewButtonPressEvent_Params params;
	params.Button = Button;
	params.SuccessfulInputsNeeded = SuccessfulInputsNeeded;
	params.HoldTime = HoldTime;
	params.LengthOfEventInSeconds = LengthOfEventInSeconds;
	params.FailOnTimeExpire = FailOnTimeExpire;
	params.DecayRatePerSecond = DecayRatePerSecond;
	params.ScreenLocation = ScreenLocation;
	params.FollowActor = FollowActor;
	params.FollowComponent = FollowComponent;
	params.FollowSocketInActor = FollowSocketInActor;
	params.StartOnPlay = StartOnPlay;
	params.Debug = Debug;
	params.ConsumeInputs = ConsumeInputs;
	params.Text = Text;
	params.TriggerOnButtonReleased = TriggerOnButtonReleased;
	params.CombatPrompt = CombatPrompt;
	params.SocketOffset = SocketOffset;
	params.UseSocketOverride = UseSocketOverride;
	params.DisableCheckForSuccess = DisableCheckForSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.UserConstructionScript");

	ABP_ButtonPressEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_ButtonPressEvent_C::ButtonFadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__FinishedFunc");

	ABP_ButtonPressEvent_C_ButtonFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_ButtonPressEvent_C::ButtonFadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__UpdateFunc");

	ABP_ButtonPressEvent_C_ButtonFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ButtonPressEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveBeginPlay");

	ABP_ButtonPressEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFade
// (BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::ButtonFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFade");

	ABP_ButtonPressEvent_C_ButtonFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::SetDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetDebug");

	ABP_ButtonPressEvent_C_SetDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.PlayerDied
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

void ABP_ButtonPressEvent_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.PlayerDied");

	ABP_ButtonPressEvent_C_PlayerDied_Params params;
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


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::StopTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopTimeline");

	ABP_ButtonPressEvent_C_StopTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.Multi-NewtHandling
// (BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::Multi_NewtHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.Multi-NewtHandling");

	ABP_ButtonPressEvent_C_Multi_NewtHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnNewGrappler_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               NewGrappler                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            GrapplerCount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::OnNewGrappler_Event_1(class ABendPawn* NewGrappler, int GrapplerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnNewGrappler_Event_1");

	ABP_ButtonPressEvent_C_OnNewGrappler_Event_1_Params params;
	params.NewGrappler = NewGrappler;
	params.GrapplerCount = GrapplerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartButtonEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::StartButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartButtonEvent");

	ABP_ButtonPressEvent_C_StartButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventSuccessful
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::SetButtonEventSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventSuccessful");

	ABP_ButtonPressEvent_C_SetButtonEventSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventFail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ButtonPressEvent_C::SetButtonEventFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventFail");

	ABP_ButtonPressEvent_C_SetButtonEventFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEvent
// (Event, Public, BlueprintEvent)

void ABP_ButtonPressEvent_C::NotifyButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEvent");

	ABP_ButtonPressEvent_C_NotifyButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEventReleased
// (Event, Public, BlueprintEvent)

void ABP_ButtonPressEvent_C::NotifyButtonEventReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEventReleased");

	ABP_ButtonPressEvent_C_NotifyButtonEventReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveEndPlay");

	ABP_ButtonPressEvent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnDebuggingActive
// (Event, Protected, BlueprintEvent)

void ABP_ButtonPressEvent_C::OnDebuggingActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnDebuggingActive");

	ABP_ButtonPressEvent_C_OnDebuggingActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveTick");

	ABP_ButtonPressEvent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ExecuteUbergraph_BP_ButtonPressEvent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ButtonPressEvent_C::ExecuteUbergraph_BP_ButtonPressEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ExecuteUbergraph_BP_ButtonPressEvent");

	ABP_ButtonPressEvent_C_ExecuteUbergraph_BP_ButtonPressEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
