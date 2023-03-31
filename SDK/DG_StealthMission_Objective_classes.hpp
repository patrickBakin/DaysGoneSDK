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

// BlueprintGeneratedClass StealthMission_Objective.StealthMission_Objective_C
// 0x0280 (0x05C8 - 0x0348)
class AStealthMission_Objective_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CylindarOverlap;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSphereComponent*                        ListeningSphereNew;                                       // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarshotRadius;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class ABendSpawnLocationBase*                      ResearcherSpawner;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendSpawnLocationBase*                      CommanderSpawner;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LengthOfVO;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	TArray<struct FVocalConversationData>              ConversationData1;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               StartActive;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ListeningSequenceCompleted;                               // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               UseOnlyOneNPC;                                            // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03A3(0x0005) MISSED OFFSET
	class ABendAIController*                           FirstController;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   FirstPawn;                                                // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PawnUnaware;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InRadius;                                                 // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FailedSequence;                                           // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x03BB(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Failed;                                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Success;                                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                ConversationUID;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class ABendAIController*                           SecondController;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   SecondPawn;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InConversation;                                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	TArray<struct FVocalConversationData>              ConversationData2;                                        // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVocalConversationData>              ConversationData3;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TimerText;                                                // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Evo_nero_intel>                        VOSoundClass;                                             // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct Fvo_nero_intel_struct                       ConversationLines;                                        // 0x0438(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IntelCollectible;                                         // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ConversationCompleted;                                    // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TimeBeforeCall;                                           // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	TArray<float>                                      CallTimes;                                                // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TimeHit;                                                  // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumberOfPoints;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	TArray<float>                                      LineTimes;                                                // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TempTime;                                                 // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TempIndex;                                                // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StraightToFail;                                           // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	int                                                ActiveConversation;                                       // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	struct FTimerHandle                                Timer;                                                    // 0x0564(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PrevRadius;                                               // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OJ2;                                                      // 0x0569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x056A(0x0006) MISSED OFFSET
	TArray<class ABendPOI*>                            IntelPOIs;                                                // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              IntelAnimDuration;                                        // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	TArray<float>                                      IntelAnimTypes;                                           // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ScaleUnit;                                                // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class USoundClass*                                 SoundClass;                                               // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EnteredRange;                                             // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LeftRange;                                                // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StealthMission_Objective.StealthMission_Objective_C");
		return ptr;
	}


	void CheckVert(bool* OnLevel);
	void GiveCollectible();
	void SetUpConversation(TEnumAsByte<Evo_nero_intel> SoundClass);
	void FailedTheSequence();
	void ListeningSequenceUpdate(bool Failing_);
	void DeactivateStealthObjective();
	void ActivateStealthObjective();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartDelayComplete();
	void OnBecomeUnawareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void OnBecomeSemiAwareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void OnBecomeAwareEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void StartConversation();
	void ConversationFinished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void TimerExpire();
	void FirstActorSpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void SecondActorSpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void RecheckSecondPawn();
	void ResetEndDoOnce();
	void PauseEverything();
	void ContinueEverything();
	void UpdateRadius(float NewRadius);
	void PlayConvo2();
	void PlayConvo3();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void RecheckVert();
	void CustomEvent_1();
	void BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnDespawned_Event_1(class ABendSpawnLocationBase* SpawnLocation);
	void Conversation2Finished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void Conversation3Finished(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void ExecuteUbergraph_StealthMission_Objective(int EntryPoint);
	void LeftRange__DelegateSignature();
	void EnteredRange__DelegateSignature();
	void TimeHit__DelegateSignature(int Time);
	void ConversationCompleted__DelegateSignature();
	void Success__DelegateSignature();
	void Failed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
