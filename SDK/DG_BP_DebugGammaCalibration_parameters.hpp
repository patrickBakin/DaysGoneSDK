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

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DisableInstructions
struct ABP_DebugGammaCalibration_C_DisableInstructions_Params
{
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.SetUIGammaToMatch
struct ABP_DebugGammaCalibration_C_SetUIGammaToMatch_Params
{
	struct FVector                                     Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DeactivateMenu
struct ABP_DebugGammaCalibration_C_DeactivateMenu_Params
{
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ActivateMenu
struct ABP_DebugGammaCalibration_C_ActivateMenu_Params
{
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.UserConstructionScript
struct ABP_DebugGammaCalibration_C_UserConstructionScript_Params
{
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveBeginPlay
struct ABP_DebugGammaCalibration_C_ReceiveBeginPlay_Params
{
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveTick
struct ABP_DebugGammaCalibration_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ExecuteUbergraph_BP_DebugGammaCalibration
struct ABP_DebugGammaCalibration_C_ExecuteUbergraph_BP_DebugGammaCalibration_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
