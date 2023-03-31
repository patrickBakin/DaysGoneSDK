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

// WidgetBlueprintGeneratedClass UI_OptionsMenuController.UI_OptionsMenuController_C
// 0x04B0 (0x06F8 - 0x0248)
class UUI_OptionsMenuController_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UControllerTouchpad_C*                       ControllerTouchpad;                                       // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              Footer_Navigation;                                        // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             Image;                                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             Lines;                                                    // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_OnBike;                                      // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_OnFoot;                                      // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuInteract*                               MenuInteract_TouchPad;                                    // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Nav_OnBikeLabel;                                          // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Nav_OnFootLabel;                                          // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Nav_TouchPadLabel;                                        // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             OnBikeControls;                                           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             OnFootControls;                                           // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             UniversalControls;                                        // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsTweeningVisible;                                        // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              TweenVisibleFrame;                                        // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenVisibleTo;                                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTweeningText;                                           // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	float                                              TweenTextFrame;                                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenTextTo;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTweeningLines;                                          // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              TweenLinesFrame;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenLinesTo;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenSpeedSlow;                                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenSpeed;                                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TweenSpeedFast;                                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPlayerSaveProfileEntry                     SwapTargetInputEntry;                                     // 0x02E8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bTouchpadMode;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FText                                       SwipeUp;                                                  // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SwipeRight;                                               // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SwipeLeft;                                                // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SwipeDown;                                                // 0x0388(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SpecialA;                                                 // 0x03A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Up;                                                       // 0x03B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Right;                                                    // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Down;                                                     // 0x03E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Left;                                                     // 0x0400(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Triangle;                                                 // 0x0418(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       L1;                                                       // 0x0430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       L2;                                                       // 0x0448(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Square;                                                   // 0x0460(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Cross;                                                    // 0x0478(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Circle;                                                   // 0x0490(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       R2;                                                       // 0x04A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       R1;                                                       // 0x04C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       LeftStick;                                                // 0x04D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       RightStick;                                               // 0x04F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeUp;                                                   // 0x0508(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeRight;                                                // 0x0520(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeDown;                                                 // 0x0538(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeLeft;                                                 // 0x0550(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeTriangle;                                             // 0x0568(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeL1;                                                   // 0x0580(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeL2;                                                   // 0x0598(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeSquare;                                               // 0x05B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeCross;                                                // 0x05C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeCircle;                                               // 0x05E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeR2;                                                   // 0x05F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeR1;                                                   // 0x0610(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeLeftStick;                                            // 0x0628(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BikeRightStick;                                           // 0x0640(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SpecialB;                                                 // 0x0658(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bShowNavigationControls;                                  // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0671(0x0003) MISSED OFFSET
	int                                                Mode;                                                     // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              NavDefaultFont;                                           // 0x0678(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              NavSelectedFont;                                          // 0x06B8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsMenuController.UI_OptionsMenuController_C");
		return ptr;
	}


	int GetInputMode();
	TEnumAsByte<ESlateVisibility> Get_ModeDisplay_Visibility_1();
	struct FText Get_ModeLabel_Text_1();
	TEnumAsByte<ESlateVisibility> Get_UniversalControls_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_OnFootControls_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_OnBikeControls_Visibility_1();
	void SetMode(int Mode);
	TEnumAsByte<ESlateVisibility> GetVisibility_1();
	TEnumAsByte<ESlateVisibility> Get_Footer_Navigation_Visibility_1();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature();
	void BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature();
	void BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature();
	void Next();
	void Previous();
	void ExecuteUbergraph_UI_OptionsMenuController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
