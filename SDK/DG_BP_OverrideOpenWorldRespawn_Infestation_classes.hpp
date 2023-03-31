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

// BlueprintGeneratedClass BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C
// 0x0047 (0x03B4 - 0x036D)
class ABP_OverrideOpenWorldRespawn_Infestation_C : public ABP_OverrideOpenWorldRespawn_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendNestingZone*                            NestData;                                                 // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendNestingZoneActor*                       NestingZoneActor;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsOverlappingNestingZone;                                 // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverlappingSphere;                                      // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	TArray<class ABP_OverrideOpenWorldRespawn_Infestation_C*> BP_OverrideOpenWorldRespawn_Infestation;                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               Overlapping;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              ZoneClearDelay;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ZoneClearTimerHandle;                                     // 0x03A8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ZoneCleared;                                              // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	int                                                NestsDestroyedSinceEntry;                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C");
		return ptr;
	}


	void SetOverlapping(bool Overlapping);
	void RemoveSiblingRespawnOverrideLocations();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnZoneCleared(class ABendNestingZoneActor* ZoneActor);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void OnActorBeginOverlap_NestingZoneActor(class AActor* OtherActor);
	void OnActorEndOverlap_NestingZoneActor(class AActor* OtherActor);
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature();
	void CheckActivation();
	void OnNestDestroyed(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest);
	void ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
