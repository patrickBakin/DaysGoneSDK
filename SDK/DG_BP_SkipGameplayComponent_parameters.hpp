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

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.DisplayMissionSkipButton
struct UBP_SkipGameplayComponent_C_DisplayMissionSkipButton_Params
{
};

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.RemoveMissionSkipButton
struct UBP_SkipGameplayComponent_C_RemoveMissionSkipButton_Params
{
	bool*                                              Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.UpdatePercent
struct UBP_SkipGameplayComponent_C_UpdatePercent_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ReceiveEndPlay
struct UBP_SkipGameplayComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ExecuteUbergraph_BP_SkipGameplayComponent
struct UBP_SkipGameplayComponent_C_ExecuteUbergraph_BP_SkipGameplayComponent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
