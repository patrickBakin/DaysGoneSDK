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

// Function StealthMeterEntries.StealthMeterEntries_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStealthMeterEntries_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterEntries.StealthMeterEntries_C.Construct");

	UStealthMeterEntries_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterEntries.StealthMeterEntries_C.ExecuteUbergraph_StealthMeterEntries
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeterEntries_C::ExecuteUbergraph_StealthMeterEntries(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterEntries.StealthMeterEntries_C.ExecuteUbergraph_StealthMeterEntries");

	UStealthMeterEntries_C_ExecuteUbergraph_StealthMeterEntries_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
