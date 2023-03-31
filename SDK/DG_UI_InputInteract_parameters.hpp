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

// Function UI_InputInteract.UI_InputInteract_C.SetAmmoCount
struct UUI_InputInteract_C_SetAmmoCount_Params
{
	class ABendInventoryPickup*                        PickupRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.GetDurability
struct UUI_InputInteract_C_GetDurability_Params
{
	class ABendInventoryPickup*                        Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetTrackingState
struct UUI_InputInteract_C_SetTrackingState_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Advertising;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.GetWeaponComparison
struct UUI_InputInteract_C_GetWeaponComparison_Params
{
	class ABendInventoryPickup*                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBetter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetWeaponIcon
struct UUI_InputInteract_C_SetWeaponIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	float                                              WeaponDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseTextVisible
struct UUI_InputInteract_C_SetAdvertiseTextVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function UI_InputInteract.UI_InputInteract_C.UpdateProgressData
struct UUI_InputInteract_C_UpdateProgressData_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetBikePromptVisible
struct UUI_InputInteract_C_SetBikePromptVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.UpdateAdvertiseData
struct UUI_InputInteract_C_UpdateAdvertiseData_Params
{
	TEnumAsByte<Enum_Interact_Types>                   Interact_Type;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OverrideText;                                             // (Parm)
};

// Function UI_InputInteract.UI_InputInteract_C.SetPromptVisible
struct UUI_InputInteract_C_SetPromptVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseType
struct UUI_InputInteract_C_SetAdvertiseType_Params
{
	TEnumAsByte<EIconTypes>                            IconType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetButtonType
struct UUI_InputInteract_C_SetButtonType_Params
{
	TEnumAsByte<EInteractButton>                       Button_Type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetWeaponCardVisible
struct UUI_InputInteract_C_SetWeaponCardVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function UI_InputInteract.UI_InputInteract_C.SetInteractLayout
struct UUI_InputInteract_C_SetInteractLayout_Params
{
	TEnumAsByte<Enum_Interact_Types>                   Interact_Type;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetProgressVisible
struct UUI_InputInteract_C_SetProgressVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function UI_InputInteract.UI_InputInteract_C.CheckWeapon
struct UUI_InputInteract_C_CheckWeapon_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.HackAmmoInteractToNotification
struct UUI_InputInteract_C_HackAmmoInteractToNotification_Params
{
	struct FActorInteractDetails                       ActorInteractDetails;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_InputInteract.UI_InputInteract_C.SetDetails
struct UUI_InputInteract_C_SetDetails_Params
{
	struct FActorInteractDetails                       ActorInteractDetails;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<Enum_Interact_Types>                   interact_type;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetVisible
struct UUI_InputInteract_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.SetButtonDisabled
struct UUI_InputInteract_C_SetButtonDisabled_Params
{
};

// Function UI_InputInteract.UI_InputInteract_C.SetHoldVisible
struct UUI_InputInteract_C_SetHoldVisible_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.UpdateButtonProgress
struct UUI_InputInteract_C_UpdateButtonProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.OnKeyDown
struct UUI_InputInteract_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InputInteract.UI_InputInteract_C.SetInteractDetails
struct UUI_InputInteract_C_SetInteractDetails_Params
{
	struct FActorInteractDetails*                      Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_InputInteract.UI_InputInteract_C.SetProgressPercent
struct UUI_InputInteract_C_SetProgressPercent_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.AsyncLoadTextureAsset
struct UUI_InputInteract_C_AsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.CustomEvent_1
struct UUI_InputInteract_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_InputInteract.UI_InputInteract_C.BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature
struct UUI_InputInteract_C_BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InputInteract.UI_InputInteract_C.ExecuteUbergraph_UI_InputInteract
struct UUI_InputInteract_C_ExecuteUbergraph_UI_InputInteract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
