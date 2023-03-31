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

// WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_Color.UI_PhotoMode_Advanced_Color_C
// 0x0068 (0x0410 - 0x03A8)
class UUI_PhotoMode_Advanced_Color_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Brightness;                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Saturation;                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Temp;                                 // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Tint;                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Vibrancy;                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_VignetteFalloff;                      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_VignetteStrength;                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Contrast;                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Gain;                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Gamma;                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Offset;                           // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_Color.UI_PhotoMode_Advanced_Color_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Silder_VignetteFalloff_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_VignetteStrength_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Offset_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Gain_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Gamma_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Vibrancy_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Saturation_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Contrast_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Brightness_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Tint_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Temp_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_Silder_Brightness_K2Node_ComponentBoundEvent_603_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Input1Scale_K2Node_ComponentBoundEvent_738_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_MaxInensity_K2Node_ComponentBoundEvent_748_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_MinIntensity_K2Node_ComponentBoundEvent_759_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Saturation_K2Node_ComponentBoundEvent_771_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Temp_K2Node_ComponentBoundEvent_798_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Tint_K2Node_ComponentBoundEvent_813_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Vibrancy_K2Node_ComponentBoundEvent_829_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_SilderVec3_K2Node_ComponentBoundEvent_502_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_Highlights_K2Node_ComponentBoundEvent_967_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_Shadows_K2Node_ComponentBoundEvent_1038_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_K2Node_ComponentBoundEvent_295_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_Silder_VignetteStrength_K2Node_ComponentBoundEvent_578_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_VignetteFalloff_K2Node_ComponentBoundEvent_624_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void MenuActive(bool* Active);
	void ExecuteUbergraph_UI_PhotoMode_Advanced_Color(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
