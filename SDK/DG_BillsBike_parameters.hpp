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

// Function BillsBike.BillsBike_C.I_GetGasValues
struct ABillsBike_C_I_GetGasValues_Params
{
	float                                              Gas_Current;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Gas_Max;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.GetEngineSoundAsset
struct ABillsBike_C_GetEngineSoundAsset_Params
{
	class USoundBase*                                  EngineSoundAsset;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.I_SetVehicleHeadLightBrightness
struct ABillsBike_C_I_SetVehicleHeadLightBrightness_Params
{
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   Setting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.I_SetBikeInCinematicMode
struct ABillsBike_C_I_SetBikeInCinematicMode_Params
{
	bool                                               ON_;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SetIsSoundKilled
struct ABillsBike_C_SetIsSoundKilled_Params
{
	bool                                               isSoundKilled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SetPlayerOnBikeTags
struct ABillsBike_C_SetPlayerOnBikeTags_Params
{
	bool                                               IsPlayerOnBike;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.UpdateDynamicMaterials
struct ABillsBike_C_UpdateDynamicMaterials_Params
{
};

// Function BillsBike.BillsBike_C.CollidedWithEnemy
struct ABillsBike_C_CollidedWithEnemy_Params
{
	class UCurveFloat*                                 EnemyDMGCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        ControllerFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SetFocusLevel
struct ABillsBike_C_SetFocusLevel_Params
{
	struct FGameplayTag                                SkillTagToCheck;                                          // (Parm)
};

// Function BillsBike.BillsBike_C.ControlNPCJumpCollider
struct ABillsBike_C_ControlNPCJumpCollider_Params
{
};

// Function BillsBike.BillsBike_C.FixRagdollColliderAttachment
struct ABillsBike_C_FixRagdollColliderAttachment_Params
{
};

// Function BillsBike.BillsBike_C.ArtFuncs_SetGrunge
struct ABillsBike_C_ArtFuncs_SetGrunge_Params
{
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Grunge_Offset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ArtFuncs_MakeDynamicMaterials
struct ABillsBike_C_ArtFuncs_MakeDynamicMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Material_Instances;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BillsBike.BillsBike_C.ArtFunctions
struct ABillsBike_C_ArtFunctions_Params
{
	float                                              Grunge_Offset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Bike_Materials;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BillsBike.BillsBike_C.SetOutline
struct ABillsBike_C_SetOutline_Params
{
	bool                                               OutlineOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SetBikeNoiseReduction
struct ABillsBike_C_SetBikeNoiseReduction_Params
{
};

// Function BillsBike.BillsBike_C.SetBikeDamageReduction
struct ABillsBike_C_SetBikeDamageReduction_Params
{
};

// Function BillsBike.BillsBike_C.DealMiscellaneousDamage
struct ABillsBike_C_DealMiscellaneousDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-ForceBoostSound
struct ABillsBike_C_Sound_ForceBoostSound_Params
{
	bool                                               ForceBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-EndStall
struct ABillsBike_C_Sound_EndStall_Params
{
};

// Function BillsBike.BillsBike_C.Sound-StartStall
struct ABillsBike_C_Sound_StartStall_Params
{
};

// Function BillsBike.BillsBike_C.Sound-StartStallWithTime
struct ABillsBike_C_Sound_StartStallWithTime_Params
{
	float                                              HowLongToStall;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.CalculateCumulativeDamage
struct ABillsBike_C_CalculateCumulativeDamage_Params
{
	float                                              IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireBikeDmgVO;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CumulativeDmg;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.CinematicModeToggle
struct ABillsBike_C_CinematicModeToggle_Params
{
	bool                                               ON_;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.FlipVehicleForwardAndDumpRidersHack
struct ABillsBike_C_FlipVehicleForwardAndDumpRidersHack_Params
{
};

// Function BillsBike.BillsBike_C.PlayHitSounds
struct ABillsBike_C_PlayHitSounds_Params
{
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageRemain;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-KillBikeSound
struct ABillsBike_C_Sound_KillBikeSound_Params
{
	bool                                               KillSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-StopRpmSuppression
struct ABillsBike_C_Sound_StopRpmSuppression_Params
{
};

// Function BillsBike.BillsBike_C.Sound-StopThrottleSuppression
struct ABillsBike_C_Sound_StopThrottleSuppression_Params
{
};

// Function BillsBike.BillsBike_C.Force180
struct ABillsBike_C_Force180_Params
{
};

// Function BillsBike.BillsBike_C.StopAttractRev
struct ABillsBike_C_StopAttractRev_Params
{
};

// Function BillsBike.BillsBike_C.Sound-OutofGas
struct ABillsBike_C_Sound_OutofGas_Params
{
};

// Function BillsBike.BillsBike_C.Sound-AttractEngineRev
struct ABillsBike_C_Sound_AttractEngineRev_Params
{
};

// Function BillsBike.BillsBike_C.Sound-StopAttractorEmitter
struct ABillsBike_C_Sound_StopAttractorEmitter_Params
{
};

// Function BillsBike.BillsBike_C.Sound-DrawDebug
struct ABillsBike_C_Sound_DrawDebug_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-SetupGearAndShift
struct ABillsBike_C_Sound_SetupGearAndShift_Params
{
};

// Function BillsBike.BillsBike_C.Sound-Shift
struct ABillsBike_C_Sound_Shift_Params
{
};

// Function BillsBike.BillsBike_C.Sound-Gear
struct ABillsBike_C_Sound_Gear_Params
{
};

// Function BillsBike.BillsBike_C.Sound-Boost
struct ABillsBike_C_Sound_Boost_Params
{
};

// Function BillsBike.BillsBike_C.Sound-ThrottleAutoShift
struct ABillsBike_C_Sound_ThrottleAutoShift_Params
{
};

// Function BillsBike.BillsBike_C.Sound-IsStopped
struct ABillsBike_C_Sound_IsStopped_Params
{
};

// Function BillsBike.BillsBike_C.Sound-IsBraking
struct ABillsBike_C_Sound_IsBraking_Params
{
};

// Function BillsBike.BillsBike_C.Sound-SetBurnout
struct ABillsBike_C_Sound_SetBurnout_Params
{
};

// Function BillsBike.BillsBike_C.Sound-IsThrottlePressed
struct ABillsBike_C_Sound_IsThrottlePressed_Params
{
};

// Function BillsBike.BillsBike_C.Sound-SetRPM
struct ABillsBike_C_Sound_SetRPM_Params
{
	float                                              NormalizedRPM;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.Sound-CalculateNormalizedRPM
struct ABillsBike_C_Sound_CalculateNormalizedRPM_Params
{
	float                                              NormalizedRPM;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ChangeHeadlightBrightness
struct ABillsBike_C_ChangeHeadlightBrightness_Params
{
};

// Function BillsBike.BillsBike_C.SetHeadlightBrightness
struct ABillsBike_C_SetHeadlightBrightness_Params
{
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightness;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.IsOnGravel
struct ABillsBike_C_IsOnGravel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnGravel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.IsOnDirt
struct ABillsBike_C_IsOnDirt_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnDirt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ApplyTireDrag
struct ABillsBike_C_ApplyTireDrag_Params
{
};

// Function BillsBike.BillsBike_C.Debug_Sound-Bikes
struct ABillsBike_C_Debug_Sound_Bikes_Params
{
	class UAudioComponent*                             SND_Bike_CC;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovementComponent;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.UserConstructionScript
struct ABillsBike_C_UserConstructionScript_Params
{
};

// Function BillsBike.BillsBike_C.I_GasCanDropped
struct ABillsBike_C_I_GasCanDropped_Params
{
};

// Function BillsBike.BillsBike_C.I_RefuelingFinished
struct ABillsBike_C_I_RefuelingFinished_Params
{
};

// Function BillsBike.BillsBike_C.I_SetGasCanHasControl
struct ABillsBike_C_I_SetGasCanHasControl_Params
{
	bool                                               HasControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.CheckGasRemaining
struct ABillsBike_C_CheckGasRemaining_Params
{
};

// Function BillsBike.BillsBike_C.StopCheckGasRemaining
struct ABillsBike_C_StopCheckGasRemaining_Params
{
};

// Function BillsBike.BillsBike_C.StartCheckGasRemaining
struct ABillsBike_C_StartCheckGasRemaining_Params
{
};

// Function BillsBike.BillsBike_C.SuppressBikeStartupSound
struct ABillsBike_C_SuppressBikeStartupSound_Params
{
};

// Function BillsBike.BillsBike_C.OnDriverEnteredVehicle
struct ABillsBike_C_OnDriverEnteredVehicle_Params
{
};

// Function BillsBike.BillsBike_C.OnDriverExitedVehicle
struct ABillsBike_C_OnDriverExitedVehicle_Params
{
	TEnumAsByte<EBendVehicleExitReason>*               InExitReason;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.OnDriverFinishedEnteringVehicle
struct ABillsBike_C_OnDriverFinishedEnteringVehicle_Params
{
};

// Function BillsBike.BillsBike_C.OnDriverFinishedExitingVehicle
struct ABillsBike_C_OnDriverFinishedExitingVehicle_Params
{
	TEnumAsByte<EBendVehicleExitReason>*               InExitReason;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.I_GasPumpFinished
struct ABillsBike_C_I_GasPumpFinished_Params
{
};

// Function BillsBike.BillsBike_C.OnSwitchedOffLights
struct ABillsBike_C_OnSwitchedOffLights_Params
{
};

// Function BillsBike.BillsBike_C.OnSwitchedOnLights
struct ABillsBike_C_OnSwitchedOnLights_Params
{
};

// Function BillsBike.BillsBike_C.OnChangeTailLightState
struct ABillsBike_C_OnChangeTailLightState_Params
{
	TEnumAsByte<EBendVehicleTailLightState>*           NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SwitchHeadlightBrightness
struct ABillsBike_C_SwitchHeadlightBrightness_Params
{
};

// Function BillsBike.BillsBike_C.OnReceivedDamage
struct ABillsBike_C_OnReceivedDamage_Params
{
	TEnumAsByte<EBendVehicleDamageType>*               DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.OnHealthRestored
struct ABillsBike_C_OnHealthRestored_Params
{
};

// Function BillsBike.BillsBike_C.ForceDamageUpdate
struct ABillsBike_C_ForceDamageUpdate_Params
{
};

// Function BillsBike.BillsBike_C.MakeBikeDirtyByDamage
struct ABillsBike_C_MakeBikeDirtyByDamage_Params
{
};

// Function BillsBike.BillsBike_C.DebugPrintDamage
struct ABillsBike_C_DebugPrintDamage_Params
{
};

// Function BillsBike.BillsBike_C.SetSmokeParticles
struct ABillsBike_C_SetSmokeParticles_Params
{
};

// Function BillsBike.BillsBike_C.ApplyDamageFX
struct ABillsBike_C_ApplyDamageFX_Params
{
};

// Function BillsBike.BillsBike_C.SetBikeDamageSound
struct ABillsBike_C_SetBikeDamageSound_Params
{
};

// Function BillsBike.BillsBike_C.PlayImpactSounds
struct ABillsBike_C_PlayImpactSounds_Params
{
};

// Function BillsBike.BillsBike_C.PrintDamageDebug
struct ABillsBike_C_PrintDamageDebug_Params
{
};

// Function BillsBike.BillsBike_C.PlayVOForDamage
struct ABillsBike_C_PlayVOForDamage_Params
{
};

// Function BillsBike.BillsBike_C.ForceVehicleDamageUpdate
struct ABillsBike_C_ForceVehicleDamageUpdate_Params
{
};

// Function BillsBike.BillsBike_C.OnLanded
struct ABillsBike_C_OnLanded_Params
{
	int*                                               NumTiresOnGround;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ReceiveHit
struct ABillsBike_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature
struct ABillsBike_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature
struct ABillsBike_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ReceiveEndPlay
struct ABillsBike_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature
struct ABillsBike_C_BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BillsBike.BillsBike_C.OnImpactedEnemy
struct ABillsBike_C_OnImpactedEnemy_Params
{
	class ABendPawn**                                  OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.DisableBikeDetection
struct ABillsBike_C_DisableBikeDetection_Params
{
};

// Function BillsBike.BillsBike_C.EnableBikeDetection
struct ABillsBike_C_EnableBikeDetection_Params
{
};

// Function BillsBike.BillsBike_C.ReceiveBeginPlay
struct ABillsBike_C_ReceiveBeginPlay_Params
{
};

// Function BillsBike.BillsBike_C.OnSimulateEngineRevSound
struct ABillsBike_C_OnSimulateEngineRevSound_Params
{
};

// Function BillsBike.BillsBike_C.On180Finished
struct ABillsBike_C_On180Finished_Params
{
};

// Function BillsBike.BillsBike_C.PlayBikeSound
struct ABillsBike_C_PlayBikeSound_Params
{
};

// Function BillsBike.BillsBike_C.BikeDamageDebug_TogglePlayerFalling
struct ABillsBike_C_BikeDamageDebug_TogglePlayerFalling_Params
{
	bool                                               Enable_Falling;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.OnVehiclePartUpdated
struct ABillsBike_C_OnVehiclePartUpdated_Params
{
	TEnumAsByte<EMotorcyclePartType>*                  PartType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent**                             Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendVehicleMeshAttachmentSpecs**            Specs;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.I_SetGasAmounts
struct ABillsBike_C_I_SetGasAmounts_Params
{
	float                                              NewGas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.SabotageOrRepairComplete_Event_1
struct ABillsBike_C_SabotageOrRepairComplete_Event_1_Params
{
	int                                                ScrapCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.OnStartEngine
struct ABillsBike_C_OnStartEngine_Params
{
};

// Function BillsBike.BillsBike_C.OnStopEngine
struct ABillsBike_C_OnStopEngine_Params
{
};

// Function BillsBike.BillsBike_C.OnDiedOrDestroyed_Event_1
struct ABillsBike_C_OnDiedOrDestroyed_Event_1_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDied;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStarted
struct ABillsBike_C_OnBikeManualAimSlowdownStarted_Params
{
};

// Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStopped
struct ABillsBike_C_OnBikeManualAimSlowdownStopped_Params
{
};

// Function BillsBike.BillsBike_C.OnNotifyBrokenNPCVehicleTutorial
struct ABillsBike_C_OnNotifyBrokenNPCVehicleTutorial_Params
{
};

// Function BillsBike.BillsBike_C.OnNotifyEngineDestroyed
struct ABillsBike_C_OnNotifyEngineDestroyed_Params
{
};

// Function BillsBike.BillsBike_C.OnNotifyRepairEngine
struct ABillsBike_C_OnNotifyRepairEngine_Params
{
};

// Function BillsBike.BillsBike_C.OnFullyDamaged
struct ABillsBike_C_OnFullyDamaged_Params
{
};

// Function BillsBike.BillsBike_C.OnWheelieStateChanged
struct ABillsBike_C_OnWheelieStateChanged_Params
{
	unsigned char                                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ReceivePostSaveGameLoaded
struct ABillsBike_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.ExecuteUbergraph_BillsBike
struct ABillsBike_C_ExecuteUbergraph_BillsBike_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.BikeFullyDamaged__DelegateSignature
struct ABillsBike_C_BikeFullyDamaged__DelegateSignature_Params
{
};

// Function BillsBike.BillsBike_C.TelemetryEvent_BS_OutOfGas__DelegateSignature
struct ABillsBike_C_TelemetryEvent_BS_OutOfGas__DelegateSignature_Params
{
};

// Function BillsBike.BillsBike_C.SabotageOrRepairComplete__DelegateSignature
struct ABillsBike_C_SabotageOrRepairComplete__DelegateSignature_Params
{
	class ABillsBike_C*                                BikeRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Sabotaged;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScrapCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.TelemetryEvent_BS_BikeImpact__DelegateSignature
struct ABillsBike_C_TelemetryEvent_BS_BikeImpact__DelegateSignature_Params
{
	struct FVector                                     BikeVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollidedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.BikeDmgVO__DelegateSignature
struct ABillsBike_C_BikeDmgVO__DelegateSignature_Params
{
};

// Function BillsBike.BillsBike_C.DriverEnteredVehicle__DelegateSignature
struct ABillsBike_C_DriverEnteredVehicle__DelegateSignature_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BillsBike.BillsBike_C.180Complete__DelegateSignature
struct ABillsBike_C__180Complete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
