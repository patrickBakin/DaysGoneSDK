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

// WidgetBlueprintGeneratedClass UI_PhotoModeLens.UI_PhotoModeLens_C
// 0x0040 (0x03E8 - 0x03A8)
class UUI_PhotoModeLens_C : public UUI_PhotoModeMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainVBox;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Selector_C*                    UI_PhotoMode_Selector_aperture;                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_FocusDistance;                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_FOV;                                  // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_PhotoMode_Silder_C*                      UI_PhotoMode_Silder_GrainAmount;                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                      Stops;                                                    // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeLens.UI_PhotoModeLens_C");
		return ptr;
	}


	class UWidget* Get_UI_PhotoMode_Silder_GrainAmount_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Selector_aperture_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_FocusDistance_ToolTipWidget_1();
	class UWidget* Get_UI_PhotoMode_Silder_FOV_ToolTipWidget_1();
	void Construct();
	void BndEvt__UI_PhotoMode_Silder_FOV_K2Node_ComponentBoundEvent_198_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_FocusDistance_K2Node_ComponentBoundEvent_193_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Silder_GrainAmount_K2Node_ComponentBoundEvent_149_SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser);
	void BndEvt__UI_PhotoMode_Selector_K2Node_ComponentBoundEvent_292_MenuChanged__DelegateSignature(int Index);
	void SetFocalDistance(float Distance);
	void ExecuteUbergraph_UI_PhotoModeLens(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
