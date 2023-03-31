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

// Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelAlert_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.Construct");

	UUI_SurvivalWheelAlert_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.BndEvt__Alert_K2Node_ComponentBoundEvent_463_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_SurvivalWheelAlert_C::BndEvt__Alert_K2Node_ComponentBoundEvent_463_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.BndEvt__Alert_K2Node_ComponentBoundEvent_463_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_SurvivalWheelAlert_C_BndEvt__Alert_K2Node_ComponentBoundEvent_463_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.ExecuteUbergraph_UI_SurvivalWheelAlert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelAlert_C::ExecuteUbergraph_UI_SurvivalWheelAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelAlert.UI_SurvivalWheelAlert_C.ExecuteUbergraph_UI_SurvivalWheelAlert");

	UUI_SurvivalWheelAlert_C_ExecuteUbergraph_UI_SurvivalWheelAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
