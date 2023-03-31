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

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ObjectBlownUp
struct ABP_CarryWeaponPickupBase_C_ObjectBlownUp_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleInfiniteRespawn
struct ABP_CarryWeaponPickupBase_C_HandleInfiniteRespawn_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.UserConstructionScript
struct ABP_CarryWeaponPickupBase_C_UserConstructionScript_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePostSaveGameLoaded
struct ABP_CarryWeaponPickupBase_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleExploded
struct ABP_CarryWeaponPickupBase_C_HandleExploded_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
struct ABP_CarryWeaponPickupBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ResetObject
struct ABP_CarryWeaponPickupBase_C_ResetObject_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveAnyDamage
struct ABP_CarryWeaponPickupBase_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickup
struct ABP_CarryWeaponPickupBase_C_ExplodePickup_Params
{
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePreSaveGameLoaded
struct ABP_CarryWeaponPickupBase_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnPerformActionEnd
struct ABP_CarryWeaponPickupBase_C_OnPerformActionEnd_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.DisplayHudNotificationInternal
struct ABP_CarryWeaponPickupBase_C_DisplayHudNotificationInternal_Params
{
	class UTexture2D**                                 NotifyTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickupDelayed
struct ABP_CarryWeaponPickupBase_C_ExplodePickupDelayed_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.AddExplosionForce
struct ABP_CarryWeaponPickupBase_C_AddExplosionForce_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CreateFireDelayed
struct ABP_CarryWeaponPickupBase_C_CreateFireDelayed_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.MakeExplosionNoise
struct ABP_CarryWeaponPickupBase_C_MakeExplosionNoise_Params
{
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.InitPickupInteract
struct ABP_CarryWeaponPickupBase_C_InitPickupInteract_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShake
struct ABP_CarryWeaponPickupBase_C_PlayCameraShake_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShakeDelayed
struct ABP_CarryWeaponPickupBase_C_PlayCameraShakeDelayed_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayPickupVO
struct ABP_CarryWeaponPickupBase_C_PlayPickupVO_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnFireDelayed
struct ABP_CarryWeaponPickupBase_C_OnFireDelayed_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.StopVibration
struct ABP_CarryWeaponPickupBase_C_StopVibration_Params
{
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveEndPlay
struct ABP_CarryWeaponPickupBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExecuteUbergraph_BP_CarryWeaponPickupBase
struct ABP_CarryWeaponPickupBase_C_ExecuteUbergraph_BP_CarryWeaponPickupBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CarryWeaponExploded__DelegateSignature
struct ABP_CarryWeaponPickupBase_C_CarryWeaponExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
