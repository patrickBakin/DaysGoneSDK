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

// Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeatherListener_Interior_WoodRoof_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.UserConstructionScript");

	AWeatherListener_Interior_WoodRoof_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.UpdateWeather
// (BlueprintCallable, BlueprintEvent)

void AWeatherListener_Interior_WoodRoof_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.UpdateWeather");

	AWeatherListener_Interior_WoodRoof_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.ExecuteUbergraph_WeatherListener_Interior_WoodRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeatherListener_Interior_WoodRoof_C::ExecuteUbergraph_WeatherListener_Interior_WoodRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C.ExecuteUbergraph_WeatherListener_Interior_WoodRoof");

	AWeatherListener_Interior_WoodRoof_C_ExecuteUbergraph_WeatherListener_Interior_WoodRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
