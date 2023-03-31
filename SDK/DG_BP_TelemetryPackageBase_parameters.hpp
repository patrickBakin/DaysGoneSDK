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

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ReplaceTelemetryAttrData
struct ABP_TelemetryPackageBase_C_ReplaceTelemetryAttrData_Params
{
	TArray<struct FTelemetryEventAttr>                 TelemetryAttributes;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     TargetTelemetryAttributeName;                             // (Parm, ZeroConstructor)
	struct FString                                     NewData;                                                  // (Parm, ZeroConstructor)
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.FindTelemetryAttrIndex
struct ABP_TelemetryPackageBase_C_FindTelemetryAttrIndex_Params
{
	TArray<struct FTelemetryEventAttr>                 TelemetryAttrArray;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     TelemetryAttrName;                                        // (Parm, ZeroConstructor)
	int                                                TelemtryAttrIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.InANewEpisode?
struct ABP_TelemetryPackageBase_C_InANewEpisode__Params
{
	int                                                New_Episode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInNewEpisode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.GetMissionAndJob
struct ABP_TelemetryPackageBase_C_GetMissionAndJob_Params
{
	struct FString                                     MissionIdOverride;                                        // (Parm, ZeroConstructor)
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.UserConstructionScript
struct ABP_TelemetryPackageBase_C_UserConstructionScript_Params
{
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.MediumTickEvents
struct ABP_TelemetryPackageBase_C_MediumTickEvents_Params
{
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ShortestTickEvents
struct ABP_TelemetryPackageBase_C_ShortestTickEvents_Params
{
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.LongTickEvents
struct ABP_TelemetryPackageBase_C_LongTickEvents_Params
{
};

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ExecuteUbergraph_BP_TelemetryPackageBase
struct ABP_TelemetryPackageBase_C_ExecuteUbergraph_BP_TelemetryPackageBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
