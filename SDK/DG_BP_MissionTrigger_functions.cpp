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

// Function BP_MissionTrigger.BP_MissionTrigger_C.DoAutoTracking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enter                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionTrigger_C::DoAutoTracking(bool* Enter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.DoAutoTracking");

	ABP_MissionTrigger_C_DoAutoTracking_Params params;
	params.Enter = Enter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.GetSizeForRegion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::GetSizeForRegion(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.GetSizeForRegion");

	ABP_MissionTrigger_C_GetSizeForRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.ChangeMiniMapMarkerState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsRegion                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionTrigger_C::ChangeMiniMapMarkerState(bool* IsRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.ChangeMiniMapMarkerState");

	ABP_MissionTrigger_C_ChangeMiniMapMarkerState_Params params;
	params.IsRegion = IsRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.MarkCloseToMissionTrigger
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsClose                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionTrigger_C::MarkCloseToMissionTrigger(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.MarkCloseToMissionTrigger");

	ABP_MissionTrigger_C_MarkCloseToMissionTrigger_Params params;
	params.IsClose = IsClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.CheckForValidEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::CheckForValidEntry(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.CheckForValidEntry");

	ABP_MissionTrigger_C_CheckForValidEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.MarkMissionAsActiveTracked
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Tracked                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionTrigger_C::MarkMissionAsActiveTracked(bool* Tracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.MarkMissionAsActiveTracked");

	ABP_MissionTrigger_C_MarkMissionAsActiveTracked_Params params;
	params.Tracked = Tracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.GetCurrentlyInScreenQue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InQue                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentDisplay                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::GetCurrentlyInScreenQue(bool* InQue, bool* CurrentDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.GetCurrentlyInScreenQue");

	ABP_MissionTrigger_C_GetCurrentlyInScreenQue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InQue != nullptr)
		*InQue = params.InQue;
	if (CurrentDisplay != nullptr)
		*CurrentDisplay = params.CurrentDisplay;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.UpdateTriggersWorldDisplay
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionTrigger_C::UpdateTriggersWorldDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.UpdateTriggersWorldDisplay");

	ABP_MissionTrigger_C_UpdateTriggersWorldDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.UserConstructionScript");

	ABP_MissionTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MissionTrigger_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__FinishedFunc");

	ABP_MissionTrigger_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MissionTrigger_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__UpdateFunc");

	ABP_MissionTrigger_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnHourChanged_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::OnHourChanged_Event_2(int Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnHourChanged_Event_2");

	ABP_MissionTrigger_C_OnHourChanged_Event_2_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MissionTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.ReceiveBeginPlay");

	ABP_MissionTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.StartBindingTrack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldStart                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::StartBindingTrack(bool ShouldStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.StartBindingTrack");

	ABP_MissionTrigger_C_StartBindingTrack_Params params;
	params.ShouldStart = ShouldStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.TimerCheckForTrackedJob
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::TimerCheckForTrackedJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.TimerCheckForTrackedJob");

	ABP_MissionTrigger_C_TimerCheckForTrackedJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.IOnSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::IOnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.IOnSelected");

	ABP_MissionTrigger_C_IOnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.AsynchLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void ABP_MissionTrigger_C::AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.AsynchLoad");

	ABP_MissionTrigger_C_AsynchLoad_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicStarted_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MissionTrigger_C::OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicStarted_MM_Event_1");

	ABP_MissionTrigger_C_OnCinematicStarted_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicEnded_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MissionTrigger_C::OnCinematicEnded_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicEnded_MM_Event_1");

	ABP_MissionTrigger_C_OnCinematicEnded_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionTrigger_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadingFinished_MM_Event_1");

	ABP_MissionTrigger_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.KeepBikeDead
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::KeepBikeDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.KeepBikeDead");

	ABP_MissionTrigger_C_KeepBikeDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_MissionTrigger_C::BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_MissionTrigger_C::BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_MissionTrigger_C::BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.ForceEnding
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::ForceEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.ForceEnding");

	ABP_MissionTrigger_C_ForceEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::PopupResponse(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse");

	ABP_MissionTrigger_C_PopupResponse_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_MissionTrigger_C::BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_MissionTrigger_C::BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BindEnterVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::BindEnterVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BindEnterVehicle");

	ABP_MissionTrigger_C_BindEnterVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.UnbindEventEnterVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::UnbindEventEnterVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.UnbindEventEnterVehicle");

	ABP_MissionTrigger_C_UnbindEventEnterVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedEnteringVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedEnteringVehicle_Event_1");

	ABP_MissionTrigger_C_OnRiderStartedEnteringVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedExitingVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedExitingVehicle_Event_1");

	ABP_MissionTrigger_C_OnRiderStartedExitingVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.SetCurrentSphereRadius
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::SetCurrentSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.SetCurrentSphereRadius");

	ABP_MissionTrigger_C_SetCurrentSphereRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnNewMissionOrJobTracked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::OnNewMissionOrJobTracked(class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnNewMissionOrJobTracked");

	ABP_MissionTrigger_C_OnNewMissionOrJobTracked_Params params;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadedToBlack_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionTrigger_C::OnFadedToBlack_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadedToBlack_MM_Event_1");

	ABP_MissionTrigger_C_OnFadedToBlack_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.checkforout
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTrigger_C::checkforout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.checkforout");

	ABP_MissionTrigger_C_checkforout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.ReceivePreSaveGameLoaded");

	ABP_MissionTrigger_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MissionTrigger_C_BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::PopupResponse_Copy(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse_Copy");

	ABP_MissionTrigger_C_PopupResponse_Copy_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTrigger.BP_MissionTrigger_C.ExecuteUbergraph_BP_MissionTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTrigger_C::ExecuteUbergraph_BP_MissionTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTrigger.BP_MissionTrigger_C.ExecuteUbergraph_BP_MissionTrigger");

	ABP_MissionTrigger_C_ExecuteUbergraph_BP_MissionTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
