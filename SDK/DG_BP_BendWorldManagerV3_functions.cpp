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

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.PlayThunderSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::PlayThunderSound(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.PlayThunderSound");

	ABP_BendWorldManagerV3_C_PlayThunderSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.StopAllWeatherSpecs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::StopAllWeatherSpecs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.StopAllWeatherSpecs");

	ABP_BendWorldManagerV3_C_StopAllWeatherSpecs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Spawn Storm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::Spawn_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Spawn Storm");

	ABP_BendWorldManagerV3_C_Spawn_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateBackgroundClouds
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Weather                        (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWorldSpec*          WorldSpec                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::UpdateBackgroundClouds(class UObject* Weather, class ABendWorldSpec* WorldSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateBackgroundClouds");

	ABP_BendWorldManagerV3_C_UpdateBackgroundClouds_Params params;
	params.Weather = Weather;
	params.WorldSpec = WorldSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdatePlayerPosition
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UpdatePlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdatePlayerPosition");

	ABP_BendWorldManagerV3_C_UpdatePlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateTimeLapse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UpdateTimeLapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateTimeLapse");

	ABP_BendWorldManagerV3_C_UpdateTimeLapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeLapse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRate                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndWorldTimeHour               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::SetTimeLapse(float TimeRate, int EndWorldTimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeLapse");

	ABP_BendWorldManagerV3_C_SetTimeLapse_Params params;
	params.TimeRate = TimeRate;
	params.EndWorldTimeHour = EndWorldTimeHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightningFlash
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UpdateLightningFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightningFlash");

	ABP_BendWorldManagerV3_C_UpdateLightningFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOff
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::SetLightningFlashOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOff");

	ABP_BendWorldManagerV3_C_SetLightningFlashOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOn
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LightningCenter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::SetLightningFlashOn(struct FVector* LightningCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOn");

	ABP_BendWorldManagerV3_C_SetLightningFlashOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightningCenter != nullptr)
		*LightningCenter = params.LightningCenter;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextLightningStrike
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::SetTimeOfNextLightningStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextLightningStrike");

	ABP_BendWorldManagerV3_C_SetTimeOfNextLightningStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightning
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UpdateLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightning");

	ABP_BendWorldManagerV3_C_UpdateLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetRandomWindGust
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::SetRandomWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetRandomWindGust");

	ABP_BendWorldManagerV3_C_SetRandomWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWindGust
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UpdateWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWindGust");

	ABP_BendWorldManagerV3_C_UpdateWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextWindGust
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::SetTimeOfNextWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextWindGust");

	ABP_BendWorldManagerV3_C_SetTimeOfNextWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWind
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WeatherWindIntensity           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::UpdateWind(float WeatherWindIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWind");

	ABP_BendWorldManagerV3_C_UpdateWind_Params params;
	params.WeatherWindIntensity = WeatherWindIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecWeather
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWorldSpec*          WorldSpec                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::UpdateWorldSpecWeather(class ABendWorldSpec* WorldSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecWeather");

	ABP_BendWorldManagerV3_C_UpdateWorldSpecWeather_Params params;
	params.WorldSpec = WorldSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecLighting
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWorldSpec*          WorldSpec                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::UpdateWorldSpecLighting(class ABendWorldSpec* WorldSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecLighting");

	ABP_BendWorldManagerV3_C_UpdateWorldSpecLighting_Params params;
	params.WorldSpec = WorldSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpec
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWorldSpec*          WorldSpec                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::UpdateWorldSpec(class ABendWorldSpec* WorldSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpec");

	ABP_BendWorldManagerV3_C_UpdateWorldSpec_Params params;
	params.WorldSpec = WorldSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Sync
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWorldSpec*          WorldSpec                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::Sync(class ABendWorldSpec* WorldSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Sync");

	ABP_BendWorldManagerV3_C_Sync_Params params;
	params.WorldSpec = WorldSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.GetTimeOfDayPlayRate
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::GetTimeOfDayPlayRate(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.GetTimeOfDayPlayRate");

	ABP_BendWorldManagerV3_C_GetTimeOfDayPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UserConstructionScript");

	ABP_BendWorldManagerV3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__FinishedFunc
// (BlueprintEvent)

void ABP_BendWorldManagerV3_C::World_Brightness__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__FinishedFunc");

	ABP_BendWorldManagerV3_C_World_Brightness__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__UpdateFunc
// (BlueprintEvent)

void ABP_BendWorldManagerV3_C::World_Brightness__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__UpdateFunc");

	ABP_BendWorldManagerV3_C_World_Brightness__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveStartWorldTime
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::ReceiveStartWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveStartWorldTime");

	ABP_BendWorldManagerV3_C_ReceiveStartWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::ReceiveInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveInitialize");

	ABP_BendWorldManagerV3_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveSyncTimeOfDay
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::ReceiveSyncTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveSyncTimeOfDay");

	ABP_BendWorldManagerV3_C_ReceiveSyncTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::ReceiveBendEditorTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorTick");

	ABP_BendWorldManagerV3_C_ReceiveBendEditorTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorStop
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BendWorldManagerV3_C::ReceiveBendEditorStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorStop");

	ABP_BendWorldManagerV3_C_ReceiveBendEditorStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Play SOS Delayed Sound
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Parameters                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BendWorldManagerV3_C::Play_SOS_Delayed_Sound(class USoundCue* Sound, const struct FVector& Location, float Delay, TArray<struct FName> Parameters, TArray<float> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Play SOS Delayed Sound");

	ABP_BendWorldManagerV3_C_Play_SOS_Delayed_Sound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Delay = Delay;
	params.Parameters = Parameters;
	params.Values = Values;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveTickTimeOfDay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDebug                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::ReceiveTickTimeOfDay(float* DeltaSeconds, bool* bDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveTickTimeOfDay");

	ABP_BendWorldManagerV3_C_ReceiveTickTimeOfDay_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ExecuteUbergraph_BP_BendWorldManagerV3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendWorldManagerV3_C::ExecuteUbergraph_BP_BendWorldManagerV3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ExecuteUbergraph_BP_BendWorldManagerV3");

	ABP_BendWorldManagerV3_C_ExecuteUbergraph_BP_BendWorldManagerV3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
