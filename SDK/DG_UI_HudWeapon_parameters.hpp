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

// Function UI_HudWeapon.UI_HudWeapon_C.GetEquippedWeapon
struct UUI_HudWeapon_C_GetEquippedWeapon_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetQuickUseMedkitProgress
struct UUI_HudWeapon_C_SetQuickUseMedkitProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateDropWeaponListener
struct UUI_HudWeapon_C_UpdateDropWeaponListener_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.HandleInputState
struct UUI_HudWeapon_C_HandleInputState_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.SurvivalModeSurvivalVision
struct UUI_HudWeapon_C_SurvivalModeSurvivalVision_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRing
struct UUI_HudWeapon_C_DeactivateRing_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function UI_HudWeapon.UI_HudWeapon_C.ActivateRing
struct UUI_HudWeapon_C_ActivateRing_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateSuppliesValues
struct UUI_HudWeapon_C_UpdateSuppliesValues_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.Update Survival Mode Visibility
struct UUI_HudWeapon_C_Update_Survival_Mode_Visibility_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponStats
struct UUI_HudWeapon_C_DisplayWeaponStats_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateQuickSavePrompt
struct UUI_HudWeapon_C_UpdateQuickSavePrompt_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayQuicksavePrompt
struct UUI_HudWeapon_C_DisplayQuicksavePrompt_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayLadderPrompt
struct UUI_HudWeapon_C_DisplayLadderPrompt_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateBikeExitUI
struct UUI_HudWeapon_C_UpdateBikeExitUI_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayBikeExitUI
struct UUI_HudWeapon_C_DisplayBikeExitUI_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateInlineSkipProgress
struct UUI_HudWeapon_C_UpdateInlineSkipProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayInlineSkipButton
struct UUI_HudWeapon_C_DisplayInlineSkipButton_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DetonateAttemptResult
struct UUI_HudWeapon_C_DetonateAttemptResult_Params
{
	TEnumAsByte<EDetonateAttemptResultType>            Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateShouldShowHealingCircle
struct UUI_HudWeapon_C_UpdateShouldShowHealingCircle_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.CheckWeaponUpgrades
struct UUI_HudWeapon_C_CheckWeaponUpgrades_Params
{
	class ABendWeapon*                                 BendWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuffs
struct UUI_HudWeapon_C_DeactivateBuffs_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.DPadTimerUpdate
struct UUI_HudWeapon_C_DPadTimerUpdate_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.ConsumableButtonHold
struct UUI_HudWeapon_C_ConsumableButtonHold_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Released;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DPadInputPressed
struct UUI_HudWeapon_C_DPadInputPressed_Params
{
	struct FVector2D                                   KeyViaVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetAmmoMeter
struct UUI_HudWeapon_C_SetAmmoMeter_Params
{
	int                                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetUnderArmorUILength
struct UUI_HudWeapon_C_SetUnderArmorUILength_Params
{
	int                                                BarLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayAdrenaline
struct UUI_HudWeapon_C_DisplayAdrenaline_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetScrap
struct UUI_HudWeapon_C_SetScrap_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.AddAmmo
struct UUI_HudWeapon_C_AddAmmo_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      AmmoID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayDPadPanel
struct UUI_HudWeapon_C_DisplayDPadPanel_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetBinoculars
struct UUI_HudWeapon_C_SetBinoculars_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetFlashlight
struct UUI_HudWeapon_C_SetFlashlight_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetMedkitCount
struct UUI_HudWeapon_C_SetMedkitCount_Params
{
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetParent
struct UUI_HudWeapon_C_SetParent_Params
{
	class UUI_HudWidget_C*                             Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateAttributeAward
struct UUI_HudWeapon_C_UpdateAttributeAward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayAttributeAward
struct UUI_HudWeapon_C_DisplayAttributeAward_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BannerType>                       AttributeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuff
struct UUI_HudWeapon_C_DeactivateBuff_Params
{
	TEnumAsByte<EPlayerAttributeType>                  BuffType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.ActivateBuff
struct UUI_HudWeapon_C_ActivateBuff_Params
{
	TEnumAsByte<EPlayerAttributeType>                  BuffType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.GetAimingDownSights
struct UUI_HudWeapon_C_GetAimingDownSights_Params
{
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetAimingDownSights
struct UUI_HudWeapon_C_SetAimingDownSights_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.UpdateIconDamageState
struct UUI_HudWeapon_C_UpdateIconDamageState_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.NewXPBonusAward
struct UUI_HudWeapon_C_NewXPBonusAward_Params
{
	class ABendPawn*                                   Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BonusText;                                                // (Parm)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetReference;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetTarget
struct UUI_HudWeapon_C_SetTarget_Params
{
	class ABendPawn*                                   EnemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.NewXPAward
struct UUI_HudWeapon_C_NewXPAward_Params
{
	class ABendPawn*                                   Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetReference;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.RemoveHitCounter
struct UUI_HudWeapon_C_RemoveHitCounter_Params
{
	class UWidget*                                     WidgetReference;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponPrompt
struct UUI_HudWeapon_C_DisplayWeaponPrompt_Params
{
	TEnumAsByte<EInteractButton>                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ButtonLabel;                                              // (Parm)
	TEnumAsByte<ESlateVisibility>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponHUD
struct UUI_HudWeapon_C_SetWeaponHUD_Params
{
	class ABendWeapon*                                 Equipped;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetHolsteredAmmoCount
struct UUI_HudWeapon_C_SetHolsteredAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.CheckPlayerWeaponState
struct UUI_HudWeapon_C_CheckPlayerWeaponState_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponInventory
struct UUI_HudWeapon_C_DisplayWeaponInventory_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.WeaponLayoutType
struct UUI_HudWeapon_C_WeaponLayoutType_Params
{
	TEnumAsByte<Enum_Weapon_Layouts>                   Weapon_Type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetAmmo
struct UUI_HudWeapon_C_SetAmmo_Params
{
	float                                              MeleeHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.Init
struct UUI_HudWeapon_C_Init_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponIcon
struct UUI_HudWeapon_C_SetWeaponIcon_Params
{
	class UTexture2D*                                  WeaponIconType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        WeaponIconTypeAsset;                                      // (Parm)
	int                                                WeaponSlotID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeaponDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.SetWeapon
struct UUI_HudWeapon_C_SetWeapon_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSlotID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.Construct
struct UUI_HudWeapon_C_Construct_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnAnimationFinished_Event_1
struct UUI_HudWeapon_C_OnAnimationFinished_Event_1_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.HitEnemyWithMelee
struct UUI_HudWeapon_C_HitEnemyWithMelee_Params
{
	class ABendPawn*                                   VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitCounter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HitVector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponFired_Event_1
struct UUI_HudWeapon_C_OnWeaponFired_Event_1_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.Tick
struct UUI_HudWeapon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.CheckClosePanel
struct UUI_HudWeapon_C_CheckClosePanel_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.ClosePanel
struct UUI_HudWeapon_C_ClosePanel_Params
{
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnHideWeaponUIToggle
struct UUI_HudWeapon_C_OnHideWeaponUIToggle_Params
{
	bool                                               HideWpnUI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.CheckParts
struct UUI_HudWeapon_C_CheckParts_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeaponPart*                             Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnPostSaveGameLoaded_Event_1
struct UUI_HudWeapon_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnPlayerRespawned
struct UUI_HudWeapon_C_OnPlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DisplayHealthAndStamina
struct UUI_HudWeapon_C_DisplayHealthAndStamina_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponDropped
struct UUI_HudWeapon_C_OnWeaponDropped_Params
{
	class ABendInventoryPickup*                        PickupRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnUpdateDropTimer
struct UUI_HudWeapon_C_OnUpdateDropTimer_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.ActivateRingBuff
struct UUI_HudWeapon_C_ActivateRingBuff_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRingBuff
struct UUI_HudWeapon_C_DeactivateRingBuff_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCStealthRingCountUpdate_Event_1
struct UUI_HudWeapon_C_OnDLCStealthRingCountUpdate_Event_1_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCUnderArmorMeleeBuffCountUpdate_Event_1
struct UUI_HudWeapon_C_OnDLCUnderArmorMeleeBuffCountUpdate_Event_1_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCBikeFuelEfficiencyUpdated_Event_1
struct UUI_HudWeapon_C_OnDLCBikeFuelEfficiencyUpdated_Event_1_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWeapon.UI_HudWeapon_C.ExecuteUbergraph_UI_HudWeapon
struct UUI_HudWeapon_C_ExecuteUbergraph_UI_HudWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
