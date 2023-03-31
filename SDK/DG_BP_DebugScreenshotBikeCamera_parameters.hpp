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

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.UserConstructionScript
struct ABP_DebugScreenshotBikeCamera_C_UserConstructionScript_Params
{
};

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.InpActEvt_PageUp_UniqueObjectNameForCooking_2
struct ABP_DebugScreenshotBikeCamera_C_InpActEvt_PageUp_UniqueObjectNameForCooking_2_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveBeginPlay
struct ABP_DebugScreenshotBikeCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveEndPlay
struct ABP_DebugScreenshotBikeCamera_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ExecuteUbergraph_BP_DebugScreenshotBikeCamera
struct ABP_DebugScreenshotBikeCamera_C_ExecuteUbergraph_BP_DebugScreenshotBikeCamera_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
