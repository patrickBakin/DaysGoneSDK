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

// BlueprintGeneratedClass BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C
// 0x005C (0x04CC - 0x0470)
class ABP_AmbushCamp_MiniMapFastTravelLocation_C : public AMapLocationFastTravelActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobData;                                                  // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LocationImage;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       StoredJobName;                                            // 0x0498(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StoredJobDescription;                                     // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LFR;                                                      // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TopRegion;                                                // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiddleRegion;                                             // 0x04CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BottomRegion;                                             // 0x04CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C");
		return ptr;
	}


	void UpdateFastTravelLocation(bool FastTravelAvailable);
	void MapIconState();
	void CampCleared();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapTaken_Event_1();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType);
	void ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
