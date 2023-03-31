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

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetCurrentCheckpointCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::I_GetCurrentCheckpointCount(int* Count, int* MaxCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetCurrentCheckpointCount");

	ABP_MissionScriptBase_C_I_GetCurrentCheckpointCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
	if (MaxCount != nullptr)
		*MaxCount = params.MaxCount;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetDoonceVariable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   init_d                         (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   Closed                         (Parm, OutParm, ZeroConstructor)
// int                            highest_index_used             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::I_GetDoonceVariable(TArray<bool>* init_d, TArray<bool>* Closed, int* highest_index_used)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetDoonceVariable");

	ABP_MissionScriptBase_C_I_GetDoonceVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (init_d != nullptr)
		*init_d = params.init_d;
	if (Closed != nullptr)
		*Closed = params.Closed;
	if (highest_index_used != nullptr)
		*highest_index_used = params.highest_index_used;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GenerateFailingLocalizedText
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionFailureSubject>* Subject                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionFailureType>* Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_MissionScriptBase_C::GenerateFailingLocalizedText(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GenerateFailingLocalizedText");

	ABP_MissionScriptBase_C_GenerateFailingLocalizedText_Params params;
	params.Subject = Subject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateHealthBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RemoveBar                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          inverseBar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionScriptBase_C::UpdateHealthBar(bool* RemoveBar, float* NewHealth, float* MaxHealth, bool* inverseBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateHealthBar");

	ABP_MissionScriptBase_C_UpdateHealthBar_Params params;
	params.RemoveBar = RemoveBar;
	params.NewHealth = NewHealth;
	params.MaxHealth = MaxHealth;
	params.inverseBar = inverseBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.CollectMissionStarts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::CollectMissionStarts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.CollectMissionStarts");

	ABP_MissionScriptBase_C_CollectMissionStarts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Pre-InitializeBuddiesForIntroCins
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::Pre_InitializeBuddiesForIntroCins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Pre-InitializeBuddiesForIntroCins");

	ABP_MissionScriptBase_C_Pre_InitializeBuddiesForIntroCins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DoesProperPawnExistInSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionStartLocation_C* MissionStartLocation           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExtraPawn                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PawnExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               PawnRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::DoesProperPawnExistInSlot(class ABP_MissionStartLocation_C* MissionStartLocation, bool IsExtraPawn, bool* PawnExists, class ABendPawn** PawnRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.DoesProperPawnExistInSlot");

	ABP_MissionScriptBase_C_DoesProperPawnExistInSlot_Params params;
	params.MissionStartLocation = MissionStartLocation;
	params.IsExtraPawn = IsExtraPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PawnExists != nullptr)
		*PawnExists = params.PawnExists;
	if (PawnRef != nullptr)
		*PawnRef = params.PawnRef;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveInAFrame
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::SaveInAFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveInAFrame");

	ABP_MissionScriptBase_C_SaveInAFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMissionEndingPositions
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              PlayerPosition                 (Parm, OutParm, IsPlainOldData)
// struct FTransform              BikePosition                   (Parm, OutParm, IsPlainOldData)
// bool                           OnBike                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::GetMissionEndingPositions(struct FTransform* PlayerPosition, struct FTransform* BikePosition, bool* OnBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMissionEndingPositions");

	ABP_MissionScriptBase_C_GetMissionEndingPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPosition != nullptr)
		*PlayerPosition = params.PlayerPosition;
	if (BikePosition != nullptr)
		*BikePosition = params.BikePosition;
	if (OnBike != nullptr)
		*OnBike = params.OnBike;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetAllObjectives
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendObjective*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ABendObjective*> ABP_MissionScriptBase_C::GetAllObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetAllObjectives");

	ABP_MissionScriptBase_C_GetAllObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMainObjectives
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendObjective*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ABendObjective*> ABP_MissionScriptBase_C::GetMainObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMainObjectives");

	ABP_MissionScriptBase_C_GetMainObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetSideObjectives
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendObjective*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ABendObjective*> ABP_MissionScriptBase_C::GetSideObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetSideObjectives");

	ABP_MissionScriptBase_C_GetSideObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetCurrentScoringVariables
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Deaths                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            kills                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::GetCurrentScoringVariables(float* Time, int* Deaths, int* kills)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetCurrentScoringVariables");

	ABP_MissionScriptBase_C_GetCurrentScoringVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
	if (Deaths != nullptr)
		*Deaths = params.Deaths;
	if (kills != nullptr)
		*kills = params.kills;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateObjectiveProgression
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MissionScriptBase_C::UpdateObjectiveProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateObjectiveProgression");

	ABP_MissionScriptBase_C_UpdateObjectiveProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DebugForceObjectiveStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ObjectiveStage                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallOnCheckpointLoaded         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideCheckpointLoadedIndex  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SaveAtThisIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::DebugForceObjectiveStage(int ObjectiveStage, bool CallOnCheckpointLoaded, int OverrideCheckpointLoadedIndex, int SaveAtThisIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.DebugForceObjectiveStage");

	ABP_MissionScriptBase_C_DebugForceObjectiveStage_Params params;
	params.ObjectiveStage = ObjectiveStage;
	params.CallOnCheckpointLoaded = CallOnCheckpointLoaded;
	params.OverrideCheckpointLoadedIndex = OverrideCheckpointLoadedIndex;
	params.SaveAtThisIndex = SaveAtThisIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveCheckpointByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint_Index               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::SaveCheckpointByIndex(int Checkpoint_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveCheckpointByIndex");

	ABP_MissionScriptBase_C_SaveCheckpointByIndex_Params params;
	params.Checkpoint_Index = Checkpoint_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ResetObjectivesToCheckpoint
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::ResetObjectivesToCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ResetObjectivesToCheckpoint");

	ABP_MissionScriptBase_C_ResetObjectivesToCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StoreVehicles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            The_Vehicle                    (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::StoreVehicles(class AVehiclePawn* The_Vehicle, class ABP_MissionStartLocation_C* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.StoreVehicles");

	ABP_MissionScriptBase_C_StoreVehicles_Params params;
	params.The_Vehicle = The_Vehicle;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Should remove Any from bike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint__                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::Should_remove_Any_from_bike(int Checkpoint__)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Should remove Any from bike");

	ABP_MissionScriptBase_C_Should_remove_Any_from_bike_Params params;
	params.Checkpoint__ = Checkpoint__;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetupAllStartLocationsAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint_Number              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StreamEverythingAround         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdateCamera              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraPointLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDoPlayerTeleport           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TeleportBuddy                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontTeleportPlayerBike         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontTeleportBuddyBike          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABendPawn*>       pawns                          (Parm, OutParm, ZeroConstructor)
// TArray<class AVehiclePawn*>    Vehicles                       (Parm, OutParm, ZeroConstructor)

void ABP_MissionScriptBase_C::SetupAllStartLocationsAtIndex(int Checkpoint_Number, bool StreamEverythingAround, bool ForceUpdateCamera, const struct FVector& CameraPointLocation, bool DontDoPlayerTeleport, bool TeleportBuddy, bool DontTeleportPlayerBike, bool DontTeleportBuddyBike, TArray<class ABendPawn*>* pawns, TArray<class AVehiclePawn*>* Vehicles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetupAllStartLocationsAtIndex");

	ABP_MissionScriptBase_C_SetupAllStartLocationsAtIndex_Params params;
	params.Checkpoint_Number = Checkpoint_Number;
	params.StreamEverythingAround = StreamEverythingAround;
	params.ForceUpdateCamera = ForceUpdateCamera;
	params.CameraPointLocation = CameraPointLocation;
	params.DontDoPlayerTeleport = DontDoPlayerTeleport;
	params.TeleportBuddy = TeleportBuddy;
	params.DontTeleportPlayerBike = DontTeleportPlayerBike;
	params.DontTeleportBuddyBike = DontTeleportBuddyBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pawns != nullptr)
		*pawns = params.pawns;
	if (Vehicles != nullptr)
		*Vehicles = params.Vehicles;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StartWithMissionFailure
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::StartWithMissionFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.StartWithMissionFailure");

	ABP_MissionScriptBase_C_StartWithMissionFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StorePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               ThePawn                        (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* MissionStart                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExtraPawn_                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDestroyPawn                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::StorePawn(class ABendPawn* ThePawn, class ABP_MissionStartLocation_C* MissionStart, bool ExtraPawn_, bool DontDestroyPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.StorePawn");

	ABP_MissionScriptBase_C_StorePawn_Params params;
	params.ThePawn = ThePawn;
	params.MissionStart = MissionStart;
	params.ExtraPawn_ = ExtraPawn_;
	params.DontDestroyPawn = DontDestroyPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Set Ai Settings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionStartLocation_C* Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bitch_                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNotNewSpawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::Set_Ai_Settings(class ABP_MissionStartLocation_C* Location, class ABendPawn* Pawn, class AVehiclePawn* Vehicle, bool Bitch_, bool IsNotNewSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Set Ai Settings");

	ABP_MissionScriptBase_C_Set_Ai_Settings_Params params;
	params.Location = Location;
	params.Pawn = Pawn;
	params.Vehicle = Vehicle;
	params.Bitch_ = Bitch_;
	params.IsNotNewSpawn = IsNotNewSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EndingDeactivateAIAndBikes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::EndingDeactivateAIAndBikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.EndingDeactivateAIAndBikes");

	ABP_MissionScriptBase_C_EndingDeactivateAIAndBikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpBuddyLocationsAtIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontRespawnBuddy               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Don_tDoBuddyBikeTeleport       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::SetUpBuddyLocationsAtIndex(int Checkpoint, bool DontRespawnBuddy, bool Don_tDoBuddyBikeTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpBuddyLocationsAtIndex");

	ABP_MissionScriptBase_C_SetUpBuddyLocationsAtIndex_Params params;
	params.Checkpoint = Checkpoint;
	params.DontRespawnBuddy = DontRespawnBuddy;
	params.Don_tDoBuddyBikeTeleport = Don_tDoBuddyBikeTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Collect Mission Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::Collect_Mission_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Collect Mission Variables");

	ABP_MissionScriptBase_C_Collect_Mission_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Start Ending Mission
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::Start_Ending_Mission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Start Ending Mission");

	ABP_MissionScriptBase_C_Start_Ending_Mission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Init Mission Objectives
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::Init_Mission_Objectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.Init Mission Objectives");

	ABP_MissionScriptBase_C_Init_Mission_Objectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpPlayerLocationsAtIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDoPlayerTeleport           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDoPlayerBikeTeleport       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontRespawnBuddy               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::SetUpPlayerLocationsAtIndex(int Checkpoint, bool DontDoPlayerTeleport, bool DontDoPlayerBikeTeleport, bool DontRespawnBuddy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpPlayerLocationsAtIndex");

	ABP_MissionScriptBase_C_SetUpPlayerLocationsAtIndex_Params params;
	params.Checkpoint = Checkpoint;
	params.DontDoPlayerTeleport = DontDoPlayerTeleport;
	params.DontDoPlayerBikeTeleport = DontDoPlayerBikeTeleport;
	params.DontRespawnBuddy = DontRespawnBuddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.UserConstructionScript");

	ABP_MissionScriptBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MissionScriptBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveBeginPlay");

	ABP_MissionScriptBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.MissionScript-Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DontDoPlayerTeleport           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RespawnBuddy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Don_tTeleportPlayerBike        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Don_tTeleportBuddyBike         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::MissionScript_Initialize(bool DontDoPlayerTeleport, bool RespawnBuddy, bool Don_tTeleportPlayerBike, bool Don_tTeleportBuddyBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.MissionScript-Initialize");

	ABP_MissionScriptBase_C_MissionScript_Initialize_Params params;
	params.DontDoPlayerTeleport = DontDoPlayerTeleport;
	params.RespawnBuddy = RespawnBuddy;
	params.Don_tTeleportPlayerBike = Don_tTeleportPlayerBike;
	params.Don_tTeleportBuddyBike = Don_tTeleportBuddyBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableVolumeFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VolumeNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFailureBuffer          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::EnableVolumeFailure(int VolumeNumber, float OverrideFailureBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableVolumeFailure");

	ABP_MissionScriptBase_C_EnableVolumeFailure_Params params;
	params.VolumeNumber = VolumeNumber;
	params.OverrideFailureBuffer = OverrideFailureBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableVolumeFailure
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::DisableVolumeFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableVolumeFailure");

	ABP_MissionScriptBase_C_DisableVolumeFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveEndPlay");

	ABP_MissionScriptBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.RideAssistOnSeated
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::RideAssistOnSeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.RideAssistOnSeated");

	ABP_MissionScriptBase_C_RideAssistOnSeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePostSaveGameLoaded");

	ABP_MissionScriptBase_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableDistanceFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DistanceCheckedActor           (Parm, ZeroConstructor, IsPlainOldData)
// float                          FailureDistance                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ignore_Z_axis                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseBuddy                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFailureBuffer          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::EnableDistanceFailure(class AActor* DistanceCheckedActor, float FailureDistance, bool Ignore_Z_axis, bool UseBuddy, float OverrideFailureBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableDistanceFailure");

	ABP_MissionScriptBase_C_EnableDistanceFailure_Params params;
	params.DistanceCheckedActor = DistanceCheckedActor;
	params.FailureDistance = FailureDistance;
	params.Ignore_Z_axis = Ignore_Z_axis;
	params.UseBuddy = UseBuddy;
	params.OverrideFailureBuffer = OverrideFailureBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableDistanceFailure
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::DisableDistanceFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableDistanceFailure");

	ABP_MissionScriptBase_C_DisableDistanceFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SynchStreamingOnPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::SynchStreamingOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.SynchStreamingOnPlayer");

	ABP_MissionScriptBase_C_SynchStreamingOnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDriverEnteredVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::OnDriverEnteredVehicle(class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDriverEnteredVehicle");

	ABP_MissionScriptBase_C_OnDriverEnteredVehicle_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnTeleportToCheckpoint_MM_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Checkpoint                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MissionScriptBase_C::OnTeleportToCheckpoint_MM_Event_1(int Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnTeleportToCheckpoint_MM_Event_1");

	ABP_MissionScriptBase_C_OnTeleportToCheckpoint_MM_Event_1_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.RiderEnterVehicleEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::RiderEnterVehicleEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.RiderEnterVehicleEvents");

	ABP_MissionScriptBase_C_RiderEnterVehicleEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnRiderFinishedEnteringVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::OnRiderFinishedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnRiderFinishedEnteringVehicle_Event_1");

	ABP_MissionScriptBase_C_OnRiderFinishedEnteringVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadThePreviousCheckpoint
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                MessageToDisplay               (Parm, ZeroConstructor)

void ABP_MissionScriptBase_C::LoadThePreviousCheckpoint(struct FString* MessageToDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadThePreviousCheckpoint");

	ABP_MissionScriptBase_C_LoadThePreviousCheckpoint_Params params;
	params.MessageToDisplay = MessageToDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.TrackMissionStates
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::TrackMissionStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.TrackMissionStates");

	ABP_MissionScriptBase_C_TrackMissionStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnemyKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::EnemyKilled(class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnemyKilled");

	ABP_MissionScriptBase_C_EnemyKilled_Params params;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDied_Event_1
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

void ABP_MissionScriptBase_C::OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDied_Event_1");

	ABP_MissionScriptBase_C_OnDied_Event_1_Params params;
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


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPlayerRespawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::OnPlayerRespawned_Event_1(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPlayerRespawned_Event_1");

	ABP_MissionScriptBase_C_OnPlayerRespawned_Event_1_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_SetDoOnceVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   init_d                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   Closed                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MissionScriptBase_C::I_SetDoOnceVariables(int HighestIndex, TArray<bool>* init_d, TArray<bool>* Closed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_SetDoOnceVariables");

	ABP_MissionScriptBase_C_I_SetDoOnceVariables_Params params;
	params.HighestIndex = HighestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (init_d != nullptr)
		*init_d = params.init_d;
	if (Closed != nullptr)
		*Closed = params.Closed;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadPreviousCheckpointWithMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionFailureSubject>* Subject                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionFailureType>* Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::LoadPreviousCheckpointWithMessage(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadPreviousCheckpointWithMessage");

	ABP_MissionScriptBase_C_LoadPreviousCheckpointWithMessage_Params params;
	params.Subject = Subject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFadedToBlack_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_MissionScriptBase_C::OnFadedToBlack_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFadedToBlack_MM_Event_1");

	ABP_MissionScriptBase_C_OnFadedToBlack_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePreSaveGameLoaded");

	ABP_MissionScriptBase_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoadImage
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::AsynchLoadImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoadImage");

	ABP_MissionScriptBase_C_AsynchLoadImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void ABP_MissionScriptBase_C::AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoad");

	ABP_MissionScriptBase_C_AsynchLoad_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.BeginTheMissionFailing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionFailureOptions>* FailureType                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::BeginTheMissionFailing(TEnumAsByte<EMissionFailureOptions>* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.BeginTheMissionFailing");

	ABP_MissionScriptBase_C_BeginTheMissionFailing_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ClearTheMissionFailing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionFailureOptions>* FailureType                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::ClearTheMissionFailing(TEnumAsByte<EMissionFailureOptions>* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ClearTheMissionFailing");

	ABP_MissionScriptBase_C_ClearTheMissionFailing_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ExecuteUbergraph_BP_MissionScriptBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::ExecuteUbergraph_BP_MissionScriptBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.ExecuteUbergraph_BP_MissionScriptBase");

	ABP_MissionScriptBase_C_ExecuteUbergraph_BP_MissionScriptBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnVehicleSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vehicle_Index                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::OnVehicleSpawned__DelegateSignature(class AVehiclePawn* Vehicle, int Vehicle_Index, class ABP_MissionStartLocation_C* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnVehicleSpawned__DelegateSignature");

	ABP_MissionScriptBase_C_OnVehicleSpawned__DelegateSignature_Params params;
	params.Vehicle = Vehicle;
	params.Vehicle_Index = Vehicle_Index;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPawnSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            PawnIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionScriptBase_C::OnPawnSpawned__DelegateSignature(class ABendPawn* Pawn, class ABendAIController* Controller, int PawnIndex, class ABP_MissionStartLocation_C* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPawnSpawned__DelegateSignature");

	ABP_MissionScriptBase_C_OnPawnSpawned__DelegateSignature_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;
	params.PawnIndex = PawnIndex;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFailingMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MissionScriptBase_C::OnFailingMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFailingMission__DelegateSignature");

	ABP_MissionScriptBase_C_OnFailingMission__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
