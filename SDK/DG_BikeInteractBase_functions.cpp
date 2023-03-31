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

// Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteractCode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABikeInteractBase_C::CanDoSecondaryInteractCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteractCode");

	ABikeInteractBase_C_CanDoSecondaryInteractCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BikeInteractBase.BikeInteractBase_C.CheckConditionsForTutorialSave
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::CheckConditionsForTutorialSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CheckConditionsForTutorialSave");

	ABikeInteractBase_C_CheckConditionsForTutorialSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.Tutorial_Save
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::Tutorial_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.Tutorial_Save");

	ABikeInteractBase_C_Tutorial_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ValidVaterDepth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ValidVaterDepth(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ValidVaterDepth");

	ABikeInteractBase_C_ValidVaterDepth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BikeInteractBase.BikeInteractBase_C.CheckIfSecondaryInteractAnchorIsValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::CheckIfSecondaryInteractAnchorIsValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CheckIfSecondaryInteractAnchorIsValid");

	ABikeInteractBase_C_CheckIfSecondaryInteractAnchorIsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BikeInteractBase.BikeInteractBase_C.CheckBikeAdvertise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::CheckBikeAdvertise()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CheckBikeAdvertise");

	ABikeInteractBase_C_CheckBikeAdvertise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReleaseSecondaryInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::ReleaseSecondaryInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReleaseSecondaryInteract");

	ABikeInteractBase_C_ReleaseSecondaryInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.CalculateEnterVehicleNavPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoNavTo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          UseDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NoNavMove                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HalfWayThereNav                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CompletelyFailed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::CalculateEnterVehicleNavPoint(bool* DoNavTo, float* UseDistance, bool* NoNavMove, bool* HalfWayThereNav, bool* CompletelyFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CalculateEnterVehicleNavPoint");

	ABikeInteractBase_C_CalculateEnterVehicleNavPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoNavTo != nullptr)
		*DoNavTo = params.DoNavTo;
	if (UseDistance != nullptr)
		*UseDistance = params.UseDistance;
	if (NoNavMove != nullptr)
		*NoNavMove = params.NoNavMove;
	if (HalfWayThereNav != nullptr)
		*HalfWayThereNav = params.HalfWayThereNav;
	if (CompletelyFailed != nullptr)
		*CompletelyFailed = params.CompletelyFailed;
}


// Function BikeInteractBase.BikeInteractBase_C.GetAmmoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBendWidgetComponent*    AmmoWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::GetAmmoWidget(class UBendWidgetComponent** AmmoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.GetAmmoWidget");

	ABikeInteractBase_C_GetAmmoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoWidget != nullptr)
		*AmmoWidget = params.AmmoWidget;
}


// Function BikeInteractBase.BikeInteractBase_C.ShowRepairProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ShowRepairProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ShowRepairProgress");

	ABikeInteractBase_C_ShowRepairProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.GetFuelAndHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::GetFuelAndHealth(float* Fuel, float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.GetFuelAndHealth");

	ABikeInteractBase_C_GetFuelAndHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
	if (Health != nullptr)
		*Health = params.Health;
}


// Function BikeInteractBase.BikeInteractBase_C.RefuelingFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::RefuelingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.RefuelingFinished");

	ABikeInteractBase_C_RefuelingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InBikeInteractRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::InBikeInteractRange(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InBikeInteractRange");

	ABikeInteractBase_C_InBikeInteractRange_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InputStartedPress
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::InputStartedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InputStartedPress");

	ABikeInteractBase_C_InputStartedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::CanDoSecondaryInteract(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteract");

	ABikeInteractBase_C_CanDoSecondaryInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BikeInteractBase.BikeInteractBase_C.DisplayTheSecondaryInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::DisplayTheSecondaryInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.DisplayTheSecondaryInteract");

	ABikeInteractBase_C_DisplayTheSecondaryInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.GetCanBeInteracted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::GetCanBeInteracted(bool* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.GetCanBeInteracted");

	ABikeInteractBase_C_GetCanBeInteracted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
}


// Function BikeInteractBase.BikeInteractBase_C.InputFailed
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::InputFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InputFailed");

	ABikeInteractBase_C_InputFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InputSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::InputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InputSuccess");

	ABikeInteractBase_C_InputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.UserConstructionScript");

	ABikeInteractBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABikeInteractBase_C::InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68");

	ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABikeInteractBase_C::InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67");

	ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABikeInteractBase_C::InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66");

	ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.UpdateCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::UpdateCollision(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.UpdateCollision");

	ABikeInteractBase_C_UpdateCollision_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABikeInteractBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReceiveBeginPlay");

	ABikeInteractBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.UpdateInteractDetails
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::UpdateInteractDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.UpdateInteractDetails");

	ABikeInteractBase_C_UpdateInteractDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InteractOnBegin
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::InteractOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InteractOnBegin");

	ABikeInteractBase_C_InteractOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InteractOnEnd
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::InteractOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InteractOnEnd");

	ABikeInteractBase_C_InteractOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.InputSlateInteractEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateInputInteract*     InputInteract                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::InputSlateInteractEnd(class USlateInputInteract* InputInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.InputSlateInteractEnd");

	ABikeInteractBase_C_InputSlateInteractEnd_Params params;
	params.InputInteract = InputInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReceiveTick");

	ABikeInteractBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnCinematicStarted_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABikeInteractBase_C::OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnCinematicStarted_MM_Event_1");

	ABikeInteractBase_C_OnCinematicStarted_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnCinematicEnded_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABikeInteractBase_C::OnCinematicEnded_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnCinematicEnded_MM_Event_1");

	ABikeInteractBase_C_OnCinematicEnded_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnMissionBegin_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnMissionBegin_MM_Event_1");

	ABikeInteractBase_C_OnMissionBegin_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnMissionComplete_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnMissionComplete_MM_Event_1");

	ABikeInteractBase_C_OnMissionComplete_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReceiveMoveCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReceiveMoveCompleted_Event_1");

	ABikeInteractBase_C_ReceiveMoveCompleted_Event_1_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.UnbindMoveComplete
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::UnbindMoveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.UnbindMoveComplete");

	ABikeInteractBase_C_UnbindMoveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.DoAutoNavBike
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::DoAutoNavBike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.DoAutoNavBike");

	ABikeInteractBase_C_DoAutoNavBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnInputEnd_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateInputInteract*     InputInteract                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnInputEnd_Copy(class USlateInputInteract* InputInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnInputEnd_Copy");

	ABikeInteractBase_C_OnInputEnd_Copy_Params params;
	params.InputInteract = InputInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.StartInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PostNav                        (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::StartInteraction(bool PostNav)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.StartInteraction");

	ABikeInteractBase_C_StartInteraction_Params params;
	params.PostNav = PostNav;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.NeedThisForTimerToActuallyWork
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::NeedThisForTimerToActuallyWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.NeedThisForTimerToActuallyWork");

	ABikeInteractBase_C_NeedThisForTimerToActuallyWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnDriverEnteredVehiclePawn_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnDriverEnteredVehiclePawn_Event_1(class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnDriverEnteredVehiclePawn_Event_1");

	ABikeInteractBase_C_OnDriverEnteredVehiclePawn_Event_1_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnMenuToHideSpecificUIActivated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activated                      (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnMenuToHideSpecificUIActivated_Event_1(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnMenuToHideSpecificUIActivated_Event_1");

	ABikeInteractBase_C_OnMenuToHideSpecificUIActivated_Event_1_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReceiveEndPlay");

	ABikeInteractBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeStarted
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::OnPhotoModeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeStarted");

	ABikeInteractBase_C_OnPhotoModeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeEnded
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::OnPhotoModeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeEnded");

	ABikeInteractBase_C_OnPhotoModeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ReceivePreSaveGameLoaded");

	ABikeInteractBase_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.UpdateFuelAndHealthStats
// (Event, Public, BlueprintEvent)

void ABikeInteractBase_C::UpdateFuelAndHealthStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.UpdateFuelAndHealthStats");

	ABikeInteractBase_C_UpdateFuelAndHealthStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.SetBikeAdvertiseState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsAvailable                    (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::SetBikeAdvertiseState(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.SetBikeAdvertiseState");

	ABikeInteractBase_C_SetBikeAdvertiseState_Params params;
	params.IsAvailable = IsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.OnPostSaveGameLoaded_Event_1");

	ABikeInteractBase_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.BikeObstructed
// (BlueprintCallable, BlueprintEvent)

void ABikeInteractBase_C::BikeObstructed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.BikeObstructed");

	ABikeInteractBase_C_BikeObstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.Interact2Pressed
// (Event, Public, BlueprintEvent)

void ABikeInteractBase_C::Interact2Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.Interact2Pressed");

	ABikeInteractBase_C_Interact2Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.Interact2Released
// (Event, Public, BlueprintEvent)

void ABikeInteractBase_C::Interact2Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.Interact2Released");

	ABikeInteractBase_C_Interact2Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.ExecuteUbergraph_BikeInteractBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::ExecuteUbergraph_BikeInteractBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.ExecuteUbergraph_BikeInteractBase");

	ABikeInteractBase_C_ExecuteUbergraph_BikeInteractBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeInteractBase.BikeInteractBase_C.SabotageOrRepairComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScrapCount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABikeInteractBase_C::SabotageOrRepairComplete__DelegateSignature(int ScrapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeInteractBase.BikeInteractBase_C.SabotageOrRepairComplete__DelegateSignature");

	ABikeInteractBase_C_SabotageOrRepairComplete__DelegateSignature_Params params;
	params.ScrapCount = ScrapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
