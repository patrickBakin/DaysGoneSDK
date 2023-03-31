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

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.LevelThePlayerUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StaminaLevel                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            FocusLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthLevel                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugMissionLoader_C::LevelThePlayerUp(int StaminaLevel, int FocusLevel, int HealthLevel, int PlayerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.LevelThePlayerUp");

	UHUD_DebugMissionLoader_C_LevelThePlayerUp_Params params;
	params.StaminaLevel = StaminaLevel;
	params.FocusLevel = FocusLevel;
	params.HealthLevel = HealthLevel;
	params.PlayerLevel = PlayerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_DebugMissionLoader_C::GiveThePlayerAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerAmmo");

	UHUD_DebugMissionLoader_C_GiveThePlayerAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerWeapons&Level
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_DebugMissionLoader_C::GiveThePlayerWeapons_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerWeapons&Level");

	UHUD_DebugMissionLoader_C_GiveThePlayerWeapons_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.SetStatisticText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_DebugMissionLoader_C::SetStatisticText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.SetStatisticText");

	UHUD_DebugMissionLoader_C_SetStatisticText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.CirclePressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugMissionLoader_C::CirclePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.CirclePressed");

	UHUD_DebugMissionLoader_C_CirclePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.XPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_DebugMissionLoader_C::XPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.XPressed");

	UHUD_DebugMissionLoader_C_XPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DebugMissionLoader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Construct");

	UHUD_DebugMissionLoader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugMissionLoader_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Tick");

	UHUD_DebugMissionLoader_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.ExecuteUbergraph_HUD_DebugMissionLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DebugMissionLoader_C::ExecuteUbergraph_HUD_DebugMissionLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.ExecuteUbergraph_HUD_DebugMissionLoader");

	UHUD_DebugMissionLoader_C_ExecuteUbergraph_HUD_DebugMissionLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
