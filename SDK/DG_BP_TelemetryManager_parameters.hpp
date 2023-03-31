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

// Function BP_TelemetryManager.BP_TelemetryManager_C.GetPackageOfType
struct ABP_TelemetryManager_C_GetPackageOfType_Params
{
	class UClass*                                      PackageTypeToFind;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_TelemetryPackageBase_C*                  Package;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.UserConstructionScript
struct ABP_TelemetryManager_C_UserConstructionScript_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.ReceiveBeginPlay
struct ABP_TelemetryManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.RerunBeginPlay
struct ABP_TelemetryManager_C_RerunBeginPlay_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.FiveSecondTick
struct ABP_TelemetryManager_C_FiveSecondTick_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.OneMinuteGrab
struct ABP_TelemetryManager_C_OneMinuteGrab_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.TwoSecondTick
struct ABP_TelemetryManager_C_TwoSecondTick_Params
{
};

// Function BP_TelemetryManager.BP_TelemetryManager_C.ExecuteUbergraph_BP_TelemetryManager
struct ABP_TelemetryManager_C_ExecuteUbergraph_BP_TelemetryManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
