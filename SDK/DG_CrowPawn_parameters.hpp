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

// Function CrowPawn.CrowPawn_C.SpawnAndSetupSearchBodyActor
struct ACrowPawn_C_SpawnAndSetupSearchBodyActor_Params
{
	class UAnimSequenceBase**                          AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          AnimSequenceCrouched;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SubClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CrowPawn.CrowPawn_C.UserConstructionScript
struct ACrowPawn_C_UserConstructionScript_Params
{
};

// Function CrowPawn.CrowPawn_C.ReceiveBeginPlay
struct ACrowPawn_C_ReceiveBeginPlay_Params
{
};

// Function CrowPawn.CrowPawn_C.Died
struct ACrowPawn_C_Died_Params
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

// Function CrowPawn.CrowPawn_C.ReceiveAnyDamage
struct ACrowPawn_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrowPawn.CrowPawn_C.SetupAnimalLootBinds
struct ACrowPawn_C_SetupAnimalLootBinds_Params
{
};

// Function CrowPawn.CrowPawn_C.ExecuteUbergraph_CrowPawn
struct ACrowPawn_C_ExecuteUbergraph_CrowPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
