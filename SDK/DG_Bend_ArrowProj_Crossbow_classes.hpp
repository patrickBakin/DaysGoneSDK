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

// BlueprintGeneratedClass Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C
// 0x00CB (0x22AB - 0x21E0)
class ABend_ArrowProj_Crossbow_C : public ABendProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractComponentType_C*                    InteractComponentType;                                    // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ArrowMesh;                                                // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PickupEnabled;                                            // 0x21F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21F9(0x0003) MISSED OFFSET
	float                                              BreakChance;                                              // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      AttachedActor;                                            // 0x2200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BendInventoryPickup_Bolt_Physics_C*      Bolt;                                                     // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BendInventoryPickup_Bolt_Explosive_C*    ExplosiveBolt;                                            // 0x2210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnedAnArrow;                                           // 0x2218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2219(0x0003) MISSED OFFSET
	int                                                ArrowType;                                                // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x2220(0x0088) (Edit, BlueprintVisible)
	bool                                               HitArmor;                                                 // 0x22A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DLCChallengeMissionEffected;                              // 0x22A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanApplyPenetrationBonus;                                 // 0x22AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C");
		return ptr;
	}


	void CheckDLCRings();
	void SpawnCorrectArrowPickup();
	void EnablePickup();
	void UserConstructionScript();
	void ProjectileStopProximityMine(const struct FHitResult& HitResult, class ABendPawn* OwningPawn);
	void ProjectileStop(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void BaseProjectileStop(const struct FHitResult& Impact_Result);
	void CheckDLCRingEffectsOnProjectile();
	void ExecuteUbergraph_Bend_ArrowProj_Crossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
