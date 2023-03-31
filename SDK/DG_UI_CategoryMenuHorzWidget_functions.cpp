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

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.BuildMenuItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CategoryMenuHorzWidget_C::BuildMenuItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.BuildMenuItems");

	UUI_CategoryMenuHorzWidget_C_BuildMenuItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzWidget_C::SetCursorPosition(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetCursorPosition");

	UUI_CategoryMenuHorzWidget_C_SetCursorPosition_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetSelected
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzWidget_C::SetSelected(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetSelected");

	UUI_CategoryMenuHorzWidget_C_SetSelected_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CategoryMenuHorzWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.Construct");

	UUI_CategoryMenuHorzWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectNext
// (BlueprintCallable, BlueprintEvent)

void UUI_CategoryMenuHorzWidget_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectNext");

	UUI_CategoryMenuHorzWidget_C_SelectNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectPrevious
// (BlueprintCallable, BlueprintEvent)

void UUI_CategoryMenuHorzWidget_C::SelectPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectPrevious");

	UUI_CategoryMenuHorzWidget_C_SelectPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetDesiredIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzWidget_C::SetDesiredIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetDesiredIndex");

	UUI_CategoryMenuHorzWidget_C_SetDesiredIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzWidget_C::ExecuteUbergraph_UI_CategoryMenuHorzWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzWidget");

	UUI_CategoryMenuHorzWidget_C_ExecuteUbergraph_UI_CategoryMenuHorzWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.OnSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzWidget_C::OnSelection__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.OnSelection__DelegateSignature");

	UUI_CategoryMenuHorzWidget_C_OnSelection__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
