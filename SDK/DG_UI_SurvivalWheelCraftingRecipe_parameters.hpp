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

// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredient Count
struct UUI_SurvivalWheelCraftingRecipe_C_Set_Ingredient_Count_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredients
struct UUI_SurvivalWheelCraftingRecipe_C_Set_Ingredients_Params
{
	class UUI_SurvivalWheelItem_C*                     Wheel_item;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Construct
struct UUI_SurvivalWheelCraftingRecipe_C_Construct_Params
{
};

// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe
struct UUI_SurvivalWheelCraftingRecipe_C_ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
