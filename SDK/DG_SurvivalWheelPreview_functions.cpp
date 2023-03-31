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

// Function SurvivalWheelPreview.SurvivalWheelPreview_C.UpdateIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USurvivalWheelPreview_C::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalWheelPreview.SurvivalWheelPreview_C.UpdateIcons");

	USurvivalWheelPreview_C_UpdateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalWheelPreview.SurvivalWheelPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USurvivalWheelPreview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalWheelPreview.SurvivalWheelPreview_C.Construct");

	USurvivalWheelPreview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalWheelPreview.SurvivalWheelPreview_C.OnShow
// (Event, Public, BlueprintEvent)

void USurvivalWheelPreview_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalWheelPreview.SurvivalWheelPreview_C.OnShow");

	USurvivalWheelPreview_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalWheelPreview.SurvivalWheelPreview_C.OnHide
// (Event, Public, BlueprintEvent)

void USurvivalWheelPreview_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalWheelPreview.SurvivalWheelPreview_C.OnHide");

	USurvivalWheelPreview_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalWheelPreview.SurvivalWheelPreview_C.ExecuteUbergraph_SurvivalWheelPreview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USurvivalWheelPreview_C::ExecuteUbergraph_SurvivalWheelPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalWheelPreview.SurvivalWheelPreview_C.ExecuteUbergraph_SurvivalWheelPreview");

	USurvivalWheelPreview_C_ExecuteUbergraph_SurvivalWheelPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
