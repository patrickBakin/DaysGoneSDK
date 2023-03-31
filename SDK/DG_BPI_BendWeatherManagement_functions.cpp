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

// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetIndoors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIndoors                      (Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BendWeatherManagement_C::SetIndoors(bool IsIndoors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetIndoors");

	UBPI_BendWeatherManagement_C_SetIndoors_Params params;
	params.IsIndoors = IsIndoors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetWindSoundIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BendWeatherManagement_C::SetWindSoundIntensity(float intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetWindSoundIntensity");

	UBPI_BendWeatherManagement_C_SetWindSoundIntensity_Params params;
	params.intensity = intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetRainSoundIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BendWeatherManagement_C::SetRainSoundIntensity(float intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetRainSoundIntensity");

	UBPI_BendWeatherManagement_C_SetRainSoundIntensity_Params params;
	params.intensity = intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
