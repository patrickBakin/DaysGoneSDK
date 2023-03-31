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

// Function BP_Storm_Base.BP_Storm_Base_C.CheckAllowedStormEvents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EventsAllowed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Base_C::CheckAllowedStormEvents(bool* EventsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.CheckAllowedStormEvents");

	ABP_Storm_Base_C_CheckAllowedStormEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventsAllowed != nullptr)
		*EventsAllowed = params.EventsAllowed;
}


// Function BP_Storm_Base.BP_Storm_Base_C.InitializeStorm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::InitializeStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.InitializeStorm");

	ABP_Storm_Base_C_InitializeStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.DebugPrintsBaseStorm
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::DebugPrintsBaseStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.DebugPrintsBaseStorm");

	ABP_Storm_Base_C_DebugPrintsBaseStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.StormController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::StormController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.StormController");

	ABP_Storm_Base_C_StormController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.StormTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Storm_Timer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Storm_Timer_Delta              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Base_C::StormTimer(float* Storm_Timer, float* Storm_Timer_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.StormTimer");

	ABP_Storm_Base_C_StormTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Storm_Timer != nullptr)
		*Storm_Timer = params.Storm_Timer;
	if (Storm_Timer_Delta != nullptr)
		*Storm_Timer_Delta = params.Storm_Timer_Delta;
}


// Function BP_Storm_Base.BP_Storm_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.UserConstructionScript");

	ABP_Storm_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.ReceiveTick");

	ABP_Storm_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.Editor Tick");

	ABP_Storm_Base_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.End Storm
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::End_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.End Storm");

	ABP_Storm_Base_C_End_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.Reset Storm
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Base_C::Reset_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.Reset Storm");

	ABP_Storm_Base_C_Reset_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Storm_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.ReceiveBeginPlay");

	ABP_Storm_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Base.BP_Storm_Base_C.ExecuteUbergraph_BP_Storm_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Base_C::ExecuteUbergraph_BP_Storm_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Base.BP_Storm_Base_C.ExecuteUbergraph_BP_Storm_Base");

	ABP_Storm_Base_C_ExecuteUbergraph_BP_Storm_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
