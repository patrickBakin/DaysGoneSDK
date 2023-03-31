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

// WidgetBlueprintGeneratedClass UI_PhotoModeCameraSettings.UI_PhotoModeCameraSettings_C
// 0x0028 (0x03D0 - 0x03A8)
class UUI_PhotoModeCameraSettings_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Brightness;                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_CameraRoll;                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Contrast;                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeCameraSettings.UI_PhotoModeCameraSettings_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Silder_Contrast_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Brightness_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_CameraRoll_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_Silder_CameraRoll_K2Node_ComponentBoundEvent_205_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Brightness_K2Node_ComponentBoundEvent_310_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Contrast_K2Node_ComponentBoundEvent_1261_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void MenuActive(bool* Active);
	void ExecuteUbergraph_UI_PhotoModeCameraSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
