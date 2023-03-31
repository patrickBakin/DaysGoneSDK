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

// WidgetBlueprintGeneratedClass UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C
// 0x0170 (0x0430 - 0x02C0)
class UUI_CompletedMissionsListItem_C : public UJournalListItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  IconText;                                                 // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  LabelText;                                                // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_Item;                                        // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              HeaderFontInfo;                                           // 0x02E0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              DefaultFontInfo;                                          // 0x0320(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              SelectedFontInfo;                                         // 0x0360(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 DefaultFontColor;                                         // 0x03A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 SelectedFontColor;                                        // 0x03C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FinalText;                                                // 0x03F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StorylineIcons;                                           // 0x0408(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C");
		return ptr;
	}


	void OnSelected();
	void OnDeselected();
	void OnData();
	void BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_14523_OnMenuInteractHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CompletedMissionsListItem(int EntryPoint);
	void OnItemSelected__DelegateSignature(class UJournalListItem* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
