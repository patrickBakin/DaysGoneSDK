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

// Function NewtPawn.NewtPawn_C.ActivateObjectiveCallout
struct ANewtPawn_C_ActivateObjectiveCallout_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.IsCalloutActive
struct ANewtPawn_C_IsCalloutActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.GetAwareness
struct ANewtPawn_C_GetAwareness_Params
{
	TEnumAsByte<EAIAwareState>                         Awareness;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.ActivateCallout
struct ANewtPawn_C_ActivateCallout_Params
{
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CalloutOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.DeactivateCallout
struct ANewtPawn_C_DeactivateCallout_Params
{
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.SetCalloutPosition
struct ANewtPawn_C_SetCalloutPosition_Params
{
};

// Function NewtPawn.NewtPawn_C.OnFireUpdate
struct ANewtPawn_C_OnFireUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.ModifyDamage
struct ANewtPawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.AwarePassiveUpdate
struct ANewtPawn_C_AwarePassiveUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.PlayLastStateTransitionSound
struct ANewtPawn_C_PlayLastStateTransitionSound_Params
{
};

// Function NewtPawn.NewtPawn_C.Semi-AwareUpdate
struct ANewtPawn_C_Semi_AwareUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.FrustratedUpdate
struct ANewtPawn_C_FrustratedUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.EnragedUpdate
struct ANewtPawn_C_EnragedUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.NestingUpdate
struct ANewtPawn_C_NestingUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.SetColors
struct ANewtPawn_C_SetColors_Params
{
};

// Function NewtPawn.NewtPawn_C.GrapplingUpdate
struct ANewtPawn_C_GrapplingUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.HandleDamageTypes
struct ANewtPawn_C_HandleDamageTypes_Params
{
};

// Function NewtPawn.NewtPawn_C.UpdateCurrentState
struct ANewtPawn_C_UpdateCurrentState_Params
{
};

// Function NewtPawn.NewtPawn_C.StateCheckForAudio
struct ANewtPawn_C_StateCheckForAudio_Params
{
};

// Function NewtPawn.NewtPawn_C.AwareUpdate
struct ANewtPawn_C_AwareUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.LightUpdate
struct ANewtPawn_C_LightUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.UnawareUpdate
struct ANewtPawn_C_UnawareUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.EatingUpdate
struct ANewtPawn_C_EatingUpdate_Params
{
};

// Function NewtPawn.NewtPawn_C.CalculateXPGain
struct ANewtPawn_C_CalculateXPGain_Params
{
	int                                                ExperienceAwarded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.HandleDamage
struct ANewtPawn_C_HandleDamage_Params
{
};

// Function NewtPawn.NewtPawn_C.UserConstructionScript
struct ANewtPawn_C_UserConstructionScript_Params
{
};

// Function NewtPawn.NewtPawn_C.ReceiveBeginPlay
struct ANewtPawn_C_ReceiveBeginPlay_Params
{
};

// Function NewtPawn.NewtPawn_C.ReceivePointDamage
struct ANewtPawn_C_ReceivePointDamage_Params
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

// Function NewtPawn.NewtPawn_C.OnDied_Event
struct ANewtPawn_C_OnDied_Event_Params
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

// Function NewtPawn.NewtPawn_C.OnGrappledBegin_Event_1
struct ANewtPawn_C_OnGrappledBegin_Event_1_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipButtonEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.NonTablePickedUp
struct ANewtPawn_C_NonTablePickedUp_Params
{
};

// Function NewtPawn.NewtPawn_C.StatusStartedDelegate_Event_1
struct ANewtPawn_C_StatusStartedDelegate_Event_1_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.Complete
struct ANewtPawn_C_Complete_Params
{
};

// Function NewtPawn.NewtPawn_C.SpawnActorPOIGoreBody
struct ANewtPawn_C_SpawnActorPOIGoreBody_Params
{
};

// Function NewtPawn.NewtPawn_C.WillHearThrownNoise
struct ANewtPawn_C_WillHearThrownNoise_Params
{
	class ABendWeapon_Projectile**                     ThrownWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WillHear;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.ReceiveAnyDamage
struct ANewtPawn_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.OnFocusFadingFinished_Event_1
struct ANewtPawn_C_OnFocusFadingFinished_Event_1_Params
{
};

// Function NewtPawn.NewtPawn_C.OnBeingStealthKilledStart_Event_1
struct ANewtPawn_C_OnBeingStealthKilledStart_Event_1_Params
{
	class ABendPawn*                                   AttackerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.StealthKillCheckForStamina
struct ANewtPawn_C_StealthKillCheckForStamina_Params
{
};

// Function NewtPawn.NewtPawn_C.KillRockHighlightNewtsNow
struct ANewtPawn_C_KillRockHighlightNewtsNow_Params
{
};

// Function NewtPawn.NewtPawn_C.ReceivePossessed
struct ANewtPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.SwarmerAwareOPlayer
struct ANewtPawn_C_SwarmerAwareOPlayer_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewtPawn.NewtPawn_C.ExecuteUbergraph_NewtPawn
struct ANewtPawn_C_ExecuteUbergraph_NewtPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
