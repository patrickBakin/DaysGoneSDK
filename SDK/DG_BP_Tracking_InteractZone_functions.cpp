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

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsPlayerPawnSpeaking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerPawn**        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::IsPlayerPawnSpeaking(class ABendPlayerPawn** Player, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsPlayerPawnSpeaking");

	ABP_Tracking_InteractZone_C_IsPlayerPawnSpeaking_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedResetAllTracking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::ScriptedResetAllTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedResetAllTracking");

	ABP_Tracking_InteractZone_C_ScriptedResetAllTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedRestartBreathing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::ScriptedRestartBreathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedRestartBreathing");

	ABP_Tracking_InteractZone_C_ScriptedRestartBreathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TestDistanceFromCurrestTrackingCluesToPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Within200U                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::TestDistanceFromCurrestTrackingCluesToPlayer(bool* Within200U)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TestDistanceFromCurrestTrackingCluesToPlayer");

	ABP_Tracking_InteractZone_C_TestDistanceFromCurrestTrackingCluesToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Within200U != nullptr)
		*Within200U = params.Within200U;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishedTheListOfLocations
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::FinishedTheListOfLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishedTheListOfLocations");

	ABP_Tracking_InteractZone_C_FinishedTheListOfLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedCompleteTrackingSection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Section                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::ScriptedCompleteTrackingSection(const struct FName& Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedCompleteTrackingSection");

	ABP_Tracking_InteractZone_C_ScriptedCompleteTrackingSection_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StopTracking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::StopTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StopTracking");

	ABP_Tracking_InteractZone_C_StopTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.HandleSaveGameResetting
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::HandleSaveGameResetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.HandleSaveGameResetting");

	ABP_Tracking_InteractZone_C_HandleSaveGameResetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StartTracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::StartTracking(const struct FName& SectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StartTracking");

	ABP_Tracking_InteractZone_C_StartTracking_Params params;
	params.SectionID = SectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsTrackingSectionCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::IsTrackingSectionCompleted(const struct FName& SectionName, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsTrackingSectionCompleted");

	ABP_Tracking_InteractZone_C_IsTrackingSectionCompleted_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UserConstructionScript");

	ABP_Tracking_InteractZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InpActEvt_Interact_K2Node_InputActionEvent_234
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Tracking_InteractZone_C::InpActEvt_Interact_K2Node_InputActionEvent_234(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InpActEvt_Interact_K2Node_InputActionEvent_234");

	ABP_Tracking_InteractZone_C_InpActEvt_Interact_K2Node_InputActionEvent_234_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceiveBeginPlay");

	ABP_Tracking_InteractZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.BindAllOverlaps
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::BindAllOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.BindAllOverlaps");

	ABP_Tracking_InteractZone_C_BindAllOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePostSaveGameLoaded");

	ABP_Tracking_InteractZone_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePreSaveGameLoaded");

	ABP_Tracking_InteractZone_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnBegin
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::InteractOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnBegin");

	ABP_Tracking_InteractZone_C_InteractOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::InteractOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnEnd");

	ABP_Tracking_InteractZone_C_InteractOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusModeToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnteredFocusMode               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::OnFocusModeToggle(bool EnteredFocusMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusModeToggle");

	ABP_Tracking_InteractZone_C_OnFocusModeToggle_Params params;
	params.EnteredFocusMode = EnteredFocusMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusFadingFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::OnFocusFadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusFadingFinished");

	ABP_Tracking_InteractZone_C_OnFocusFadingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnDied_Event_1
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

void ABP_Tracking_InteractZone_C::OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnDied_Event_1");

	ABP_Tracking_InteractZone_C_OnDied_Event_1_Params params;
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


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnEndPlay_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::OnEndPlay_Event_1(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnEndPlay_Event_1");

	ABP_Tracking_InteractZone_C_OnEndPlay_Event_1_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_Start
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::Pause_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_Start");

	ABP_Tracking_InteractZone_C_Pause_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_End
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::Pause_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_End");

	ABP_Tracking_InteractZone_C_Pause_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_EnteredTrackingRange
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::VO_EnteredTrackingRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_EnteredTrackingRange");

	ABP_Tracking_InteractZone_C_VO_EnteredTrackingRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_LeftTrackingRange
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::VO_LeftTrackingRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_LeftTrackingRange");

	ABP_Tracking_InteractZone_C_VO_LeftTrackingRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_InRangeOfClue
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::VO_InRangeOfClue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_InRangeOfClue");

	ABP_Tracking_InteractZone_C_VO_InRangeOfClue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_FocusModeOnWhenInRange
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::VO_FocusModeOnWhenInRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_FocusModeOnWhenInRange");

	ABP_Tracking_InteractZone_C_VO_FocusModeOnWhenInRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::TrackingSectionCompleted_Event_1(const struct FName& SectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted_Event_1");

	ABP_Tracking_InteractZone_C_TrackingSectionCompleted_Event_1_Params params;
	params.SectionID = SectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CheckForCurrentDistanceToPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Tracking_InteractZone_C::CheckForCurrentDistanceToPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CheckForCurrentDistanceToPlay");

	ABP_Tracking_InteractZone_C_CheckForCurrentDistanceToPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOnTrackingHUD
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::TurnOnTrackingHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOnTrackingHUD");

	ABP_Tracking_InteractZone_C_TurnOnTrackingHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOffTrackingHUD
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::TurnOffTrackingHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOffTrackingHUD");

	ABP_Tracking_InteractZone_C_TurnOffTrackingHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingHUDUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::TrackingHUDUpdate(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingHUDUpdate");

	ABP_Tracking_InteractZone_C_TrackingHUDUpdate_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingClueInvestigated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Section                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ClueObject                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::CodeTrackingClueInvestigated_Event_1(const struct FName& Section, class AActor* ClueObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingClueInvestigated_Event_1");

	ABP_Tracking_InteractZone_C_CodeTrackingClueInvestigated_Event_1_Params params;
	params.Section = Section;
	params.ClueObject = ClueObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingSectionCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::CodeTrackingSectionCompleted_Event_1(const struct FName& SectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingSectionCompleted_Event_1");

	ABP_Tracking_InteractZone_C_CodeTrackingSectionCompleted_Event_1_Params params;
	params.SectionID = SectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UpdateButtonProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::UpdateButtonProgress(int* Index, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UpdateButtonProgress");

	ABP_Tracking_InteractZone_C_UpdateButtonProgress_Params params;
	params.Index = Index;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.SetTrackingState
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Advertising                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLocked                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::SetTrackingState(int* Index, bool* Visible, bool* Advertising, bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.SetTrackingState");

	ABP_Tracking_InteractZone_C_SetTrackingState_Params params;
	params.Index = Index;
	params.Visible = Visible;
	params.Advertising = Advertising;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishAnimationOnUpdate
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::FinishAnimationOnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishAnimationOnUpdate");

	ABP_Tracking_InteractZone_C_FinishAnimationOnUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CloseTheTutorialAndHideData
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::CloseTheTutorialAndHideData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CloseTheTutorialAndHideData");

	ABP_Tracking_InteractZone_C_CloseTheTutorialAndHideData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ListWasFinished
// (Event, Public, BlueprintEvent)

void ABP_Tracking_InteractZone_C::ListWasFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ListWasFinished");

	ABP_Tracking_InteractZone_C_ListWasFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnRockThrowPostToggled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::OnRockThrowPostToggled_Event_1(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnRockThrowPostToggled_Event_1");

	ABP_Tracking_InteractZone_C_OnRockThrowPostToggled_Event_1_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnCinematicStarted_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Tracking_InteractZone_C::OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnCinematicStarted_MM_Event_1");

	ABP_Tracking_InteractZone_C_OnCinematicStarted_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.PrePause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPausing                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::PrePause(bool IsPausing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.PrePause");

	ABP_Tracking_InteractZone_C_PrePause_Params params;
	params.IsPausing = IsPausing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ExecuteUbergraph_BP_Tracking_InteractZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::ExecuteUbergraph_BP_Tracking_InteractZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ExecuteUbergraph_BP_Tracking_InteractZone");

	ABP_Tracking_InteractZone_C_ExecuteUbergraph_BP_Tracking_InteractZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingClueInvestigated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Section                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ClueObject                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::TrackingClueInvestigated__DelegateSignature(const struct FName& Section, class AActor* ClueObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingClueInvestigated__DelegateSignature");

	ABP_Tracking_InteractZone_C_TrackingClueInvestigated__DelegateSignature_Params params;
	params.Section = Section;
	params.ClueObject = ClueObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tracking_InteractZone_C::TrackingSectionCompleted__DelegateSignature(const struct FName& SectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted__DelegateSignature");

	ABP_Tracking_InteractZone_C_TrackingSectionCompleted__DelegateSignature_Params params;
	params.SectionID = SectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
