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

// WidgetBlueprintGeneratedClass UI_Storylines_Menu.UI_Storylines_Menu_C
// 0x0070 (0x0460 - 0x03F0)
class UUI_Storylines_Menu_C : public UUI_Menu_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Journal_Collectable_Viewer_C*            Collectable_Viewer;                                       // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_StorylinesPage_Collectables_C*           Collectables;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_StorylinesPage_MainPage_C*               MainPage;                                                 // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_StorylinesPage_Missions_C*               Storylines_Active;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_StorylinesPage_Missions_C*               Storylines_Complete;                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_JournalPage_Trophies_C*                  Trophies;                                                 // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ENUM_Menu_Type>                        CurrentActiveMenu;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGoToNextPage;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoToPrevPage;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuClicked;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Storylines_Menu.UI_Storylines_Menu_C");
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
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature();
	void BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void ExecuteUbergraph_UI_Storylines_Menu(int EntryPoint);
	void OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu);
	void OnGoToPrevPage__DelegateSignature();
	void OnGoToNextPage__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
