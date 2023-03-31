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

// BlueprintGeneratedClass MapWaypointMarkerBP.MapWaypointMarkerBP_C
// 0x0018 (0x0440 - 0x0428)
class AMapWaypointMarkerBP_C : public AMapWaypointMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               NeedsUpdate;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UChildActorComponent*                        Widget;                                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MapWaypointMarkerBP.MapWaypointMarkerBP_C");
		return ptr;
	}


	void SetWaypointObjectiveType(class ABP_WaypointWidget_C* Waypoint, TEnumAsByte<EObjectiveCategories> ObjectiveCat, TEnumAsByte<EObjectiveVisualType> ObjectiveVisCat);
	void UserConstructionScript();
	void SetMarkerTexture(class UTexture2D** Texture);
	void SetWaypointType(TEnumAsByte<EObjectiveCategories>* Category, TEnumAsByte<EObjectiveVisualType>* VisualCategory);
	void SetWaypointMarkerType(TEnumAsByte<EMapWaypointMarker>* Type);
	void OnVisibilityChanged(bool* IsVisible);
	void ExecuteUbergraph_MapWaypointMarkerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
