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

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ClearErrors
struct UUI_SurvivalWheelDetails_C_ClearErrors_Params
{
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.GetCurrentErrors
struct UUI_SurvivalWheelDetails_C_GetCurrentErrors_Params
{
	TArray<struct FText>                               Out_Errors;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetLayout
struct UUI_SurvivalWheelDetails_C_SetLayout_Params
{
	bool                                               Interior;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.refreshRecipe
struct UUI_SurvivalWheelDetails_C_refreshRecipe_Params
{
	class UUI_SurvivalWheelItem_C*                     survivalWheelItemWidget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayError
struct UUI_SurvivalWheelDetails_C_DisplayError_Params
{
	struct FText                                       Error_Text;                                               // (Parm)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.isCocktailValid
struct UUI_SurvivalWheelDetails_C_isCocktailValid_Params
{
	class UUI_SurvivalWheelItem_C*                     Subitem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayWeaponRarity
struct UUI_SurvivalWheelDetails_C_DisplayWeaponRarity_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetWeaponRarity
struct UUI_SurvivalWheelDetails_C_SetWeaponRarity_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ShowRepairDetails
struct UUI_SurvivalWheelDetails_C_ShowRepairDetails_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon_Override;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetMeleeDetails
struct UUI_SurvivalWheelDetails_C_SetMeleeDetails_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.AddUserInputAction
struct UUI_SurvivalWheelDetails_C_AddUserInputAction_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	bool                                               IsUnavailable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetIngredients
struct UUI_SurvivalWheelDetails_C_SetIngredients_Params
{
	class UUI_SurvivalWheelItem_C*                     itemWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetOptionsVisible
struct UUI_SurvivalWheelDetails_C_SetOptionsVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Close
struct UUI_SurvivalWheelDetails_C_Close_Params
{
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryDetails
struct UUI_SurvivalWheelDetails_C_SetCategoryDetails_Params
{
	class UUI_SurvivalWheelCategory_C*                 categoryWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetTranslation
struct UUI_SurvivalWheelDetails_C_SetTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetVisible
struct UUI_SurvivalWheelDetails_C_SetVisible_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Construct
struct UUI_SurvivalWheelDetails_C_Construct_Params
{
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetItemName
struct UUI_SurvivalWheelDetails_C_SetItemName_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryText
struct UUI_SurvivalWheelDetails_C_SetCategoryText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ExecuteUbergraph_UI_SurvivalWheelDetails
struct UUI_SurvivalWheelDetails_C_ExecuteUbergraph_UI_SurvivalWheelDetails_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
