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

// WidgetBlueprintGeneratedClass UI_PhotoModeFilters.UI_PhotoModeFilters_C
// 0x2238 (0x25E0 - 0x03A8)
class UUI_PhotoModeFilters_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_PhotoMode_Button_C*                      DeletePreset;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Button_C*                      SavePreset;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_Filter;                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_Frame;                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_LogoColor;                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_LogoPosition;                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBendPhotoModePostPreset                    BlackWhite;                                               // 0x03E8(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Cold;                                                     // 0x0598(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Warm;                                                     // 0x0748(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Vivid;                                                    // 0x08F8(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Vintage;                                                  // 0x0AA8(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    DefaultSettings;                                          // 0x0C58(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               Frames;                                                   // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Vapor;                                                    // 0x0E18(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EPhotoModeFrames>                      CurrentFrame;                                             // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHardModeCompleted;                                      // 0x0FC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0FCA(0x0006) MISSED OFFSET
	struct FBendPhotoModePostPreset                    Noir;                                                     // 0x0FD0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    BlueOrange;                                               // 0x1180(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Classic;                                                  // 0x1330(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Drifter;                                                  // 0x14E0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Gold;                                                     // 0x1690(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Grim;                                                     // 0x1840(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Magma;                                                    // 0x19F0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Rustic;                                                   // 0x1BA0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Sepia;                                                    // 0x1D50(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Soft;                                                     // 0x1F00(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Summer;                                                   // 0x20B0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Sarah;                                                    // 0x2260(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendPhotoModePostPreset                    Emerald;                                                  // 0x2410(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBendPhotoModePostPreset>            DefaultPresets;                                           // 0x25C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBendPhotoModePostPreset>            AllPresets;                                               // 0x25D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeFilters.UI_PhotoModeFilters_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1();
	void SetPresetEntries(TArray<struct FBendPhotoModePostPreset>* Presets);
	void GetPresets(TArray<struct FBendPhotoModePostPreset>* Presets, TArray<struct FBendPhotoModePostPreset>* UserCreatedPresets);
	void DeletePresetButtonVisibility(bool Visible);
	void HasValidPresetName(const struct FBendPhotoModePostPreset& Preset, bool* Return);
	void LoadPreset(const struct FBendPhotoModePostPreset& Preset);
	void Construct();
	void BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature(int Index);
	void BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature(int Index);
	void BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature(int Index);
	void BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature(int Index);
	void RefreshPresets(bool SetNewlyCreatePresetActive, bool PresetWasDeleted);
	void BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature();
	void BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature();
	void ExecuteUbergraph_UI_PhotoModeFilters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
