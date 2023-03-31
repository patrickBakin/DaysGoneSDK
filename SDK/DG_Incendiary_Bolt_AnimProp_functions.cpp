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

// Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIncendiary_Bolt_AnimProp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.UserConstructionScript");

	AIncendiary_Bolt_AnimProp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AIncendiary_Bolt_AnimProp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ReceiveBeginPlay");

	AIncendiary_Bolt_AnimProp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIncendiary_Bolt_AnimProp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ReceiveTick");

	AIncendiary_Bolt_AnimProp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ExecuteUbergraph_Incendiary_Bolt_AnimProp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIncendiary_Bolt_AnimProp_C::ExecuteUbergraph_Incendiary_Bolt_AnimProp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Incendiary_Bolt_AnimProp.Incendiary_Bolt_AnimProp_C.ExecuteUbergraph_Incendiary_Bolt_AnimProp");

	AIncendiary_Bolt_AnimProp_C_ExecuteUbergraph_Incendiary_Bolt_AnimProp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
