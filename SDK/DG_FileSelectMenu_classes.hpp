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

// WidgetBlueprintGeneratedClass FileSelectMenu.FileSelectMenu_C
// 0x0060 (0x03F0 - 0x0390)
class UFileSelectMenu_C : public USaveGameMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOptionsMenuInputBarWidget_C*                InputBar;                                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollingList;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TitleLabel;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CursorPosition;                                           // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSlotSelected;                                           // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActionCompleted;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UOptionsMenuSimplePopupWidget_C*             PopupWidget;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class UFileSelectListItem_C*>               MenuWidgets;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FileSelectMenu.FileSelectMenu_C");
		return ptr;
	}


	void DisplayBlockingInfoPopup(const struct FText& Message);
	void DisplayBlockingConfirmationPopup(const struct FText& Message, const struct FScriptDelegate& OnConfirm, const struct FScriptDelegate& OnCancel);
	void GetSlotByIndex(int Index, class UFileSelectListItem_C** FileItem);
	void SetCursorPosition(int Index);
	void Construct();
	void OnCancelPressed();
	void OnConfirmPressed();
	void OnData(TArray<struct FSaveGameMenuItemData>* InData);
	void OnItemClicked(int Index, const struct FSaveGameMenuItemData& Data);
	void OnItemHovered(int Index, const struct FSaveGameMenuItemData& Data);
	void SelectSlotIndex(int Index);
	void OnDialogCancel();
	void OnFileConfirm();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature();
	void OnDownPressed();
	void OnUpPressed();
	void OnWidgetClosed();
	void OnMenuDismissed();
	void ExecuteUbergraph_FileSelectMenu(int EntryPoint);
	void OnActionCompleted__DelegateSignature();
	void OnSlotSelected__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
