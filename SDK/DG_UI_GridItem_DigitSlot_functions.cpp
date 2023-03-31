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

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.GetItemData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::GetItemData(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.GetItemData");

	UUI_GridItem_DigitSlot_C_GetItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetLockedState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_DigitSlot_C::SetLockedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetLockedState");

	UUI_GridItem_DigitSlot_C_SetLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::DisplayEquipped(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayEquipped");

	UUI_GridItem_DigitSlot_C_DisplayEquipped_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetAllStateInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_DigitSlot_C::SetAllStateInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetAllStateInvisible");

	UUI_GridItem_DigitSlot_C_SetAllStateInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetBlank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMerchant                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::SetBlank(bool IsMerchant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetBlank");

	UUI_GridItem_DigitSlot_C_SetBlank_Params params;
	params.IsMerchant = IsMerchant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayNew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::DisplayNew(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayNew");

	UUI_GridItem_DigitSlot_C_DisplayNew_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::DisplayCount(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayCount");

	UUI_GridItem_DigitSlot_C_DisplayCount_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.StoreItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_MenuInventoryData* InventoryData                  (Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::StoreItemData(struct FSTRUCT_MenuInventoryData* InventoryData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.StoreItemData");

	UUI_GridItem_DigitSlot_C_StoreItemData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_DigitSlot_C::HighlightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOff");

	UUI_GridItem_DigitSlot_C_HighlightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_DigitSlot_C::HighlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOn");

	UUI_GridItem_DigitSlot_C_HighlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetSelected");

	UUI_GridItem_DigitSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_DigitSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.Construct");

	UUI_GridItem_DigitSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.ExecuteUbergraph_UI_GridItem_DigitSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_DigitSlot_C::ExecuteUbergraph_UI_GridItem_DigitSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.ExecuteUbergraph_UI_GridItem_DigitSlot");

	UUI_GridItem_DigitSlot_C_ExecuteUbergraph_UI_GridItem_DigitSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
