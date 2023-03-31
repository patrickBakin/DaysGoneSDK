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

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.CopyLightValues
struct ABP_LGT_CinSlave_C_CopyLightValues_Params
{
	class UBendSpotLightComponent*                     sourceLight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     destLight;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.Check For Copy From Master
struct ABP_LGT_CinSlave_C_Check_For_Copy_From_Master_Params
{
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.UserConstructionScript
struct ABP_LGT_CinSlave_C_UserConstructionScript_Params
{
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ReceiveBeginPlay
struct ABP_LGT_CinSlave_C_ReceiveBeginPlay_Params
{
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.EditorTicker
struct ABP_LGT_CinSlave_C_EditorTicker_Params
{
	float*                                             Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.LinkedCameraStateChanged
struct ABP_LGT_CinSlave_C_LinkedCameraStateChanged_Params
{
	class ACameraActor**                               DisabledCamera;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor**                               EnabledCamera;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ExecuteUbergraph_BP_LGT_CinSlave
struct ABP_LGT_CinSlave_C_ExecuteUbergraph_BP_LGT_CinSlave_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
