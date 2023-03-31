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

// Function StateMachine_Pawn.StateMachine_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStateMachine_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Pawn.StateMachine_Pawn_C.UserConstructionScript");

	AStateMachine_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Pawn.StateMachine_Pawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AStateMachine_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Pawn.StateMachine_Pawn_C.ReceiveBeginPlay");

	AStateMachine_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Pawn.StateMachine_Pawn_C.ExecuteUbergraph_StateMachine_Pawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStateMachine_Pawn_C::ExecuteUbergraph_StateMachine_Pawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Pawn.StateMachine_Pawn_C.ExecuteUbergraph_StateMachine_Pawn");

	AStateMachine_Pawn_C_ExecuteUbergraph_StateMachine_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
