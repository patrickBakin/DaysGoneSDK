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

// BlueprintGeneratedClass BuddyBasePawn.BuddyBasePawn_C
// 0x006F (0x2C40 - 0x2BD1)
class ABuddyBasePawn_C : public AHumanBasePawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2BD1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Initial_Follow_Radius_Inner;                              // 0x2BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Follow_Radius_Outer;                              // 0x2BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Idle_Radius_Inner;                                // 0x2BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Idle_Radius_Outer;                                // 0x2BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Move_Speed_Min;                                   // 0x2BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Move_Speed_Max;                                   // 0x2BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuddyBehavior>                        Initial_Behavior;                                         // 0x2BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2BF9(0x0003) MISSED OFFSET
	float                                              Initial_Lead_Radius_Inner;                                // 0x2BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Initial_Lead_Radius_Outer;                                // 0x2C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Allow_Combat;                                             // 0x2C04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HolsterWeaponOutOfCombat;                                 // 0x2C05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x2C06(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuddyGrappleBegin;                                      // 0x2C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuddyGrappleEnd;                                        // 0x2C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              NegateDamagePercentage;                                   // 0x2C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempCanBeDamaged;                                         // 0x2C2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Buddy;                                                    // 0x2C2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2C2E(0x0002) MISSED OFFSET
	TArray<struct FName>                               DeathVOLines;                                             // 0x2C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BuddyBasePawn.BuddyBasePawn_C");
		return ptr;
	}


	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void UserConstructionScript();
	void ReceivePossessed(class AController** NewController);
	void BuddyGrappleBegin(class ABendPawn* Attacker, bool SkipButtonEvent);
	void BuddyGrappleEnd(class ABendPawn* Attacker);
	void CustomEvent_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void BuddyFellOffBike(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void DelayBuddyFireDeath();
	void OnDied_Event(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser);
	void ExecuteUbergraph_BuddyBasePawn(int EntryPoint);
	void OnBuddyGrappleEnd__DelegateSignature();
	void OnBuddyGrappleBegin__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
