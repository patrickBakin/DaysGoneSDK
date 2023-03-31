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

// Function ORWorldGlobal.ORWorldGlobal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AORWorldGlobal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal.ORWorldGlobal_C.ReceiveBeginPlay");

	AORWorldGlobal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal.ORWorldGlobal_C.ExecuteUbergraph_ORWorldGlobal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_C::ExecuteUbergraph_ORWorldGlobal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal.ORWorldGlobal_C.ExecuteUbergraph_ORWorldGlobal");

	AORWorldGlobal_C_ExecuteUbergraph_ORWorldGlobal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
