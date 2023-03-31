#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Menu_Base.UI_Menu_Base_C.FlushStaticImages
struct UUI_Menu_Base_C_FlushStaticImages_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.InitStaticImages
struct UUI_Menu_Base_C_InitStaticImages_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.SetNavigationState
struct UUI_Menu_Base_C_SetNavigationState_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.DisplayAlternateNavigation
struct UUI_Menu_Base_C_DisplayAlternateNavigation_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.Set3DMenuReference
struct UUI_Menu_Base_C_Set3DMenuReference_Params
{
	class AMenu3D*                                     Menu3dCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.SetInputActive
struct UUI_Menu_Base_C_SetInputActive_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.GoToPageByType
struct UUI_Menu_Base_C_GoToPageByType_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.GetAllThatArentActive
struct UUI_Menu_Base_C_GetAllThatArentActive_Params
{
	TArray<class UUI_MenuPage_Base_C*>                 SkillPages;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Menu_Base.UI_Menu_Base_C.Construct
struct UUI_Menu_Base_C_Construct_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.Tick
struct UUI_Menu_Base_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.DirectionalInputCooldown
struct UUI_Menu_Base_C_DirectionalInputCooldown_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.RequestClose
struct UUI_Menu_Base_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.ToggleMenuHidden
struct UUI_Menu_Base_C_ToggleMenuHidden_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnCancelPressed
struct UUI_Menu_Base_C_OnCancelPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmPressed
struct UUI_Menu_Base_C_OnConfirmPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnCancelReleased
struct UUI_Menu_Base_C_OnCancelReleased_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmReleased
struct UUI_Menu_Base_C_OnConfirmReleased_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset
struct UUI_Menu_Base_C_AsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_0_Copy
struct UUI_Menu_Base_C_CustomEvent_0_Copy_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset_Material
struct UUI_Menu_Base_C_AsyncLoadTextureAsset_Material_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_2
struct UUI_Menu_Base_C_CustomEvent_2_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_Menu_Base.UI_Menu_Base_C.UnloadTextureAsset
struct UUI_Menu_Base_C_UnloadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Pressed
struct UUI_Menu_Base_C_OnSelect2Pressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Pressed
struct UUI_Menu_Base_C_OnSelect1Pressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnTabNextPressed
struct UUI_Menu_Base_C_OnTabNextPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnTabPreviousPressed
struct UUI_Menu_Base_C_OnTabPreviousPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnPageNextPressed
struct UUI_Menu_Base_C_OnPageNextPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnPagePreviousPressed
struct UUI_Menu_Base_C_OnPagePreviousPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Released
struct UUI_Menu_Base_C_OnSelect1Released_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Released
struct UUI_Menu_Base_C_OnSelect2Released_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnUpPressed
struct UUI_Menu_Base_C_OnUpPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnDownPressed
struct UUI_Menu_Base_C_OnDownPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnLeftPressed
struct UUI_Menu_Base_C_OnLeftPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.OnRightPressed
struct UUI_Menu_Base_C_OnRightPressed_Params
{
};

// Function UI_Menu_Base.UI_Menu_Base_C.ExecuteUbergraph_UI_Menu_Base
struct UUI_Menu_Base_C_ExecuteUbergraph_UI_Menu_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Menu_Base.UI_Menu_Base_C.WeaponFromLocker__DelegateSignature
struct UUI_Menu_Base_C_WeaponFromLocker__DelegateSignature_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function UI_Menu_Base.UI_Menu_Base_C.ItemPurchased__DelegateSignature
struct UUI_Menu_Base_C_ItemPurchased__DelegateSignature_Params
{
	struct FGameplayTag                                ItemTag;                                                  // (Parm)
};

// Function UI_Menu_Base.UI_Menu_Base_C.MenuClosed__DelegateSignature
struct UUI_Menu_Base_C_MenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
