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

// BlueprintGeneratedClass BP_InfestationCrowController.BP_InfestationCrowController_C
// 0x007C (0x03C4 - 0x0348)
class ABP_InfestationCrowController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticleDisable_TakeOff_0B50140042DA7107FB45E8A400E48A88; // 0x0358(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ParticleDisable_SpawnRate_0B50140042DA7107FB45E8A400E48A88;// 0x0364(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ParticleDisable__Direction_0B50140042DA7107FB45E8A400E48A88;// 0x0368(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ParticleDisable;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class ABP_FlockofBirds_C*                          BPFlockOfBirds;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBendNestingZone*                            InfestationData;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            PrerequisiteMission;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           WNG;                                                      // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           HGL;                                                      // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           TSR;                                                      // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           AQW;                                                      // 0x039B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           IPR;                                                      // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              ParticleDeathDelay;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class AEmitter*                                    CloseFlock;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Radius;                                                   // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Scatter;                                                  // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfestationCrowController.BP_InfestationCrowController_C");
		return ptr;
	}


	void CheckForPrerequisiteMission(bool* NotCompleted);
	void CheckForFlashbackMission(TEnumAsByte<EMissionIDs> MissionID, bool* IsInFlashback);
	void CheckCrowParticle(class UBendNestingZone* InfestationData, class UParticleSystemComponent* Emitter);
	void UserConstructionScript();
	void ParticleDisable__FinishedFunc();
	void ParticleDisable__UpdateFunc();
	void CheckParticles();
	void BindEvents();
	void OnMissionBegin(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID);
	void ReceiveBeginPlay();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void InitializeParticles();
	void UpdatePatricle(TEnumAsByte<EMissionIDs> MissionID);
	void DeactivateParticle();
	void OnZoneCleared_Event_1(class ABendNestingZoneActor* ZoneActor);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_InfestationCrowController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
