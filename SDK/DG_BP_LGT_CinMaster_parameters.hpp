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

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.HelperCheckForResettingAimTargets
struct ABP_LGT_CinMaster_C_HelperCheckForResettingAimTargets_Params
{
	bool                                               isParented;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          SkelMesh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             rootLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        aimTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForResettingAimTargets
struct ABP_LGT_CinMaster_C_CheckForResettingAimTargets_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckUtilites
struct ABP_LGT_CinMaster_C_CheckUtilites_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.NonEmptyLength
struct ABP_LGT_CinMaster_C_NonEmptyLength_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CopyAllRigSettings
struct ABP_LGT_CinMaster_C_CopyAllRigSettings_Params
{
	class ABP_LGT_CinMaster_C*                         masterRig;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_LGT_CinSlave_C*                          slaveRig;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForLightLinking
struct ABP_LGT_CinMaster_C_CheckForLightLinking_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateSlaveRigs
struct ABP_LGT_CinMaster_C_UpdateSlaveRigs_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ToggleLightVisibility
struct ABP_LGT_CinMaster_C_ToggleLightVisibility_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.InitializeAimTargetVars
struct ABP_LGT_CinMaster_C_InitializeAimTargetVars_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.GetFlickerStruct_NEW
struct ABP_LGT_CinMaster_C_GetFlickerStruct_NEW_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UserConstructionScript
struct ABP_LGT_CinMaster_C_UserConstructionScript_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveBeginPlay
struct ABP_LGT_CinMaster_C_ReceiveBeginPlay_Params
{
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.EditorTicker
struct ABP_LGT_CinMaster_C_EditorTicker_Params
{
	float                                              Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveTick
struct ABP_LGT_CinMaster_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateTimeOfDay
struct ABP_LGT_CinMaster_C_UpdateTimeOfDay_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.LinkedCameraStateChanged
struct ABP_LGT_CinMaster_C_LinkedCameraStateChanged_Params
{
	class ACameraActor**                               DisabledCamera;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor**                               EnabledCamera;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ExecuteUbergraph_BP_LGT_CinMaster
struct ABP_LGT_CinMaster_C_ExecuteUbergraph_BP_LGT_CinMaster_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
