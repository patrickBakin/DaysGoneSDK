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

// BlueprintGeneratedClass BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C
// 0x006A (0x03B2 - 0x0348)
class ABP_FreezeStreamingAroundPoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphereChecked;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FTransform                                  PointToFreezeAround;                                      // 0x0360(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ExtraExitBuffer;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SphereSize;                                               // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideVolumeCollisionSettings;                          // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class ATriggerVolume*                              UseVolume;                                                // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendEncampmentActor*                        EncampmentActorVolume;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               InRange;                                                  // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetStreamingFrozen;                                       // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_663_BeginOverlapSig__DelegateSignature();
	void BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_665_EndOverlapSig__DelegateSignature();
	void ReceiveBeginPlay();
	void OnActorBeginOverlap_Event_1(class AActor* OtherActor);
	void OnActorEndOverlap_Event_1(class AActor* OtherActor);
	void UpdateStreamingFrozen();
	void SetUnfrozen();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void LevelStreamingUpdated();
	void FlashbackCinematicToggled(bool IsEnabled);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnFinishedSetSynchronousStreaming();
	void OnPostSaveGameLoaded(bool bIsCheckpoint);
	void OnAsyncLoadingFinished();
	void ExecuteUbergraph_BP_FreezeStreamingAroundPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
