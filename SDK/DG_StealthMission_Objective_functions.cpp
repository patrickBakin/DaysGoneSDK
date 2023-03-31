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

// Function StealthMission_Objective.StealthMission_Objective_C.CheckVert
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnLevel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::CheckVert(bool* OnLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.CheckVert");

	AStealthMission_Objective_C_CheckVert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnLevel != nullptr)
		*OnLevel = params.OnLevel;
}


// Function StealthMission_Objective.StealthMission_Objective_C.GiveCollectible
// (Public, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::GiveCollectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.GiveCollectible");

	AStealthMission_Objective_C_GiveCollectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.SetUpConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Evo_nero_intel>    SoundClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::SetUpConversation(TEnumAsByte<Evo_nero_intel> SoundClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.SetUpConversation");

	AStealthMission_Objective_C_SetUpConversation_Params params;
	params.SoundClass = SoundClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.FailedTheSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::FailedTheSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.FailedTheSequence");

	AStealthMission_Objective_C_FailedTheSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ListeningSequenceUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failing_                       (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::ListeningSequenceUpdate(bool Failing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ListeningSequenceUpdate");

	AStealthMission_Objective_C_ListeningSequenceUpdate_Params params;
	params.Failing_ = Failing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.DeactivateStealthObjective
// (Public, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::DeactivateStealthObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.DeactivateStealthObjective");

	AStealthMission_Objective_C_DeactivateStealthObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ActivateStealthObjective
// (Public, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::ActivateStealthObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ActivateStealthObjective");

	AStealthMission_Objective_C_ActivateStealthObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.UserConstructionScript");

	AStealthMission_Objective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AStealthMission_Objective_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ReceiveBeginPlay");

	AStealthMission_Objective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.OnDied
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

void AStealthMission_Objective_C::OnDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.OnDied");

	AStealthMission_Objective_C_OnDied_Params params;
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


// Function StealthMission_Objective.StealthMission_Objective_C.StartDelayComplete
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::StartDelayComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.StartDelayComplete");

	AStealthMission_Objective_C_StartDelayComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeUnawareEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::OnBecomeUnawareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeUnawareEvent");

	AStealthMission_Objective_C_OnBecomeUnawareEvent_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeSemiAwareEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::OnBecomeSemiAwareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeSemiAwareEvent");

	AStealthMission_Objective_C_OnBecomeSemiAwareEvent_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeAwareEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::OnBecomeAwareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeAwareEvent");

	AStealthMission_Objective_C_OnBecomeAwareEvent_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.StartConversation
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::StartConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.StartConversation");

	AStealthMission_Objective_C_StartConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ConversationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::ConversationFinished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ConversationFinished");

	AStealthMission_Objective_C_ConversationFinished_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ReceivePostSaveGameLoaded");

	AStealthMission_Objective_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.TimerExpire
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::TimerExpire()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.TimerExpire");

	AStealthMission_Objective_C_TimerExpire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.FirstActorSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::FirstActorSpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.FirstActorSpawned");

	AStealthMission_Objective_C_FirstActorSpawned_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.SecondActorSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::SecondActorSpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.SecondActorSpawned");

	AStealthMission_Objective_C_SecondActorSpawned_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.RecheckSecondPawn
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::RecheckSecondPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.RecheckSecondPawn");

	AStealthMission_Objective_C_RecheckSecondPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ResetEndDoOnce
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::ResetEndDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ResetEndDoOnce");

	AStealthMission_Objective_C_ResetEndDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.PauseEverything
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::PauseEverything()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.PauseEverything");

	AStealthMission_Objective_C_PauseEverything_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ContinueEverything
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::ContinueEverything()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ContinueEverything");

	AStealthMission_Objective_C_ContinueEverything_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.UpdateRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::UpdateRadius(float NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.UpdateRadius");

	AStealthMission_Objective_C_UpdateRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo2
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::PlayConvo2()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo2");

	AStealthMission_Objective_C_PlayConvo2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo3
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::PlayConvo3()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo3");

	AStealthMission_Objective_C_PlayConvo3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.PlayerDied
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

void AStealthMission_Objective_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.PlayerDied");

	AStealthMission_Objective_C_PlayerDied_Params params;
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


// Function StealthMission_Objective.StealthMission_Objective_C.RecheckVert
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::RecheckVert()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.RecheckVert");

	AStealthMission_Objective_C_RecheckVert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.CustomEvent_1");

	AStealthMission_Objective_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void AStealthMission_Objective_C::BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature");

	AStealthMission_Objective_C_BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature");

	AStealthMission_Objective_C_BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.OnDespawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::OnDespawned_Event_1(class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.OnDespawned_Event_1");

	AStealthMission_Objective_C_OnDespawned_Event_1_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.Conversation2Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::Conversation2Finished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.Conversation2Finished");

	AStealthMission_Objective_C_Conversation2Finished_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.Conversation3Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::Conversation3Finished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.Conversation3Finished");

	AStealthMission_Objective_C_Conversation3Finished_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ExecuteUbergraph_StealthMission_Objective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::ExecuteUbergraph_StealthMission_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ExecuteUbergraph_StealthMission_Objective");

	AStealthMission_Objective_C_ExecuteUbergraph_StealthMission_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.LeftRange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::LeftRange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.LeftRange__DelegateSignature");

	AStealthMission_Objective_C_LeftRange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.EnteredRange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::EnteredRange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.EnteredRange__DelegateSignature");

	AStealthMission_Objective_C_EnteredRange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.TimeHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AStealthMission_Objective_C::TimeHit__DelegateSignature(int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.TimeHit__DelegateSignature");

	AStealthMission_Objective_C_TimeHit__DelegateSignature_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.ConversationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::ConversationCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.ConversationCompleted__DelegateSignature");

	AStealthMission_Objective_C_ConversationCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.Success__DelegateSignature");

	AStealthMission_Objective_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMission_Objective.StealthMission_Objective_C.Failed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AStealthMission_Objective_C::Failed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMission_Objective.StealthMission_Objective_C.Failed__DelegateSignature");

	AStealthMission_Objective_C_Failed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
