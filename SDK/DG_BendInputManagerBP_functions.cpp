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

// Function BendInputManagerBP.BendInputManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendInputManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendInputManagerBP.BendInputManagerBP_C.UserConstructionScript");

	ABendInputManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendInputManagerBP.BendInputManagerBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendInputManagerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendInputManagerBP.BendInputManagerBP_C.ReceiveBeginPlay");

	ABendInputManagerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendInputManagerBP.BendInputManagerBP_C.ExecuteUbergraph_BendInputManagerBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendInputManagerBP_C::ExecuteUbergraph_BendInputManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendInputManagerBP.BendInputManagerBP_C.ExecuteUbergraph_BendInputManagerBP");

	ABendInputManagerBP_C_ExecuteUbergraph_BendInputManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
