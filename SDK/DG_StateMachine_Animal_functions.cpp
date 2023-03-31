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

// Function StateMachine_Animal.StateMachine_Animal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStateMachine_Animal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Animal.StateMachine_Animal_C.UserConstructionScript");

	AStateMachine_Animal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Animal.StateMachine_Animal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AStateMachine_Animal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Animal.StateMachine_Animal_C.ReceiveBeginPlay");

	AStateMachine_Animal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StateMachine_Animal.StateMachine_Animal_C.ExecuteUbergraph_StateMachine_Animal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStateMachine_Animal_C::ExecuteUbergraph_StateMachine_Animal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StateMachine_Animal.StateMachine_Animal_C.ExecuteUbergraph_StateMachine_Animal");

	AStateMachine_Animal_C_ExecuteUbergraph_StateMachine_Animal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
