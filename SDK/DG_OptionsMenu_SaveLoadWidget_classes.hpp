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

// WidgetBlueprintGeneratedClass OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C
// 0x0088 (0x0418 - 0x0390)
class UOptionsMenu_SaveLoadWidget_C : public USaveGameMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOptionsMenuInputBarWidget_C*                InputBar;                                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  OptionsTitle;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SaveLoadSlotWidget_C*                    SaveSlot0;                                                // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SaveLoadSlotWidget_C*                    SaveSlot1;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SaveLoadSlotWidget_C*                    SaveSlot2;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollingList;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsLoading;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSaving;                                                // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	int                                                CursorPosition;                                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSlotSelected;                                           // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActionCompleted;                                        // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bSkipSaveLoadOperations;                                  // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	class UOptionsMenuSimplePopupWidget_C*             PopupWidget;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadSelected;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	TArray<class UUI_SaveLoadSlotWidget_C*>            MenuWidgets;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C");
		return ptr;
	}


	void SpawnOverwriteSavePopup();
	void ValidateSlotAction(class UUI_SaveLoadSlotWidget_C* Slot, bool* CanPerformAction);
	void Init();
	void GetSlotByIndex(int Index, class UUI_SaveLoadSlotWidget_C** Slot);
	void OnSaveSlotSelected(class UUI_SaveLoadSlotWidget_C* Slot);
	void LoadGame(TEnumAsByte<ESaveGameType> Type);
	void SaveGame(class UUI_SaveLoadSlotWidget_C* Slot);
	void DisplayNotification(const struct FText& Text);
	void ConfigFor_Load();
	void ConfigFor_Save();
	void SetCursorPosition(int Index);
	void Construct();
	void SpawnInfoPopup(const struct FText& PopupText, bool IsInfoOnly);
	void OnInfoPopupClosed();
	void OnSaveConfirm();
	void OnSaveCompleted();
	void RequestClose(bool* ClosedByPhotoMode);
	void OnCancelPressed();
	void OnConfirmPressed();
	void OnData(TArray<struct FSaveGameMenuItemData>* InData);
	void OnItemClicked(int Index, const struct FSaveGameMenuItemData& Data);
	void OnItemHovered(int Index, const struct FSaveGameMenuItemData& Data);
	void SelectSlotIndex(int Index);
	void CreateMessageDialog(const struct FText& Message, TEnumAsByte<ESlatePopupStyle> PopupStyle);
	void OnDialogCancel();
	void OnDialogConfirm();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature();
	void BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature();
	void OnDownPressed();
	void OnUpPressed();
	void OnLoadFailure();
	void OnLoadSuccess();
	void OnSaveFailure();
	void OnSaveSuccess();
	void ExecuteUbergraph_OptionsMenu_SaveLoadWidget(int EntryPoint);
	void OnActionCompleted__DelegateSignature();
	void OnSlotSelected__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
