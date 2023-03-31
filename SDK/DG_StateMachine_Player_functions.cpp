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

// Function StateMachine_Player.StateMachine_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStateMachine_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Player.StateMachine_Player_C.UserConstructionScript");

	AStateMachine_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Player.StateMachine_Player_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AStateMachine_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Player.StateMachine_Player_C.ReceiveBeginPlay");

	AStateMachine_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Player.StateMachine_Player_C.ExecuteUbergraph_StateMachine_Player
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStateMachine_Player_C::ExecuteUbergraph_StateMachine_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Player.StateMachine_Player_C.ExecuteUbergraph_StateMachine_Player");

	AStateMachine_Player_C_ExecuteUbergraph_StateMachine_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
