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

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceHordeOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::ForceHordeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceHordeOff");

	ABP_AmbientEvent_Horde_C_ForceHordeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ShowTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::ShowTutorial(class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ShowTutorial");

	ABP_AmbientEvent_Horde_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetJobObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ObjectiveNumber                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::SetJobObjective(int ObjectiveNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetJobObjective");

	ABP_AmbientEvent_Horde_C_SetJobObjective_Params params;
	params.ObjectiveNumber = ObjectiveNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckForCompletion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCompleted                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::CheckForCompletion(bool* IsCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckForCompletion");

	ABP_AmbientEvent_Horde_C_CheckForCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCompleted != nullptr)
		*IsCompleted = params.IsCompleted;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CompleteHorde
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::CompleteHorde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CompleteHorde");

	ABP_AmbientEvent_Horde_C_CompleteHorde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.sqDistanceToClosestPOI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistToGen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::sqDistanceToClosestPOI(float* DistToGen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.sqDistanceToClosestPOI");

	ABP_AmbientEvent_Horde_C_sqDistanceToClosestPOI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistToGen != nullptr)
		*DistToGen = params.DistToGen;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetupReload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::SetupReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetupReload");

	ABP_AmbientEvent_Horde_C_SetupReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckPrequisites
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FailReason                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::CheckPrequisites(bool* CanSpawn, int* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckPrequisites");

	ABP_AmbientEvent_Horde_C_CheckPrequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RenameActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::RenameActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RenameActors");

	ABP_AmbientEvent_Horde_C_RenameActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.NestsClearedinRegion
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UBendNestingZone*> Zone                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ProportionRemaining            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::NestsClearedinRegion(TArray<class UBendNestingZone*>* Zone, float* ProportionRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.NestsClearedinRegion");

	ABP_AmbientEvent_Horde_C_NestsClearedinRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zone != nullptr)
		*Zone = params.Zone;
	if (ProportionRemaining != nullptr)
		*ProportionRemaining = params.ProportionRemaining;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetRegenModifierByInfestationZones
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::SetRegenModifierByInfestationZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetRegenModifierByInfestationZones");

	ABP_AmbientEvent_Horde_C_SetRegenModifierByInfestationZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimespanToDays
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               TimespanIn                     (Parm, ZeroConstructor)
// float                          DaysOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::TimespanToDays(const struct FTimespan& TimespanIn, float* DaysOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimespanToDays");

	ABP_AmbientEvent_Horde_C_TimespanToDays_Params params;
	params.TimespanIn = TimespanIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DaysOut != nullptr)
		*DaysOut = params.DaysOut;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ActivateHorde
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::ActivateHorde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ActivateHorde");

	ABP_AmbientEvent_Horde_C_ActivateHorde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetLastRunTimeFromDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LastRunTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::GetLastRunTimeFromDatabase(float* LastRunTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetLastRunTimeFromDatabase");

	ABP_AmbientEvent_Horde_C_GetLastRunTimeFromDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastRunTime != nullptr)
		*LastRunTime = params.LastRunTime;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetSizeFromDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::GetSizeFromDatabase(int* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetSizeFromDatabase");

	ABP_AmbientEvent_Horde_C_GetSizeFromDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SaveDatabase
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::SaveDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SaveDatabase");

	ABP_AmbientEvent_Horde_C_SaveDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewMembers                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::SetSize(int NewMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetSize");

	ABP_AmbientEvent_Horde_C_SetSize_Params params;
	params.NewMembers = NewMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.AddHordeMembers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeElapsedDays                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GeneratedMembers               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::AddHordeMembers(float TimeElapsedDays, int* GeneratedMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.AddHordeMembers");

	ABP_AmbientEvent_Horde_C_AddHordeMembers_Params params;
	params.TimeElapsedDays = TimeElapsedDays;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GeneratedMembers != nullptr)
		*GeneratedMembers = params.GeneratedMembers;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CalculateTimeSinceLastRun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeElapsed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::CalculateTimeSinceLastRun(float* TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CalculateTimeSinceLastRun");

	ABP_AmbientEvent_Horde_C_CalculateTimeSinceLastRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeElapsed != nullptr)
		*TimeElapsed = params.TimeElapsed;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.UserConstructionScript");

	ABP_AmbientEvent_Horde_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnEventReRunning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker** EventMarker                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::OnEventReRunning(class ABendAmbientEventMarker** EventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnEventReRunning");

	ABP_AmbientEvent_Horde_C_OnEventReRunning_Params params;
	params.EventMarker = EventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveBeginPlay");

	ABP_AmbientEvent_Horde_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeMemberDeath
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

void ABP_AmbientEvent_Horde_C::HordeMemberDeath(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeMemberDeath");

	ABP_AmbientEvent_Horde_C_HordeMemberDeath_Params params;
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


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveEndPlay");

	ABP_AmbientEvent_Horde_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimerEvent1
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::TimerEvent1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimerEvent1");

	ABP_AmbientEvent_Horde_C_TimerEvent1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckUnloadConditions
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::CheckUnloadConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckUnloadConditions");

	ABP_AmbientEvent_Horde_C_CheckUnloadConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceDestroyHorde
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::ForceDestroyHorde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceDestroyHorde");

	ABP_AmbientEvent_Horde_C_ForceDestroyHorde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReloadHorde
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::ReloadHorde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReloadHorde");

	ABP_AmbientEvent_Horde_C_ReloadHorde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.JobStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::JobStarted(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.JobStarted");

	ABP_AmbientEvent_Horde_C_JobStarted_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CreateObjectiveMeter
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::CreateObjectiveMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CreateObjectiveMeter");

	ABP_AmbientEvent_Horde_C_CreateObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.PlayTutorial
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

void ABP_AmbientEvent_Horde_C::PlayTutorial(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.PlayTutorial");

	ABP_AmbientEvent_Horde_C_PlayTutorial_Params params;
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


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OtherJobEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::OtherJobEnded(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OtherJobEnded");

	ABP_AmbientEvent_Horde_C_OtherJobEnded_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RecheckConditions
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::RecheckConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RecheckConditions");

	ABP_AmbientEvent_Horde_C_RecheckConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::OnPlayerDied(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPlayerDied");

	ABP_AmbientEvent_Horde_C_OnPlayerDied_Params params;
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


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_2");

	ABP_AmbientEvent_Horde_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceivePreSaveGameLoaded");

	ABP_AmbientEvent_Horde_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TrackedJobChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::TrackedJobChanged(class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TrackedJobChanged");

	ABP_AmbientEvent_Horde_C_TrackedJobChanged_Params params;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeDespawn
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::HordeDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeDespawn");

	ABP_AmbientEvent_Horde_C_HordeDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::HordeSpawned(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeSpawned");

	ABP_AmbientEvent_Horde_C_HordeSpawned_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEvent_Horde_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_1");

	ABP_AmbientEvent_Horde_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbientEvent_Horde_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ExecuteUbergraph_BP_AmbientEvent_Horde
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEvent_Horde_C::ExecuteUbergraph_BP_AmbientEvent_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ExecuteUbergraph_BP_AmbientEvent_Horde");

	ABP_AmbientEvent_Horde_C_ExecuteUbergraph_BP_AmbientEvent_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
