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

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.StateFrameDelay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowTick                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_Effect_C::StateFrameDelay(bool* AllowTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.StateFrameDelay");

	ABP_Storm_Lightning_Effect_C_StateFrameDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowTick != nullptr)
		*AllowTick = params.AllowTick;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.UserConstructionScript");

	ABP_Storm_Lightning_Effect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_Effect_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveTick");

	ABP_Storm_Lightning_Effect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Editor Tick");

	ABP_Storm_Lightning_Effect_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveDestroyed");

	ABP_Storm_Lightning_Effect_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveBeginPlay");

	ABP_Storm_Lightning_Effect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.End Lightning
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::End_Lightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.End Lightning");

	ABP_Storm_Lightning_Effect_C_End_Lightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Start Lightning
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_Effect_C::Start_Lightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Start Lightning");

	ABP_Storm_Lightning_Effect_C_Start_Lightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ExecuteUbergraph_BP_Storm_Lightning_Effect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_Effect_C::ExecuteUbergraph_BP_Storm_Lightning_Effect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ExecuteUbergraph_BP_Storm_Lightning_Effect");

	ABP_Storm_Lightning_Effect_C_ExecuteUbergraph_BP_Storm_Lightning_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
