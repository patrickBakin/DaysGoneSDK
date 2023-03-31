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

// WidgetBlueprintGeneratedClass AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C
// 0x012C (0x047C - 0x0350)
class UAdvancedDisplyMenuEntryBase_C : public UBaseMenuWidget
{
public:
	bool                                               Selected;                                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	struct FSlateColor                                 DefaultFontColor;                                         // 0x0358(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 SelectedFontColor;                                        // 0x0380(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 DisabledFontColor;                                        // 0x03A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              DefaultFontInfo;                                          // 0x03D0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              SelectedFontInfo;                                         // 0x0410(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ValueIndex;                                               // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelected;                                               // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                CursorIndex;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C");
		return ptr;
	}


	void PreviousValue();
	void NextValue();
	void SetSelected(bool Selected);
	void SetDisabled(bool Disabled);
	void HandleStateChanged();
	void OnSelected__DelegateSignature(int Index);
	void OnHovered__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
