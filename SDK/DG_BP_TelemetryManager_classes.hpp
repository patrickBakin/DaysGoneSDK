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

// BlueprintGeneratedClass BP_TelemetryManager.BP_TelemetryManager_C
// 0x0029 (0x0371 - 0x0348)
class ABP_TelemetryManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_TelemetryPackageBase_C*>          Packages;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              ShortestTickTime;                                         // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumTickTime;                                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmbientEventsEnabled;                                     // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TelemetryManager.BP_TelemetryManager_C");
		return ptr;
	}


	void GetPackageOfType(class UClass* PackageTypeToFind, class ABP_TelemetryPackageBase_C** Package, bool* Succes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RerunBeginPlay();
	void FiveSecondTick();
	void OneMinuteGrab();
	void TwoSecondTick();
	void ExecuteUbergraph_BP_TelemetryManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
