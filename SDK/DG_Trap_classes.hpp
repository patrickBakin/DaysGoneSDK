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

// BlueprintGeneratedClass Trap.Trap_C
// 0x00C8 (0x0538 - 0x0470)
class ATrap_C : public ABendTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        TutorialTrigger;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendFocusModeOutlineComponent*              BendFocusModeOutline;                                     // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        InventoryPickup;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachedTo;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_BendInventoryPickup_C*                   PickupRef;                                                // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TrapPickedUp;                                             // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               PickingUp;                                                // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FName                                       TutorialKey;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         TutorialRef;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TutorialTimer;                                            // 0x04C8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinExpRadius;                                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpRadius;                                             // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UClass*                                      ExplosionShake;                                           // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeRadiusScale;                                         // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFalloffRate;                                         // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VibrationDuration;                                        // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class AController*                                 InstigatedBy;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                OnFireTimer;                                              // 0x04F8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DamagedTimer;                                             // 0x04FC(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OnFireDelay;                                              // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ETypeOfDamage>>                 IgnoreDmgTypes;                                           // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ETypeOfBaseDamage>>             AllowBaseDmgTypes;                                        // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TrapExploded;                                             // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap.Trap_C");
		return ptr;
	}


	void ShowTutorial();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTrigger(class ABendPawn** TriggeringPawn);
	void Trap_OnInventoryPickup(class ABendInventoryPickup* InventoryPickup);
	void Trap_ExactMomentOfPickup();
	void TrapExplode();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void PlayArmedBeep();
	void HandleAttachedToDestructibleExploded();
	void SetupAttachedToDestructibleExploded();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void TriggerWeaponPlayer();
	void TriggerWeaponAIPawn();
	void SetupTutorial();
	void AllowTutorial();
	void HideTutorial();
	void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature();
	void OnFireDelayed();
	void WillLureToThrownNoise(bool* WillHear);
	void StopVibration();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Trap(int EntryPoint);
	void TrapExploded__DelegateSignature();
	void TrapPickedUp__DelegateSignature(class ABendTrap* Trap);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
