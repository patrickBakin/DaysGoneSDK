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

// BlueprintGeneratedClass BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C
// 0x0048 (0x0390 - 0x0348)
class ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphereChecked;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SetStreamingFrozen;                                       // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<class AVolume*>                             VolumesInPriorityOrder;                                   // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FTransform>                          CorrespondingWorldPoints;                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       IsOverlappingVolumes;                                     // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C");
		return ptr;
	}


	void CalculateFrozenStreaming(bool* Frozen);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void VolumeEndOverlap_1(class AActor* OtherActor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void VolumeOverlap_1(class AActor* OtherActor);
	void VolumeOverlap_2(class AActor* OtherActor);
	void VolumeOverlap_3(class AActor* OtherActor);
	void VolumeOverlap_4(class AActor* OtherActor);
	void VolumeEndOverlap_2(class AActor* OtherActor);
	void VolumeEndOverlap_3(class AActor* OtherActor);
	void VolumeEndOverlap_4(class AActor* OtherActor);
	void VolumeOverlap_5(class AActor* OtherActor);
	void VolumeOverlap_6(class AActor* OtherActor);
	void VolumeEndOverlap_5(class AActor* OtherActor);
	void VolumeEndOverlap_6(class AActor* OtherActor);
	void OnPerformActionOnStreamingLevelsUpdated_Event_1();
	void FlashbackCinematicToggled(bool IsEnabled);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnPostSaveGameLoaded(bool bIsCheckpoint);
	void OnFinishedLoading();
	void ExecuteUbergraph_BP_FreezeStreamingAroundPoints_WithMultiVolumes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
