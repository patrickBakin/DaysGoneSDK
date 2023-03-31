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

// WidgetBlueprintGeneratedClass DisplayOptionsPanel.DisplayOptionsPanel_C
// 0x00D0 (0x0358 - 0x0288)
class UDisplayOptionsPanel_C : public UOptionList
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOptionSlider_C*                             FrameRate;                                                // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionToggle_C*                             HDR;                                                      // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionStepper_C*                            Monitor;                                                  // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionStepper_C*                            RefreshRate;                                              // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionSlider_C*                             Resolution;                                               // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionSlider_C*                             SyncInterval;                                             // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionSubmenu_C*                            TempApply;                                                // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionToggle_C*                             VSync;                                                    // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionStepper_C*                            WindowMode;                                               // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bConfirmingResolution;                                    // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              ConfirmationTimeout;                                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_PopupMenuWidget_C*                       ConfirmationPopup;                                        // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           ResolutionValues;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               ResolutionNames;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           RefreshRateValues;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               RefreshRateNames;                                         // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               DisplayNames;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               SyncIntervalFPSNames;                                     // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnMonitorChanged;                                         // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DisplayOptionsPanel.DisplayOptionsPanel_C");
		return ptr;
	}


	TEnumAsByte<EOptionListReply> RequestMenuChange();
	void UpdateOptionLocks();
	void PopulateOptions();
	void FindRefreshIndex(int* Index, float* Rate, int* _0, int* _1);
	void ClearParameters();
	void RefreshParameters();
	void RevertVideoSettings();
	void FindResolutionIndex(int* Index, int* Width, int* Height);
	void Construct();
	void ResetToDefaults();
	void SynchronizeOptionValues();
	void BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature(class UOptionValueControl* Widget);
	void Confirm_Display(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void Match_Settings();
	void Apply_Display_Changes();
	void Notify_On_Unsaved_Settings();
	void On_Unsaved_Settings_Selection(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget);
	void ExecuteUbergraph_DisplayOptionsPanel(int EntryPoint);
	void OnMonitorChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
