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

// Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::PreviousItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousItem");

	UUI_MonitorLayout_C_PreviousItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.NextItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::NextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.NextItem");

	UUI_MonitorLayout_C_NextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.Init");

	UUI_MonitorLayout_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.GetSelectedMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MonitorIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::GetSelectedMonitor(int* MonitorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.GetSelectedMonitor");

	UUI_MonitorLayout_C_GetSelectedMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MonitorIndex != nullptr)
		*MonitorIndex = params.MonitorIndex;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.SetSelectedMonitor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MonitorIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::SetSelectedMonitor(int MonitorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.SetSelectedMonitor");

	UUI_MonitorLayout_C_SetSelectedMonitor_Params params;
	params.MonitorIndex = MonitorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.GetSpan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::GetSpan(int* Width, int* Height, int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.GetSpan");

	UUI_MonitorLayout_C_GetSpan_Params params;

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


// Function UI_MonitorLayout.UI_MonitorLayout_C.GetScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::GetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.GetScale");

	UUI_MonitorLayout_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MonitorLayout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.Construct");

	UUI_MonitorLayout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.HandleStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::HandleStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.HandleStateChanged");

	UUI_MonitorLayout_C_HandleStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MonitorLayout_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MonitorLayout_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.NextValue
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::NextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.NextValue");

	UUI_MonitorLayout_C_NextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousValue
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MonitorLayout_C::PreviousValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousValue");

	UUI_MonitorLayout_C_PreviousValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.ExecuteUbergraph_UI_MonitorLayout
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::ExecuteUbergraph_UI_MonitorLayout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.ExecuteUbergraph_UI_MonitorLayout");

	UUI_MonitorLayout_C_ExecuteUbergraph_UI_MonitorLayout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MonitorLayout.UI_MonitorLayout_C.OnMonitorSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MonitorIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MonitorLayout_C::OnMonitorSelectionChanged__DelegateSignature(int MonitorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MonitorLayout.UI_MonitorLayout_C.OnMonitorSelectionChanged__DelegateSignature");

	UUI_MonitorLayout_C_OnMonitorSelectionChanged__DelegateSignature_Params params;
	params.MonitorIndex = MonitorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
