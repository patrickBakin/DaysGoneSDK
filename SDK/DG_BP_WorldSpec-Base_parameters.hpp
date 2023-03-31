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

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines
struct ABP_WorldSpec_Base_C_StopTimelines_Params
{
	TArray<class UTimelineComponent*>                  Timelines;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines
struct ABP_WorldSpec_Base_C_SyncTimelines_Params
{
	float                                              TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UTimelineComponent*>                  Timelines;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines
struct ABP_WorldSpec_Base_C_SyncBaseTimelines_Params
{
	float                                              TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript
struct ABP_WorldSpec_Base_C_UserConstructionScript_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseLightingVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseLightingVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseDepthFogVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseDepthFogVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseVolFogVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseVolFogVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseTonemapVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseTonemapVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseColorCorrectVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseColorCorrectVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseForeCloudVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseForeCloudVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseBackCloudVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseBackCloudVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseWeatherVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseWeatherVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseAtmosphericFogVals~TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseAtmosphericFogVals~TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync
struct ABP_WorldSpec_Base_C_ReceiveSync_Params
{
	float*                                             TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop
struct ABP_WorldSpec_Base_C_ReceiveStop_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete
struct ABP_WorldSpec_Base_C_OnLerpComplete_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base
struct ABP_WorldSpec_Base_C_ExecuteUbergraph_BP_WorldSpec_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
