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

// WidgetBlueprintGeneratedClass UI_MegaMenu.UI_MegaMenu_C
// 0x0080 (0x02C8 - 0x0248)
class UUI_MegaMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class U3D_Select_Left_C*                           _3D_Select_Left;                                          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Bars;                                                     // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryMenu_C*                         Inventory_Menu;                                           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_MapMenuWidget3D_C*                       Map_Menu;                                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    OverlayContent;                                           // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SkillMenu_C*                             Skills_Menu;                                              // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_Storylines_Menu_C*                       Storylines_Menu;                                          // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnMenuClicked;                                            // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestClose;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoToNextPage;                                           // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoToPrevPage;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MegaMenu.UI_MegaMenu_C");
		return ptr;
	}


	void UpdatePanelLocations();
	void FlushStaticImages();
	void InitStaticImages();
	void SetCurrentMenu(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature();
	void BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature();
	void BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature();
	void BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature();
	void BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature();
	void BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature();
	void BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature();
	void BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature();
	void BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature();
	void BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature();
	void BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature();
	void BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature();
	void BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature();
	void ExecuteUbergraph_UI_MegaMenu(int EntryPoint);
	void OnGoToPrevPage__DelegateSignature();
	void OnGoToNextPage__DelegateSignature();
	void OnRequestClose__DelegateSignature();
	void OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
