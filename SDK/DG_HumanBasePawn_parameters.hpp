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

// Function HumanBasePawn.HumanBasePawn_C.UpdateCallout
struct AHumanBasePawn_C_UpdateCallout_Params
{
	bool                                               OffScreen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.SetVolumetricMaterial
struct AHumanBasePawn_C_SetVolumetricMaterial_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.GetNumberOfDroppedItems
struct AHumanBasePawn_C_GetNumberOfDroppedItems_Params
{
	int                                                Num_Items_Dropped;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.GetLootAnimations
struct AHumanBasePawn_C_GetLootAnimations_Params
{
	class UAnimSequenceBase*                           Search_Animation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Crouched_Search_Animation;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.ClampGrappleResult
struct AHumanBasePawn_C_ClampGrappleResult_Params
{
	float*                                             InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.ModifyDamage
struct AHumanBasePawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.SetCalloutPosition
struct AHumanBasePawn_C_SetCalloutPosition_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.DisableFireAnims
struct AHumanBasePawn_C_DisableFireAnims_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.IsPawnInCombat
struct AHumanBasePawn_C_IsPawnInCombat_Params
{
	bool                                               InCombat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.TriggerUpperBodyHitReaction
struct AHumanBasePawn_C_TriggerUpperBodyHitReaction_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.TriggerFullBodyHitReaction
struct AHumanBasePawn_C_TriggerFullBodyHitReaction_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.HandleDamage
struct AHumanBasePawn_C_HandleDamage_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.CalculateIfCriticalHit
struct AHumanBasePawn_C_CalculateIfCriticalHit_Params
{
	struct FName                                       Bone_Name;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 Damage_Type;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.CalculateXPGain
struct AHumanBasePawn_C_CalculateXPGain_Params
{
	int                                                ExperienceEarned;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.UserConstructionScript
struct AHumanBasePawn_C_UserConstructionScript_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.VO_LowHealth
struct AHumanBasePawn_C_VO_LowHealth_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.VO_DeaconDiedNearby
struct AHumanBasePawn_C_VO_DeaconDiedNearby_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.VO_DeathEvent
struct AHumanBasePawn_C_VO_DeathEvent_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 Damage_Type;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Damage_Causer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.WeatherVOCDExpired
struct AHumanBasePawn_C_WeatherVOCDExpired_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.VO_Weather
struct AHumanBasePawn_C_VO_Weather_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.OnPlayerPawnDied
struct AHumanBasePawn_C_OnPlayerPawnDied_Params
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

// Function HumanBasePawn.HumanBasePawn_C.ReceiveBeginPlay
struct AHumanBasePawn_C_ReceiveBeginPlay_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.OnDied_Event
struct AHumanBasePawn_C_OnDied_Event_Params
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

// Function HumanBasePawn.HumanBasePawn_C.CalculateCriticalHit
struct AHumanBasePawn_C_CalculateCriticalHit_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABendProjectile**                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.ReceivePointDamage
struct AHumanBasePawn_C_ReceivePointDamage_Params
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

// Function HumanBasePawn.HumanBasePawn_C.OnGrappledBegin_Event_1
struct AHumanBasePawn_C_OnGrappledBegin_Event_1_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipButtonEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.Fire Damage Anims
struct AHumanBasePawn_C_Fire_Damage_Anims_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.ReceiveEndPlay
struct AHumanBasePawn_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.OnExitStunState
struct AHumanBasePawn_C_OnExitStunState_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.OnPickup_Event_1
struct AHumanBasePawn_C_OnPickup_Event_1_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.StartTimeDilation
struct AHumanBasePawn_C_StartTimeDilation_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.DialtionStep
struct AHumanBasePawn_C_DialtionStep_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.StopTimer
struct AHumanBasePawn_C_StopTimer_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.SpawnActorPOIGoreBody
struct AHumanBasePawn_C_SpawnActorPOIGoreBody_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.WillHearThrownNoise
struct AHumanBasePawn_C_WillHearThrownNoise_Params
{
	class ABendWeapon_Projectile**                     ThrownWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WillHear;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.HeavyWeaponCheck
struct AHumanBasePawn_C_HeavyWeaponCheck_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.ReceiveAnyDamage
struct AHumanBasePawn_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.ReceivePossessed
struct AHumanBasePawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.TrophyCount
struct AHumanBasePawn_C_TrophyCount_Params
{
	struct FGameplayTag                                TrophyTagName;                                            // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.Event_OnAngleChanged
struct AHumanBasePawn_C_Event_OnAngleChanged_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.Event_OnOffScreenChanged
struct AHumanBasePawn_C_Event_OnOffScreenChanged_Params
{
	bool                                               OffScreen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.OnFocusFadingFinished_Event_1
struct AHumanBasePawn_C_OnFocusFadingFinished_Event_1_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.SpawnActorSearchBody
struct AHumanBasePawn_C_SpawnActorSearchBody_Params
{
	int*                                               NumItemSpawns;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.CatchAnimNotifyMessage
struct AHumanBasePawn_C_CatchAnimNotifyMessage_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotify;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.OnBeingStealthKilledStart_Event_1
struct AHumanBasePawn_C_OnBeingStealthKilledStart_Event_1_Params
{
	class ABendPawn*                                   AttackerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.StealthKillCheckForStamina
struct AHumanBasePawn_C_StealthKillCheckForStamina_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.DudeAwareOPlayer
struct AHumanBasePawn_C_DudeAwareOPlayer_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanBasePawn.HumanBasePawn_C.KillRockHighlightHumansNow
struct AHumanBasePawn_C_KillRockHighlightHumansNow_Params
{
};

// Function HumanBasePawn.HumanBasePawn_C.ExecuteUbergraph_HumanBasePawn
struct AHumanBasePawn_C_ExecuteUbergraph_HumanBasePawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
