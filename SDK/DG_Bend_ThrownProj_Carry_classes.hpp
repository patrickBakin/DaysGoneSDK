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

// BlueprintGeneratedClass Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C
// 0x0068 (0x22C0 - 0x2258)
class ABend_ThrownProj_Carry_C : public ABend_ThrownProj_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendAimAssistTargetComponent*               BendAimAssistTarget;                                      // 0x2260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_CarryWeaponPickupBase_C*                 PickupRef;                                                // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpDmg;                                                // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpDmg;                                                // 0x2274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpRadius;                                             // 0x2278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpRadius;                                             // 0x227C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgFalloffRate;                                           // 0x2280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionForce;                                           // 0x2284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionEmitter;                                         // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionFire;                                            // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    CarryWeaponExploded;                                      // 0x22A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABendImpactEffect*                           ExplosionFireRef;                                         // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionEmitterRef;                                      // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C");
		return ptr;
	}


	void UserConstructionScript();
	void ForceExplodeManual(class AController** Instigator);
	void CreateFireDelayed();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void AddExplosionForce(const struct FVector& Location);
	void ExecuteUbergraph_Bend_ThrownProj_Carry(int EntryPoint);
	void CarryWeaponExploded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
