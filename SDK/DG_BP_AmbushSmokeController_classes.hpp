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

// BlueprintGeneratedClass BP_AmbushSmokeController.BP_AmbushSmokeController_C
// 0x003C (0x0384 - 0x0348)
class ABP_AmbushSmokeController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class AEmitter*                                    AmbushSmoke;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            PrerequisiteMission;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           WNG;                                                      // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           HGL;                                                      // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           TSR;                                                      // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           AQW;                                                      // 0x037B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           IPR;                                                      // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x037D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x037E(0x0002) MISSED OFFSET
	float                                              ParticleDeathDelay;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushSmokeController.BP_AmbushSmokeController_C");
		return ptr;
	}


	void CheckForPrerequisiteMission(bool* NotCompleted);
	void CheckForFlashbackMission(TEnumAsByte<EMissionIDs> MissionID, bool* IsInFlashback);
	void CheckSmokeParticle(class UBendBunkerData* BendBunkerData, class AEmitter* Emitter);
	void UserConstructionScript();
	void OnEnemyCampCleared_Event();
	void CheckParticles();
	void BindEvents();
	void OnMissionBegin(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID);
	void ReceiveBeginPlay();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void InitializeParticles();
	void UpdatePatricle(TEnumAsByte<EMissionIDs> MissionID);
	void DeactivateParticle();
	void DeactivateAndHideParticle();
	void OnDemoJumpPoint(class UDataAsset* JobOrMissionID);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushSmokeController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
