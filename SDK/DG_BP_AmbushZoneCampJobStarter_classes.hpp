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

// BlueprintGeneratedClass BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C
// 0x0050 (0x0398 - 0x0348)
class ABP_AmbushZoneCampJobStarter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UJobClassInfo*                               JobID;                                                    // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerDataAsset;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EMissionIDs>>                   BlacklistedMissions;                                      // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CheckRegions;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         Region;                                                   // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	TArray<TEnumAsByte<EMissionIDs>>                   RecheckMissionIDs;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C");
		return ptr;
	}


	void ConvertRegionToWorldRegion(TEnumAsByte<ERegions> Region, TEnumAsByte<EWorldRegions>* WorldRegion);
	void CheckCurrentRegion(bool* IsInRegion);
	void CheckMissionBlacklist(bool* InBlacklistedMission);
	bool CheckForMission(TEnumAsByte<EMissionIDs> MissionID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBeginOverlap_BendSphere();
	void OnMissionComplete_MissionManager(TEnumAsByte<EMissionIDs> MissionID);
	void UnlockJob();
	void MissionCompleteDelay();
	void OnRegionEntered_BendPlayerController(TEnumAsByte<ERegions> Region);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushZoneCampJobStarter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
