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

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Debug Prints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Text_Time_On_Screen            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::Debug_Prints(float Text_Time_On_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Debug Prints");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_Debug_Prints_Params params;
	params.Text_Time_On_Screen = Text_Time_On_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.UserConstructionScript");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Editor Tick");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.EventStrikeMe
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::EventStrikeMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.EventStrikeMe");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_EventStrikeMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ReceiveTick");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_StrikeTarget_Actor_C::ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor");

	ABP_Storm_Lightning_StrikeTarget_Actor_C_ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
