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

// Function StealthMeterEntry.StealthMeterEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStealthMeterEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterEntry.StealthMeterEntry_C.Construct");

	UStealthMeterEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterEntry.StealthMeterEntry_C.ExecuteUbergraph_StealthMeterEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeterEntry_C::ExecuteUbergraph_StealthMeterEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterEntry.StealthMeterEntry_C.ExecuteUbergraph_StealthMeterEntry");

	UStealthMeterEntry_C_ExecuteUbergraph_StealthMeterEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
