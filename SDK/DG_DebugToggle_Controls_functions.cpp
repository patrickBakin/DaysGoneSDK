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

// Function DebugToggle_Controls.DebugToggle_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADebugToggle_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.UserConstructionScript");

	ADebugToggle_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ADebugToggle_Controls_C::InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202");

	ADebugToggle_Controls_C_InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADebugToggle_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveBeginPlay");

	ADebugToggle_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void ADebugToggle_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputEnabled");

	ADebugToggle_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void ADebugToggle_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveActorOnInputDisabled");

	ADebugToggle_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADebugToggle_Controls_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.ReceiveTick");

	ADebugToggle_Controls_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugToggle_Controls.DebugToggle_Controls_C.ExecuteUbergraph_DebugToggle_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADebugToggle_Controls_C::ExecuteUbergraph_DebugToggle_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugToggle_Controls.DebugToggle_Controls_C.ExecuteUbergraph_DebugToggle_Controls");

	ADebugToggle_Controls_C_ExecuteUbergraph_DebugToggle_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
