// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredient Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCraftingRecipe_C::Set_Ingredient_Count(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredient Count");

	UUI_SurvivalWheelCraftingRecipe_C_Set_Ingredient_Count_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* Wheel_item                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCraftingRecipe_C::Set_Ingredients(class UUI_SurvivalWheelItem_C* Wheel_item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Set Ingredients");

	UUI_SurvivalWheelCraftingRecipe_C_Set_Ingredients_Params params;
	params.Wheel_item = Wheel_item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelCraftingRecipe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.Construct");

	UUI_SurvivalWheelCraftingRecipe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCraftingRecipe_C::ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCraftingRecipe.UI_SurvivalWheelCraftingRecipe_C.ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe");

	UUI_SurvivalWheelCraftingRecipe_C_ExecuteUbergraph_UI_SurvivalWheelCraftingRecipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
