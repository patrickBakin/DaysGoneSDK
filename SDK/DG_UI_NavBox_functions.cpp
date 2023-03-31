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

// Function UI_NavBox.UI_NavBox_C.ResetSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NavBox_C::ResetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NavBox.UI_NavBox_C.ResetSelection");

	UUI_NavBox_C_ResetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NavBox.UI_NavBox_C.SetCurrentSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NavBox_C::SetCurrentSelection(TEnumAsByte<EMenuTypes> Menu, float angle, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NavBox.UI_NavBox_C.SetCurrentSelection");

	UUI_NavBox_C_SetCurrentSelection_Params params;
	params.Menu = Menu;
	params.angle = angle;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NavBox.UI_NavBox_C.SetCurrentMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NavBox_C::SetCurrentMenu(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NavBox.UI_NavBox_C.SetCurrentMenu");

	UUI_NavBox_C_SetCurrentMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NavBox.UI_NavBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NavBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NavBox.UI_NavBox_C.Construct");

	UUI_NavBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NavBox.UI_NavBox_C.ExecuteUbergraph_UI_NavBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NavBox_C::ExecuteUbergraph_UI_NavBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NavBox.UI_NavBox_C.ExecuteUbergraph_UI_NavBox");

	UUI_NavBox_C_ExecuteUbergraph_UI_NavBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
