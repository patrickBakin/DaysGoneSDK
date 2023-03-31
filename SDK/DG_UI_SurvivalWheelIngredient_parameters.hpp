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

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.setVisibilityQty
struct UUI_SurvivalWheelIngredient_C_setVisibilityQty_Params
{
	TEnumAsByte<ESlateVisibility>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetText
struct UUI_SurvivalWheelIngredient_C_SetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.ShowCannotRepair
struct UUI_SurvivalWheelIngredient_C_ShowCannotRepair_Params
{
};

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetRequired
struct UUI_SurvivalWheelIngredient_C_GetRequired_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetQuantityHave
struct UUI_SurvivalWheelIngredient_C_GetQuantityHave_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetDetails
struct UUI_SurvivalWheelIngredient_C_SetDetails_Params
{
	int                                                QuantityRequired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuantityHave;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
