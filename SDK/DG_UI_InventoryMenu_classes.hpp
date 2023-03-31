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

// WidgetBlueprintGeneratedClass UI_InventoryMenu.UI_InventoryMenu_C
// 0x00A0 (0x0490 - 0x03F0)
class UUI_InventoryMenu_C : public UUI_Menu_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Inventory_MainPage_C*                    MainPage;                                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_Inventory_Resources_C*                   UI_Inventory_Resources;                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryPage_Crafting_C*                UI_InventoryPage_Crafting;                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryPage_Gear_C*                    UI_InventoryPage_Gear_19;                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryPage_Materials_C*               UI_InventoryPage_Materials;                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryPage_Supplies_C*                UI_InventoryPage_Supplies;                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryPage_Tutorial_C*                UI_InventoryPage_Tutorial;                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FInventoryItemTag                           ScrapId;                                                  // 0x0430(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryItemTag                           EarsID;                                                   // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ENUM_Menu_Type>                        CurrentActiveMenu;                                        // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                EarCount;                                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MeatCount;                                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGoToNextPage;                                           // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoToPrevPage;                                           // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuClicked;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryMenu.UI_InventoryMenu_C");
		return ptr;
	}


	void UpdateSubMenuLocations();
	void DisplaySubmenus(bool State);
	void GoToPageByType(TEnumAsByte<ENUM_Menu_Type>* MenuType, bool* Success);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void DisplayAlternateNavigation(bool* State);
	void SetNavigationState(TEnumAsByte<EMenuTypes>* Menu, float* angle);
	void InitStaticImages();
	void FlushStaticImages();
	void BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1071_OnGoToNextPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
	void BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1073_OnGoToPrevPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
	void BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1146_OnGoToNextPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
	void BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1150_OnGoToPrevPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_1551_OnRequestClose__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_1862_OnGoToNextPage__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_1869_OnGoToPrevPage__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_1627_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void ExecuteUbergraph_UI_InventoryMenu(int EntryPoint);
	void OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void OnGoToPrevPage__DelegateSignature();
	void OnGoToNextPage__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
