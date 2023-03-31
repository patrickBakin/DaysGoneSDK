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

// Function DLCMetaValues.DLCMetaValues_C.SetCostColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLCMetaValues_C::SetCostColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMetaValues.DLCMetaValues_C.SetCostColor");

	UDLCMetaValues_C_SetCostColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMetaValues.DLCMetaValues_C.UpdateMetaData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDLCMetaValues_C::UpdateMetaData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMetaValues.DLCMetaValues_C.UpdateMetaData");

	UDLCMetaValues_C_UpdateMetaData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMetaValues.DLCMetaValues_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLCMetaValues_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMetaValues.DLCMetaValues_C.Construct");

	UDLCMetaValues_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMetaValues.DLCMetaValues_C.ExecuteUbergraph_DLCMetaValues
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLCMetaValues_C::ExecuteUbergraph_DLCMetaValues(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMetaValues.DLCMetaValues_C.ExecuteUbergraph_DLCMetaValues");

	UDLCMetaValues_C_ExecuteUbergraph_DLCMetaValues_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
