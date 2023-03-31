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

// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_DebugLoaderBase_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GetText_1");

	UHUD_DebugLoaderBase_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugLoaderBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Tick");

	UHUD_DebugLoaderBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DebugLoaderBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Construct");

	UHUD_DebugLoaderBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugLoaderBase_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.Reset");

	UHUD_DebugLoaderBase_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GoToLast
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugLoaderBase_C::GoToLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.GoToLast");

	UHUD_DebugLoaderBase_C_GoToLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.CirclePressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugLoaderBase_C::CirclePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.CirclePressed");

	UHUD_DebugLoaderBase_C_CirclePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.XPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugLoaderBase_C::XPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.XPressed");

	UHUD_DebugLoaderBase_C_XPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.SetUpDefaults
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugLoaderBase_C::SetUpDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.SetUpDefaults");

	UHUD_DebugLoaderBase_C_SetUpDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.ExecuteUbergraph_HUD_DebugLoaderBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugLoaderBase_C::ExecuteUbergraph_HUD_DebugLoaderBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugLoaderBase.HUD_DebugLoaderBase_C.ExecuteUbergraph_HUD_DebugLoaderBase");

	UHUD_DebugLoaderBase_C_ExecuteUbergraph_HUD_DebugLoaderBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
