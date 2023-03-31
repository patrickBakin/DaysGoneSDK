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

// BlueprintGeneratedClass HumanBaseBTController.HumanBaseBTController_C
// 0x0019 (0x1549 - 0x1530)
class AHumanBaseBTController_C : public ABendMotoCombatController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    AwareOfPlayer;                                            // 0x1538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               RegainAwarenessTutorial;                                  // 0x1548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HumanBaseBTController.HumanBaseBTController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CombatHuntStartedEvent(const struct FVector& PlayerPos, const struct FVector& TargetLastKnownPos, const struct FVector& NPCPosition);
	void KillCombatHuntBinding();
	void OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void AwarePlayerEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void ExecuteUbergraph_HumanBaseBTController(int EntryPoint);
	void AwareOfPlayer__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
