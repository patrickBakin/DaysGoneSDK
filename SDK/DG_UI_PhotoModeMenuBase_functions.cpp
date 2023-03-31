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

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelectedRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_PhotoModeRowBase_C*  NewSelectedRow                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::SetSelectedRow(class UUI_PhotoModeRowBase_C* NewSelectedRow, int SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelectedRow");

	UUI_PhotoModeMenuBase_C_SetSelectedRow_Params params;
	params.NewSelectedRow = NewSelectedRow;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSubRowSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::SetSubRowSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSubRowSelection");

	UUI_PhotoModeMenuBase_C_SetSubRowSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleSubRowSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            dir                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::HandleSubRowSelection(int dir, bool* Handled, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleSubRowSelection");

	UUI_PhotoModeMenuBase_C_HandleSubRowSelection_Params params;
	params.dir = dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::SetSelection(int Position, bool Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelection");

	UUI_PhotoModeMenuBase_C_SetSelection_Params params;
	params.Position = Position;
	params.Positive = Positive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleRowSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            dir                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MainIndexInputHandled          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::HandleRowSelection(int dir, bool* MainIndexInputHandled, int* Index, bool* Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleRowSelection");

	UUI_PhotoModeMenuBase_C_HandleRowSelection_Params params;
	params.dir = dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MainIndexInputHandled != nullptr)
		*MainIndexInputHandled = params.MainIndexInputHandled;
	if (Index != nullptr)
		*Index = params.Index;
	if (Positive != nullptr)
		*Positive = params.Positive;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Tick");

	UUI_PhotoModeMenuBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoModeMenuBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Construct");

	UUI_PhotoModeMenuBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.MenuActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::MenuActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.MenuActive");

	UUI_PhotoModeMenuBase_C_MenuActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.ExecuteUbergraph_UI_PhotoModeMenuBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeMenuBase_C::ExecuteUbergraph_UI_PhotoModeMenuBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.ExecuteUbergraph_UI_PhotoModeMenuBase");

	UUI_PhotoModeMenuBase_C_ExecuteUbergraph_UI_PhotoModeMenuBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
