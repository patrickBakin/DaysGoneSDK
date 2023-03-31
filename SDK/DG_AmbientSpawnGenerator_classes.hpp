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

// BlueprintGeneratedClass AmbientSpawnGenerator.AmbientSpawnGenerator_C
// 0x0048 (0x1300 - 0x12B8)
class AAmbientSpawnGenerator_C : public ABendAmbientGenerator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        AudioCalloutActor;                                        // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x12D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x12D1(0x0003) MISSED OFFSET
	float                                              GlobalVoCoolDown;                                         // 0x12D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x12D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x12D9(0x0007) MISSED OFFSET
	TArray<class USoundCue*>                           ArrayOFAnimalSoundQues;                                   // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ArrayOFTimers;                                            // 0x12F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSpawnGenerator.AmbientSpawnGenerator_C");
		return ptr;
	}


	void FindTeleLocationForAudioCAlloutActor(const struct FVector& UnitLocation, TEnumAsByte<EAIFactionType> Faction);
	void UserConstructionScript();
	void TestingNewAudio(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void ReceiveBeginPlay();
	void CheckIfDeaconCanSpeak();
	void ReceiveTick(float* DeltaSeconds);
	void StartCalloutAudi(const struct FVector& Location, TEnumAsByte<EAIFactionType> Faction);
	void ExecuteUbergraph_AmbientSpawnGenerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
