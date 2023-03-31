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

// Function WeatherListenerWood.WeatherListenerWood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeatherListenerWood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerWood.WeatherListenerWood_C.UserConstructionScript");

	AWeatherListenerWood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerWood.WeatherListenerWood_C.UpdateWeather
// (BlueprintCallable, BlueprintEvent)

void AWeatherListenerWood_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerWood.WeatherListenerWood_C.UpdateWeather");

	AWeatherListenerWood_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListenerWood.WeatherListenerWood_C.ExecuteUbergraph_WeatherListenerWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeatherListenerWood_C::ExecuteUbergraph_WeatherListenerWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListenerWood.WeatherListenerWood_C.ExecuteUbergraph_WeatherListenerWood");

	AWeatherListenerWood_C_ExecuteUbergraph_WeatherListenerWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
