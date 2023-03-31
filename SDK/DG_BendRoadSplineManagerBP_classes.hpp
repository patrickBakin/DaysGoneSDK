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

// BlueprintGeneratedClass BendRoadSplineManagerBP.BendRoadSplineManagerBP_C
// 0x0010 (0x0380 - 0x0370)
class ABendRoadSplineManagerBP_C : public ABendRoadSplineManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendRoadSplineManagerBP.BendRoadSplineManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ReceiveBeginPlay();
	void OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void UpdateRoadSplineSegmentsManually();
	void ExecuteUbergraph_BendRoadSplineManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
