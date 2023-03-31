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

// BlueprintGeneratedClass Impact_Incendiary.Impact_Incendiary_C
// 0x0049 (0x0739 - 0x06F0)
class AImpact_Incendiary_C : public ABendImpactIncendiaryEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CoreGrowth_LRG_6C092BB54E35FB027BDFE18A0C9D19F5;          // 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoreGrowth_Sml_6C092BB54E35FB027BDFE18A0C9D19F5;          // 0x06FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoreGrowth_Med_6C092BB54E35FB027BDFE18A0C9D19F5;          // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CoreGrowth__Direction_6C092BB54E35FB027BDFE18A0C9D19F5;   // 0x0704(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CoreGrowth;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                pCount;                                                   // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pCountPrev;                                               // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FireEmitterCore;                                          // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FireEmitterTiny;                                          // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FireEmitterSmall;                                         // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Smoldering_Fires;                                         // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	float                                              sizevalues;                                               // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EmitterCreated;                                           // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Impact_Incendiary.Impact_Incendiary_C");
		return ptr;
	}


	void SetBendDetourCrowdAvoidance();
	void CalculateDetourComponentBounds();
	void DebugEnableWorldBurn();
	void DistanceCheckSpawnedSpheres(const struct FVector& Vector, bool* Spawn, struct FVector* VectorToUse);
	void UserConstructionScript();
	void CoreGrowth__FinishedFunc();
	void CoreGrowth__UpdateFunc();
	void OnParticleCollide_Event_1(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
	void OnImpactEffectSpawned(TEnumAsByte<EPhysicalSurface>* SurfaceType);
	void HandleOnParticleCollide(const struct FName& Event_Name, float Emitter_Time, int Particle_Time, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& Bone_Name);
	void PreRemoveCollision();
	void ExecuteUbergraph_Impact_Incendiary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
