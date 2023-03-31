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

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusic2ndTrackComponent
struct ABendDefaultPlayerPawn_C_I_GetPlayerMusic2ndTrackComponent_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusicComponent
struct ABendDefaultPlayerPawn_C_I_GetPlayerMusicComponent_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_SetPlayerTakeFallDamage
struct ABendDefaultPlayerPawn_C_I_SetPlayerTakeFallDamage_Params
{
	bool                                               TakeDamage_;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AttachMeleeIconToPawn
struct ABendDefaultPlayerPawn_C_AttachMeleeIconToPawn_Params
{
	class ABendPawn**                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECoolMeleeType>*                       MeleeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendButtonPressEventBlueprintSupport*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ModifyDamage
struct ABendDefaultPlayerPawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckTutorials
struct ABendDefaultPlayerPawn_C_CheckTutorials_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetSurroundedTutorial
struct ABendDefaultPlayerPawn_C_ResetSurroundedTutorial_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetFocusModeSphere
struct ABendDefaultPlayerPawn_C_GetFocusModeSphere_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetNativeRefs
struct ABendDefaultPlayerPawn_C_SetNativeRefs_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetupMolotovDamageModifier
struct ABendDefaultPlayerPawn_C_SetupMolotovDamageModifier_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleInfestationReward
struct ABendDefaultPlayerPawn_C_HandleInfestationReward_Params
{
	TArray<struct FBendRewardData>                     FactionRewards;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FIGHTTHROUGHTHEPAINDamageModifier
struct ABendDefaultPlayerPawn_C_FIGHTTHROUGHTHEPAINDamageModifier_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HasLOS_ForStealthKill
struct ABendDefaultPlayerPawn_C_HasLOS_ForStealthKill_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Bend_Pawn_Target;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                RemainingIterations;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasLOS;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetWeaponStoppingPower
struct ABendDefaultPlayerPawn_C_GetWeaponStoppingPower_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min_Stopping_Power;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Stopping_Power;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NPCMin_Stopping_Power;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NPCMax_Stopping_Power;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetPlayerFlashlight
struct ABendDefaultPlayerPawn_C_GetPlayerFlashlight_Params
{
	class UBendSpotLightComponent*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayDeacReactHumanDeath
struct ABendDefaultPlayerPawn_C_PlayDeacReactHumanDeath_Params
{
	class ABendPawn*                                   Dead_Pawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckAmmoCounts
struct ABendDefaultPlayerPawn_C_CheckAmmoCounts_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.IsPlayerInCombat
struct ABendDefaultPlayerPawn_C_IsPlayerInCombat_Params
{
	bool                                               InCombat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UserConstructionScript
struct ABendDefaultPlayerPawn_C_UserConstructionScript_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackStarted
struct ABendDefaultPlayerPawn_C_OnCanDoCoolMeleeAttackStarted_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackEnded
struct ABendDefaultPlayerPawn_C_OnCanDoCoolMeleeAttackEnded_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackSuccessful
struct ABendDefaultPlayerPawn_C_OnCoolMeleeAttackSuccessful_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackFailed
struct ABendDefaultPlayerPawn_C_OnCoolMeleeAttackFailed_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnStartCrouch
struct ABendDefaultPlayerPawn_C_K2_OnStartCrouch_Params
{
	float*                                             HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnEndCrouch
struct ABendDefaultPlayerPawn_C_K2_OnEndCrouch_Params
{
	float*                                             HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartSprinting
struct ABendDefaultPlayerPawn_C_OnStartSprinting_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopSprinting
struct ABendDefaultPlayerPawn_C_OnStopSprinting_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateDeathSource
struct ABendDefaultPlayerPawn_C_UpdateDeathSource_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 Damage_Type;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Damage_Causer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitFactionVO
struct ABendDefaultPlayerPawn_C_InitFactionVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.VO_ToggleOnBike_GlobalRegister
struct ABendDefaultPlayerPawn_C_VO_ToggleOnBike_GlobalRegister_Params
{
	bool                                               PlayerOnBike;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedEnteringVehicle_Event_1
struct ABendDefaultPlayerPawn_C_OnRiderStartedEnteringVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedExitingVehicle_Event_1
struct ABendDefaultPlayerPawn_C_OnRiderStartedExitingVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitBikeVO
struct ABendDefaultPlayerPawn_C_InitBikeVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TrustTierChanged
struct ABendDefaultPlayerPawn_C_TrustTierChanged_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            PreviousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayEnemyKilledVO
struct ABendDefaultPlayerPawn_C_PlayEnemyKilledVO_Params
{
	class ABendPawn*                                   VictimPawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitEnemyKilledVO
struct ABendDefaultPlayerPawn_C_InitEnemyKilledVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetEnemyKilledVO
struct ABendDefaultPlayerPawn_C_ResetEnemyKilledVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitExplosiveNearbyVO
struct ABendDefaultPlayerPawn_C_InitExplosiveNearbyVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayExplosiveNearbyVO
struct ABendDefaultPlayerPawn_C_PlayExplosiveNearbyVO_Params
{
	class ABendProjectile*                             Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayTrapNearbyVO
struct ABendDefaultPlayerPawn_C_PlayTrapNearbyVO_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFailedActionBecauseOutOfStamina
struct ABendDefaultPlayerPawn_C_OnFailedActionBecauseOutOfStamina_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceiveBeginPlay
struct ABendDefaultPlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnDied_Event
struct ABendDefaultPlayerPawn_C_OnDied_Event_Params
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

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeBegin_Event_1
struct ABendDefaultPlayerPawn_C_OnPairedDodgeBegin_Event_1_Params
{
	class ABendPawn*                                   Dodger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeEnded_Event_1
struct ABendDefaultPlayerPawn_C_OnPairedDodgeEnded_Event_1_Params
{
	class ABendPawn*                                   Dodger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StabKillSuccess
struct ABendDefaultPlayerPawn_C_StabKillSuccess_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillBegin_Event
struct ABendDefaultPlayerPawn_C_OnBrutalKillBegin_Event_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BrutalKillSuccess_Event
struct ABendDefaultPlayerPawn_C_BrutalKillSuccess_Event_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillEnded_Event
struct ABendDefaultPlayerPawn_C_OnBrutalKillEnded_Event_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSkillAcquired
struct ABendDefaultPlayerPawn_C_OnSkillAcquired_Params
{
	TEnumAsByte<EInventorySkillID>                     SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill*                         SkillItem;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DodgeButtonPressed
struct ABendDefaultPlayerPawn_C_DodgeButtonPressed_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockRushNAttack
struct ABendDefaultPlayerPawn_C_UnlockRushNAttack_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.MakeAdrenalineLonger
struct ABendDefaultPlayerPawn_C_MakeAdrenalineLonger_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockPlayerReversalDirectional
struct ABendDefaultPlayerPawn_C_UnlockPlayerReversalDirectional_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockMakeAmends
struct ABendDefaultPlayerPawn_C_UnlockMakeAmends_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckSixFeetUnder
struct ABendDefaultPlayerPawn_C_CheckSixFeetUnder_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockFullThrottle_Skill
struct ABendDefaultPlayerPawn_C_UnlockFullThrottle_Skill_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryModifiedDelegate_Event_1
struct ABendDefaultPlayerPawn_C_OnInventoryModifiedDelegate_Event_1_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCounterAttackSuccessful
struct ABendDefaultPlayerPawn_C_OnCounterAttackSuccessful_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSurrounded_Event_1
struct ABendDefaultPlayerPawn_C_OnSurrounded_Event_1_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnAimStanceChanged_Event_1
struct ABendDefaultPlayerPawn_C_OnAimStanceChanged_Event_1_Params
{
	TEnumAsByte<EAimStance>                            NewAimStance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAimStance>                            OldAimStance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InventoryModified
struct ABendDefaultPlayerPawn_C_InventoryModified_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindInventoryModified
struct ABendDefaultPlayerPawn_C_UnbindInventoryModified_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BreakGrapple
struct ABendDefaultPlayerPawn_C_BreakGrapple_Params
{
	float                                              defaultCompletionPercent;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateGrappleEscapeVO
struct ABendDefaultPlayerPawn_C_UpdateGrappleEscapeVO_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FailedGrapple
struct ABendDefaultPlayerPawn_C_FailedGrapple_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillInitiatedEvent
struct ABendDefaultPlayerPawn_C_StealthKillInitiatedEvent_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampment
struct ABendDefaultPlayerPawn_C_EnteredEncampment_Params
{
	class UBendEncampmentData**                        Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampment
struct ABendDefaultPlayerPawn_C_LeavingEncampment_Params
{
	class UBendEncampmentData**                        Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateEncampmentDisplay
struct ABendDefaultPlayerPawn_C_UpdateEncampmentDisplay_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.NotifyTrustModified
struct ABendDefaultPlayerPawn_C_NotifyTrustModified_Params
{
	class UBendEncampmentData**                        Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ModificationAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartAiming
struct ABendDefaultPlayerPawn_C_OnStartAiming_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopAiming
struct ABendDefaultPlayerPawn_C_OnStopAiming_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetAim
struct ABendDefaultPlayerPawn_C_ResetAim_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceivePostSaveGameLoaded
struct ABendDefaultPlayerPawn_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnWeaponFired_Event
struct ABendDefaultPlayerPawn_C_OnWeaponFired_Event_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AmmoVOBinds
struct ABendDefaultPlayerPawn_C_AmmoVOBinds_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionBegin_MM_Event_1
struct ABendDefaultPlayerPawn_C_OnMissionBegin_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionComplete_MM_Event_1
struct ABendDefaultPlayerPawn_C_OnMissionComplete_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindMissionCheckEvents
struct ABendDefaultPlayerPawn_C_UnbindMissionCheckEvents_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMeleeCriticalHitSuccessful
struct ABendDefaultPlayerPawn_C_OnMeleeCriticalHitSuccessful_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCollectibleDiscovered
struct ABendDefaultPlayerPawn_C_OnCollectibleDiscovered_Params
{
	TEnumAsByte<EInventoryCollectibleID>*              CollectibleID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnEquipCompleted
struct ABendDefaultPlayerPawn_C_OnEquipCompleted_Params
{
	class ABendWeapon**                                EquippedItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ActivateAutoKills
struct ABendDefaultPlayerPawn_C_ActivateAutoKills_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoActivated_Event_1
struct ABendDefaultPlayerPawn_C_OnSlomoActivated_Event_1_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoDeactivated_Event_1
struct ABendDefaultPlayerPawn_C_OnSlomoDeactivated_Event_1_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CustomEvent_1
struct ABendDefaultPlayerPawn_C_CustomEvent_1_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_WearRadioOnChest
struct ABendDefaultPlayerPawn_C_I_WearRadioOnChest_Params
{
	bool                                               WearRadio;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryConsumableItemUsed
struct ABendDefaultPlayerPawn_C_OnInventoryConsumableItemUsed_Params
{
	class UInventoryItemConsumable**                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayEffect**                            Effect;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle*                GE_Handle;                                                // (Parm)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HealthComplete
struct ABendDefaultPlayerPawn_C_HealthComplete_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StaminaComplete
struct ABendDefaultPlayerPawn_C_StaminaComplete_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FocusComplete
struct ABendDefaultPlayerPawn_C_FocusComplete_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampmentRange
struct ABendDefaultPlayerPawn_C_EnteredEncampmentRange_Params
{
	class UBendEncampmentData**                        Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampmentRange
struct ABendDefaultPlayerPawn_C_LeavingEncampmentRange_Params
{
	class UBendEncampmentData**                        Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CreateStealthKillPrompt
struct ABendDefaultPlayerPawn_C_CreateStealthKillPrompt_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DestroyStealthKillPrompt
struct ABendDefaultPlayerPawn_C_DestroyStealthKillPrompt_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFocusFadingFinished_Event_1
struct ABendDefaultPlayerPawn_C_OnFocusFadingFinished_Event_1_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadFinished
struct ABendDefaultPlayerPawn_C_OnReloadFinished_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadStarted
struct ABendDefaultPlayerPawn_C_OnReloadStarted_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SaveOnEncampmentEnterExit
struct ABendDefaultPlayerPawn_C_SaveOnEncampmentEnterExit_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleSpawningForEncampments
struct ABendDefaultPlayerPawn_C_HandleSpawningForEncampments_Params
{
	bool                                               Entered;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AskToRecoverStuckVehicle
struct ABendDefaultPlayerPawn_C_AskToRecoverStuckVehicle_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleRecoverMessage
struct ABendDefaultPlayerPawn_C_HandleRecoverMessage_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FadeFromBlackStart
struct ABendDefaultPlayerPawn_C_FadeFromBlackStart_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ExecuteUbergraph_BendDefaultPlayerPawn
struct ABendDefaultPlayerPawn_C_ExecuteUbergraph_BendDefaultPlayerPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconCounterSuccess__DelegateSignature
struct ABendDefaultPlayerPawn_C_DeaconCounterSuccess__DelegateSignature_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleFailed__DelegateSignature
struct ABendDefaultPlayerPawn_C_GrappleFailed__DelegateSignature_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_NestClear__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_GS_NestClear__DelegateSignature_Params
{
	struct FString                                     DestroyedNestID;                                          // (Parm, ZeroConstructor)
	class ABendNest*                                   DestroyedNest;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_ExitEncampment__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_GS_ExitEncampment__DelegateSignature_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_EnterEncampment__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_GS_EnterEncampment__DelegateSignature_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_PS_AutoRegen__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_PS_AutoRegen__DelegateSignature_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Infestation__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_GS_Infestation__DelegateSignature_Params
{
	class ABendNestingZoneActor*                       ZoneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Collectible__DelegateSignature
struct ABendDefaultPlayerPawn_C_TelemetryEvent_GS_Collectible__DelegateSignature_Params
{
	TEnumAsByte<EInventoryCollectibleID>               CollectibleID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillBegin__DelegateSignature
struct ABendDefaultPlayerPawn_C_StealthKillBegin__DelegateSignature_Params
{
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleBroken__DelegateSignature
struct ABendDefaultPlayerPawn_C_GrappleBroken__DelegateSignature_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconDiedDispatch__DelegateSignature
struct ABendDefaultPlayerPawn_C_DeaconDiedDispatch__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
