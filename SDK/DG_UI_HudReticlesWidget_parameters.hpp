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

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.TurnOffTickInAFrame
struct UUI_HudReticlesWidget_C_TurnOffTickInAFrame_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Should XP Be Shown?
struct UUI_HudReticlesWidget_C_Should_XP_Be_Shown__Params
{
	bool                                               Show_XP_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionCharged
struct UUI_HudReticlesWidget_C_DisplaySlowMotionCharged_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.UpdateSlowMotionMeter
struct UUI_HudReticlesWidget_C_UpdateSlowMotionMeter_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionMeter
struct UUI_HudReticlesWidget_C_DisplaySlowMotionMeter_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HeadshotXPBonusAward
struct UUI_HudReticlesWidget_C_HeadshotXPBonusAward_Params
{
	class UCombatHitCounter_C*                         Widget_Reference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BonusText;                                                // (Parm)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPAward
struct UUI_HudReticlesWidget_C_NewXPAward_Params
{
	class ABendPawn*                                   EnemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Horde;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      EnemyMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCombatHitCounter_C*                         Widget_Reference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPBonusAward
struct UUI_HudReticlesWidget_C_NewXPBonusAward_Params
{
	class ABendPawn*                                   EnemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BonusText;                                                // (Parm)
	int                                                XPValue_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isHorde;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      EnemyMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCombatHitCounter_C*                         Widget_Reference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewHitCounter
struct UUI_HudReticlesWidget_C_NewHitCounter_Params
{
	class ABendPawn*                                   EnemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCombatHitCounter_C*                         Widget_Reference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetInvisible
struct UUI_HudReticlesWidget_C_SetInvisible_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HideHit
struct UUI_HudReticlesWidget_C_HideHit_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetHit
struct UUI_HudReticlesWidget_C_SetHit_Params
{
	bool                                               KillShot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitArmor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.CheckTarget
struct UUI_HudReticlesWidget_C_CheckTarget_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetVisible
struct UUI_HudReticlesWidget_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetScope
struct UUI_HudReticlesWidget_C_SetScope_Params
{
	TEnumAsByte<EHudWeaponWidgetSlot>                  WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Scoping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetFiring
struct UUI_HudReticlesWidget_C_SetFiring_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Init
struct UUI_HudReticlesWidget_C_Init_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ShowReticle
struct UUI_HudReticlesWidget_C_ShowReticle_Params
{
	bool                                               IsAiming;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHudWeaponWidgetSlot>                  WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Construct
struct UUI_HudReticlesWidget_C_Construct_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Tick
struct UUI_HudReticlesWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete_Event
struct UUI_HudReticlesWidget_C_FireComplete_Event_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionActivated
struct UUI_HudReticlesWidget_C_SlowMotionActivated_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionFull
struct UUI_HudReticlesWidget_C_SlowMotionFull_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.EnemyKilled
struct UUI_HudReticlesWidget_C_EnemyKilled_Params
{
	class ABendPawn*                                   VictimPawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeKilled
struct UUI_HudReticlesWidget_C_HordeKilled_Params
{
	class USkeletalMeshComponent*                      VictimMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotSomeone_Event_1
struct UUI_HudReticlesWidget_C_OnPlayerShotSomeone_Event_1_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromForceKill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnBulletDamageFromPlayer_Event_1
struct UUI_HudReticlesWidget_C_OnBulletDamageFromPlayer_Event_1_Params
{
	struct FBendCrowdMemberHandle                      CrowdMemberHandle;                                        // (Parm)
	bool                                               bWasHeadShot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotDamageableObject_Event_1
struct UUI_HudReticlesWidget_C_OnPlayerShotDamageableObject_Event_1_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnSlowMotionDeactivated
struct UUI_HudReticlesWidget_C_OnSlowMotionDeactivated_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeDamageFromPlayer
struct UUI_HudReticlesWidget_C_HordeDamageFromPlayer_Params
{
	struct FBendCrowdMemberHandle                      CrowdMemberHandle;                                        // (Parm)
	bool                                               bWasHeadShot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ExecuteUbergraph_UI_HudReticlesWidget
struct UUI_HudReticlesWidget_C_ExecuteUbergraph_UI_HudReticlesWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete__DelegateSignature
struct UUI_HudReticlesWidget_C_FireComplete__DelegateSignature_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetNull__DelegateSignature
struct UUI_HudReticlesWidget_C_OnTargetNull__DelegateSignature_Params
{
};

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetAcquired__DelegateSignature
struct UUI_HudReticlesWidget_C_OnTargetAcquired__DelegateSignature_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
