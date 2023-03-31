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

// WidgetBlueprintGeneratedClass OptionsTopMenuWidget.OptionsTopMenuWidget_C
// 0x01EA (0x053A - 0x0350)
class UOptionsTopMenuWidget_C : public UBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Background;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicActionIcon_C*                        CancelActionIcon;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  CancelLabel;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  DisabledSelectionText;                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ULegendActionTextBlock_C*                    InteractionControls;                                      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              InteractionLegend;                                        // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  InteractionText;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              Legend_Navigation;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_Cancel;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_Select;                                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CategoryMenuWidget_C*                    OptionsCategoryWidget;                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  OptionsTitle;                                             // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                WidgetContainer;                                          // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPlayerProfileSubMenuClass>          MenuProfiles;                                             // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMissionInProgress;                                       // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FText                                       MenuText_NoMissionInProgress;                             // 0x03E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MenuText_RestartCheckpoint;                               // 0x03F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bLoadActionCompleted;                                     // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeactivateSelectedCategory;                              // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProfileOptionModified;                                   // 0x0412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0413(0x0001) MISSED OFFSET
	float                                              MenuTimer;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPlayerProfileSubMenuClass>          ActiveMenuProfile;                                        // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               bRunningOnPS4;                                            // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UBaseMenuWidget*                             ActivePopupWidget;                                        // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UBaseMenuWidget*                             ActiveMenuWidget;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       MenuText_QuitGame;                                        // 0x0440(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasOpened;                                                // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FText                                       MenuText_QuitMission;                                     // 0x0460(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasMissionStartSave_;                                     // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasCheckpointSave_;                                       // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPressedCancelMenu;                                       // 0x047A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x047B(0x0005) MISSED OFFSET
	struct FText                                       MenuText_PhotoMode;                                       // 0x0480(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CheckpointSaveIsCorrupted;                                // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FText                                       MenuText_QuitChallenge;                                   // 0x04A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MenuText_GoToChallengeMenu;                               // 0x04B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MenuText_RestartChallenge;                                // 0x04D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseJobResetMenuOptions;                                   // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	TArray<struct FPlayerProfileSubMenuClass>          MenuProfiles_ResettingJobs;                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       MenuText_ResetProgress;                                   // 0x0500(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EJobResetTypes>                        SelectedJobResetType;                                     // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetIsAllJobs;                                           // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x051A(0x0006) MISSED OFFSET
	TArray<struct FPlayerProfileSubMenuClass>          MenuProfilesMain_savedOff;                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              DebugTime;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLoadableSave_;                                         // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InChallenge_;                                             // 0x0535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InBlackScreen_;                                           // 0x0536(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCinematic_;                                             // 0x0537(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InMission_;                                               // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClosedMultiple;                                          // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsTopMenuWidget.OptionsTopMenuWidget_C");
		return ptr;
	}


	void OnFileSelectedForCriticalLoad(const struct FString& FileName);
	void OnFileSelectMenuClosed();
	void PrepareGameStateForSave();
	void OnCriticalLoadDismissed();
	void OnFileSelectedForSave(const struct FString& FileName);
	void OnFileSelectedForLoad(const struct FString& FileName);
	void QuitToDesktop();
	void OnQuitToDesktopSelected();
	void OnResetJobsConfirmed();
	void OnResetJobsSelected();
	void ResetJobsMenuSelected();
	void OnRestartChallenge();
	void OnValidRestartChallengeSelected();
	void OnRestartChallengeSelected();
	void OnGoToChallengeMenuSelected();
	void QuitToMainMenu_ForChallengeMenu();
	void OnQuitChallengeSelected();
	void OnSkipGameplaySelected();
	void OnPhotoModeSelected();
	void OnHelpOptionSelected();
	void OnQuitMission();
	void OnValidQuitMissionSelected();
	void OnQuitMissionSelected();
	void OnSaveWidgetActionCompleted();
	void OnQuitSelected();
	void QuitToMainMenu();
	void PostInit();
	void ShouldRemoveMenuOption(const struct FPlayerProfileSubMenuClass& Option, bool* ShouldRemoveOption_, struct FPlayerProfileSubMenuClass* SelectionDetails);
	void InitMenuOptions();
	void SetSelectionStatusText(const struct FText& InText);
	void CloseIfNoCategorySelected();
	void CloseAllWidgets();
	void HandleAPISaveLoad(TEnumAsByte<EPlayerSaveProfileType> ProfileType, bool* Handled);
	void SpawnLoadSaveWidget(TEnumAsByte<ESaveMenuMode> MenuMode, class UFileSelectMenu_C** Menu);
	void HasValidCheckpoint(bool* IsValid);
	void SaveModifiedProfile();
	void OnSaveGameSelected();
	void SetNumDaysGone();
	void OnLoadWidgetActionCompleted();
	void OnLoadWidgetClosed();
	void OnLoadGameSelected();
	void OnValidRestartcheckpointSelected();
	void OnRestartCheckpointSelected();
	void OnPopupOpen(class UBaseMenuWidget* PopUp);
	void OnPopupClosed();
	void SetCategoryWidgetInputEnabled(bool IsEnabled);
	void OnRestartCheckpoint();
	void HandleSelectedProfileOption(TEnumAsByte<EPlayerSaveProfileType> ProfileOption);
	void Init();
	void Construct();
	void RequestClose(bool* ClosedByPhotoMode);
	void BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature(int Index, bool IsSelected);
	void OnSubMenuClose();
	void OnProfileModified();
	void OnWidgetClosed();
	void BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature(int Index, bool IsSelected);
	void OnCancelPressed();
	void OnHelpMenuClosed();
	void Cancel();
	void TeardownMenu();
	void BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature();
	void BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature();
	void ExecuteUbergraph_OptionsTopMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
