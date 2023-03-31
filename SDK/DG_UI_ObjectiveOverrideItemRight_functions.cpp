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

// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_ObjectiveOverrideItemRight_C::SetDetails(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.SetDetails");

	UUI_ObjectiveOverrideItemRight_C_SetDetails_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ObjectiveOverrideItemRight_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.Construct");

	UUI_ObjectiveOverrideItemRight_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.ExecuteUbergraph_UI_ObjectiveOverrideItemRight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveOverrideItemRight_C::ExecuteUbergraph_UI_ObjectiveOverrideItemRight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.ExecuteUbergraph_UI_ObjectiveOverrideItemRight");

	UUI_ObjectiveOverrideItemRight_C_ExecuteUbergraph_UI_ObjectiveOverrideItemRight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
