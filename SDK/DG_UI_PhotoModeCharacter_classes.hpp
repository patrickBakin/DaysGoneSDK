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

// WidgetBlueprintGeneratedClass UI_PhotoModeCharacter.UI_PhotoModeCharacter_C
// 0x0040 (0x03E8 - 0x03A8)
class UUI_PhotoModeCharacter_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_Face;                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Checkbox_C*                    UIPhotoModeCheckbox_bike;                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Checkbox_C*                    UIPhotoModeCheckbox_deaconvis;                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Checkbox_C*                    UIPhotoModeCheckbox_othercharacters;                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                PhotoFace;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HiddenAttachment;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeCharacter.UI_PhotoModeCharacter_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Selector_Face_ToolTipWidget_1();
	class UWidget* Get_UIPhotoModeCheckbox_othercharacters_ToolTipWidget_1();
	class UWidget* Get_UIPhotoModeCheckbox_bike_ToolTipWidget_1();
	class UWidget* Get_UIPhotoModeCheckbox_deaconvis_ToolTipWidget_1();
	struct FText Get_UIPhotoModeCheckbox_deaconvis_ToolTipText_1();
	void GetDeaconsBike(class AActor** BikeActor);
	void Construct();
	void Destruct();
	void BndEvt__UI_PhotoMode_Selector_Face_K2Node_ComponentBoundEvent_232_MenuChanged__DelegateSignature(int Index);
	void UnhideBike();
	void BndEvt__UIPhotoModeCheckbox_deaconvis_K2Node_ComponentBoundEvent_1551_MenuChanged__DelegateSignature(bool Checked);
	void BndEvt__UIPhotoModeCheckbox_bike_K2Node_ComponentBoundEvent_1570_MenuChanged__DelegateSignature(bool Checked);
	void BndEvt__UIPhotoModeCheckbox_othercharacters_K2Node_ComponentBoundEvent_1602_MenuChanged__DelegateSignature(bool Checked);
	void ExecuteUbergraph_UI_PhotoModeCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
