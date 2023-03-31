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

// Function SurvivorPawn.SurvivorPawn_C.UserConstructionScript
struct ASurvivorPawn_C_UserConstructionScript_Params
{
};

// Function SurvivorPawn.SurvivorPawn_C.ReceiveBeginPlay
struct ASurvivorPawn_C_ReceiveBeginPlay_Params
{
};

// Function SurvivorPawn.SurvivorPawn_C.OnDied_Event_1
struct ASurvivorPawn_C_OnDied_Event_1_Params
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

// Function SurvivorPawn.SurvivorPawn_C.ExecuteUbergraph_SurvivorPawn
struct ASurvivorPawn_C_ExecuteUbergraph_SurvivorPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
