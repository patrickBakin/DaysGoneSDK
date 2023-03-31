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

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetLockedState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::SetLockedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetLockedState");

	UUI_GridItem_WeaponSlot_C_SetLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetAllStateInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::SetAllStateInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetAllStateInvisible");

	UUI_GridItem_WeaponSlot_C_SetAllStateInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetBlank
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::SetBlank()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetBlank");

	UUI_GridItem_WeaponSlot_C_SetBlank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.DisplayNew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::DisplayNew(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.DisplayNew");

	UUI_GridItem_WeaponSlot_C_DisplayNew_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetColorScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMerchant                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::SetColorScheme(bool IsMerchant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetColorScheme");

	UUI_GridItem_WeaponSlot_C_SetColorScheme_Params params;
	params.IsMerchant = IsMerchant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetIsWeaponDelapidated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Delapidated                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::GetIsWeaponDelapidated(bool* Delapidated)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetIsWeaponDelapidated");

	UUI_GridItem_WeaponSlot_C_GetIsWeaponDelapidated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delapidated != nullptr)
		*Delapidated = params.Delapidated;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::GetDurability(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetDurability");

	UUI_GridItem_WeaponSlot_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreWeaponData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon**            WeaponRef                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::StoreWeaponData(class ABendWeapon** WeaponRef, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreWeaponData");

	UUI_GridItem_WeaponSlot_C_StoreWeaponData_Params params;
	params.WeaponRef = WeaponRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_MenuInventoryData* InventoryData                  (Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::StoreItemData(struct FSTRUCT_MenuInventoryData* InventoryData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreItemData");

	UUI_GridItem_WeaponSlot_C_StoreItemData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOff
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::HighlightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOff");

	UUI_GridItem_WeaponSlot_C_HighlightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOn
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::HighlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOn");

	UUI_GridItem_WeaponSlot_C_HighlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetSelected");

	UUI_GridItem_WeaponSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_WeaponSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.Construct");

	UUI_GridItem_WeaponSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.ExecuteUbergraph_UI_GridItem_WeaponSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_WeaponSlot_C::ExecuteUbergraph_UI_GridItem_WeaponSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.ExecuteUbergraph_UI_GridItem_WeaponSlot");

	UUI_GridItem_WeaponSlot_C_ExecuteUbergraph_UI_GridItem_WeaponSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
