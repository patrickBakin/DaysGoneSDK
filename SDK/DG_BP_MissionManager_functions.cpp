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

// Function BP_MissionManager.BP_MissionManager_C.SetDLCItemsHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::SetDLCItemsHidden(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.SetDLCItemsHidden");

	ABP_MissionManager_C_SetDLCItemsHidden_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.GiveStorylineRewards
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::GiveStorylineRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GiveStorylineRewards");

	ABP_MissionManager_C_GiveStorylineRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.PullAndStoreAllMissionAndJobRewards
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::PullAndStoreAllMissionAndJobRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.PullAndStoreAllMissionAndJobRewards");

	ABP_MissionManager_C_PullAndStoreAllMissionAndJobRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.GetChapterNameFromEpisode
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMissionCategories>* Act                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_MissionManager_C::GetChapterNameFromEpisode(TEnumAsByte<EMissionCategories>* Act)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GetChapterNameFromEpisode");

	ABP_MissionManager_C_GetChapterNameFromEpisode_Params params;
	params.Act = Act;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FindCinFromLevelNamEdEBUGhACK
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::FindCinFromLevelNamEdEBUGhACK(const struct FName& Level, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FindCinFromLevelNamEdEBUGhACK");

	ABP_MissionManager_C_FindCinFromLevelNamEdEBUGhACK_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MissionManager.BP_MissionManager_C.ChangeBlackScreenFadeSpeed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ChangeBlackScreenFadeSpeed(float* NewSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ChangeBlackScreenFadeSpeed");

	ABP_MissionManager_C_ChangeBlackScreenFadeSpeed_Params params;
	params.NewSpeed = NewSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FailJobDoLoad
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::FailJobDoLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FailJobDoLoad");

	ABP_MissionManager_C_FailJobDoLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ReloadBecauseOfJobFailure
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionFailureSubject>* Subject                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionFailureType>* Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DisplayFailReason              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ReloadBecauseOfJobFailure(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason, bool* DisplayFailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReloadBecauseOfJobFailure");

	ABP_MissionManager_C_ReloadBecauseOfJobFailure_Params params;
	params.Subject = Subject;
	params.Reason = Reason;
	params.DisplayFailReason = DisplayFailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeatherByID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TimeAndWeatherID               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ChangeMissionTimeAndWeatherByID(struct FName* TimeAndWeatherID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeatherByID");

	ABP_MissionManager_C_ChangeMissionTimeAndWeatherByID_Params params;
	params.TimeAndWeatherID = TimeAndWeatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.ReturnFormattedListOfCinematics
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MissionManager_C::ReturnFormattedListOfCinematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReturnFormattedListOfCinematics");

	ABP_MissionManager_C_ReturnFormattedListOfCinematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FigureOutNextJobOrMissionToAutoTrack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::FigureOutNextJobOrMissionToAutoTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FigureOutNextJobOrMissionToAutoTrack");

	ABP_MissionManager_C_FigureOutNextJobOrMissionToAutoTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.GetCurrentTrackedMissionOrJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ABP_MissionManager_C::GetCurrentTrackedMissionOrJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GetCurrentTrackedMissionOrJob");

	ABP_MissionManager_C_GetCurrentTrackedMissionOrJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.TrackAJobOrMission
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OverrideCurrentTracked         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::TrackAJobOrMission(class UObject** DataAsset, bool* OverrideCurrentTracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.TrackAJobOrMission");

	ABP_MissionManager_C_TrackAJobOrMission_Params params;
	params.DataAsset = DataAsset;
	params.OverrideCurrentTracked = OverrideCurrentTracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.IsCinematicSkippable
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::IsCinematicSkippable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.IsCinematicSkippable");

	ABP_MissionManager_C_IsCinematicSkippable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.GetAllAssociatedActiveMissionLevels
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABP_MissionManager_C::GetAllAssociatedActiveMissionLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GetAllAssociatedActiveMissionLevels");

	ABP_MissionManager_C_GetAllAssociatedActiveMissionLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.BlackScreenTickChecks
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::BlackScreenTickChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.BlackScreenTickChecks");

	ABP_MissionManager_C_BlackScreenTickChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FadedIn
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::FadedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadedIn");

	ABP_MissionManager_C_FadedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackDone
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::FadeFromBlackDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackDone");

	ABP_MissionManager_C_FadeFromBlackDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackStart
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::FadeFromBlackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackStart");

	ABP_MissionManager_C_FadeFromBlackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.FadeInStarted
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::FadeInStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadeInStarted");

	ABP_MissionManager_C_FadeInStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.GoToFirstFrameOfBlackScreen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::GoToFirstFrameOfBlackScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GoToFirstFrameOfBlackScreen");

	ABP_MissionManager_C_GoToFirstFrameOfBlackScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugCompleteAllObjectives
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData**       MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugCompleteAllObjectives(class UBendMissionData** MissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugCompleteAllObjectives");

	ABP_MissionManager_C_DebugCompleteAllObjectives_Params params;
	params.MissionData = MissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugSetupSkillsAndData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData**       MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugSetupSkillsAndData(class UBendMissionData** MissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugSetupSkillsAndData");

	ABP_MissionManager_C_DebugSetupSkillsAndData_Params params;
	params.MissionData = MissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.TemporaryEnableBlackScreenPost
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::TemporaryEnableBlackScreenPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.TemporaryEnableBlackScreenPost");

	ABP_MissionManager_C_TemporaryEnableBlackScreenPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.CinematicHasEnded
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::CinematicHasEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.CinematicHasEnded");

	ABP_MissionManager_C_CinematicHasEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugRequestCinematicMovieStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial**              MovieMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaPlayer**           MovieFilea                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue**              MovieSounda                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugRequestCinematicMovieStart(class UMaterial** MovieMaterial, class UMediaPlayer** MovieFilea, class USoundCue** MovieSounda)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugRequestCinematicMovieStart");

	ABP_MissionManager_C_DebugRequestCinematicMovieStart_Params params;
	params.MovieMaterial = MovieMaterial;
	params.MovieFilea = MovieFilea;
	params.MovieSounda = MovieSounda;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.RequestCinematicToStart
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatineeActor**          TheMatinee                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 SafeTeleportPoint              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::RequestCinematicToStart(class AMatineeActor** TheMatinee, class AActor** SafeTeleportPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.RequestCinematicToStart");

	ABP_MissionManager_C_RequestCinematicToStart_Params params;
	params.TheMatinee = TheMatinee;
	params.SafeTeleportPoint = SafeTeleportPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.CheckIfPlayerCinematicPositionValid
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::CheckIfPlayerCinematicPositionValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.CheckIfPlayerCinematicPositionValid");

	ABP_MissionManager_C_CheckIfPlayerCinematicPositionValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.ChangeCinematicFadingColor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicFadingColors>* FadeType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeWhenFadingDone           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ChangeCinematicFadingColor(TEnumAsByte<ECinematicFadingColors>* FadeType, bool* ChangeWhenFadingDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ChangeCinematicFadingColor");

	ABP_MissionManager_C_ChangeCinematicFadingColor_Params params;
	params.FadeType = FadeType;
	params.ChangeWhenFadingDone = ChangeWhenFadingDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.CinematicUnloaded
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::CinematicUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.CinematicUnloaded");

	ABP_MissionManager_C_CinematicUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugStartJobOrMissionFromExecutableString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugStartJobOrMissionFromExecutableString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugStartJobOrMissionFromExecutableString");

	ABP_MissionManager_C_DebugStartJobOrMissionFromExecutableString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.StoreAllMissionTriggers
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::StoreAllMissionTriggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StoreAllMissionTriggers");

	ABP_MissionManager_C_StoreAllMissionTriggers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugLoadWorldDemo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBendMissionData**       OverrideMission                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UJobClassInfo*>   OverrideJobData                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          DoTeleport                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseOverridenData               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SettingCompletedInsteadOfUnlocked (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionCategories>* OverrideCategory               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugLoadWorldDemo(struct FName* RowName, class UBendMissionData** OverrideMission, bool* DoTeleport, bool* UseOverridenData, bool* SettingCompletedInsteadOfUnlocked, TEnumAsByte<EMissionCategories>* OverrideCategory, TArray<class UJobClassInfo*>* OverrideJobData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugLoadWorldDemo");

	ABP_MissionManager_C_DebugLoadWorldDemo_Params params;
	params.RowName = RowName;
	params.OverrideMission = OverrideMission;
	params.DoTeleport = DoTeleport;
	params.UseOverridenData = UseOverridenData;
	params.SettingCompletedInsteadOfUnlocked = SettingCompletedInsteadOfUnlocked;
	params.OverrideCategory = OverrideCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrideJobData != nullptr)
		*OverrideJobData = params.OverrideJobData;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.BeginMission
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>*      MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::BeginMission(TEnumAsByte<EMissionIDs>* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.BeginMission");

	ABP_MissionManager_C_BeginMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeather
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TimeAndWeatherIndex            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ChangeMissionTimeAndWeather(int* TimeAndWeatherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeather");

	ABP_MissionManager_C_ChangeMissionTimeAndWeather_Params params;
	params.TimeAndWeatherIndex = TimeAndWeatherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.GiveMissionRewards
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData**       MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::GiveMissionRewards(class UBendMissionData** MissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.GiveMissionRewards");

	ABP_MissionManager_C_GiveMissionRewards_Params params;
	params.MissionData = MissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.ResetWorldSettingsToDefault
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::ResetWorldSettingsToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ResetWorldSettingsToDefault");

	ABP_MissionManager_C_ResetWorldSettingsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.SetCustomWorldSettings
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::SetCustomWorldSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.SetCustomWorldSettings");

	ABP_MissionManager_C_SetCustomWorldSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugLoadMissionNow
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>*      MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugLoadMissionNow(TEnumAsByte<EMissionIDs>* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugLoadMissionNow");

	ABP_MissionManager_C_DebugLoadMissionNow_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugSetAllMissionPreReqsToComplete
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData**       TheData                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionManager_C::DebugSetAllMissionPreReqsToComplete(class UBendMissionData** TheData, bool* IncludeSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugSetAllMissionPreReqsToComplete");

	ABP_MissionManager_C_DebugSetAllMissionPreReqsToComplete_Params params;
	params.TheData = TheData;
	params.IncludeSelf = IncludeSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionManager.BP_MissionManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.UserConstructionScript");

	ABP_MissionManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FinishedFunc");

	ABP_MissionManager_C_FadingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__UpdateFunc");

	ABP_MissionManager_C_FadingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackDone__EventFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__FadeFromBlackDone__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackDone__EventFunc");

	ABP_MissionManager_C_FadingTimeline__FadeFromBlackDone__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackStart__EventFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__FadeFromBlackStart__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackStart__EventFunc");

	ABP_MissionManager_C_FadingTimeline__FadeFromBlackStart__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__BlackScreenTicks__EventFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__BlackScreenTicks__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__BlackScreenTicks__EventFunc");

	ABP_MissionManager_C_FadingTimeline__BlackScreenTicks__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadedIn__EventFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__FadedIn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadedIn__EventFunc");

	ABP_MissionManager_C_FadingTimeline__FadedIn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeInStart__EventFunc
// (BlueprintEvent)

void ABP_MissionManager_C::FadingTimeline__FadeInStart__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeInStart__EventFunc");

	ABP_MissionManager_C_FadingTimeline__FadeInStart__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__FinishedFunc
// (BlueprintEvent)

void ABP_MissionManager_C::PostProcessFadeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__FinishedFunc");

	ABP_MissionManager_C_PostProcessFadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__UpdateFunc
// (BlueprintEvent)

void ABP_MissionManager_C::PostProcessFadeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__UpdateFunc");

	ABP_MissionManager_C_PostProcessFadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_MissionManager_C::InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236");

	ABP_MissionManager_C_InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.StartFading
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::StartFading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StartFading");

	ABP_MissionManager_C_StartFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.StopFading
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::StopFading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StopFading");

	ABP_MissionManager_C_StopFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.HandleIntroCin
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndOfCinematic                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::HandleIntroCin(bool* EndOfCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.HandleIntroCin");

	ABP_MissionManager_C_HandleIntroCin_Params params;
	params.EndOfCinematic = EndOfCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.HandleMidCin
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndOfCinematic                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::HandleMidCin(bool* EndOfCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.HandleMidCin");

	ABP_MissionManager_C_HandleMidCin_Params params;
	params.EndOfCinematic = EndOfCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.HandleEndingCin
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndOfCinematic                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::HandleEndingCin(bool* EndOfCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.HandleEndingCin");

	ABP_MissionManager_C_HandleEndingCin_Params params;
	params.EndOfCinematic = EndOfCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnPlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::OnPlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnPlayerRespawned");

	ABP_MissionManager_C_OnPlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.TeleportToCheckpoint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::TeleportToCheckpoint(int* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.TeleportToCheckpoint");

	ABP_MissionManager_C_TeleportToCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReceivePostSaveGameLoaded");

	ABP_MissionManager_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnMovieEndReached
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OnMovieEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnMovieEndReached");

	ABP_MissionManager_C_OnMovieEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReceivePreSaveGameLoaded");

	ABP_MissionManager_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.HandlePlayerDeathAndRespawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::HandlePlayerDeathAndRespawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.HandlePlayerDeathAndRespawning");

	ABP_MissionManager_C_HandlePlayerDeathAndRespawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.FadeInPostProcessToCin
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::FadeInPostProcessToCin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.FadeInPostProcessToCin");

	ABP_MissionManager_C_FadeInPostProcessToCin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.StartChainedMissionOnDelay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>*      MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::StartChainedMissionOnDelay(TEnumAsByte<EMissionIDs>* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StartChainedMissionOnDelay");

	ABP_MissionManager_C_StartChainedMissionOnDelay_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.LoadInLevelsAndPlayCinematic
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::LoadInLevelsAndPlayCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.LoadInLevelsAndPlayCinematic");

	ABP_MissionManager_C_LoadInLevelsAndPlayCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugEndMovieFile
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::DebugEndMovieFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugEndMovieFile");

	ABP_MissionManager_C_DebugEndMovieFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.CheckUnlocksOnTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::CheckUnlocksOnTime(int Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.CheckUnlocksOnTime");

	ABP_MissionManager_C_CheckUnlocksOnTime_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReceiveEndPlay");

	ABP_MissionManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.SkipCurrentCinematic
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::SkipCurrentCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.SkipCurrentCinematic");

	ABP_MissionManager_C_SkipCurrentCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.RemoveCinematicSkipButton
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::RemoveCinematicSkipButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.RemoveCinematicSkipButton");

	ABP_MissionManager_C_RemoveCinematicSkipButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.DisplayCinematicSkipButton
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::DisplayCinematicSkipButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DisplayCinematicSkipButton");

	ABP_MissionManager_C_DisplayCinematicSkipButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ReceiveTick");

	ABP_MissionManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.BindOnHourChange
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::BindOnHourChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.BindOnHourChange");

	ABP_MissionManager_C_BindOnHourChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnCinematicStarted_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MissionManager_C::OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnCinematicStarted_MM_Event_1");

	ABP_MissionManager_C_OnCinematicStarted_MM_Event_1_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionManager_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_1");

	ABP_MissionManager_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.StartRecordAllCinematics
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::StartRecordAllCinematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StartRecordAllCinematics");

	ABP_MissionManager_C_StartRecordAllCinematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugSkipInvalidCinOnDelay
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::DebugSkipInvalidCinOnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugSkipInvalidCinOnDelay");

	ABP_MissionManager_C_DebugSkipInvalidCinOnDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.JobManagerLoaded
// (Event, Public, BlueprintEvent)

void ABP_MissionManager_C::JobManagerLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.JobManagerLoaded");

	ABP_MissionManager_C_JobManagerLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnTrustModified_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ModificationAmount             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetDirectly                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::OnTrustModified_Event_1(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnTrustModified_Event_1");

	ABP_MissionManager_C_OnTrustModified_Event_1_Params params;
	params.Encampment = Encampment;
	params.ModificationAmount = ModificationAmount;
	params.SetDirectly = SetDirectly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnFadedToBlack_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionManager_C::OnFadedToBlack_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnFadedToBlack_MM_Event_1");

	ABP_MissionManager_C_OnFadedToBlack_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnDiedOrDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDied                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnDiedOrDestroyed_Event_1");

	ABP_MissionManager_C_OnDiedOrDestroyed_Event_1_Params params;
	params.Pawn = Pawn;
	params.bDied = bDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnTrustTierChanged_EventForTrophies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        PreviousTier                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        NewTier                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::OnTrustTierChanged_EventForTrophies(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnTrustTierChanged_EventForTrophies");

	ABP_MissionManager_C_OnTrustTierChanged_EventForTrophies_Params params;
	params.Encampment = Encampment;
	params.PreviousTier = PreviousTier;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.DebugUXTestingScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset**             AssetRelated                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::DebugUXTestingScreen(class UDataAsset** AssetRelated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.DebugUXTestingScreen");

	ABP_MissionManager_C_DebugUXTestingScreen_Params params;
	params.AssetRelated = AssetRelated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.InputClosed_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::InputClosed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.InputClosed_Event_1");

	ABP_MissionManager_C_InputClosed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.SpawnAllAvailableInFrameDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::SpawnAllAvailableInFrameDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.SpawnAllAvailableInFrameDebug");

	ABP_MissionManager_C_SpawnAllAvailableInFrameDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OWVOUnlockMission
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OWVOUnlockMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OWVOUnlockMission");

	ABP_MissionManager_C_OWVOUnlockMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ActivateCinematicMode_Code
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MarkCinematicActive            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AffectsHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECinematicHidingTypes>* HideActors                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ActivateCinematicMode_Code(bool* MarkCinematicActive, bool* AffectsHUD, TEnumAsByte<ECinematicHidingTypes>* HideActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ActivateCinematicMode_Code");

	ABP_MissionManager_C_ActivateCinematicMode_Code_Params params;
	params.MarkCinematicActive = MarkCinematicActive;
	params.AffectsHUD = AffectsHUD;
	params.HideActors = HideActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.UpdateFailureCounts
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::UpdateFailureCounts(bool* Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.UpdateFailureCounts");

	ABP_MissionManager_C_UpdateFailureCounts_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionManager_C::OnFadingFinished_MM_Event_0_Copy(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy");

	ABP_MissionManager_C_OnFadingFinished_MM_Event_0_Copy_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::PopupCallback_Event_1(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_1");

	ABP_MissionManager_C_PopupCallback_Event_1_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.CheckOptionalSkips
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::CheckOptionalSkips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.CheckOptionalSkips");

	ABP_MissionManager_C_CheckOptionalSkips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionManager_C::OnFadingFinished_MM_Event_0_Copy_Copy(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy_Copy");

	ABP_MissionManager_C_OnFadingFinished_MM_Event_0_Copy_Copy_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::PopupCallback_Event_0_Copy(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_0_Copy");

	ABP_MissionManager_C_PopupCallback_Event_0_Copy_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnGameSaved_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveGameType>     SaveGameType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::OnGameSaved_Event_1(TEnumAsByte<ESaveGameType> SaveGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnGameSaved_Event_1");

	ABP_MissionManager_C_OnGameSaved_Event_1_Params params;
	params.SaveGameType = SaveGameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.StartEndingDLCMission
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::StartEndingDLCMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.StartEndingDLCMission");

	ABP_MissionManager_C_StartEndingDLCMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnWaitForPostChallengeWidgets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OnWaitForPostChallengeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnWaitForPostChallengeWidgets");

	ABP_MissionManager_C_OnWaitForPostChallengeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteQuit_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OnPostChallengeCompleteQuit_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteQuit_Event_1");

	ABP_MissionManager_C_OnPostChallengeCompleteQuit_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteRetry_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OnPostChallengeCompleteRetry_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteRetry_Event_1");

	ABP_MissionManager_C_OnPostChallengeCompleteRetry_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.BindDLCMissionEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::BindDLCMissionEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.BindDLCMissionEvents");

	ABP_MissionManager_C_BindDLCMissionEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.UnBindDLCMissionEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::UnBindDLCMissionEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.UnBindDLCMissionEvents");

	ABP_MissionManager_C_UnBindDLCMissionEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.OnCharSkinApplied_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionManager_C::OnCharSkinApplied_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.OnCharSkinApplied_Event_1");

	ABP_MissionManager_C_OnCharSkinApplied_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionManager.BP_MissionManager_C.ExecuteUbergraph_BP_MissionManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionManager_C::ExecuteUbergraph_BP_MissionManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionManager.BP_MissionManager_C.ExecuteUbergraph_BP_MissionManager");

	ABP_MissionManager_C_ExecuteUbergraph_BP_MissionManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
