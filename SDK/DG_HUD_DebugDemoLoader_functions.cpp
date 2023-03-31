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

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CallCheatDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Mission_Name                   (Parm, ZeroConstructor)
// bool                           Teleport                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Completed                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMission                      (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugDemoLoader_C::CallCheatDelegate(const struct FString& Mission_Name, bool Teleport, bool Completed, bool IsMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CallCheatDelegate");

	UHUD_DebugDemoLoader_C_CallCheatDelegate_Params params;
	params.Mission_Name = Mission_Name;
	params.Teleport = Teleport;
	params.Completed = Completed;
	params.IsMission = IsMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugDemoLoader_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Tick");

	UHUD_DebugDemoLoader_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DebugDemoLoader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Construct");

	UHUD_DebugDemoLoader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CirclePressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugDemoLoader_C::CirclePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CirclePressed");

	UHUD_DebugDemoLoader_C_CirclePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.XPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugDemoLoader_C::XPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.XPressed");

	UHUD_DebugDemoLoader_C_XPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.SetUpDefaults
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugDemoLoader_C::SetUpDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.SetUpDefaults");

	UHUD_DebugDemoLoader_C_SetUpDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.ExecuteUbergraph_HUD_DebugDemoLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugDemoLoader_C::ExecuteUbergraph_HUD_DebugDemoLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.ExecuteUbergraph_HUD_DebugDemoLoader");

	UHUD_DebugDemoLoader_C_ExecuteUbergraph_HUD_DebugDemoLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
