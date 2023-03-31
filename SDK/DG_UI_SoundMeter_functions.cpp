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

// Function UI_SoundMeter.UI_SoundMeter_C.HideMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SoundMeter_C::HideMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.HideMeter");

	UUI_SoundMeter_C_HideMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.ShowMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SoundMeter_C::ShowMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.ShowMeter");

	UUI_SoundMeter_C_ShowMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.DisplayPlayerStealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SoundMeter_C::DisplayPlayerStealth(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.DisplayPlayerStealth");

	UUI_SoundMeter_C_DisplayPlayerStealth_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerVisibleLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SoundMeter_C::SetPlayerVisibleLevel(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerVisibleLevel");

	UUI_SoundMeter_C_SetPlayerVisibleLevel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerSoundLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SoundMeter_C::SetPlayerSoundLevel(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerSoundLevel");

	UUI_SoundMeter_C_SetPlayerSoundLevel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SoundMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.Construct");

	UUI_SoundMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.SilentStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_SoundMeter_C::SilentStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.SilentStarted");

	UUI_SoundMeter_C_SilentStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.silent
// (BlueprintCallable, BlueprintEvent)

void UUI_SoundMeter_C::silent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.silent");

	UUI_SoundMeter_C_silent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SoundMeter.UI_SoundMeter_C.ExecuteUbergraph_UI_SoundMeter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SoundMeter_C::ExecuteUbergraph_UI_SoundMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SoundMeter.UI_SoundMeter_C.ExecuteUbergraph_UI_SoundMeter");

	UUI_SoundMeter_C_ExecuteUbergraph_UI_SoundMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
