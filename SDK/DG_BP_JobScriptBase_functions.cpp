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

// Function BP_JobScriptBase.BP_JobScriptBase_C.AttemptToPlayLateVO
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::AttemptToPlayLateVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.AttemptToPlayLateVO");

	ABP_JobScriptBase_C_AttemptToPlayLateVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.SetupLateVO
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::SetupLateVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.SetupLateVO");

	ABP_JobScriptBase_C_SetupLateVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobInWorldMarkerVisibility
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::ChangeJobInWorldMarkerVisibility(struct FName* ObjIdentifier, int* MapIconIndex, bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobInWorldMarkerVisibility");

	ABP_JobScriptBase_C_ChangeJobInWorldMarkerVisibility_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.AddPathToObjective
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundPath                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::AddPathToObjective(bool* FoundPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.AddPathToObjective");

	ABP_JobScriptBase_C_AddPathToObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPath != nullptr)
		*FoundPath = params.FoundPath;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToLocked
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobObjectives*     Objective                      (Parm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForcedChange                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateObjectiveToLocked(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToLocked");

	ABP_JobScriptBase_C_UpdateObjectiveToLocked_Params params;
	params.Objective = Objective;
	params.Index = Index;
	params.ForcedChange = ForcedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToComplete
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobObjectives*     Objective                      (Parm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForcedChange                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateObjectiveToComplete(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToComplete");

	ABP_JobScriptBase_C_UpdateObjectiveToComplete_Params params;
	params.Objective = Objective;
	params.Index = Index;
	params.ForcedChange = ForcedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToFailed
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobObjectives*     Objective                      (Parm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForcedChange                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateObjectiveToFailed(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToFailed");

	ABP_JobScriptBase_C_UpdateObjectiveToFailed_Params params;
	params.Objective = Objective;
	params.Index = Index;
	params.ForcedChange = ForcedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToUnlocked
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobObjectives*     Objective                      (Parm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForcedChange                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateObjectiveToUnlocked(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToUnlocked");

	ABP_JobScriptBase_C_UpdateObjectiveToUnlocked_Params params;
	params.Objective = Objective;
	params.Index = Index;
	params.ForcedChange = ForcedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GetIsCurrentlyInScreenQue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InQue                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentDisplay                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::GetIsCurrentlyInScreenQue(bool* InQue, bool* CurrentDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GetIsCurrentlyInScreenQue");

	ABP_JobScriptBase_C_GetIsCurrentlyInScreenQue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InQue != nullptr)
		*InQue = params.InQue;
	if (CurrentDisplay != nullptr)
		*CurrentDisplay = params.CurrentDisplay;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.TryRemoveObjectiveFromScreen
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveStates>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::TryRemoveObjectiveFromScreen(TEnumAsByte<EObjectiveStates>* NewState, int* ObjectiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.TryRemoveObjectiveFromScreen");

	ABP_JobScriptBase_C_TryRemoveObjectiveFromScreen_Params params;
	params.NewState = NewState;
	params.ObjectiveIndex = ObjectiveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.TryAddObjectiveToScreen
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewText                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          sideObjective                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::TryAddObjectiveToScreen(struct FText* NewText, bool* sideObjective, int* ObjectiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.TryAddObjectiveToScreen");

	ABP_JobScriptBase_C_TryAddObjectiveToScreen_Params params;
	params.NewText = NewText;
	params.sideObjective = sideObjective;
	params.ObjectiveIndex = ObjectiveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.SendGenericJobScriptMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::SendGenericJobScriptMessage(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.SendGenericJobScriptMessage");

	ABP_JobScriptBase_C_SendGenericJobScriptMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GoBackToJobObjectiveStage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TheStage                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::GoBackToJobObjectiveStage(int* TheStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GoBackToJobObjectiveStage");

	ABP_JobScriptBase_C_GoBackToJobObjectiveStage_Params params;
	params.TheStage = TheStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ForceObjectiveStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::ForceObjectiveStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ForceObjectiveStates");

	ABP_JobScriptBase_C_ForceObjectiveStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GetCurrentCounterCount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            TheCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::GetCurrentCounterCount(struct FName* ObjIdentifier, int* TheCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GetCurrentCounterCount");

	ABP_JobScriptBase_C_GetCurrentCounterCount_Params params;
	params.ObjIdentifier = ObjIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheCount != nullptr)
		*TheCount = params.TheCount;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GetObjectiveState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveStates>  CurrentState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::GetObjectiveState(struct FName* ObjIdentifier, TEnumAsByte<EObjectiveStates>* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GetObjectiveState");

	ABP_JobScriptBase_C_GetObjectiveState_Params params;
	params.ObjIdentifier = ObjIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToItem
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::AttachJobMapMarkerToItem(struct FName* ObjIdentifier, int* MapIconIndex, class AActor** TheActor, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToItem");

	ABP_JobScriptBase_C_AttachJobMapMarkerToItem_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.TheActor = TheActor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::ChangeJobMiniMapLocation(struct FName* ObjIdentifier, int* MapIconIndex, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapLocation");

	ABP_JobScriptBase_C_ChangeJobMiniMapLocation_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.DetachJobMapMarker
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::DetachJobMapMarker(struct FName* ObjIdentifier, int* MapIconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.DetachJobMapMarker");

	ABP_JobScriptBase_C_DetachJobMapMarker_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  NewFText                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          DisplayToScreen                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateObjectiveText(struct FName* ObjIdentifier, struct FText* NewFText, bool* DisplayToScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveText");

	ABP_JobScriptBase_C_UpdateObjectiveText_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.NewFText = NewFText;
	params.DisplayToScreen = DisplayToScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMapMarkerType
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsObjectiveRegion              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RegionSize                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::ChangeJobMapMarkerType(struct FName* ObjIdentifier, int* MapIconIndex, bool* IsObjectiveRegion, float* RegionSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMapMarkerType");

	ABP_JobScriptBase_C_ChangeJobMapMarkerType_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.IsObjectiveRegion = IsObjectiveRegion;
	params.RegionSize = RegionSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GetActiveJobObjectivesData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendJobObjectives> Objectives                     (Parm, OutParm, ZeroConstructor)

void ABP_JobScriptBase_C::GetActiveJobObjectivesData(TArray<struct FBendJobObjectives>* Objectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GetActiveJobObjectivesData");

	ABP_JobScriptBase_C_GetActiveJobObjectivesData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objectives != nullptr)
		*Objectives = params.Objectives;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapMarkerVisibility
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HideOnMap                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HideOnMiniMap                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::ChangeJobMiniMapMarkerVisibility(struct FName* ObjIdentifier, int* MapIconIndex, bool* HideOnMap, bool* HideOnMiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapMarkerVisibility");

	ABP_JobScriptBase_C_ChangeJobMiniMapMarkerVisibility_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.HideOnMap = HideOnMap;
	params.HideOnMiniMap = HideOnMiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.OverrideJobMapImages
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OverrideAllInObjective         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             OverrideIcon                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             OverrideImage                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::OverrideJobMapImages(struct FName* ObjIdentifier, bool* OverrideAllInObjective, int* MapIconIndex, class UTexture2D** OverrideIcon, class UTexture2D** OverrideImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.OverrideJobMapImages");

	ABP_JobScriptBase_C_OverrideJobMapImages_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.OverrideAllInObjective = OverrideAllInObjective;
	params.MapIconIndex = MapIconIndex;
	params.OverrideIcon = OverrideIcon;
	params.OverrideImage = OverrideImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.StoreMapMarkers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UChildActorComponent*>* MapMarkers                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::StoreMapMarkers(TArray<class UChildActorComponent*>* MapMarkers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.StoreMapMarkers");

	ABP_JobScriptBase_C_StoreMapMarkers_Params params;
	params.MapMarkers = MapMarkers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.PauseTheJobScript
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Pause                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::PauseTheJobScript(bool* Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.PauseTheJobScript");

	ABP_JobScriptBase_C_PauseTheJobScript_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.MarkJobAsActiveFocus
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TheFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::MarkJobAsActiveFocus(bool* TheFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.MarkJobAsActiveFocus");

	ABP_JobScriptBase_C_MarkJobAsActiveFocus_Params params;
	params.TheFocus = TheFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.SetUpMapMarkersForObjective
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AddMarkers                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ObjDescriptionText             (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FBendJobObjectiveMarkers>* MarkerData                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBendJobObjectiveMarkers> NewMarkerData                  (Parm, OutParm, ZeroConstructor)

void ABP_JobScriptBase_C::SetUpMapMarkersForObjective(bool* AddMarkers, int* ObjectiveIndex, struct FText* ObjDescriptionText, TArray<struct FBendJobObjectiveMarkers>* MarkerData, TArray<struct FBendJobObjectiveMarkers>* NewMarkerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.SetUpMapMarkersForObjective");

	ABP_JobScriptBase_C_SetUpMapMarkersForObjective_Params params;
	params.AddMarkers = AddMarkers;
	params.ObjectiveIndex = ObjectiveIndex;
	params.ObjDescriptionText = ObjDescriptionText;
	params.MarkerData = MarkerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewMarkerData != nullptr)
		*NewMarkerData = params.NewMarkerData;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveProgression
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateJobObjectiveProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveProgression");

	ABP_JobScriptBase_C_UpdateJobObjectiveProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.StoreJobScriptVariables
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobsID                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::StoreJobScriptVariables(class UJobClassInfo** JobsID, int* OverrideIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.StoreJobScriptVariables");

	ABP_JobScriptBase_C_StoreJobScriptVariables_Params params;
	params.JobsID = JobsID;
	params.OverrideIndex = OverrideIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.CompleteTheJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::CompleteTheJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.CompleteTheJob");

	ABP_JobScriptBase_C_CompleteTheJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.FailTheJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::FailTheJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.FailTheJob");

	ABP_JobScriptBase_C_FailTheJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveCounter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncrementOne                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CustomCount                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DisplayToScreen                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateJobObjectiveCounter(struct FName* ObjIdentifier, bool* IncrementOne, int* CustomCount, bool* DisplayToScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveCounter");

	ABP_JobScriptBase_C_UpdateJobObjectiveCounter_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.IncrementOne = IncrementOne;
	params.CustomCount = CustomCount;
	params.DisplayToScreen = DisplayToScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveStatus
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveStates>* ObjState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::UpdateJobObjectiveStatus(struct FName* ObjIdentifier, TEnumAsByte<EObjectiveStates>* ObjState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveStatus");

	ABP_JobScriptBase_C_UpdateJobObjectiveStatus_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.ObjState = ObjState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.InitJobObjectives
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::InitJobObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.InitJobObjectives");

	ABP_JobScriptBase_C_InitJobObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.InitializeJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UChildActorComponent*>* MiniMapMarkers                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          EndWhenObjectivesComplete      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobScriptBase_C::InitializeJob(TArray<class UChildActorComponent*>* MiniMapMarkers, bool* EndWhenObjectivesComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.InitializeJob");

	ABP_JobScriptBase_C_InitializeJob_Params params;
	params.MiniMapMarkers = MiniMapMarkers;
	params.EndWhenObjectivesComplete = EndWhenObjectivesComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.UserConstructionScript");

	ABP_JobScriptBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentlySpawnedRef            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OriginalLocation               (Parm, IsPlainOldData)

void ABP_JobScriptBase_C::GlobalObjectHandler(class AActor* CurrentlySpawnedRef, const struct FTransform& OriginalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectHandler");

	ABP_JobScriptBase_C_GlobalObjectHandler_Params params;
	params.CurrentlySpawnedRef = CurrentlySpawnedRef;
	params.OriginalLocation = OriginalLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_JobScriptBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveBeginPlay");

	ABP_JobScriptBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectTick
// (BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::GlobalObjectTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectTick");

	ABP_JobScriptBase_C_GlobalObjectTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.RemoveGlobalObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RefToRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::RemoveGlobalObject(class AActor* RefToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.RemoveGlobalObject");

	ABP_JobScriptBase_C_RemoveGlobalObject_Params params;
	params.RefToRemove = RefToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.I_InitializeJobScript
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::I_InitializeJobScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.I_InitializeJobScript");

	ABP_JobScriptBase_C_I_InitializeJobScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToPawn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ObjIdentifier                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapIconIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn**              ThePawn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HideOnDeathOrDespawn           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DetachOnDeath                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::AttachJobMapMarkerToPawn(struct FName* ObjIdentifier, int* MapIconIndex, class ABendPawn** ThePawn, bool* HideOnDeathOrDespawn, bool* DetachOnDeath, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToPawn");

	ABP_JobScriptBase_C_AttachJobMapMarkerToPawn_Params params;
	params.ObjIdentifier = ObjIdentifier;
	params.MapIconIndex = MapIconIndex;
	params.ThePawn = ThePawn;
	params.HideOnDeathOrDespawn = HideOnDeathOrDespawn;
	params.DetachOnDeath = DetachOnDeath;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.OnDiedOrDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDied                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.OnDiedOrDestroyed_Event_1");

	ABP_JobScriptBase_C_OnDiedOrDestroyed_Event_1_Params params;
	params.Pawn = Pawn;
	params.bDied = bDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.StartBindingTrack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldStart                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::StartBindingTrack(bool ShouldStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.StartBindingTrack");

	ABP_JobScriptBase_C_StartBindingTrack_Params params;
	params.ShouldStart = ShouldStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.TimerCheckForTrackedJob
// (BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::TimerCheckForTrackedJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.TimerCheckForTrackedJob");

	ABP_JobScriptBase_C_TimerCheckForTrackedJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveEndPlay");

	ABP_JobScriptBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.LoadInImages
// (BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::LoadInImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.LoadInImages");

	ABP_JobScriptBase_C_LoadInImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.BindTimeChange
// (BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::BindTimeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.BindTimeChange");

	ABP_JobScriptBase_C_BindTimeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.HourChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::HourChanged(int Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.HourChanged");

	ABP_JobScriptBase_C_HourChanged_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.AsynchLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void ABP_JobScriptBase_C::AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.AsynchLoad");

	ABP_JobScriptBase_C_AsynchLoad_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.OnNewMissionOrJobTracked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::OnNewMissionOrJobTracked(class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.OnNewMissionOrJobTracked");

	ABP_JobScriptBase_C_OnNewMissionOrJobTracked_Params params;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.BindHighlightAllWhenNothingTracked
// (BlueprintCallable, BlueprintEvent)

void ABP_JobScriptBase_C::BindHighlightAllWhenNothingTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.BindHighlightAllWhenNothingTracked");

	ABP_JobScriptBase_C_BindHighlightAllWhenNothingTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.ExecuteUbergraph_BP_JobScriptBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::ExecuteUbergraph_BP_JobScriptBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.ExecuteUbergraph_BP_JobScriptBase");

	ABP_JobScriptBase_C_ExecuteUbergraph_BP_JobScriptBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobScriptBase.BP_JobScriptBase_C.JobObjUpdateTelemetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveID                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveStates>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobScriptBase_C::JobObjUpdateTelemetry__DelegateSignature(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobScriptBase.BP_JobScriptBase_C.JobObjUpdateTelemetry__DelegateSignature");

	ABP_JobScriptBase_C_JobObjUpdateTelemetry__DelegateSignature_Params params;
	params.JobID = JobID;
	params.ObjectiveID = ObjectiveID;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
