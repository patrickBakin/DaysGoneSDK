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

// BlueprintGeneratedClass BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C
// 0x0020 (0x0368 - 0x0348)
class ABP_BlockOpenWorldSaving_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABendTriggerVolume*>                  BlockSaveTriggerVolume;                                   // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C");
		return ptr;
	}


	void ShouldReEnableSaving(bool* ReEnableSaving);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayerEnteredSaveBlockVolume(class AActor* OtherActor);
	void PlayerExitedSaveBlockVolume(class AActor* OtherActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReEnableSaving();
	void ExecuteUbergraph_BP_BlockOpenWorldSaving(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
