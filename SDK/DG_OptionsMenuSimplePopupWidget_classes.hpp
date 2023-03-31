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

// WidgetBlueprintGeneratedClass OptionsMenuSimplePopupWidget.OptionsMenuSimplePopupWidget_C
// 0x0059 (0x03A9 - 0x0350)
class UOptionsMenuSimplePopupWidget_C : public UBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOptionsMenuInputBarWidget_C*                InputBar;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  PopupTextBody;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  PopupTitle;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       PopupText;                                                // 0x0370(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnPopupInput_Confirm;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPopupInput_Cancel;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ESlatePopupStyle>                      PopupStyle;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuSimplePopupWidget.OptionsMenuSimplePopupWidget_C");
		return ptr;
	}


	void AddSecondLine(const struct FText& TextToAdd);
	void ConfigureAsInfoPopup();
	void Construct();
	void OnWidgetClosed();
	void OnConfirmPressed();
	void OnCancelPressed();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1071_OnConfirmClicked__DelegateSignature();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1078_OnCancelClicked__DelegateSignature();
	void OverrideOptionsText(const struct FText& Option0, const struct FText& Option1);
	void ExecuteUbergraph_OptionsMenuSimplePopupWidget(int EntryPoint);
	void OnPopupInput_Cancel__DelegateSignature();
	void OnPopupInput_Confirm__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
