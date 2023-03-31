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

// BlueprintGeneratedClass BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C
// 0x0028 (0x0370 - 0x0348)
class ABP_AmbushCamp_Bunker_MiniMapLocationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LocationImage;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C");
		return ptr;
	}


	void MapIconState(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDiscovered_BunkerData();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType);
	void ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
