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

// Function UI_InventoryPage.UI_InventoryPage_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.CircleSelectionInputGiven");

	UUI_InventoryPage_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.Construct");

	UUI_InventoryPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionInputGiven");

	UUI_InventoryPage_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_C::R1orL1SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.R1orL1SelectionInputGiven");

	UUI_InventoryPage_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.ResetHoldInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_C::ResetHoldInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.ResetHoldInput");

	UUI_InventoryPage_C_ResetHoldInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_C::CrossSelectionHold(float* HoldTime, bool* NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionHold");

	UUI_InventoryPage_C_CrossSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.ExecuteUbergraph_UI_InventoryPage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_C::ExecuteUbergraph_UI_InventoryPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.ExecuteUbergraph_UI_InventoryPage");

	UUI_InventoryPage_C_ExecuteUbergraph_UI_InventoryPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>    CurrentMenu                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_C::OnGoToPrevPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.OnGoToPrevPage__DelegateSignature");

	UUI_InventoryPage_C_OnGoToPrevPage__DelegateSignature_Params params;
	params.CurrentMenu = CurrentMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage.UI_InventoryPage_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>    CurrentMenu                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_C::OnGoToNextPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage.UI_InventoryPage_C.OnGoToNextPage__DelegateSignature");

	UUI_InventoryPage_C_OnGoToNextPage__DelegateSignature_Params params;
	params.CurrentMenu = CurrentMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
