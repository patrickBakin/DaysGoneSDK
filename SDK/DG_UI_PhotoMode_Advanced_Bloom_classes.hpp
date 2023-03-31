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

// WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_Bloom.UI_PhotoMode_Advanced_Bloom_C
// 0x0060 (0x0408 - 0x03A8)
class UUI_PhotoMode_Advanced_Bloom_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom1Intensity;                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom1MaxIntensity;                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom1Threshold;                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom2Intensity;                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom2MaxIntensity;                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_Bloom2Threshold;                      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Bloom1Color;                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Bloom1Size;                       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_Bloom2Color;                      // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_bloom2Size;                       // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_Bloom.UI_PhotoMode_Advanced_Bloom_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_SilderVec3_Bloom2Color_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_bloom2Size_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom2MaxIntensity_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom2Threshold_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom2Intensity_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Bloom1Color_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_Bloom1Size_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom1MaxIntensity_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom1Threshold_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_Bloom1Intensity_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_Silder_Input1Scale_K2Node_ComponentBoundEvent_277_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Input1MinIntensity_K2Node_ComponentBoundEvent_285_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Bloom1Threshold_K2Node_ComponentBoundEvent_356_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Bloom2Threshold_K2Node_ComponentBoundEvent_368_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Bloom1MaxIntensity_K2Node_ComponentBoundEvent_379_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_Bloom2MaxIntensity_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_SilderVec3_Bloom1Size_K2Node_ComponentBoundEvent_420_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_bloom2Size_K2Node_ComponentBoundEvent_434_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_Bloom1Color_K2Node_ComponentBoundEvent_449_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_Bloom2Color_K2Node_ComponentBoundEvent_465_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void ExecuteUbergraph_UI_PhotoMode_Advanced_Bloom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
