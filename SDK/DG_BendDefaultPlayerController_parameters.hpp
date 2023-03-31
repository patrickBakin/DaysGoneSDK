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

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetCanRideVehicles
struct ABendDefaultPlayerController_C_I_SetCanRideVehicles_Params
{
	bool                                               CanRide;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_GetCanRideVehicle
struct ABendDefaultPlayerController_C_I_GetCanRideVehicle_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerAimVariables
struct ABendDefaultPlayerController_C_I_SetPlayerAimVariables_Params
{
	bool                                               Scoped;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimRightSide;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerinCinematicMode
struct ABendDefaultPlayerController_C_I_SetPlayerinCinematicMode_Params
{
	bool                                               ON_;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CanKillGrappler
struct ABendDefaultPlayerController_C_CanKillGrappler_Params
{
	bool                                               CanKill;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AutoCompleteGrappleEvent
struct ABendDefaultPlayerController_C_AutoCompleteGrappleEvent_Params
{
	bool                                               AutoComplete;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleAiming
struct ABendDefaultPlayerController_C_ToggleAiming_Params
{
	bool                                               Toggle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleSurvivalWheel
struct ABendDefaultPlayerController_C_ToggleSurvivalWheel_Params
{
	bool                                               Toggle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AddOnDeathContextualTips
struct ABendDefaultPlayerController_C_AddOnDeathContextualTips_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HeldExitTheVehicle
struct ABendDefaultPlayerController_C_HeldExitTheVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayQuickhealSound
struct ABendDefaultPlayerController_C_PlayQuickhealSound_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReacts
struct ABendDefaultPlayerController_C_AmbushHitReacts_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreaseAmmoCap
struct ABendDefaultPlayerController_C_IncreaseAmmoCap_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetPlayerOnBikeTags
struct ABendDefaultPlayerController_C_SetPlayerOnBikeTags_Params
{
	bool                                               IsInVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ConfigureFocusModeDistance
struct ABendDefaultPlayerController_C_ConfigureFocusModeDistance_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForFocusEfficiencySkill
struct ABendDefaultPlayerController_C_SetFocusForFocusEfficiencySkill_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForJudgeJurySkill
struct ABendDefaultPlayerController_C_SetFocusForJudgeJurySkill_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.NeedCounter
struct ABendDefaultPlayerController_C_NeedCounter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheelAction
struct ABendDefaultPlayerController_C_CloseWeaponWheelAction_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OpenWeaponWheelAction
struct ABendDefaultPlayerController_C_OpenWeaponWheelAction_Params
{
	bool                                               FromBike;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HandleAcquiredSkills
struct ABendDefaultPlayerController_C_HandleAcquiredSkills_Params
{
	TEnumAsByte<EInventorySkillID>                     Acquired_Skill_ID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkillAcquire_Weak-HandReloading
struct ABendDefaultPlayerController_C_SkillAcquire_Weak_HandReloading_Params
{
	bool                                               Skip_Has_Acquired_Check;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreasePlayerAmmoCapacity
struct ABendDefaultPlayerController_C_IncreasePlayerAmmoCapacity_Params
{
	bool                                               UpgradeAllAmmoTypes;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeTier_1_4;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FillAmmo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset4
struct ABendDefaultPlayerController_C_SetBikePartPreset4_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset3
struct ABendDefaultPlayerController_C_SetBikePartPreset3_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset2
struct ABendDefaultPlayerController_C_SetBikePartPreset2_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset1
struct ABendDefaultPlayerController_C_SetBikePartPreset1_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckFlashback
struct ABendDefaultPlayerController_C_CheckFlashback_Params
{
	bool                                               IsInFlashback;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameNotification
struct ABendDefaultPlayerController_C_DisplaySaveGameNotification_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PrintPlayerPosForScreenshot
struct ABendDefaultPlayerController_C_PrintPlayerPosForScreenshot_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SimplifyVectorForPrint
struct ABendDefaultPlayerController_C_SimplifyVectorForPrint_Params
{
	struct FVector                                     InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Return;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerPawnTakeScreenshot
struct ABendDefaultPlayerController_C_PlayerPawnTakeScreenshot_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MarkEnemiesInBinoculars
struct ABendDefaultPlayerController_C_MarkEnemiesInBinoculars_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CreateGrappleButtonEvent
struct ABendDefaultPlayerController_C_CreateGrappleButtonEvent_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RestoreButtonEventForNextGrapple
struct ABendDefaultPlayerController_C_RestoreButtonEventForNextGrapple_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkipButtonEventForNextGrapple
struct ABendDefaultPlayerController_C_SkipButtonEventForNextGrapple_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ChooseDeathCam
struct ABendDefaultPlayerController_C_ChooseDeathCam_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 Damaged_By;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Killers_actor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killers_Controller;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetDeathCam
struct ABendDefaultPlayerController_C_SetDeathCam_Params
{
	bool                                               Turn_On_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateStatSoundEffects
struct ABendDefaultPlayerController_C_UpdateStatSoundEffects_Params
{
	int                                                StatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendAttribute*                              Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStatSoundEffects
struct ABendDefaultPlayerController_C_InitStatSoundEffects_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UnForceCrouch
struct ABendDefaultPlayerController_C_UnForceCrouch_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceCrouch
struct ABendDefaultPlayerController_C_ForceCrouch_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayDebugCameraText
struct ABendDefaultPlayerController_C_DisplayDebugCameraText_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleZenMode
struct ABendDefaultPlayerController_C_ToggleZenMode_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStats
struct ABendDefaultPlayerController_C_InitStats_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UserConstructionScript
struct ABendDefaultPlayerController_C_UserConstructionScript_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__FinishedFunc
struct ABendDefaultPlayerController_C_FocusPost_Timeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__UpdateFunc
struct ABendDefaultPlayerController_C_FocusPost_Timeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__FinishedFunc
struct ABendDefaultPlayerController_C_FocusModeOut__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__UpdateFunc
struct ABendDefaultPlayerController_C_FocusModeOut__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__FinishedFunc
struct ABendDefaultPlayerController_C_Timeline_0__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__UpdateFunc
struct ABendDefaultPlayerController_C_Timeline_0__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__FinishedFunc
struct ABendDefaultPlayerController_C_Timeline_1__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__UpdateFunc
struct ABendDefaultPlayerController_C_Timeline_1__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__FinishedFunc
struct ABendDefaultPlayerController_C_GrappleOverlayBlendingTimeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__UpdateFunc
struct ABendDefaultPlayerController_C_GrappleOverlayBlendingTimeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__FinishedFunc
struct ABendDefaultPlayerController_C_Timeline_3__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__UpdateFunc
struct ABendDefaultPlayerController_C_Timeline_3__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__FinishedFunc
struct ABendDefaultPlayerController_C_FocusFadeOut__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__UpdateFunc
struct ABendDefaultPlayerController_C_FocusFadeOut__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__FinishedFunc
struct ABendDefaultPlayerController_C_Timeline_Death__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__UpdateFunc
struct ABendDefaultPlayerController_C_Timeline_Death__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__FinishedFunc
struct ABendDefaultPlayerController_C_OnDied_Timeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__UpdateFunc
struct ABendDefaultPlayerController_C_OnDied_Timeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__FinishedFunc
struct ABendDefaultPlayerController_C_OnDamage_TImeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__UpdateFunc
struct ABendDefaultPlayerController_C_OnDamage_TImeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__FinishedFunc
struct ABendDefaultPlayerController_C_OnEnemySemiAware_Timeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__UpdateFunc
struct ABendDefaultPlayerController_C_OnEnemySemiAware_Timeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__FinishedFunc
struct ABendDefaultPlayerController_C_OnEnemyAware_Timeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__UpdateFunc
struct ABendDefaultPlayerController_C_OnEnemyAware_Timeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__FinishedFunc
struct ABendDefaultPlayerController_C_OnHide_Timeline__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__UpdateFunc
struct ABendDefaultPlayerController_C_OnHide_Timeline__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__FinishedFunc
struct ABendDefaultPlayerController_C_Timeline_2__FinishedFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__UpdateFunc
struct ABendDefaultPlayerController_C_Timeline_2__UpdateFunc_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121
struct ABendDefaultPlayerController_C_InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_120
struct ABendDefaultPlayerController_C_InpActEvt_SprintAction_UniqueObjectNameForCooking_120_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_119
struct ABendDefaultPlayerController_C_InpActEvt_SprintAction_UniqueObjectNameForCooking_119_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_118
struct ABendDefaultPlayerController_C_InpActEvt_LightToggle_UniqueObjectNameForCooking_118_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_117
struct ABendDefaultPlayerController_C_InpActEvt_LightToggle_UniqueObjectNameForCooking_117_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Reload_UniqueObjectNameForCooking_115
struct ABendDefaultPlayerController_C_InpActEvt_Reload_UniqueObjectNameForCooking_115_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114
struct ABendDefaultPlayerController_C_InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113
struct ABendDefaultPlayerController_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112
struct ABendDefaultPlayerController_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_111
struct ABendDefaultPlayerController_C_InpActEvt_WeaponFire_UniqueObjectNameForCooking_111_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_110
struct ABendDefaultPlayerController_C_InpActEvt_WeaponFire_UniqueObjectNameForCooking_110_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109
struct ABendDefaultPlayerController_C_InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108
struct ABendDefaultPlayerController_C_InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107
struct ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106
struct ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105
struct ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104
struct ABendDefaultPlayerController_C_InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103
struct ABendDefaultPlayerController_C_InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102
struct ABendDefaultPlayerController_C_InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101
struct ABendDefaultPlayerController_C_InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_100
struct ABendDefaultPlayerController_C_InpActEvt_Crouch_UniqueObjectNameForCooking_100_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_99
struct ABendDefaultPlayerController_C_InpActEvt_Crouch_UniqueObjectNameForCooking_99_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98
struct ABendDefaultPlayerController_C_InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97
struct ABendDefaultPlayerController_C_InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Climb_UniqueObjectNameForCooking_96
struct ABendDefaultPlayerController_C_InpActEvt_Player_Climb_UniqueObjectNameForCooking_96_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Roll_UniqueObjectNameForCooking_95
struct ABendDefaultPlayerController_C_InpActEvt_Player_Roll_UniqueObjectNameForCooking_95_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91
struct ABendDefaultPlayerController_C_InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90
struct ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89
struct ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88
struct ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87
struct ABendDefaultPlayerController_C_InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86
struct ABendDefaultPlayerController_C_InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85
struct ABendDefaultPlayerController_C_InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84
struct ABendDefaultPlayerController_C_InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Interact3_UniqueObjectNameForCooking_83
struct ABendDefaultPlayerController_C_InpActEvt_Interact3_UniqueObjectNameForCooking_83_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78
struct ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77
struct ABendDefaultPlayerController_C_InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Hyphen_UniqueObjectNameForCooking_68
struct ABendDefaultPlayerController_C_InpActEvt_Hyphen_UniqueObjectNameForCooking_68_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Zero_UniqueObjectNameForCooking_67
struct ABendDefaultPlayerController_C_InpActEvt_Zero_UniqueObjectNameForCooking_67_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76
struct ABendDefaultPlayerController_C_InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75
struct ABendDefaultPlayerController_C_InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66
struct ABendDefaultPlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_InRangeOfVehicle
struct ABendDefaultPlayerController_C_I_InRangeOfVehicle_Params
{
	bool                                               InRange_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                VehicleRef;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DebugFreezeTimeScale
struct ABendDefaultPlayerController_C_DebugFreezeTimeScale_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnBeginSwimming
struct ABendDefaultPlayerController_C_CustomEvent_OnBeginSwimming_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnEndSwimming
struct ABendDefaultPlayerController_C_CustomEvent_OnEndSwimming_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DieFromWater
struct ABendDefaultPlayerController_C_DieFromWater_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_BeginSwimming
struct ABendDefaultPlayerController_C_CODE_BeginSwimming_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_EndSwimming
struct ABendDefaultPlayerController_C_CODE_EndSwimming_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeEnabled
struct ABendDefaultPlayerController_C_OnPhotoModeEnabled_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeDisabled
struct ABendDefaultPlayerController_C_OnPhotoModeDisabled_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TriggerOutOfBreath
struct ABendDefaultPlayerController_C_TriggerOutOfBreath_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateOutOfBreath
struct ABendDefaultPlayerController_C_UpdateOutOfBreath_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModePostProcessHandling
struct ABendDefaultPlayerController_C_FocusModePostProcessHandling_Params
{
	bool                                               Turn_On_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetBikeAim
struct ABendDefaultPlayerController_C_ResetBikeAim_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallCrouch
struct ABendDefaultPlayerController_C_CallCrouch_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SwitchAimSides
struct ABendDefaultPlayerController_C_SwitchAimSides_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetInteractableForBike
struct ABendDefaultPlayerController_C_I_SetInteractableForBike_Params
{
	bool                                               Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnPlayerFlashlightOnOff
struct ABendDefaultPlayerController_C_TurnPlayerFlashlightOnOff_Params
{
	bool*                                              TurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetWWBikeAim
struct ABendDefaultPlayerController_C_ResetWWBikeAim_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisableWeaponWheelPost
struct ABendDefaultPlayerController_C_DisableWeaponWheelPost_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnableWeaponWheelPost
struct ABendDefaultPlayerController_C_EnableWeaponWheelPost_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PerformDodge
struct ABendDefaultPlayerController_C_PerformDodge_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Dodge Buffered Input Expired_Copy_Copy
struct ABendDefaultPlayerController_C_Dodge_Buffered_Input_Expired_Copy_Copy_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateFocusMode_NEW
struct ABendDefaultPlayerController_C_DeactivateFocusMode_NEW_Params
{
	bool*                                              PlayExitSound;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheel_Blueprint
struct ABendDefaultPlayerController_C_CloseWeaponWheel_Blueprint_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Melee
struct ABendDefaultPlayerController_C_Melee_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TryAutoTraversal
struct ABendDefaultPlayerController_C_TryAutoTraversal_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateAdrenalineMode
struct ABendDefaultPlayerController_C_DeactivateAdrenalineMode_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateAdrenalineMode
struct ABendDefaultPlayerController_C_ActivateAdrenalineMode_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetAdrenalineMode
struct ABendDefaultPlayerController_C_ResetAdrenalineMode_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DrawThrownWeaponCheck
struct ABendDefaultPlayerController_C_DrawThrownWeaponCheck_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateGrappleOverlayEffect
struct ABendDefaultPlayerController_C_ActivateGrappleOverlayEffect_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateGrappleOverlayEffect
struct ABendDefaultPlayerController_C_DeactivateGrappleOverlayEffect_Params
{
	bool*                                              Instant;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetFire
struct ABendDefaultPlayerController_C_ResetFire_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayWeaponReturnedToLocker
struct ABendDefaultPlayerController_C_DisplayWeaponReturnedToLocker_Params
{
	struct FGameplayTag*                               WeaponTag;                                                // (Parm)
	int*                                               AmmoReturned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactTick
struct ABendDefaultPlayerController_C_AmbushHitReactTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactEnd
struct ABendDefaultPlayerController_C_AmbushHitReactEnd_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactBegin
struct ABendDefaultPlayerController_C_AmbushHitReactBegin_Params
{
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDeactivatedSurvivalVision
struct ABendDefaultPlayerController_C_OnDeactivatedSurvivalVision_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactForceStop
struct ABendDefaultPlayerController_C_AmbushHitReactForceStop_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnOnRockThrowPostProcess
struct ABendDefaultPlayerController_C_TurnOnRockThrowPostProcess_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MeleeCamFollow
struct ABendDefaultPlayerController_C_MeleeCamFollow_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnActivatedSurvivalVision
struct ABendDefaultPlayerController_C_OnActivatedSurvivalVision_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeTimerUp
struct ABendDefaultPlayerController_C_FocusModeTimerUp_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SurvivalVisionDisablePostProcessAndStartTimer
struct ABendDefaultPlayerController_C_SurvivalVisionDisablePostProcessAndStartTimer_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelPressed
struct ABendDefaultPlayerController_C_OnSurvivalWheelPressed_Params
{
	bool*                                              bFromBike;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelReleased
struct ABendDefaultPlayerController_C_OnSurvivalWheelReleased_Params
{
	bool*                                              bFromBike;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateAfterImagesCount
struct ABendDefaultPlayerController_C_UpdateAfterImagesCount_Params
{
	int*                                               Added;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceUpdateSurvivalVisionHighlight
struct ABendDefaultPlayerController_C_ForceUpdateSurvivalVisionHighlight_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.NoBoostTutorialCheck
struct ABendDefaultPlayerController_C_NoBoostTutorialCheck_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnTutorialBoostInputPressed
struct ABendDefaultPlayerController_C_OnTutorialBoostInputPressed_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckSprintSlide
struct ABendDefaultPlayerController_C_CheckSprintSlide_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38
struct ABendDefaultPlayerController_C_InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleWeaponWheel
struct ABendDefaultPlayerController_C_ToggleWeaponWheel_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48
struct ABendDefaultPlayerController_C_InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnDespawnBikeDamageCam
struct ABendDefaultPlayerController_C_SpawnDespawnBikeDamageCam_Params
{
	bool                                               Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HideGrappleIcon
struct ABendDefaultPlayerController_C_HideGrappleIcon_Params
{
	class AGrappleButtonPressEvent_C*                  GrappleIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RetryGrappleHide
struct ABendDefaultPlayerController_C_RetryGrappleHide_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDie
struct ABendDefaultPlayerController_C_OnPawnDie_Params
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

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerRespawned
struct ABendDefaultPlayerController_C_OnPlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveBeginPlay
struct ABendDefaultPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Stamina
struct ABendDefaultPlayerController_C_AttributeChangedDelegate_Stamina_Params
{
	class UBendAttribute*                              Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledBegin_Event
struct ABendDefaultPlayerController_C_OnGrappledBegin_Event_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipButtonEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleButtonPressEventSuccess
struct ABendDefaultPlayerController_C_GrappleButtonPressEventSuccess_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReBindOnGrappleBegin
struct ABendDefaultPlayerController_C_ReBindOnGrappleBegin_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillBegin
struct ABendDefaultPlayerController_C_OnStabKillBegin_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillEnded
struct ABendDefaultPlayerController_C_OnStabKillEnded_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.StabKillSuccess
struct ABendDefaultPlayerController_C_StabKillSuccess_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnOnTakeAnyDamage_Event
struct ABendDefaultPlayerController_C_PawnOnTakeAnyDamage_Event_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnDiedSignature__DelegateSignature_Event
struct ABendDefaultPlayerController_C_PawnDiedSignature__DelegateSignature_Event_Params
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

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CauseGrappleFail
struct ABendDefaultPlayerController_C_CauseGrappleFail_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ButtonEventFailure_Event_1
struct ABendDefaultPlayerController_C_ButtonEventFailure_Event_1_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnNewGrappler_Event_1
struct ABendDefaultPlayerController_C_OnNewGrappler_Event_1_Params
{
	class ABendPawn*                                   NewGrappler;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GrapplerCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRiderStartedExitingVehicle_Event_1
struct ABendDefaultPlayerController_C_OnRiderStartedExitingVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveSetNegateDamage
struct ABendDefaultPlayerController_C_ReceiveSetNegateDamage_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHidingStateChanged_Event_0_Copy
struct ABendDefaultPlayerController_C_OnHidingStateChanged_Event_0_Copy_Params
{
	bool                                               IsHiding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnclosedSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDetectedPlayer_Event_1
struct ABendDefaultPlayerController_C_OnPawnDetectedPlayer_Event_1_Params
{
	class ABendPawn*                                   DetectingPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AwarenessLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUI
struct ABendDefaultPlayerController_C_DisplaySaveGameUI_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSkillAcquired
struct ABendDefaultPlayerController_C_OnSkillAcquired_Params
{
	TEnumAsByte<EInventorySkillID>                     SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill*                         SkillItem;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePostSaveGameLoaded
struct ABendDefaultPlayerController_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledEnded_Event_1
struct ABendDefaultPlayerController_C_OnGrappledEnded_Event_1_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Focus
struct ABendDefaultPlayerController_C_AttributeChangedDelegate_Focus_Params
{
	class UBendAttribute*                              Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverCollectibleDelegate_Event_1
struct ABendDefaultPlayerController_C_OnPlayerDiscoverCollectibleDelegate_Event_1_Params
{
	class UInventoryItemCollectible*                   Collectible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverRecipeDelegate_Event_1
struct ABendDefaultPlayerController_C_OnPlayerDiscoverRecipeDelegate_Event_1_Params
{
	class UInventoryItemRecipe*                        Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRecipeCraftable
struct ABendDefaultPlayerController_C_OnRecipeCraftable_Params
{
	class UInventoryItemRecipe*                        Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnAttributeChanged_Event_1
struct ABendDefaultPlayerController_C_OnAttributeChanged_Event_1_Params
{
	class UBendAttribute*                              Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadStarted_Event_1
struct ABendDefaultPlayerController_C_OnPlayerReloadStarted_Event_1_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Inventory_UsedForNode
struct ABendDefaultPlayerController_C_Inventory_UsedForNode_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadFinished
struct ABendDefaultPlayerController_C_OnPlayerReloadFinished_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePreSaveGameLoaded
struct ABendDefaultPlayerController_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUIOnCheckpoint
struct ABendDefaultPlayerController_C_DisplaySaveGameUIOnCheckpoint_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EscalationStarted
struct ABendDefaultPlayerController_C_EscalationStarted_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeConflictEventType>                   ConflictEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderApproachedEvent
struct ABendDefaultPlayerController_C_LadderApproachedEvent_Params
{
	bool                                               IsTopLadder;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeaconEnteredLadder
struct ABendDefaultPlayerController_C_DeaconEnteredLadder_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartingTopRung;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderTutorialClosed
struct ABendDefaultPlayerController_C_LadderTutorialClosed_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeStarted
struct ABendDefaultPlayerController_C_CallPhotoModeStarted_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeEnded
struct ABendDefaultPlayerController_C_CallPhotoModeEnded_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RecipeTutorial
struct ABendDefaultPlayerController_C_RecipeTutorial_Params
{
	struct FName                                       TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnSet
struct ABendDefaultPlayerController_C_OnPawnSet_Params
{
	class APawn**                                      InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnteredRegion
struct ABendDefaultPlayerController_C_EnteredRegion_Params
{
	TEnumAsByte<ERegions>*                             Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDied
struct ABendDefaultPlayerController_C_LightBar_OnDied_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDamage
struct ABendDefaultPlayerController_C_LightBar_OnDamage_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnHide
struct ABendDefaultPlayerController_C_LightBar_OnHide_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemySemiAware
struct ABendDefaultPlayerController_C_LightBar_EnemySemiAware_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyAware
struct ABendDefaultPlayerController_C_LightBar_EnemyAware_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyUnaware
struct ABendDefaultPlayerController_C_LightBar_EnemyUnaware_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.StopAllLightBar
struct ABendDefaultPlayerController_C_StopAllLightBar_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveEndPlay
struct ABendDefaultPlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GivePlayerKillEXP
struct ABendDefaultPlayerController_C_GivePlayerKillEXP_Params
{
	int*                                               Experience;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ShouldSkipButtonEventForNextGrapple
struct ABendDefaultPlayerController_C_ShouldSkipButtonEventForNextGrapple_Params
{
	bool*                                              Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerHidingUpdate
struct ABendDefaultPlayerController_C_PlayerHidingUpdate_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseRangeEnemyHeadLook
struct ABendDefaultPlayerController_C_CloseRangeEnemyHeadLook_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnWeaponFromMenu
struct ABendDefaultPlayerController_C_SpawnWeaponFromMenu_Params
{
	TEnumAsByte<EInventoryWeaponID>*                   WeaponIDToAdd;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    CallingMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isWeaponMerchant;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ExecuteUbergraph_BendDefaultPlayerController
struct ABendDefaultPlayerController_C_ExecuteUbergraph_BendDefaultPlayerController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MoveForwardPhotoMode__DelegateSignature
struct ABendDefaultPlayerController_C_MoveForwardPhotoMode__DelegateSignature_Params
{
	float                                              Axis_Value;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_EnemyTagged__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_EnemyTagged__DelegateSignature_Params
{
	class UBendCalloutWidgetComponent*                 PawnTagged;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchEnd__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_CrouchEnd__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchBegin__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_CrouchBegin__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintEnd__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_SprintEnd__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintBegin__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_SprintBegin__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_OpenMenu__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_OpenMenu__DelegateSignature_Params
{
	TEnumAsByte<EWidgetMenuClass>                      Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenExit__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_ZenExit__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenEnter__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_ZenEnter__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideEnd__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_BushHideEnd__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideBegin__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_BushHideBegin__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusEnd__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_FocusEnd__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusBegin__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_FocusBegin__DelegateSignature_Params
{
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_GS_EnterRegion__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_GS_EnterRegion__DelegateSignature_Params
{
	TEnumAsByte<ERegions>                              Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_LevelUp__DelegateSignature
struct ABendDefaultPlayerController_C_TelemetryEvent_PS_LevelUp__DelegateSignature_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
