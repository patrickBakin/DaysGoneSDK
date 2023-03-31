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

// WidgetBlueprintGeneratedClass UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C
// 0x0030 (0x02A0 - 0x0270)
class UUI_CategoryMenuEntryWidget_C : public UCategoryMenuEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMenuInteract*                               MenuInteract_Entry;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text;                                                     // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayText;                                              // 0x0288(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C");
		return ptr;
	}


	void GetSelectionColor(bool IsSelected, struct FSlateColor* Color);
	void Construct();
	void SetSelected(bool* IsSelected);
	void SetText(struct FText* Text);
	void SetDisabled(bool* IsDisabled);
	void BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature();
	void BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CategoryMenuEntryWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
