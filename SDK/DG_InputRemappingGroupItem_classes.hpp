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

// WidgetBlueprintGeneratedClass InputRemappingGroupItem.InputRemappingGroupItem_C
// 0x0018 (0x0260 - 0x0248)
class UInputRemappingGroupItem_C : public UUserWidget
{
public:
	struct FText                                       Title;                                                    // 0x0248(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputRemappingGroupItem.InputRemappingGroupItem_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
