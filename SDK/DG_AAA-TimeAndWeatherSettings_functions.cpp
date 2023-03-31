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

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time and Weather Apply Overrides
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimeAndWeatherSettings InTimeAndWeather               (Parm)
// struct FTimeAndWeatherSettings OutTimeAndWeather              (Parm, OutParm)

void AAAA_TimeAndWeatherSettings_C::Time_and_Weather_Apply_Overrides(const struct FTimeAndWeatherSettings& InTimeAndWeather, struct FTimeAndWeatherSettings* OutTimeAndWeather)
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time and Weather Apply Overrides");

	AAAA_TimeAndWeatherSettings_C_Time_and_Weather_Apply_Overrides_Params params;
	params.InTimeAndWeather = InTimeAndWeather;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTimeAndWeather != nullptr)
		*OutTimeAndWeather = params.OutTimeAndWeather;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Lightning Event
// (Public, BlueprintCallable, BlueprintEvent)

void AAAA_TimeAndWeatherSettings_C::Lightning_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Lightning Event");

	AAAA_TimeAndWeatherSettings_C_Lightning_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Next Time and Weather Setting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAAA_TimeAndWeatherSettings_C::Next_Time_and_Weather_Setting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Next Time and Weather Setting");

	AAAA_TimeAndWeatherSettings_C_Next_Time_and_Weather_Setting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather End
// (Public, BlueprintCallable, BlueprintEvent)

void AAAA_TimeAndWeatherSettings_C::Time_And_Weather_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather End");

	AAAA_TimeAndWeatherSettings_C_Time_And_Weather_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather Start at Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartAtIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AAAA_TimeAndWeatherSettings_C::Time_And_Weather_Start_at_Index(int StartAtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather Start at Index");

	AAAA_TimeAndWeatherSettings_C_Time_And_Weather_Start_at_Index_Params params;
	params.StartAtIndex = StartAtIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAAA_TimeAndWeatherSettings_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.UserConstructionScript");

	AAAA_TimeAndWeatherSettings_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAAA_TimeAndWeatherSettings_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ReceiveBeginPlay");

	AAAA_TimeAndWeatherSettings_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ExecuteUbergraph_AAA-TimeAndWeatherSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAAA_TimeAndWeatherSettings_C::ExecuteUbergraph_AAA_TimeAndWeatherSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ExecuteUbergraph_AAA-TimeAndWeatherSettings");

	AAAA_TimeAndWeatherSettings_C_ExecuteUbergraph_AAA_TimeAndWeatherSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
