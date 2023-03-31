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

// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// bool                           IsUnavailable                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelAction_C::SetDetails(const struct FName& Action, const struct FText& Text, bool IsUnavailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.SetDetails");

	UUI_SurvivalWheelAction_C_SetDetails_Params params;
	params.Action = Action;
	params.Text = Text;
	params.IsUnavailable = IsUnavailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelAction_C::BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature");

	UUI_SurvivalWheelAction_C_BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.ExecuteUbergraph_UI_SurvivalWheelAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelAction_C::ExecuteUbergraph_UI_SurvivalWheelAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.ExecuteUbergraph_UI_SurvivalWheelAction");

	UUI_SurvivalWheelAction_C_ExecuteUbergraph_UI_SurvivalWheelAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
