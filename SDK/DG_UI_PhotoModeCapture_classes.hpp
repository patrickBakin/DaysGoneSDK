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

// WidgetBlueprintGeneratedClass UI_PhotoModeCapture.UI_PhotoModeCapture_C
// 0x0030 (0x03D8 - 0x03A8)
class UUI_PhotoModeCapture_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_PhotoMode_Button_C*                      CaptureButton;                                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    ResolutionMultiplerSelector;                              // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                      Stops;                                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeCapture.UI_PhotoModeCapture_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Silder_GrainAmount_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Selector_aperture_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_FocusDistance_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_FOV_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_Selector_58_K2Node_ComponentBoundEvent_1520_MenuChanged__DelegateSignature(int Index);
	void BndEvt__UI_PhotoMode_Button_29_K2Node_ComponentBoundEvent_1540_ButtonClicked__DelegateSignature();
	void BndEvt__UI_PhotoMode_Checkbox_14_K2Node_ComponentBoundEvent_1556_MenuChanged__DelegateSignature(bool Checked);
	void ExecuteUbergraph_UI_PhotoModeCapture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
