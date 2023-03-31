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

// WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_DepthGrading.UI_PhotoMode_Advanced_DepthGrading_C
// 0x0050 (0x03F8 - 0x03A8)
class UUI_PhotoMode_Advanced_DepthGrading_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_TransitionDepth;                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_TransitionSpread;                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_FarGamma;                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_FarSaturation;                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_FarTint;                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_NearGamma;                        // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_NearSat;                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_SilderVec3_C*                  UI_PhotoMode_SilderVec3_NearTint;                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoMode_Advanced_DepthGrading.UI_PhotoMode_Advanced_DepthGrading_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Silder_TransitionDepth_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_FarGamma_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_FarSaturation_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_FarTint_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_NearGamma_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_NearSat_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_SilderVec3_NearTint_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_SilderVec3_NearTint_K2Node_ComponentBoundEvent_2097_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_NearSat_K2Node_ComponentBoundEvent_2099_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_FarTint_K2Node_ComponentBoundEvent_2106_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_FarSaturation_K2Node_ComponentBoundEvent_2111_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_SilderVec3_FarGamma_K2Node_ComponentBoundEvent_2117_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void BndEvt__UI_PhotoMode_Silder_TransitionDepth_K2Node_ComponentBoundEvent_2124_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_TransitionSpread_K2Node_ComponentBoundEvent_2132_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_SilderVec3_NearGamma_K2Node_ComponentBoundEvent_349_SliderValueChanged__DelegateSignature(const struct FVector& Value);
	void ExecuteUbergraph_UI_PhotoMode_Advanced_DepthGrading(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
