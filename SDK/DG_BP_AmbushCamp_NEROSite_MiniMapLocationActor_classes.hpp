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

// BlueprintGeneratedClass BP_AmbushCamp_NEROSite_MiniMapLocationActor.BP_AmbushCamp_NEROSite_MiniMapLocationActor_C
// 0x0048 (0x0390 - 0x0348)
class ABP_AmbushCamp_NEROSite_MiniMapLocationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LastTestedName;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AutoChangeDisplayName;                                    // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UBendNeroCheckpointData*                     NEROData;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_NEROSite_MiniMapLocationActor.BP_AmbushCamp_NEROSite_MiniMapLocationActor_C");
		return ptr;
	}


	void MapIconState(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapTaken_Event();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature();
	void OnNeroCheckpointInjectorUsed_Event_1(class UBendNeroCheckpointData* Checkpoint);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushCamp_NEROSite_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
