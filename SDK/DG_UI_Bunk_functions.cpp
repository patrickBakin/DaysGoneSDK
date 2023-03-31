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

// Function UI_Bunk.UI_Bunk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bunk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bunk.UI_Bunk_C.Construct");

	UUI_Bunk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bunk.UI_Bunk_C.SetVisibilityOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>* VisibilityType                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bunk_C::SetVisibilityOverride(TEnumAsByte<ESlateVisibility>* VisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bunk.UI_Bunk_C.SetVisibilityOverride");

	UUI_Bunk_C_SetVisibilityOverride_Params params;
	params.VisibilityType = VisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bunk.UI_Bunk_C.ExecuteUbergraph_UI_Bunk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bunk_C::ExecuteUbergraph_UI_Bunk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bunk.UI_Bunk_C.ExecuteUbergraph_UI_Bunk");

	UUI_Bunk_C_ExecuteUbergraph_UI_Bunk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
