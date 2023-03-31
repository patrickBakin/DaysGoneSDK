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

// BlueprintGeneratedClass Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C
// 0x0008 (0x0390 - 0x0388)
class ATracking_FootprintMiniMapMarker_C : public ATracking_minimapmarker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void DisableMarker();
	void ExecuteUbergraph_Tracking_FootprintMiniMapMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
