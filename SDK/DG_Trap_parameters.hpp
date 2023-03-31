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

// Function Trap.Trap_C.ShowTutorial
struct ATrap_C_ShowTutorial_Params
{
};

// Function Trap.Trap_C.UserConstructionScript
struct ATrap_C_UserConstructionScript_Params
{
};

// Function Trap.Trap_C.ReceiveBeginPlay
struct ATrap_C_ReceiveBeginPlay_Params
{
};

// Function Trap.Trap_C.OnTrigger
struct ATrap_C_OnTrigger_Params
{
	class ABendPawn**                                  TriggeringPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.Trap_OnInventoryPickup
struct ATrap_C_Trap_OnInventoryPickup_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.Trap_ExactMomentOfPickup
struct ATrap_C_Trap_ExactMomentOfPickup_Params
{
};

// Function Trap.Trap_C.TrapExplode
struct ATrap_C_TrapExplode_Params
{
};

// Function Trap.Trap_C.ReceiveAnyDamage
struct ATrap_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.PlayArmedBeep
struct ATrap_C_PlayArmedBeep_Params
{
};

// Function Trap.Trap_C.HandleAttachedToDestructibleExploded
struct ATrap_C_HandleAttachedToDestructibleExploded_Params
{
};

// Function Trap.Trap_C.SetupAttachedToDestructibleExploded
struct ATrap_C_SetupAttachedToDestructibleExploded_Params
{
};

// Function Trap.Trap_C.ReceivePreSaveGameLoaded
struct ATrap_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.TriggerWeaponPlayer
struct ATrap_C_TriggerWeaponPlayer_Params
{
};

// Function Trap.Trap_C.TriggerWeaponAIPawn
struct ATrap_C_TriggerWeaponAIPawn_Params
{
};

// Function Trap.Trap_C.SetupTutorial
struct ATrap_C_SetupTutorial_Params
{
};

// Function Trap.Trap_C.AllowTutorial
struct ATrap_C_AllowTutorial_Params
{
};

// Function Trap.Trap_C.HideTutorial
struct ATrap_C_HideTutorial_Params
{
};

// Function Trap.Trap_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature
struct ATrap_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature_Params
{
};

// Function Trap.Trap_C.OnFireDelayed
struct ATrap_C_OnFireDelayed_Params
{
};

// Function Trap.Trap_C.WillLureToThrownNoise
struct ATrap_C_WillLureToThrownNoise_Params
{
	bool*                                              WillHear;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.StopVibration
struct ATrap_C_StopVibration_Params
{
};

// Function Trap.Trap_C.ReceiveEndPlay
struct ATrap_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.ExecuteUbergraph_Trap
struct ATrap_C_ExecuteUbergraph_Trap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap.Trap_C.TrapExploded__DelegateSignature
struct ATrap_C_TrapExploded__DelegateSignature_Params
{
};

// Function Trap.Trap_C.TrapPickedUp__DelegateSignature
struct ATrap_C_TrapPickedUp__DelegateSignature_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
