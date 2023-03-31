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

// BlueprintGeneratedClass Nest.Nest_C
// 0x0010 (0x0730 - 0x0720)
class ANest_C : public ABendNest
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               MissionNest;                                              // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DidOverlap;                                               // 0x0729(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NestTutorial;                                             // 0x072A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x072B(0x0001) MISSED OFFSET
	struct FTimerHandle                                TimerTurnOffInNestRange;                                  // 0x072C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Nest.Nest_C");
		return ptr;
	}


	void Tutorial();
	void UserConstructionScript();
	void OnNestDestroyed_Event_1(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest);
	void ReceiveBeginPlay();
	void BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature();
	void BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature();
	void OnBurnedSpawned_Event_1(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void OnJobUnlocked_Event_1(class UJobClassInfo* JobID);
	void ScriptEndOVerlap();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_Nest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
