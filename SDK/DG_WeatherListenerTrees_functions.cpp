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

// Function WeatherListenerTrees.WeatherListenerTrees_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AWeatherListenerTrees_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.PlayAudio");

	AWeatherListenerTrees_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AWeatherListenerTrees_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.StopAudio");

	AWeatherListenerTrees_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeatherListenerTrees_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.UserConstructionScript");

	AWeatherListenerTrees_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.UpdateWeather
// (BlueprintCallable, BlueprintEvent)

void AWeatherListenerTrees_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.UpdateWeather");

	AWeatherListenerTrees_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWeatherListenerTrees_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.ReceiveBeginPlay");

	AWeatherListenerTrees_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.Every5Mins
// (BlueprintCallable, BlueprintEvent)

void AWeatherListenerTrees_C::Every5Mins()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.Every5Mins");

	AWeatherListenerTrees_C_Every5Mins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerTrees.WeatherListenerTrees_C.ExecuteUbergraph_WeatherListenerTrees
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeatherListenerTrees_C::ExecuteUbergraph_WeatherListenerTrees(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerTrees.WeatherListenerTrees_C.ExecuteUbergraph_WeatherListenerTrees");

	AWeatherListenerTrees_C_ExecuteUbergraph_WeatherListenerTrees_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
