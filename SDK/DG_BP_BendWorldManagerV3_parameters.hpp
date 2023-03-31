#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.PlayThunderSound
struct ABP_BendWorldManagerV3_C_PlayThunderSound_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.StopAllWeatherSpecs
struct ABP_BendWorldManagerV3_C_StopAllWeatherSpecs_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Spawn Storm
struct ABP_BendWorldManagerV3_C_Spawn_Storm_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateBackgroundClouds
struct ABP_BendWorldManagerV3_C_UpdateBackgroundClouds_Params
{
	class UObject*                                     Weather;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWorldSpec*                              WorldSpec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdatePlayerPosition
struct ABP_BendWorldManagerV3_C_UpdatePlayerPosition_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateTimeLapse
struct ABP_BendWorldManagerV3_C_UpdateTimeLapse_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeLapse
struct ABP_BendWorldManagerV3_C_SetTimeLapse_Params
{
	float                                              TimeRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndWorldTimeHour;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightningFlash
struct ABP_BendWorldManagerV3_C_UpdateLightningFlash_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOff
struct ABP_BendWorldManagerV3_C_SetLightningFlashOff_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetLightningFlashOn
struct ABP_BendWorldManagerV3_C_SetLightningFlashOn_Params
{
	struct FVector                                     LightningCenter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextLightningStrike
struct ABP_BendWorldManagerV3_C_SetTimeOfNextLightningStrike_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateLightning
struct ABP_BendWorldManagerV3_C_UpdateLightning_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetRandomWindGust
struct ABP_BendWorldManagerV3_C_SetRandomWindGust_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWindGust
struct ABP_BendWorldManagerV3_C_UpdateWindGust_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.SetTimeOfNextWindGust
struct ABP_BendWorldManagerV3_C_SetTimeOfNextWindGust_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWind
struct ABP_BendWorldManagerV3_C_UpdateWind_Params
{
	float                                              WeatherWindIntensity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecWeather
struct ABP_BendWorldManagerV3_C_UpdateWorldSpecWeather_Params
{
	class ABendWorldSpec*                              WorldSpec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpecLighting
struct ABP_BendWorldManagerV3_C_UpdateWorldSpecLighting_Params
{
	class ABendWorldSpec*                              WorldSpec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UpdateWorldSpec
struct ABP_BendWorldManagerV3_C_UpdateWorldSpec_Params
{
	class ABendWorldSpec*                              WorldSpec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Sync
struct ABP_BendWorldManagerV3_C_Sync_Params
{
	class ABendWorldSpec*                              WorldSpec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.GetTimeOfDayPlayRate
struct ABP_BendWorldManagerV3_C_GetTimeOfDayPlayRate_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.UserConstructionScript
struct ABP_BendWorldManagerV3_C_UserConstructionScript_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__FinishedFunc
struct ABP_BendWorldManagerV3_C_World_Brightness__FinishedFunc_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.World Brightness__UpdateFunc
struct ABP_BendWorldManagerV3_C_World_Brightness__UpdateFunc_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveStartWorldTime
struct ABP_BendWorldManagerV3_C_ReceiveStartWorldTime_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveInitialize
struct ABP_BendWorldManagerV3_C_ReceiveInitialize_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveSyncTimeOfDay
struct ABP_BendWorldManagerV3_C_ReceiveSyncTimeOfDay_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorTick
struct ABP_BendWorldManagerV3_C_ReceiveBendEditorTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveBendEditorStop
struct ABP_BendWorldManagerV3_C_ReceiveBendEditorStop_Params
{
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.Play SOS Delayed Sound
struct ABP_BendWorldManagerV3_C_Play_SOS_Delayed_Sound_Params
{
	class USoundCue*                                   Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Parameters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ReceiveTickTimeOfDay
struct ABP_BendWorldManagerV3_C_ReceiveTickTimeOfDay_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendWorldManagerV3.BP_BendWorldManagerV3_C.ExecuteUbergraph_BP_BendWorldManagerV3
struct ABP_BendWorldManagerV3_C_ExecuteUbergraph_BP_BendWorldManagerV3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
