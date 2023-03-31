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

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.UpdateCurrentXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_XP_Meter_Thin_C::UpdateCurrentXP(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.UpdateCurrentXP");

	UUI_XP_Meter_Thin_C_UpdateCurrentXP_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetCurrentXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_XP_Meter_Thin_C::SetCurrentXP(float Percent, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetCurrentXP");

	UUI_XP_Meter_Thin_C_SetCurrentXP_Params params;
	params.Percent = Percent;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetPreviousXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_XP_Meter_Thin_C::SetPreviousXP(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetPreviousXP");

	UUI_XP_Meter_Thin_C_SetPreviousXP_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_XP_Meter_Thin_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.Construct");

	UUI_XP_Meter_Thin_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.ExecuteUbergraph_UI_XP_Meter_Thin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_XP_Meter_Thin_C::ExecuteUbergraph_UI_XP_Meter_Thin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.ExecuteUbergraph_UI_XP_Meter_Thin");

	UUI_XP_Meter_Thin_C_ExecuteUbergraph_UI_XP_Meter_Thin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
