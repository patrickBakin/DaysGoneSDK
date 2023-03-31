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

// Function Explosive.Explosive_C.ForceExplode
struct AExplosive_C_ForceExplode_Params
{
};

// Function Explosive.Explosive_C.RepositionExplosivePieces
struct AExplosive_C_RepositionExplosivePieces_Params
{
};

// Function Explosive.Explosive_C.Explode
struct AExplosive_C_Explode_Params
{
	bool                                               LoadExploded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.UserConstructionScript
struct AExplosive_C_UserConstructionScript_Params
{
};

// Function Explosive.Explosive_C.ReceiveBeginPlay
struct AExplosive_C_ReceiveBeginPlay_Params
{
};

// Function Explosive.Explosive_C.ReceiveAnyDamage
struct AExplosive_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.ReceivePostSaveGameLoaded
struct AExplosive_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.ExplodeDelayed
struct AExplosive_C_ExplodeDelayed_Params
{
};

// Function Explosive.Explosive_C.SetStateToExploded
struct AExplosive_C_SetStateToExploded_Params
{
};

// Function Explosive.Explosive_C.ReceivePreSaveGameLoaded
struct AExplosive_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.CreateFire
struct AExplosive_C_CreateFire_Params
{
};

// Function Explosive.Explosive_C.CreateFireDelayed
struct AExplosive_C_CreateFireDelayed_Params
{
};

// Function Explosive.Explosive_C.PlayCameraShake
struct AExplosive_C_PlayCameraShake_Params
{
};

// Function Explosive.Explosive_C.PlayCameraShakeDelayed
struct AExplosive_C_PlayCameraShakeDelayed_Params
{
};

// Function Explosive.Explosive_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature
struct AExplosive_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature_Params
{
};

// Function Explosive.Explosive_C.OnFireDelayed
struct AExplosive_C_OnFireDelayed_Params
{
};

// Function Explosive.Explosive_C.SwapExplodedMesh
struct AExplosive_C_SwapExplodedMesh_Params
{
};

// Function Explosive.Explosive_C.SwapExplodedMeshDelayed
struct AExplosive_C_SwapExplodedMeshDelayed_Params
{
};

// Function Explosive.Explosive_C.StopVibration
struct AExplosive_C_StopVibration_Params
{
};

// Function Explosive.Explosive_C.ReceiveEndPlay
struct AExplosive_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.ExecuteUbergraph_Explosive
struct AExplosive_C_ExecuteUbergraph_Explosive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Explosive.Explosive_C.ExplosiveExploded__DelegateSignature
struct AExplosive_C_ExplosiveExploded__DelegateSignature_Params
{
	class AExplosive_C*                                Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
