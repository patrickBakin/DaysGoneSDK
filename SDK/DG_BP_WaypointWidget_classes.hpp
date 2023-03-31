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

// BlueprintGeneratedClass BP_WaypointWidget.BP_WaypointWidget_C
// 0x001A (0x036A - 0x0350)
class ABP_WaypointWidget_C : public AWaypointWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendWidgetComponent*                        BendWidget;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjectiveCategory;                                        // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  ObjectiveVisualType;                                      // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaypointWidget.BP_WaypointWidget_C");
		return ptr;
	}


	void Configure(bool IsVisible);
	void SetMarkerTexture(class UTexture2D* InTex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDistanceChanged(struct FText* DistanceText);
	void ExecuteUbergraph_BP_WaypointWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
