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

// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.setVisibilityQty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>  State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelIngredient_C::setVisibilityQty(TEnumAsByte<ESlateVisibility> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.setVisibilityQty");

	UUI_SurvivalWheelIngredient_C_setVisibilityQty_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_SurvivalWheelIngredient_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetText");

	UUI_SurvivalWheelIngredient_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.ShowCannotRepair
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelIngredient_C::ShowCannotRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.ShowCannotRepair");

	UUI_SurvivalWheelIngredient_C_ShowCannotRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetRequired
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SurvivalWheelIngredient_C::GetRequired()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetRequired");

	UUI_SurvivalWheelIngredient_C_GetRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetQuantityHave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SurvivalWheelIngredient_C::GetQuantityHave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.GetQuantityHave");

	UUI_SurvivalWheelIngredient_C_GetQuantityHave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuantityRequired               (Parm, ZeroConstructor, IsPlainOldData)
// int                            QuantityHave                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)

void UUI_SurvivalWheelIngredient_C::SetDetails(int QuantityRequired, int QuantityHave, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelIngredient.UI_SurvivalWheelIngredient_C.SetDetails");

	UUI_SurvivalWheelIngredient_C_SetDetails_Params params;
	params.QuantityRequired = QuantityRequired;
	params.QuantityHave = QuantityHave;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
