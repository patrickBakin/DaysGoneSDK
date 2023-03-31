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

// WidgetBlueprintGeneratedClass UI_Menu_Base.UI_Menu_Base_C
// 0x00A0 (0x03F0 - 0x0350)
class UUI_Menu_Base_C : public UBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_MenuPage_Base_C*                         CurrentActiveWidget;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendPlayerController*                       PlayerControllerRef;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUI_MenuPage_Base_C*                         PreviousWidgetBeforeOverlay;                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBaseMenuWidget*                             PauseMenuRef;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUI_MenuPage_Base_C*>                 AllPages;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CanDoDirectionalInput;                                    // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UBendEncampmentData*                         CurrentEncampment;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    MenuClosed;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemPurchased;                                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFromLocker;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ENUM_Menu_Type>                        ForceLoadOnlyPage;                                        // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MenuHidden;                                               // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewTrustLevelWhenOpened;                                  // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03CB(0x0005) MISSED OFFSET
	class UBendWidgetComponent*                        BendWidgetRef;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableInputOnConstruct;                                   // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class AMenu3D*                                     _3DMenuRefCode;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUI_MenuPage_Base_C*                         NewVar_1;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_Base.UI_Menu_Base_C");
		return ptr;
	}


	void FlushStaticImages();
	void InitStaticImages();
	void SetNavigationState(TEnumAsByte<EMenuTypes> Menu, float angle);
	void DisplayAlternateNavigation(bool State);
	void Set3DMenuReference(class AMenu3D* Menu3dCode);
	void SetInputActive(bool Enabled);
	void GoToPageByType(TEnumAsByte<ENUM_Menu_Type> MenuType, bool* Success);
	void GetAllThatArentActive(TArray<class UUI_MenuPage_Base_C*>* SkillPages);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void DirectionalInputCooldown();
	void RequestClose(bool* ClosedByPhotoMode);
	void ToggleMenuHidden();
	void OnCancelPressed();
	void OnConfirmPressed();
	void OnCancelReleased();
	void OnConfirmReleased();
	void AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize);
	void CustomEvent_0_Copy(TAssetPtr<class UObject> ObjectAssetPtr);
	void AsyncLoadTextureAsset_Material(TAssetPtr<class UTexture2D> TextureAsset, class UMaterialInstanceDynamic* Mid);
	void CustomEvent_2(TAssetPtr<class UObject> ObjectAssetPtr);
	void UnloadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset);
	void OnSelect2Pressed();
	void OnSelect1Pressed();
	void OnTabNextPressed();
	void OnTabPreviousPressed();
	void OnPageNextPressed();
	void OnPagePreviousPressed();
	void OnSelect1Released();
	void OnSelect2Released();
	void OnUpPressed();
	void OnDownPressed();
	void OnLeftPressed();
	void OnRightPressed();
	void ExecuteUbergraph_UI_Menu_Base(int EntryPoint);
	void WeaponFromLocker__DelegateSignature(const struct FGameplayTag& Tag);
	void ItemPurchased__DelegateSignature(const struct FGameplayTag& ItemTag);
	void MenuClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
