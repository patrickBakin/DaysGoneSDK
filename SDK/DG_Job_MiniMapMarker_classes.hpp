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

// BlueprintGeneratedClass Job_MiniMapMarker.Job_MiniMapMarker_C
// 0x0019 (0x03A9 - 0x0390)
class AJob_MiniMapMarker_C : public ABendJobMiniMapMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        AutoTrackSphere;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_ObjectiveCallout_C*                      InWorldJobIcon;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempJustSelected;                                         // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Job_MiniMapMarker.Job_MiniMapMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateFocus(bool HasFocus);
	void UpdateActive(bool IsActive);
	void HandleObjectiveJobIcon(bool Activate);
	void StoreMarkerSettings(bool ShouldHaveMarker, float MaxDist, float MinDist, TEnumAsByte<EObjectiveCategories> ObjCaqtegory, TEnumAsByte<EObjectiveVisualType> ObjType, class UJobClassInfo* JobData);
	void IOnSelected();
	void BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature();
	void BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature();
	void ExecuteUbergraph_Job_MiniMapMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
