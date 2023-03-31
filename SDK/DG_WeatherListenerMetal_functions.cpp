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

// Function WeatherListenerMetal.WeatherListenerMetal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeatherListenerMetal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerMetal.WeatherListenerMetal_C.UserConstructionScript");

	AWeatherListenerMetal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerMetal.WeatherListenerMetal_C.UpdateWeather
// (BlueprintCallable, BlueprintEvent)

void AWeatherListenerMetal_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerMetal.WeatherListenerMetal_C.UpdateWeather");

	AWeatherListenerMetal_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerMetal.WeatherListenerMetal_C.ExecuteUbergraph_WeatherListenerMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeatherListenerMetal_C::ExecuteUbergraph_WeatherListenerMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerMetal.WeatherListenerMetal_C.ExecuteUbergraph_WeatherListenerMetal");

	AWeatherListenerMetal_C_ExecuteUbergraph_WeatherListenerMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
