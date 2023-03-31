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

// Function UI_CategoryIcons.UI_CategoryIcons_C.SetCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>    Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (Parm)
// struct FText                   DescriptionText                (Parm)

void UUI_CategoryIcons_C::SetCategory(TEnumAsByte<ENUM_Menu_Type> Menu, int Count, int Total, const struct FText& TitleText, const struct FText& DescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryIcons.UI_CategoryIcons_C.SetCategory");

	UUI_CategoryIcons_C_SetCategory_Params params;
	params.Menu = Menu;
	params.Count = Count;
	params.Total = Total;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryIcons.UI_CategoryIcons_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryIcons_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryIcons.UI_CategoryIcons_C.SetSelected");

	UUI_CategoryIcons_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryIcons.UI_CategoryIcons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CategoryIcons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryIcons.UI_CategoryIcons_C.Construct");

	UUI_CategoryIcons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryIcons.UI_CategoryIcons_C.ExecuteUbergraph_UI_CategoryIcons
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryIcons_C::ExecuteUbergraph_UI_CategoryIcons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryIcons.UI_CategoryIcons_C.ExecuteUbergraph_UI_CategoryIcons");

	UUI_CategoryIcons_C_ExecuteUbergraph_UI_CategoryIcons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
