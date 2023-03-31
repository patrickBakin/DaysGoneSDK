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

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.CloudController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_C::CloudController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.CloudController");

	ABP_Storm_Lightning_C_CloudController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning.BP_Storm_Lightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.UserConstructionScript");

	ABP_Storm_Lightning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning.BP_Storm_Lightning_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.ReceiveTick");

	ABP_Storm_Lightning_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning.BP_Storm_Lightning_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.Editor Tick");

	ABP_Storm_Lightning_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning.BP_Storm_Lightning_C.End Storm
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_C::End_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.End Storm");

	ABP_Storm_Lightning_C_End_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning.BP_Storm_Lightning_C.ExecuteUbergraph_BP_Storm_Lightning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_C::ExecuteUbergraph_BP_Storm_Lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning.BP_Storm_Lightning_C.ExecuteUbergraph_BP_Storm_Lightning");

	ABP_Storm_Lightning_C_ExecuteUbergraph_BP_Storm_Lightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
