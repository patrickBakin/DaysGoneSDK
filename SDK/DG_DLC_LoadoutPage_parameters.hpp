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

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingBSlotWidget
struct UDLC_LoadoutPage_C_GetRingBSlotWidget_Params
{
	class URingGridItem_C*                             AsRing_Grid_Item;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingASlotWidget
struct UDLC_LoadoutPage_C_GetRingASlotWidget_Params
{
	class URingGridItem_C*                             AsRing_Grid_Item;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetBikeSlotWidget
struct UDLC_LoadoutPage_C_GetBikeSlotWidget_Params
{
	class UBikeSkinGridItem_C*                         AsBike_Skin_Grid_Item;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetCharacterSlotWidget
struct UDLC_LoadoutPage_C_GetCharacterSlotWidget_Params
{
	class UCharacterGridItem_C*                        AsCharacter_Grid_Item;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.PlayCharacterSelectionSound
struct UDLC_LoadoutPage_C_PlayCharacterSelectionSound_Params
{
	struct FGameplayTag                                CharacterTag;                                             // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateCategoryVisibilityByTag
struct UDLC_LoadoutPage_C_UpdateCategoryVisibilityByTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.FormatTextForItemValue
struct UDLC_LoadoutPage_C_FormatTextForItemValue_Params
{
	struct FText                                       Text;                                                     // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCValueDisplayType>                  Display_Type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Formatted_Text;                                           // (Parm, OutParm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.PurchaseOrUpgradeItem
struct UDLC_LoadoutPage_C_PurchaseOrUpgradeItem_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemOwned?
struct UDLC_LoadoutPage_C_IsItemOwned__Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bIsOwned;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakePurchasePriceText
struct UDLC_LoadoutPage_C_MakePurchasePriceText_Params
{
	int                                                Shop_Points;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLockedColor
struct UDLC_LoadoutPage_C_SetLockedColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetActionVisibility
struct UDLC_LoadoutPage_C_SetActionVisibility_Params
{
	bool                                               Show_Primary;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Secondary;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Locked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetItemCost
struct UDLC_LoadoutPage_C_GetItemCost_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateChallengeGrid
struct UDLC_LoadoutPage_C_UpdateChallengeGrid_Params
{
	struct FGameplayTag                                Challenge_Key;                                            // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetTitleFade
struct UDLC_LoadoutPage_C_SetTitleFade_Params
{
	bool                                               bFaded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetSlotFade
struct UDLC_LoadoutPage_C_SetSlotFade_Params
{
	bool                                               bFaded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetChallenge
struct UDLC_LoadoutPage_C_SetChallenge_Params
{
	struct FGameplayTag                                Challenge_Tag;                                            // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateSelectedItem
struct UDLC_LoadoutPage_C_UpdateSelectedItem_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.ClearSlot
struct UDLC_LoadoutPage_C_ClearSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLoadoutMenuBySlot
struct UDLC_LoadoutPage_C_SetLoadoutMenuBySlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetSelectedSlot
struct UDLC_LoadoutPage_C_GetSelectedSlot_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutData
struct UDLC_LoadoutPage_C_UpdateLoadoutData_Params
{
	int                                                SelectedSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemEquipped?
struct UDLC_LoadoutPage_C_IsItemEquipped__Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bIsEquipped;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.EquipItem
struct UDLC_LoadoutPage_C_EquipItem_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.CloseSlot
struct UDLC_LoadoutPage_C_CloseSlot_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OpenSlot
struct UDLC_LoadoutPage_C_OpenSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeRingItemGridData
struct UDLC_LoadoutPage_C_MakeRingItemGridData_Params
{
	TArray<struct FDLCGridWidgetData>                  Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBikeSkinItemGridData
struct UDLC_LoadoutPage_C_MakeBikeSkinItemGridData_Params
{
	TArray<struct FDLCGridWidgetData>                  Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeCharacterItemGridData
struct UDLC_LoadoutPage_C_MakeCharacterItemGridData_Params
{
	TArray<struct FDLCGridWidgetData>                  Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutCategorySelection
struct UDLC_LoadoutPage_C_UpdateLoadoutCategorySelection_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeLittleGridData
struct UDLC_LoadoutPage_C_MakeLittleGridData_Params
{
	TArray<struct FDLCGridWidgetData>                  Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBigGridData
struct UDLC_LoadoutPage_C_MakeBigGridData_Params
{
	TArray<struct FDLCGridWidgetData>                  Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnFail_1CB20138489B2B72B6B3839147F5005E
struct UDLC_LoadoutPage_C_OnFail_1CB20138489B2B72B6B3839147F5005E_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnSuccess_1CB20138489B2B72B6B3839147F5005E
struct UDLC_LoadoutPage_C_OnSuccess_1CB20138489B2B72B6B3839147F5005E_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveUp
struct UDLC_LoadoutPage_C_RecieveUp_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveDown
struct UDLC_LoadoutPage_C_RecieveDown_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveLeft
struct UDLC_LoadoutPage_C_RecieveLeft_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveRight
struct UDLC_LoadoutPage_C_RecieveRight_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCircle
struct UDLC_LoadoutPage_C_RecieveCircle_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCross
struct UDLC_LoadoutPage_C_RecieveCross_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveTriangle
struct UDLC_LoadoutPage_C_RecieveTriangle_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquare
struct UDLC_LoadoutPage_C_RecieveSquare_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHeld
struct UDLC_LoadoutPage_C_RecieveCrossHeld_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHeld
struct UDLC_LoadoutPage_C_RecieveSquareHeld_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHoldUpdate
struct UDLC_LoadoutPage_C_RecieveCrossHoldUpdate_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHoldUpdate
struct UDLC_LoadoutPage_C_RecieveSquareHoldUpdate_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.Construct
struct UDLC_LoadoutPage_C_Construct_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.On Challenge Image
struct UDLC_LoadoutPage_C_On_Challenge_Image_Params
{
	TAssetPtr<class UTexture2D>                        Image;                                                    // (Parm)
	struct FGameplayTag                                ChallengeTag;                                             // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature
struct UDLC_LoadoutPage_C_BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.ExecuteUbergraph_DLC_LoadoutPage
struct UDLC_LoadoutPage_C_ExecuteUbergraph_DLC_LoadoutPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnLeaderboardsClicked__DelegateSignature
struct UDLC_LoadoutPage_C_OnLeaderboardsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
