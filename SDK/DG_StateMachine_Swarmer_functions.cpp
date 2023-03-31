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

// Function StateMachine_Swarmer.StateMachine_Swarmer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStateMachine_Swarmer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Swarmer.StateMachine_Swarmer_C.UserConstructionScript");

	AStateMachine_Swarmer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Swarmer.StateMachine_Swarmer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AStateMachine_Swarmer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Swarmer.StateMachine_Swarmer_C.ReceiveBeginPlay");

	AStateMachine_Swarmer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Swarmer.StateMachine_Swarmer_C.ExecuteUbergraph_StateMachine_Swarmer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStateMachine_Swarmer_C::ExecuteUbergraph_StateMachine_Swarmer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Swarmer.StateMachine_Swarmer_C.ExecuteUbergraph_StateMachine_Swarmer");

	AStateMachine_Swarmer_C_ExecuteUbergraph_StateMachine_Swarmer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
