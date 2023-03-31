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

// Function AnimalPawnBase.AnimalPawnBase_C.ClampGrappleResult
struct AAnimalPawnBase_C_ClampGrappleResult_Params
{
	float*                                             InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.UpdateCurrentState
struct AAnimalPawnBase_C_UpdateCurrentState_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.OnFireUpdate
struct AAnimalPawnBase_C_OnFireUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.FrustratedUpdate
struct AAnimalPawnBase_C_FrustratedUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.GrappleUpdate
struct AAnimalPawnBase_C_GrappleUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.DrinkingUpdate
struct AAnimalPawnBase_C_DrinkingUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.EatingUpdate
struct AAnimalPawnBase_C_EatingUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.UnawareUpdate
struct AAnimalPawnBase_C_UnawareUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.SemiawareUpdate
struct AAnimalPawnBase_C_SemiawareUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.AwareUpdate
struct AAnimalPawnBase_C_AwareUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.NoneUpdate
struct AAnimalPawnBase_C_NoneUpdate_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.StateCheckForAudio
struct AAnimalPawnBase_C_StateCheckForAudio_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.ModifyDamage
struct AAnimalPawnBase_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.SetCalloutPosition
struct AAnimalPawnBase_C_SetCalloutPosition_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.SpawnAndSetupSearchBodyActor
struct AAnimalPawnBase_C_SpawnAndSetupSearchBodyActor_Params
{
	class UAnimSequenceBase**                          AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          AnimSequenceCrouched;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SubClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.UserConstructionScript
struct AAnimalPawnBase_C_UserConstructionScript_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.SpawnActorPOIGoreBody
struct AAnimalPawnBase_C_SpawnActorPOIGoreBody_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.ReceiveBeginPlay
struct AAnimalPawnBase_C_ReceiveBeginPlay_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.AnimalDied
struct AAnimalPawnBase_C_AnimalDied_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.ReceivePointDamage
struct AAnimalPawnBase_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.OnPickup_Event_1
struct AAnimalPawnBase_C_OnPickup_Event_1_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.OnInventoryPickup_Event_1
struct AAnimalPawnBase_C_OnInventoryPickup_Event_1_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.SetupAnimalLootBinds
struct AAnimalPawnBase_C_SetupAnimalLootBinds_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.WillHearThrownNoise
struct AAnimalPawnBase_C_WillHearThrownNoise_Params
{
	class ABendWeapon_Projectile**                     ThrownWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WillHear;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.ReceiveAnyDamage
struct AAnimalPawnBase_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimalPawnBase.AnimalPawnBase_C.OnFocusFadingFinished_Event_1
struct AAnimalPawnBase_C_OnFocusFadingFinished_Event_1_Params
{
};

// Function AnimalPawnBase.AnimalPawnBase_C.ExecuteUbergraph_AnimalPawnBase
struct AAnimalPawnBase_C_ExecuteUbergraph_AnimalPawnBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
