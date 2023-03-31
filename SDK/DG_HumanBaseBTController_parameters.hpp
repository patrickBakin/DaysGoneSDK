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

// Function HumanBaseBTController.HumanBaseBTController_C.UserConstructionScript
struct AHumanBaseBTController_C_UserConstructionScript_Params
{
};

// Function HumanBaseBTController.HumanBaseBTController_C.ReceiveBeginPlay
struct AHumanBaseBTController_C_ReceiveBeginPlay_Params
{
};

// Function HumanBaseBTController.HumanBaseBTController_C.CombatHuntStartedEvent
struct AHumanBaseBTController_C_CombatHuntStartedEvent_Params
{
	struct FVector                                     PlayerPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLastKnownPos;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NPCPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBaseBTController.HumanBaseBTController_C.KillCombatHuntBinding
struct AHumanBaseBTController_C_KillCombatHuntBinding_Params
{
};

// Function HumanBaseBTController.HumanBaseBTController_C.OnDied_Event_1
struct AHumanBaseBTController_C_OnDied_Event_1_Params
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

// Function HumanBaseBTController.HumanBaseBTController_C.AwarePlayerEvent
struct AHumanBaseBTController_C_AwarePlayerEvent_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBaseBTController.HumanBaseBTController_C.ExecuteUbergraph_HumanBaseBTController
struct AHumanBaseBTController_C_ExecuteUbergraph_HumanBaseBTController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBaseBTController.HumanBaseBTController_C.AwareOfPlayer__DelegateSignature
struct AHumanBaseBTController_C_AwareOfPlayer__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
