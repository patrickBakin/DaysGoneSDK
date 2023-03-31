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

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JobGiverCallout2_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Init");

	UUI_JobGiverCallout2_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetNewItemsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JobGiverCallout2_C::SetNewItemsAvailable(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetNewItemsAvailable");

	UUI_JobGiverCallout2_C_SetNewItemsAvailable_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JobGiverCallout2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Construct");

	UUI_JobGiverCallout2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetVisibilityOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>* VisibilityType                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JobGiverCallout2_C::SetVisibilityOverride(TEnumAsByte<ESlateVisibility>* VisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetVisibilityOverride");

	UUI_JobGiverCallout2_C_SetVisibilityOverride_Params params;
	params.VisibilityType = VisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.ExecuteUbergraph_UI_JobGiverCallout2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JobGiverCallout2_C::ExecuteUbergraph_UI_JobGiverCallout2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.ExecuteUbergraph_UI_JobGiverCallout2");

	UUI_JobGiverCallout2_C_ExecuteUbergraph_UI_JobGiverCallout2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
