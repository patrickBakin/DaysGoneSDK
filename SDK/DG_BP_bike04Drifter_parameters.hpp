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

// Function BP_bike04Drifter.BP_bike04Drifter_C.WhatBikeIsThis
struct ABP_bike04Drifter_C_WhatBikeIsThis_Params
{
	TEnumAsByte<EAB_bike_size>                         VehBIkeType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.I_GetGasInfo
struct ABP_bike04Drifter_C_I_GetGasInfo_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.UserConstructionScript
struct ABP_bike04Drifter_C_UserConstructionScript_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__FinishedFunc
struct ABP_bike04Drifter_C_DSTankLight__FinishedFunc_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__UpdateFunc
struct ABP_bike04Drifter_C_DSTankLight__UpdateFunc_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveEndPlay
struct ABP_bike04Drifter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.I_RefuelingFinished
struct ABP_bike04Drifter_C_I_RefuelingFinished_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnReceivedDamage
struct ABP_bike04Drifter_C_OnReceivedDamage_Params
{
	TEnumAsByte<EBendVehicleDamageType>*               DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedEnteringVehicle
struct ABP_bike04Drifter_C_OnDriverFinishedEnteringVehicle_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedExitingVehicle
struct ABP_bike04Drifter_C_OnDriverFinishedExitingVehicle_Params
{
	TEnumAsByte<EBendVehicleExitReason>*               InExitReason;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveBeginPlay
struct ABP_bike04Drifter_C_ReceiveBeginPlay_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached0Percent
struct ABP_bike04Drifter_C_OnFuelReached0Percent_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.CheckIfAtZeroHealth
struct ABP_bike04Drifter_C_CheckIfAtZeroHealth_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached50Percent_Event_1
struct ABP_bike04Drifter_C_OnFuelReached50Percent_Event_1_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.I_InteractRangeUpdate
struct ABP_bike04Drifter_C_I_InteractRangeUpdate_Params
{
	bool                                               InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.LeftEnc
struct ABP_bike04Drifter_C_LeftEnc_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceivePostSaveGameLoaded
struct ABP_bike04Drifter_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.EnableBikeDetection
struct ABP_bike04Drifter_C_EnableBikeDetection_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DisableBikeDetection
struct ABP_bike04Drifter_C_DisableBikeDetection_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.I_SetGasCanHasControl
struct ABP_bike04Drifter_C_I_SetGasCanHasControl_Params
{
	bool*                                              HasControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_2
struct ABP_bike04Drifter_C_OnTutorialClosed_2_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_4
struct ABP_bike04Drifter_C_OnTutorialClosed_4_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_5
struct ABP_bike04Drifter_C_OnTutorialClosed_5_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_6
struct ABP_bike04Drifter_C_OnTutorialClosed_6_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DistanceTutorial
struct ABP_bike04Drifter_C_DistanceTutorial_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOn
struct ABP_bike04Drifter_C_DSTankOn_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOff
struct ABP_bike04Drifter_C_DSTankOff_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnStartEngine
struct ABP_bike04Drifter_C_OnStartEngine_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.OnStopEngine
struct ABP_bike04Drifter_C_OnStopEngine_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankSetState
struct ABP_bike04Drifter_C_DSTankSetState_Params
{
	bool                                               StateOn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature
struct ABP_bike04Drifter_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.I_DeathStrandingForceUpdate
struct ABP_bike04Drifter_C_I_DeathStrandingForceUpdate_Params
{
	bool                                               forcereset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOn
struct ABP_bike04Drifter_C_BabyTankOn_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOff
struct ABP_bike04Drifter_C_BabyTankOff_Params
{
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.ExecuteUbergraph_BP_bike04Drifter
struct ABP_bike04Drifter_C_ExecuteUbergraph_BP_bike04Drifter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Damaged__DelegateSignature
struct ABP_bike04Drifter_C_TelemetryEvent_BS_Damaged__DelegateSignature_Params
{
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Refueled__DelegateSignature
struct ABP_bike04Drifter_C_TelemetryEvent_BS_Refueled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
