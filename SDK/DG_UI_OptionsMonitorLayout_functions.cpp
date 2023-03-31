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

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMonitorLayout_C::GetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetScale");

	UUI_OptionsMonitorLayout_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetSpan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMonitorLayout_C::GetSpan(int* Width, int* Height, int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetSpan");

	UUI_OptionsMonitorLayout_C_GetSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMonitorLayout_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Init");

	UUI_OptionsMonitorLayout_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OptionsMonitorLayout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Construct");

	UUI_OptionsMonitorLayout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.SetSelectedDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMonitorLayout_C::SetSelectedDisplay(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.SetSelectedDisplay");

	UUI_OptionsMonitorLayout_C_SetSelectedDisplay_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Update
// (BlueprintCallable, BlueprintEvent)

void UUI_OptionsMonitorLayout_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Update");

	UUI_OptionsMonitorLayout_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.ExecuteUbergraph_UI_OptionsMonitorLayout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMonitorLayout_C::ExecuteUbergraph_UI_OptionsMonitorLayout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.ExecuteUbergraph_UI_OptionsMonitorLayout");

	UUI_OptionsMonitorLayout_C_ExecuteUbergraph_UI_OptionsMonitorLayout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
