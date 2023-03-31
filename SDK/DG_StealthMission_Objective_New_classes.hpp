#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StealthMission_Objective_New.StealthMission_Objective_New_C
// 0x0030 (0x05F8 - 0x05C8)
class AStealthMission_Objective_New_C : public AStealthMission_Objective_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CylinderOverlap;                                          // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             LinesNew;                                                 // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    FirstTimeIn;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StealthMission_Objective_New.StealthMission_Objective_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser);
	void StartDelayComplete();
	void OnBecomeUnawareEvent(class ABendAIController** Controller, TEnumAsByte<EAIAwareState>* PreviousAwareness);
	void OnBecomeSemiAwareEvent(class ABendAIController** Controller, TEnumAsByte<EAIAwareState>* PreviousAwareness);
	void OnBecomeAwareEvent(class ABendAIController** Controller, TEnumAsByte<EAIAwareState>* PreviousAwareness);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void TimerExpire();
	void FirstActorSpawned(class ABendAIController** Controller, class ABendPawn** Pawn, class ABendSpawnLocationBase** SpawnLocation);
	void SecondActorSpawned(class ABendAIController** Controller, class ABendPawn** Pawn, class ABendSpawnLocationBase** SpawnLocation);
	void RecheckSecondPawn();
	void ResetEndDoOnce();
	void PauseEverything();
	void ContinueEverything();
	void UpdateRadius(float* NewRadius);
	void PlayConvo2();
	void PlayConvo3();
	void PlayerDied(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser);
	void RecheckVert();
	void OnDespawned(class ABendSpawnLocationBase* SpawnLocation);
	void ActivateStealthObjective();
	void DeactivateStealthObjective();
	void ListeningSequenceUpdate(bool* Failing_);
	void FailedTheSequence();
	void BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_362_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetUpConversation(TEnumAsByte<Evo_nero_intel>* SoundClass);
	void StartConversation();
	void GiveCollectible();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OpenedWeaponWheel();
	void ClosedWeaponWheel();
	void ConversationFinished(class ABendPawn** PawnSpeaking, struct FName* SoundName, int* ConversationID, TEnumAsByte<EDonePlayVocalReason>* SuccessOrFail);
	void Conversation2Finished(class ABendPawn** PawnSpeaking, struct FName* SoundName, int* ConversationID, TEnumAsByte<EDonePlayVocalReason>* SuccessOrFail);
	void Conversation3Finished(class ABendPawn** PawnSpeaking, struct FName* SoundName, int* ConversationID, TEnumAsByte<EDonePlayVocalReason>* SuccessOrFail);
	void ExecuteUbergraph_StealthMission_Objective_New(int EntryPoint);
	void FirstTimeIn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
