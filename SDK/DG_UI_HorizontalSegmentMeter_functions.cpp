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

// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Current                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Max                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalSegmentMeter_C::SetColors(const struct FLinearColor& Current, const struct FLinearColor& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetColors");

	UUI_HorizontalSegmentMeter_C_SetColors_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetSegments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalSegmentMeter_C::SetSegments(int Current, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetSegments");

	UUI_HorizontalSegmentMeter_C_SetSegments_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HorizontalSegmentMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.Construct");

	UUI_HorizontalSegmentMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.ExecuteUbergraph_UI_HorizontalSegmentMeter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalSegmentMeter_C::ExecuteUbergraph_UI_HorizontalSegmentMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.ExecuteUbergraph_UI_HorizontalSegmentMeter");

	UUI_HorizontalSegmentMeter_C_ExecuteUbergraph_UI_HorizontalSegmentMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
