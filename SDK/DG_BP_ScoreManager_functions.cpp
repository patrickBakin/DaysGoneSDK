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

// Function BP_ScoreManager.BP_ScoreManager_C.ResetTotalTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTotalTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ResetTotalTime(float NewTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ResetTotalTime");

	ABP_ScoreManager_C_ResetTotalTime_Params params;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TIMEEXTENDED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExtendedTimeAmount             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::TIMEEXTENDED(float ExtendedTimeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TIMEEXTENDED");

	ABP_ScoreManager_C_TIMEEXTENDED_Params params;
	params.ExtendedTimeAmount = ExtendedTimeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.BlockAllScoreEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::BlockAllScoreEvents(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.BlockAllScoreEvents");

	ABP_ScoreManager_C_BlockAllScoreEvents_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SortDamageCausers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::SortDamageCausers(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SortDamageCausers");

	ABP_ScoreManager_C_SortDamageCausers_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SortDamageType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETypeOfDamage>     DamageType                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::SortDamageType(TEnumAsByte<ETypeOfDamage> DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SortDamageType");

	ABP_ScoreManager_C_SortDamageType_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.LockControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lock                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::LockControls(bool Lock, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.LockControls");

	ABP_ScoreManager_C_LockControls_Params params;
	params.Lock = Lock;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SelectAnimation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIntro                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendActionData         ActionData                     (Parm, OutParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// class AVehiclePawn*            VehiclePawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FTransform ABP_ScoreManager_C::SelectAnimation(bool IsIntro, struct FBendActionData* ActionData, class AVehiclePawn** VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SelectAnimation");

	ABP_ScoreManager_C_SelectAnimation_Params params;
	params.IsIntro = IsIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionData != nullptr)
		*ActionData = params.ActionData;
	if (VehiclePawn != nullptr)
		*VehiclePawn = params.VehiclePawn;

	return params.ReturnValue;
}


// Function BP_ScoreManager.BP_ScoreManager_C.FreezeEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::FreezeEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.FreezeEnemies");

	ABP_ScoreManager_C_FreezeEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.DidWeGainMedalBonus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProgressForSubObjective        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Bronze                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Silver                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Gold                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::DidWeGainMedalBonus(int ProgressForSubObjective, int Bronze, int Silver, int Gold, int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.DidWeGainMedalBonus");

	ABP_ScoreManager_C_DidWeGainMedalBonus_Params params;
	params.ProgressForSubObjective = ProgressForSubObjective;
	params.Bronze = Bronze;
	params.Silver = Silver;
	params.Gold = Gold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_ScoreManager.BP_ScoreManager_C.GetSubObjectiveProgression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubOBjective                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentSubObjectiveProgression (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::GetSubObjectiveProgression(int SubOBjective, int* CurrentSubObjectiveProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.GetSubObjectiveProgression");

	ABP_ScoreManager_C_GetSubObjectiveProgression_Params params;
	params.SubOBjective = SubOBjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSubObjectiveProgression != nullptr)
		*CurrentSubObjectiveProgression = params.CurrentSubObjectiveProgression;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CombineMultipliers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::CombineMultipliers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CombineMultipliers");

	ABP_ScoreManager_C_CombineMultipliers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ResetKillValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ResetKillValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ResetKillValue");

	ABP_ScoreManager_C_ResetKillValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SetKillValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIFactionType>    DeadEnemyFaction               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::SetKillValue(TEnumAsByte<EAIFactionType> DeadEnemyFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SetKillValue");

	ABP_ScoreManager_C_SetKillValue_Params params;
	params.DeadEnemyFaction = DeadEnemyFaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UserConstructionScript");

	ABP_ScoreManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.DelayToLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::DelayToLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.DelayToLoop");

	ABP_ScoreManager_C_DelayToLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.retryStartUp
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::retryStartUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.retryStartUp");

	ABP_ScoreManager_C_retryStartUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScrollingScores
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ScrollingScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScrollingScores");

	ABP_ScoreManager_C_ScrollingScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.DisplayAllScores
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::DisplayAllScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.DisplayAllScores");

	ABP_ScoreManager_C_DisplayAllScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScoreEnding
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ScoreEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScoreEnding");

	ABP_ScoreManager_C_ScoreEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.EndTimerFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::EndTimerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.EndTimerFinished");

	ABP_ScoreManager_C_EndTimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.GetFinalScoreEarly
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::GetFinalScoreEarly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.GetFinalScoreEarly");

	ABP_ScoreManager_C_GetFinalScoreEarly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CheckForTallyScores
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::CheckForTallyScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CheckForTallyScores");

	ABP_ScoreManager_C_CheckForTallyScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TryEndAnimAgain
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::TryEndAnimAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TryEndAnimAgain");

	ABP_ScoreManager_C_TryEndAnimAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnSpawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnSpawned_Event_1(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnSpawned_Event_1");

	ABP_ScoreManager_C_OnSpawned_Event_1_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnTakeAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnTakeAnyDamage_Event_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnTakeAnyDamage_Event_1");

	ABP_ScoreManager_C_OnTakeAnyDamage_Event_1_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnAwarePlayer_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnAwarePlayer_Event_1(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnAwarePlayer_Event_1");

	ABP_ScoreManager_C_OnAwarePlayer_Event_1_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnWeaponFired_Event_1(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_1");

	ABP_ScoreManager_C_OnWeaponFired_Event_1_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.BeginTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::BeginTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.BeginTimer");

	ABP_ScoreManager_C_BeginTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ReceiveTick");

	ABP_ScoreManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.BindEventSetup
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::BindEventSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.BindEventSetup");

	ABP_ScoreManager_C_BindEventSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.Retry
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::Retry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.Retry");

	ABP_ScoreManager_C_Retry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryPickup_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnInventoryPickup_Event_1(class ABendInventoryPickup* InventoryPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryPickup_Event_1");

	ABP_ScoreManager_C_OnInventoryPickup_Event_1_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.AddScore_DoesStringComparison
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ScoreName                      (Parm)
// class AActor*                  ActorRefFor3d                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScoreToBeShownOnlyOnComplete   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ScoreEventTag                  (Parm)

void ABP_ScoreManager_C::AddScore_DoesStringComparison(int ScoreValue, const struct FText& ScoreName, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, const struct FGameplayTag& ScoreEventTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.AddScore_DoesStringComparison");

	ABP_ScoreManager_C_AddScore_DoesStringComparison_Params params;
	params.ScoreValue = ScoreValue;
	params.ScoreName = ScoreName;
	params.ActorRefFor3d = ActorRefFor3d;
	params.ScoreToBeShownOnlyOnComplete = ScoreToBeShownOnlyOnComplete;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.Initialize");

	ABP_ScoreManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UpdateScoresIntoEndingArrays_DoNotCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexOfScoreType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedScore                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ScoreText_NeedsToBeFromALAMSKey_ (Parm)
// class AActor*                  ActorRefFor3d                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsesComboBonuses__DoesNotTickUpCombo_ (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScoreToBeShownOnlyOnComplete   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::UpdateScoresIntoEndingArrays_DoNotCall(int IndexOfScoreType, int AddedScore, const struct FText& ScoreText_NeedsToBeFromALAMSKey_, class AActor* ActorRefFor3d, bool UsesComboBonuses__DoesNotTickUpCombo_, bool ScoreToBeShownOnlyOnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UpdateScoresIntoEndingArrays_DoNotCall");

	ABP_ScoreManager_C_UpdateScoresIntoEndingArrays_DoNotCall_Params params;
	params.IndexOfScoreType = IndexOfScoreType;
	params.AddedScore = AddedScore;
	params.ScoreText_NeedsToBeFromALAMSKey_ = ScoreText_NeedsToBeFromALAMSKey_;
	params.ActorRefFor3d = ActorRefFor3d;
	params.UsesComboBonuses__DoesNotTickUpCombo_ = UsesComboBonuses__DoesNotTickUpCombo_;
	params.ScoreToBeShownOnlyOnComplete = ScoreToBeShownOnlyOnComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryModifiedDelegate_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_ScoreManager_C::OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryModifiedDelegate_Event_1");

	ABP_ScoreManager_C_OnInventoryModifiedDelegate_Event_1_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_1
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

void ABP_ScoreManager_C::OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_1");

	ABP_ScoreManager_C_OnDied_Event_1_Params params;
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


// Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStatusEffect*           StatusEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::StatusStartedDelegate_Event_1(class UStatusEffect* StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegate_Event_1");

	ABP_ScoreManager_C_StatusStartedDelegate_Event_1_Params params;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnWeaponFired_Event_2(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_2");

	ABP_ScoreManager_C_OnWeaponFired_Event_2_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ObjectiveComplete_BeginScoring
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ObjectiveComplete_BeginScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ObjectiveComplete_BeginScoring");

	ABP_ScoreManager_C_ObjectiveComplete_BeginScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.FindAllLivingUnits
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::FindAllLivingUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.FindAllLivingUnits");

	ABP_ScoreManager_C_FindAllLivingUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::CustomEvent_2(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_2");

	ABP_ScoreManager_C_CustomEvent_2_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnDiedPreSpawned
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

void ABP_ScoreManager_C::OnDiedPreSpawned(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnDiedPreSpawned");

	ABP_ScoreManager_C_OnDiedPreSpawned_Params params;
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


// Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegatePreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStatusEffect*           StatusEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::StatusStartedDelegatePreStart(class UStatusEffect* StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegatePreStart");

	ABP_ScoreManager_C_StatusStartedDelegatePreStart_Params params;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SpecialDieLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::SpecialDieLogic(class AController* Killer, class UActorComponent* FHitComponent, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SpecialDieLogic");

	ABP_ScoreManager_C_SpecialDieLogic_Params params;
	params.Killer = Killer;
	params.FHitComponent = FHitComponent;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CompoundDeath_Crowd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Fhit_Component                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CriticalHit                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::CompoundDeath_Crowd(class AController* Killer, class UActorComponent* Fhit_Component, class UDamageType* DamageType, class AActor* DamageCauser, bool CriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CompoundDeath_Crowd");

	ABP_ScoreManager_C_CompoundDeath_Crowd_Params params;
	params.Killer = Killer;
	params.Fhit_Component = Fhit_Component;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;
	params.CriticalHit = CriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.Reset");

	ABP_ScoreManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScoringForSubObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubOBjective                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubObjectiveIncrease           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorRefFor3d                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowBonusAtEndScreen           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ScoringForSubObjectives(int SubOBjective, int SubObjectiveIncrease, class AActor* ActorRefFor3d, bool ShowBonusAtEndScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScoringForSubObjectives");

	ABP_ScoreManager_C_ScoringForSubObjectives_Params params;
	params.SubOBjective = SubOBjective;
	params.SubObjectiveIncrease = SubObjectiveIncrease;
	params.ActorRefFor3d = ActorRefFor3d;
	params.ShowBonusAtEndScreen = ShowBonusAtEndScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.MoveBar_Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubOBjective                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            IndexOfScoreType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedScore                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  _3dActorRef                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndScreen                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::MoveBar_Test(int SubOBjective, int IndexOfScoreType, int AddedScore, class AActor* _3dActorRef, bool EndScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.MoveBar_Test");

	ABP_ScoreManager_C_MoveBar_Test_Params params;
	params.SubOBjective = SubOBjective;
	params.IndexOfScoreType = IndexOfScoreType;
	params.AddedScore = AddedScore;
	params._3dActorRef = _3dActorRef;
	params.EndScreen = EndScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnBeingStealthKilledStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               AttackerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnBeingStealthKilledStart_Event_1");

	ABP_ScoreManager_C_OnBeingStealthKilledStart_Event_1_Params params;
	params.AttackerPawn = AttackerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnVehicleReceivedDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleDamageType> DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnVehicleReceivedDamage_Event_1(class AVehiclePawn* VehiclePawn, class AController* Instigator, class AActor* DamageCauser, TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnVehicleReceivedDamage_Event_1");

	ABP_ScoreManager_C_OnVehicleReceivedDamage_Event_1_Params params;
	params.VehiclePawn = VehiclePawn;
	params.Instigator = Instigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ReopenTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ReopenTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ReopenTimer");

	ABP_ScoreManager_C_ReopenTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.PauseTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::PauseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.PauseTimer");

	ABP_ScoreManager_C_PauseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UnpauseTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::UnpauseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UnpauseTimer");

	ABP_ScoreManager_C_UnpauseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TimerForBikeScore
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::TimerForBikeScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TimerForBikeScore");

	ABP_ScoreManager_C_TimerForBikeScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.AssignBikeStuff
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::AssignBikeStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.AssignBikeStuff");

	ABP_ScoreManager_C_AssignBikeStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ExplosiveExploded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AExplosive_C*            Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ExplosiveExploded_Event_1(class AExplosive_C* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ExplosiveExploded_Event_1");

	ABP_ScoreManager_C_ExplosiveExploded_Event_1_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimer");

	ABP_ScoreManager_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.DisableSubOBjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::DisableSubOBjective(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.DisableSubOBjective");

	ABP_ScoreManager_C_DisableSubOBjective_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.GatherInfoForPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::GatherInfoForPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.GatherInfoForPlay");

	ABP_ScoreManager_C_GatherInfoForPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CheckScoreForTimedSubOBjectives
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::CheckScoreForTimedSubOBjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CheckScoreForTimedSubOBjectives");

	ABP_ScoreManager_C_CheckScoreForTimedSubOBjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ValueCombo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreEventData         ScoreEventData                 (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ActorRefFor3d                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScoreToBeShownOnlyOnComplete   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCombo                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            LiteralGameplayTag             (Parm)
// bool                           TimerBonus                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ValueCombo(const struct FScoreEventData& ScoreEventData, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, bool ShouldCombo, const struct FGameplayTag& LiteralGameplayTag, bool TimerBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ValueCombo");

	ABP_ScoreManager_C_ValueCombo_Params params;
	params.ScoreEventData = ScoreEventData;
	params.ActorRefFor3d = ActorRefFor3d;
	params.ScoreToBeShownOnlyOnComplete = ScoreToBeShownOnlyOnComplete;
	params.ShouldCombo = ShouldCombo;
	params.LiteralGameplayTag = LiteralGameplayTag;
	params.TimerBonus = TimerBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.Update Main Objective Number
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WhatShouldBeShownOnScreen      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdateVisible                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::Update_Main_Objective_Number(int WhatShouldBeShownOnScreen, bool IsUpdateVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.Update Main Objective Number");

	ABP_ScoreManager_C_Update_Main_Objective_Number_Params params;
	params.WhatShouldBeShownOnScreen = WhatShouldBeShownOnScreen;
	params.IsUpdateVisible = IsUpdateVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnDriftEnded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalDriftTime                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnDriftEnded_Event_1(float TotalDriftTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnDriftEnded_Event_1");

	ABP_ScoreManager_C_OnDriftEnded_Event_1_Params params;
	params.TotalDriftTime = TotalDriftTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnDriftStarted_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnDriftStarted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnDriftStarted_Event_1");

	ABP_ScoreManager_C_OnDriftStarted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.AddScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)
// class AActor*                  ActorRefFor3d                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScoreToBeShownOnlyOnComplete   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCombo                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TimerBonus                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::AddScore(const struct FGameplayTag& Key, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, bool ShouldCombo, bool TimerBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.AddScore");

	ABP_ScoreManager_C_AddScore_Params params;
	params.Key = Key;
	params.ActorRefFor3d = ActorRefFor3d;
	params.ScoreToBeShownOnlyOnComplete = ScoreToBeShownOnlyOnComplete;
	params.ShouldCombo = ShouldCombo;
	params.TimerBonus = TimerBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ScoreManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ReceiveBeginPlay");

	ABP_ScoreManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_3
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

void ABP_ScoreManager_C::OnDied_Event_3(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_3");

	ABP_ScoreManager_C_OnDied_Event_3_Params params;
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


// Function BP_ScoreManager.BP_ScoreManager_C.ContentFailed
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ContentFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ContentFailed");

	ABP_ScoreManager_C_ContentFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.AutoCompleteContent
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::AutoCompleteContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.AutoCompleteContent");

	ABP_ScoreManager_C_AutoCompleteContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_3");

	ABP_ScoreManager_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_4");

	ABP_ScoreManager_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendCrowdMemberDiedInfo Info                           (Parm)

void ABP_ScoreManager_C::OnCrowdMemberDied_NEW_Event_1(const struct FBendCrowdMemberDiedInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_1");

	ABP_ScoreManager_C_OnCrowdMemberDied_NEW_Event_1_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendCrowdMemberDiedInfo Info                           (Parm)

void ABP_ScoreManager_C::OnCrowdMemberDied_NEW_Event_2(const struct FBendCrowdMemberDiedInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_2");

	ABP_ScoreManager_C_OnCrowdMemberDied_NEW_Event_2_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.SetupPostScoreHandlers
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::SetupPostScoreHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.SetupPostScoreHandlers");

	ABP_ScoreManager_C_SetupPostScoreHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteQuit_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnPostChallengeCompleteQuit_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteQuit_Event_1");

	ABP_ScoreManager_C_OnPostChallengeCompleteQuit_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteRetry_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnPostChallengeCompleteRetry_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteRetry_Event_1");

	ABP_ScoreManager_C_OnPostChallengeCompleteRetry_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.DLCMissionFail
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::DLCMissionFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.DLCMissionFail");

	ABP_ScoreManager_C_DLCMissionFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnFadeFromBlackStart_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_ScoreManager_C::OnFadeFromBlackStart_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnFadeFromBlackStart_MM_Event_1");

	ABP_ScoreManager_C_OnFadeFromBlackStart_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.IntroStartFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::IntroStartFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.IntroStartFinished");

	ABP_ScoreManager_C_IntroStartFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ReceivePreSaveGameLoaded");

	ABP_ScoreManager_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ReceiveEndPlay");

	ABP_ScoreManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.IntroAnimCompleted
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::IntroAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.IntroAnimCompleted");

	ABP_ScoreManager_C_IntroAnimCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.AddSkillInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::AddSkillInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.AddSkillInfo");

	ABP_ScoreManager_C_AddSkillInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnAnimNotify_BikeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnAnimNotify_BikeStarted(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnAnimNotify_BikeStarted");

	ABP_ScoreManager_C_OnAnimNotify_BikeStarted_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderStartedEnteringVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnRiderStartedEnteringVehicle_Event_1");

	ABP_ScoreManager_C_OnRiderStartedEnteringVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedEnteringVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnRiderFinishedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedEnteringVehicle_Event_1");

	ABP_ScoreManager_C_OnRiderFinishedEnteringVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedExitingVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnRiderFinishedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedExitingVehicle_Event_1");

	ABP_ScoreManager_C_OnRiderFinishedExitingVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.StartCountdownTimer_Internal
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::StartCountdownTimer_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.StartCountdownTimer_Internal");

	ABP_ScoreManager_C_StartCountdownTimer_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimeInCombFromBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// float                          ActionComboTime                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::UpdateTimeInCombFromBike(const struct FGameplayTag& GameplayTag, float ActionComboTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimeInCombFromBike");

	ABP_ScoreManager_C_UpdateTimeInCombFromBike_Params params;
	params.GameplayTag = GameplayTag;
	params.ActionComboTime = ActionComboTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScoreDrifting
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ScoreDrifting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScoreDrifting");

	ABP_ScoreManager_C_ScoreDrifting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnPreSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnPreSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnPreSaveGameLoaded_Event_1");

	ABP_ScoreManager_C_OnPreSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDmgDeath
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::JumpToCustomDmgDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDmgDeath");

	ABP_ScoreManager_C_JumpToCustomDmgDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDeath_Horde
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::JumpToCustomDeath_Horde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDeath_Horde");

	ABP_ScoreManager_C_JumpToCustomDeath_Horde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::BearTrapKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill");

	ABP_ScoreManager_C_BearTrapKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill_Horde
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::BearTrapKill_Horde()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill_Horde");

	ABP_ScoreManager_C_BearTrapKill_Horde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnPauseGame_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPausing                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnPauseGame_Event_1(bool IsPausing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnPauseGame_Event_1");

	ABP_ScoreManager_C_OnPauseGame_Event_1_Params params;
	params.IsPausing = IsPausing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.UpdateUiCombo
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::UpdateUiCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.UpdateUiCombo");

	ABP_ScoreManager_C_UpdateUiCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ExplosionOverwriteForBarrel
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ExplosionOverwriteForBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ExplosionOverwriteForBarrel");

	ABP_ScoreManager_C_ExplosionOverwriteForBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnPostSaveGameLoaded_Event_1");

	ABP_ScoreManager_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.MissionManager_BeginScoring
// (BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::MissionManager_BeginScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.MissionManager_BeginScoring");

	ABP_ScoreManager_C_MissionManager_BeginScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ExecuteUbergraph_BP_ScoreManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ExecuteUbergraph_BP_ScoreManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ExecuteUbergraph_BP_ScoreManager");

	ABP_ScoreManager_C_ExecuteUbergraph_BP_ScoreManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnAddScoreResolve__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)

void ABP_ScoreManager_C::OnAddScoreResolve__DelegateSignature(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnAddScoreResolve__DelegateSignature");

	ABP_ScoreManager_C_OnAddScoreResolve__DelegateSignature_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnScoreOccured__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnScoreOccured__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnScoreOccured__DelegateSignature");

	ABP_ScoreManager_C_OnScoreOccured__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.HeadshotKill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::HeadshotKill__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.HeadshotKill__DelegateSignature");

	ABP_ScoreManager_C_HeadshotKill__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnMedalUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubObjectiveIndex              (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubObjectiveMedal              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnMedalUpdate__DelegateSignature(int SubObjectiveIndex, int SubObjectiveMedal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnMedalUpdate__DelegateSignature");

	ABP_ScoreManager_C_OnMedalUpdate__DelegateSignature_Params params;
	params.SubObjectiveIndex = SubObjectiveIndex;
	params.SubObjectiveMedal = SubObjectiveMedal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnComboStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnComboStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnComboStart__DelegateSignature");

	ABP_ScoreManager_C_OnComboStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnScoreIncrease__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// int                            ScoreEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnScoreIncrease__DelegateSignature(const struct FGameplayTag& GameplayTag, int ScoreEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnScoreIncrease__DelegateSignature");

	ABP_ScoreManager_C_OnScoreIncrease__DelegateSignature_Params params;
	params.GameplayTag = GameplayTag;
	params.ScoreEvent = ScoreEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnJumpComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ScoreEventTag                  (Parm)
// float                          TimeAirBorne                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::OnJumpComplete__DelegateSignature(const struct FGameplayTag& ScoreEventTag, float TimeAirBorne)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnJumpComplete__DelegateSignature");

	ABP_ScoreManager_C_OnJumpComplete__DelegateSignature_Params params;
	params.ScoreEventTag = ScoreEventTag;
	params.TimeAirBorne = TimeAirBorne;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.OnIntroTimerComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::OnIntroTimerComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.OnIntroTimerComplete__DelegateSignature");

	ABP_ScoreManager_C_OnIntroTimerComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::TallyScoreBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreBegin__DelegateSignature");

	ABP_ScoreManager_C_TallyScoreBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ComboComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ComboCountOnComplete           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScoreManager_C::ComboComplete__DelegateSignature(int ComboCountOnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ComboComplete__DelegateSignature");

	ABP_ScoreManager_C_ComboComplete__DelegateSignature_Params params;
	params.ComboCountOnComplete = ComboCountOnComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::TallyScoreComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreComplete__DelegateSignature");

	ABP_ScoreManager_C_TallyScoreComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ScoreScreenStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenStart__DelegateSignature");

	ABP_ScoreManager_C_ScoreScreenStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::ScoreScreenComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenComplete__DelegateSignature");

	ABP_ScoreManager_C_ScoreScreenComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreManager.BP_ScoreManager_C.TimerForDlcFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScoreManager_C::TimerForDlcFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreManager.BP_ScoreManager_C.TimerForDlcFailed__DelegateSignature");

	ABP_ScoreManager_C_TimerForDlcFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
