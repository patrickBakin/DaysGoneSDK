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

// BlueprintGeneratedClass BP_AmbushCamp_Fuel_MiniMapLocationActor.BP_AmbushCamp_Fuel_MiniMapLocationActor_C
// 0x0029 (0x0371 - 0x0348)
class ABP_AmbushCamp_Fuel_MiniMapLocationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_Fuel_MiniMapLocationActor.BP_AmbushCamp_Fuel_MiniMapLocationActor_C");
		return ptr;
	}


	void MapIconState(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapTaken_Event();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushCamp_Fuel_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
