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

// BlueprintGeneratedClass WildlifeListenerForestNear.WildlifeListenerForestNear_C
// 0x0028 (0x0370 - 0x0348)
class AWildlifeListenerForestNear_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Near_Animals;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPawnSensingComponent*                       PawnSensing1;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Play_Audio;                                           // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class USoundCue*                                   CurrentRegionSound;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WildlifeListenerForestNear.WildlifeListenerForestNear_C");
		return ptr;
	}


	void EnteredNewRegion();
	void PlayAudio();
	void StopAudio();
	void TimerExpire();
	void UserConstructionScript();
	void BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	void ReceiveBeginPlay();
	void weatherChanged();
	void Every5Mins();
	void EveryHour(int Hour);
	void ExecuteUbergraph_WildlifeListenerForestNear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
