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

// Function DeerPawn.DeerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeerPawn.DeerPawn_C.UserConstructionScript");

	ADeerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeerPawn.DeerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADeerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeerPawn.DeerPawn_C.ReceiveBeginPlay");

	ADeerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeerPawn.DeerPawn_C.ExecuteUbergraph_DeerPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeerPawn_C::ExecuteUbergraph_DeerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeerPawn.DeerPawn_C.ExecuteUbergraph_DeerPawn");

	ADeerPawn_C_ExecuteUbergraph_DeerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
