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

// Function BuddyBasePawn.BuddyBasePawn_C.ModifyDamage
struct ABuddyBasePawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.UserConstructionScript
struct ABuddyBasePawn_C_UserConstructionScript_Params
{
};

// Function BuddyBasePawn.BuddyBasePawn_C.ReceivePossessed
struct ABuddyBasePawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleBegin
struct ABuddyBasePawn_C_BuddyGrappleBegin_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipButtonEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleEnd
struct ABuddyBasePawn_C_BuddyGrappleEnd_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.CustomEvent_1
struct ABuddyBasePawn_C_CustomEvent_1_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.BuddyFellOffBike
struct ABuddyBasePawn_C_BuddyFellOffBike_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.DelayBuddyFireDeath
struct ABuddyBasePawn_C_DelayBuddyFireDeath_Params
{
};

// Function BuddyBasePawn.BuddyBasePawn_C.OnDied_Event
struct ABuddyBasePawn_C_OnDied_Event_Params
{
	float*                                             ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.ExecuteUbergraph_BuddyBasePawn
struct ABuddyBasePawn_C_ExecuteUbergraph_BuddyBasePawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleEnd__DelegateSignature
struct ABuddyBasePawn_C_OnBuddyGrappleEnd__DelegateSignature_Params
{
};

// Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleBegin__DelegateSignature
struct ABuddyBasePawn_C_OnBuddyGrappleBegin__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
