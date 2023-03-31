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

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.TurnOffCompletely
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_FocusModeAdvertise_C::TurnOffCompletely()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.TurnOffCompletely");

	UUI_FocusModeAdvertise_C_TurnOffCompletely_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetInRangeOfAdvertise
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantState                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusModeAdvertise_C::SetInRangeOfAdvertise(bool* InRange, bool* InstantState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetInRangeOfAdvertise");

	UUI_FocusModeAdvertise_C_SetInRangeOfAdvertise_Params params;
	params.InRange = InRange;
	params.InstantState = InstantState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.FadeTheAdvertise
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeIn                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusModeAdvertise_C::FadeTheAdvertise(bool* FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.FadeTheAdvertise");

	UUI_FocusModeAdvertise_C_FadeTheAdvertise_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_FocusModeAdvertise_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.OnAnimationFinished_Event_1");

	UUI_FocusModeAdvertise_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetDangerAdvertise
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDanger                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusModeAdvertise_C::SetDangerAdvertise(bool* IsDanger)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetDangerAdvertise");

	UUI_FocusModeAdvertise_C_SetDangerAdvertise_Params params;
	params.IsDanger = IsDanger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.ExecuteUbergraph_UI_FocusModeAdvertise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusModeAdvertise_C::ExecuteUbergraph_UI_FocusModeAdvertise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.ExecuteUbergraph_UI_FocusModeAdvertise");

	UUI_FocusModeAdvertise_C_ExecuteUbergraph_UI_FocusModeAdvertise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
