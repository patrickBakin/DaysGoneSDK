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

// Function SwarmerPawn.SwarmerPawn_C.ActivateObjectiveCallout
struct ASwarmerPawn_C_ActivateObjectiveCallout_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.IsCalloutActive
struct ASwarmerPawn_C_IsCalloutActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.GetAwareness
struct ASwarmerPawn_C_GetAwareness_Params
{
	TEnumAsByte<EAIAwareState>                         Awareness;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.ActivateCallout
struct ASwarmerPawn_C_ActivateCallout_Params
{
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CalloutOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.DeactivateCallout
struct ASwarmerPawn_C_DeactivateCallout_Params
{
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.SetCalloutPosition
struct ASwarmerPawn_C_SetCalloutPosition_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.AwareWaitingUpdate
struct ASwarmerPawn_C_AwareWaitingUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.OnFireUpdate
struct ASwarmerPawn_C_OnFireUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.ModifyDamage
struct ASwarmerPawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.ClampGrappleResult
struct ASwarmerPawn_C_ClampGrappleResult_Params
{
	float*                                             InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.EquipClaws
struct ASwarmerPawn_C_EquipClaws_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.PlayLastStateTransitionSound
struct ASwarmerPawn_C_PlayLastStateTransitionSound_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.Semi-AwareUpdate
struct ASwarmerPawn_C_Semi_AwareUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.FrustratedUpdate 
struct ASwarmerPawn_C_FrustratedUpdate__Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.EnragedUpdate
struct ASwarmerPawn_C_EnragedUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.NestingUpdate
struct ASwarmerPawn_C_NestingUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.GrapplingUpdate
struct ASwarmerPawn_C_GrapplingUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.HandleDamage
struct ASwarmerPawn_C_HandleDamage_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.NoneUpdate
struct ASwarmerPawn_C_NoneUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.UpdateCurrentState
struct ASwarmerPawn_C_UpdateCurrentState_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.StateCheckForAudio
struct ASwarmerPawn_C_StateCheckForAudio_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.AwareUpdate
struct ASwarmerPawn_C_AwareUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.LightUpdate
struct ASwarmerPawn_C_LightUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.UnawareUpdate
struct ASwarmerPawn_C_UnawareUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.EatingUpdate
struct ASwarmerPawn_C_EatingUpdate_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.CalculateXPGain
struct ASwarmerPawn_C_CalculateXPGain_Params
{
	int                                                ExperienceAwarded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.UserConstructionScript
struct ASwarmerPawn_C_UserConstructionScript_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.ReceiveBeginPlay
struct ASwarmerPawn_C_ReceiveBeginPlay_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.ReceivePointDamage
struct ASwarmerPawn_C_ReceivePointDamage_Params
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

// Function SwarmerPawn.SwarmerPawn_C.OnDied_Event
struct ASwarmerPawn_C_OnDied_Event_Params
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

// Function SwarmerPawn.SwarmerPawn_C.Fire Damage Anims
struct ASwarmerPawn_C_Fire_Damage_Anims_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.AnimComplete
struct ASwarmerPawn_C_AnimComplete_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.AnimFailed
struct ASwarmerPawn_C_AnimFailed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.OnHeadBlownOff
struct ASwarmerPawn_C_OnHeadBlownOff_Params
{
	class USkeletalMeshComponent**                     pLimbMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor**                         pSeveredLimb;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.SearchedBody
struct ASwarmerPawn_C_SearchedBody_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.SpawnActorPOIGoreBody
struct ASwarmerPawn_C_SpawnActorPOIGoreBody_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.WillHearThrownNoise
struct ASwarmerPawn_C_WillHearThrownNoise_Params
{
	class ABendWeapon_Projectile**                     ThrownWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WillHear;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.ReceiveAnyDamage
struct ASwarmerPawn_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.OnFocusFadingFinished_Event_1
struct ASwarmerPawn_C_OnFocusFadingFinished_Event_1_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.CatchAnimNotifyMessage
struct ASwarmerPawn_C_CatchAnimNotifyMessage_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotify;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.OnBeingStealthKilledStart_Event_1
struct ASwarmerPawn_C_OnBeingStealthKilledStart_Event_1_Params
{
	class ABendPawn*                                   AttackerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.StealthKillCheckForStamina
struct ASwarmerPawn_C_StealthKillCheckForStamina_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.ReceivePossessed
struct ASwarmerPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.SwarmerAwareOPlayer
struct ASwarmerPawn_C_SwarmerAwareOPlayer_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwarmerPawn.SwarmerPawn_C.KillRockHighlightSwarmersNow
struct ASwarmerPawn_C_KillRockHighlightSwarmersNow_Params
{
};

// Function SwarmerPawn.SwarmerPawn_C.ExecuteUbergraph_SwarmerPawn
struct ASwarmerPawn_C_ExecuteUbergraph_SwarmerPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
