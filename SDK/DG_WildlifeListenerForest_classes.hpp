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

// BlueprintGeneratedClass WildlifeListenerForest.WildlifeListenerForest_C
// 0x0020 (0x0368 - 0x0348)
class AWildlifeListenerForest_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Distant_Animals;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Play_Audio;                                           // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class USoundCue*                                   CurrentRegionSound;                                       // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WildlifeListenerForest.WildlifeListenerForest_C");
		return ptr;
	}


	void AllRippersAreDeadInGame();
	void RippersStillAliveInGame();
	void EnteredNewRegion();
	void PlayAudio();
	void StopAudio();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void weatherChanged();
	void Every5Mins();
	void EveryHour(int Hour);
	void ExecuteUbergraph_WildlifeListenerForest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
