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

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DebugJobLoader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Construct");

	UHUD_DebugJobLoader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.CirclePressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugJobLoader_C::CirclePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.CirclePressed");

	UHUD_DebugJobLoader_C_CirclePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.XPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugJobLoader_C::XPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.XPressed");

	UHUD_DebugJobLoader_C_XPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugJobLoader_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Tick");

	UHUD_DebugJobLoader_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.ExecuteUbergraph_HUD_DebugJobLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugJobLoader_C::ExecuteUbergraph_HUD_DebugJobLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.ExecuteUbergraph_HUD_DebugJobLoader");

	UHUD_DebugJobLoader_C_ExecuteUbergraph_HUD_DebugJobLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
