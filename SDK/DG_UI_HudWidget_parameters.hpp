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

// Function UI_HudWidget.UI_HudWidget_C.ClearAllNotifications
struct UUI_HudWidget_C_ClearAllNotifications_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CloseRewardPanel
struct UUI_HudWidget_C_CloseRewardPanel_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GetExclusions
struct UUI_HudWidget_C_GetExclusions_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm, OutParm)
};

// Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataRows
struct UUI_HudWidget_C_I_GetUiMarkupDataRows_Params
{
	TArray<struct FName>                               Rows;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataFromRow
struct UUI_HudWidget_C_I_GetUiMarkupDataFromRow_Params
{
	struct FName                                       Row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBend_UI_ButtonMarkup                       Markup;                                                   // (Parm, OutParm)
};

// Function UI_HudWidget.UI_HudWidget_C.I_SpawnSimpleTutorial
struct UUI_HudWidget_C_I_SpawnSimpleTutorial_Params
{
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayWeaponStats
struct UUI_HudWidget_C_DisplayWeaponStats_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateInlineSkipProgress
struct UUI_HudWidget_C_UpdateInlineSkipProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayInlineSkipButton
struct UUI_HudWidget_C_DisplayInlineSkipButton_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CloseTutorial
struct UUI_HudWidget_C_CloseTutorial_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayTracking
struct UUI_HudWidget_C_DisplayTracking_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateTracking
struct UUI_HudWidget_C_UpdateTracking_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.PauseObjectiveMeter
struct UUI_HudWidget_C_PauseObjectiveMeter_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayTrust
struct UUI_HudWidget_C_DisplayTrust_Params
{
	int                                                TrustGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayAttributeAwardData
struct UUI_HudWidget_C_DisplayAttributeAwardData_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BannerType>                       AttributeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GetCurrentObjectiveDisplayedIndex
struct UUI_HudWidget_C_GetCurrentObjectiveDisplayedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RemoveObjectiveMeter
struct UUI_HudWidget_C_RemoveObjectiveMeter_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateObjectiveMeter
struct UUI_HudWidget_C_UpdateObjectiveMeter_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayObjectiveMeter
struct UUI_HudWidget_C_DisplayObjectiveMeter_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayObjective
struct UUI_HudWidget_C_DisplayObjective_Params
{
	TEnumAsByte<EObjectiveHudState>                    HUD_State;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FBendRewardsScreenData                      RewardScreenData;                                         // (Parm)
	bool                                               NewData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.AddObjectiveUnlocked
struct UUI_HudWidget_C_AddObjectiveUnlocked_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.GetMissionPopupQueue
struct UUI_HudWidget_C_GetMissionPopupQueue_Params
{
	TArray<struct FUI_HudMissionPopupDetails>          PopupQueue;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_HudWidget.UI_HudWidget_C.ClearObjectives
struct UUI_HudWidget_C_ClearObjectives_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CompleteObjective
struct UUI_HudWidget_C_CompleteObjective_Params
{
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RemoveObjective
struct UUI_HudWidget_C_RemoveObjective_Params
{
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CancelNotification
struct UUI_HudWidget_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GetIsSurvivalDifficulty
struct UUI_HudWidget_C_GetIsSurvivalDifficulty_Params
{
	bool                                               Survival;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CheckSurvivalHUDState
struct UUI_HudWidget_C_CheckSurvivalHUDState_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.HideWeaponAndRadarForRewards
struct UUI_HudWidget_C_HideWeaponAndRadarForRewards_Params
{
	struct FBendRewardsScreenData                      RewardsData;                                              // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.DestroyCollectableViewer
struct UUI_HudWidget_C_DestroyCollectableViewer_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.EnqueueCollectable
struct UUI_HudWidget_C_EnqueueCollectable_Params
{
	class UInventoryItemCollectible*                   New_Collectible;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Category;                                                 // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.Update Survival Mode Visibility
struct UUI_HudWidget_C_Update_Survival_Mode_Visibility_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.IsCompletionScreenActive
struct UUI_HudWidget_C_IsCompletionScreenActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.QuicksaveButtonHold
struct UUI_HudWidget_C_QuicksaveButtonHold_Params
{
	float                                              HoldPercentage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Released;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayQuicksavePrompt
struct UUI_HudWidget_C_DisplayQuicksavePrompt_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CheckMeleeHealth
struct UUI_HudWidget_C_CheckMeleeHealth_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.AttemptedStaminaUseWhileEmpty
struct UUI_HudWidget_C_AttemptedStaminaUseWhileEmpty_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateBikeHUDVisibility
struct UUI_HudWidget_C_UpdateBikeHUDVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RemoveTrapStickyIcon
struct UUI_HudWidget_C_RemoveTrapStickyIcon_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.AddTrapStickyIcon
struct UUI_HudWidget_C_AddTrapStickyIcon_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetHealthRedOverlay
struct UUI_HudWidget_C_SetHealthRedOverlay_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OverrideLevelUpBanner
struct UUI_HudWidget_C_OverrideLevelUpBanner_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SpawnSimpleTutorial
struct UUI_HudWidget_C_SpawnSimpleTutorial_Params
{
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         TutorialPanel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CheckForScrap
struct UUI_HudWidget_C_CheckForScrap_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.ScaledOverlayValue
struct UUI_HudWidget_C_ScaledOverlayValue_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitPercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinalPercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetHealPrompt
struct UUI_HudWidget_C_SetHealPrompt_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.IsLocationPanelVisible
struct UUI_HudWidget_C_IsLocationPanelVisible_Params
{
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RemoveGrenadeStickyIcon
struct UUI_HudWidget_C_RemoveGrenadeStickyIcon_Params
{
	class ABendProjectile*                             Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.AddGrenadeStickyIcon
struct UUI_HudWidget_C_AddGrenadeStickyIcon_Params
{
	class ABendProjectile*                             Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAim
struct UUI_HudWidget_C_SetBinocularsAim_Params
{
	bool                                               Aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RemoveCollectibleClueInteract
struct UUI_HudWidget_C_RemoveCollectibleClueInteract_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.ActivateCollectibleClueInteract
struct UUI_HudWidget_C_ActivateCollectibleClueInteract_Params
{
	class UInventoryItemCollectible*                   Collectible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_CollectibleInteract_C*                   ClueInteract;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.InitWidgetsArray
struct UUI_HudWidget_C_InitWidgetsArray_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SetWidgetVisible
struct UUI_HudWidget_C_SetWidgetVisible_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.InitVisibleWidgets
struct UUI_HudWidget_C_InitVisibleWidgets_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnDisplayNotification
struct UUI_HudWidget_C_OnDisplayNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.Init
struct UUI_HudWidget_C_Init_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SetVisible
struct UUI_HudWidget_C_SetVisible_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.InitMinimap
struct UUI_HudWidget_C_InitMinimap_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.ClearLeavingMissionZoneNotification
struct UUI_HudWidget_C_ClearLeavingMissionZoneNotification_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.DisplaySimpleTutorial
struct UUI_HudWidget_C_DisplaySimpleTutorial_Params
{
	class UUI_TutorialSimple_C*                        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CloseInterface;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPaused
struct UUI_HudWidget_C_SetObjectiveMeterPaused_Params
{
	bool                                               Paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPercent
struct UUI_HudWidget_C_SetObjectiveMeterPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.ClearObjectiveMeter
struct UUI_HudWidget_C_ClearObjectiveMeter_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateObjective
struct UUI_HudWidget_C_UpdateObjective_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class UHudNotificationItemWidget*                  Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetRangedTarget
struct UUI_HudWidget_C_SetRangedTarget_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.Construct
struct UUI_HudWidget_C_Construct_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SyncBikeFuel
struct UUI_HudWidget_C_SyncBikeFuel_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SyncBikeBoost
struct UUI_HudWidget_C_SyncBikeBoost_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.PostWidgetInitialize
struct UUI_HudWidget_C_PostWidgetInitialize_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerAim
struct UUI_HudWidget_C_OnPlayerAim_Params
{
	class ABendWeapon**                                EquippedWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAiming;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetBikeHudVisible
struct UUI_HudWidget_C_SetBikeHudVisible_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SyncBikeDamage
struct UUI_HudWidget_C_SyncBikeDamage_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnEquipWeapon
struct UUI_HudWidget_C_OnEquipWeapon_Params
{
	class ABendWeapon**                                EquippedWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerFire
struct UUI_HudWidget_C_OnPlayerFire_Params
{
	class ABendWeapon**                                Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetHudVisible
struct UUI_HudWidget_C_SetHudVisible_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerStealth
struct UUI_HudWidget_C_OnPlayerStealth_Params
{
	bool*                                              IsStealthed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerScope
struct UUI_HudWidget_C_OnPlayerScope_Params
{
	class ABendWeapon**                                EquippedWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsScoping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SyncAmmoCount
struct UUI_HudWidget_C_SyncAmmoCount_Params
{
	class ABendWeapon**                                Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Clip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Spare;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayLocationPanel
struct UUI_HudWidget_C_DisplayLocationPanel_Params
{
	TEnumAsByte<Enum_HudLocation>                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       locationName;                                             // (Parm)
	float                                              PercentComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrustMax;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustTier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCredits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         EncampmentData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayMissionInfoPopup
struct UUI_HudWidget_C_DisplayMissionInfoPopup_Params
{
	TEnumAsByte<EUI_HudPopupType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EUI_RewardType>                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FActorInteractDetails                       InteractDetails;                                          // (Parm)
	class UObject*                                     UtilityObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateMeleeMeter
struct UUI_HudWidget_C_UpdateMeleeMeter_Params
{
	bool                                               OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.ShowHUD
struct UUI_HudWidget_C_ShowHUD_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.HideHUD
struct UUI_HudWidget_C_HideHUD_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerEarnedCategoryXP
struct UUI_HudWidget_C_OnPlayerEarnedCategoryXP_Params
{
	class UPlayerExperienceLevel**                     PlayerXP;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerExperience>*                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               XPEarned;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.CloseLocationPanel
struct UUI_HudWidget_C_CloseLocationPanel_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAiming
struct UUI_HudWidget_C_SetBinocularsAiming_Params
{
	bool                                               Aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetMissionInfoPopupProgress
struct UUI_HudWidget_C_SetMissionInfoPopupProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnWeaponRepaired
struct UUI_HudWidget_C_OnWeaponRepaired_Params
{
	class ABendWeapon**                                Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnWeaponHolstered
struct UUI_HudWidget_C_OnWeaponHolstered_Params
{
	class ABendEquippableItem**                        Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnHealthModified
struct UUI_HudWidget_C_OnHealthModified_Params
{
	class UBendAttribute**                             Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnStaminaModifed
struct UUI_HudWidget_C_OnStaminaModifed_Params
{
	class UBendAttribute**                             Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnFocusModifed
struct UUI_HudWidget_C_OnFocusModifed_Params
{
	class UBendAttribute**                             Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapBegin
struct UUI_HudWidget_C_GrenadeOverlapBegin_Params
{
	class ABendProjectile*                             Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapEnd
struct UUI_HudWidget_C_GrenadeOverlapEnd_Params
{
	class ABendProjectile*                             Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerRespawnEvent
struct UUI_HudWidget_C_OnPlayerRespawnEvent_Params
{
	class ABendPlayerController**                      PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.On Grapple Exit
struct UUI_HudWidget_C_On_Grapple_Exit_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.On Grapple Start
struct UUI_HudWidget_C_On_Grapple_Start_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipButtonEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnTrapBegin
struct UUI_HudWidget_C_OnTrapBegin_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   TriggeringPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.TrapSuccess
struct UUI_HudWidget_C_TrapSuccess_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Death
struct UUI_HudWidget_C_On_Death_Params
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

// Function UI_HudWidget.UI_HudWidget_C.ShowSurvivalWheel
struct UUI_HudWidget_C_ShowSurvivalWheel_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.HideSurvivalWheel
struct UUI_HudWidget_C_HideSurvivalWheel_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.SetRadarVisible
struct UUI_HudWidget_C_SetRadarVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RebindPlayerBoundEvents
struct UUI_HudWidget_C_RebindPlayerBoundEvents_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Respawn
struct UUI_HudWidget_C_On_Respawn_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisplayNotification
struct UUI_HudWidget_C_DisplayNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateDamagedWeapon
struct UUI_HudWidget_C_UpdateDamagedWeapon_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnInventoryModifiedDelegate
struct UUI_HudWidget_C_OnInventoryModifiedDelegate_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_HudWidget.UI_HudWidget_C.OnFlashlightToggle
struct UUI_HudWidget_C_OnFlashlightToggle_Params
{
	bool                                               FlashlightOn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorVisible
struct UUI_HudWidget_C_SetUnderArmorVisible_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorPercent
struct UUI_HudWidget_C_SetUnderArmorPercent_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorUILength
struct UUI_HudWidget_C_SetUnderArmorUILength_Params
{
	int*                                               BarLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnConsumableHold
struct UUI_HudWidget_C_OnConsumableHold_Params
{
	float*                                             HoldPercentage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Released;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnDPadPressed
struct UUI_HudWidget_C_OnDPadPressed_Params
{
	struct FVector2D*                                  Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.ProcessSimpleTutorialQueue
struct UUI_HudWidget_C_ProcessSimpleTutorialQueue_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnSimpleTutorialClosed
struct UUI_HudWidget_C_OnSimpleTutorialClosed_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.ClearTutorials
struct UUI_HudWidget_C_ClearTutorials_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerFastTravel
struct UUI_HudWidget_C_OnPlayerFastTravel_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.EnableMissionFailMessage
struct UUI_HudWidget_C_EnableMissionFailMessage_Params
{
	struct FText*                                      NewtText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              IsFullFailure;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.DisableMissionFailMessage
struct UUI_HudWidget_C_DisableMissionFailMessage_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Grapple End
struct UUI_HudWidget_C_On_Grapple_End_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerVisibility
struct UUI_HudWidget_C_OnPlayerVisibility_Params
{
	float*                                             PSVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnPlayerAudibility
struct UUI_HudWidget_C_OnPlayerAudibility_Params
{
	float*                                             PSAudibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnNewPlayerStealth
struct UUI_HudWidget_C_OnNewPlayerStealth_Params
{
	bool*                                              DisplayMeter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Alerted;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.ResetHudVisibilityExclusions
struct UUI_HudWidget_C_ResetHudVisibilityExclusions_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnDisplayLowHealthWarning_Event_1
struct UUI_HudWidget_C_OnDisplayLowHealthWarning_Event_1_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateHealthItemCount
struct UUI_HudWidget_C_UpdateHealthItemCount_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapBegin
struct UUI_HudWidget_C_OnTrapOverlapBegin_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToExplode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapEnd
struct UUI_HudWidget_C_OnTrapOverlapEnd_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnBinocularStart
struct UUI_HudWidget_C_OnBinocularStart_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnBinocularEnd
struct UUI_HudWidget_C_OnBinocularEnd_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnFocusModeToggle_Event_1
struct UUI_HudWidget_C_OnFocusModeToggle_Event_1_Params
{
	bool                                               EnteredFocusMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnCloseDelegate_Event_1
struct UUI_HudWidget_C_OnCloseDelegate_Event_1_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Post Save Game Loaded
struct UUI_HudWidget_C_On_Post_Save_Game_Loaded_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.RegisterTutorialMulti
struct UUI_HudWidget_C_RegisterTutorialMulti_Params
{
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnTutoirialMultiClosed
struct UUI_HudWidget_C_OnTutoirialMultiClosed_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.ClearTutorialMultis
struct UUI_HudWidget_C_ClearTutorialMultis_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.HitEnemyWithMelee
struct UUI_HudWidget_C_HitEnemyWithMelee_Params
{
	class ABendPawn*                                   VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitCounter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HitVector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnDisplayQuicksaveInteractEvent
struct UUI_HudWidget_C_OnDisplayQuicksaveInteractEvent_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnQuicksaveHold
struct UUI_HudWidget_C_OnQuicksaveHold_Params
{
	float*                                             HoldPercentage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Released;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.UpdateGetOffBikeInteractProgress
struct UUI_HudWidget_C_UpdateGetOffBikeInteractProgress_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.SetBikeGetOffInteractVisible
struct UUI_HudWidget_C_SetBikeGetOffInteractVisible_Params
{
	bool*                                              IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.GetOffBikeInputDisplayTimer
struct UUI_HudWidget_C_GetOffBikeInputDisplayTimer_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Ladder Approach
struct UUI_HudWidget_C_On_Ladder_Approach_Params
{
	bool                                               IsTopLadder;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.On Ladder Mount
struct UUI_HudWidget_C_On_Ladder_Mount_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartingTopRung;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.On Ladder Leave
struct UUI_HudWidget_C_On_Ladder_Leave_Params
{
	bool                                               IsTopLadder;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.WaterBarStart
struct UUI_HudWidget_C_WaterBarStart_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.WaterBarEnd
struct UUI_HudWidget_C_WaterBarEnd_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.I_RegisterTutorialMulti
struct UUI_HudWidget_C_I_RegisterTutorialMulti_Params
{
	class UUI_TutorialPanel_C*                         Tutorial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.I_DisplayRewardPanel
struct UUI_HudWidget_C_I_DisplayRewardPanel_Params
{
	struct FBendRewardsScreenData                      RewardsScreenData;                                        // (Parm)
};

// Function UI_HudWidget.UI_HudWidget_C.OnSurvivalFocusMode
struct UUI_HudWidget_C_OnSurvivalFocusMode_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.OnObjectiveAnimFinished
struct UUI_HudWidget_C_OnObjectiveAnimFinished_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.BindSurvivalDifficultyVision
struct UUI_HudWidget_C_BindSurvivalDifficultyVision_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.On Ladder Dismount
struct UUI_HudWidget_C_On_Ladder_Dismount_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeavingTopRung;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.OnQuickSwap
struct UUI_HudWidget_C_OnQuickSwap_Params
{
	int*                                               InSlotIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.ExecuteUbergraph_UI_HudWidget
struct UUI_HudWidget_C_ExecuteUbergraph_UI_HudWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerComplete__DelegateSignature
struct UUI_HudWidget_C_EventMissionTimerComplete__DelegateSignature_Params
{
};

// Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerHidden__DelegateSignature
struct UUI_HudWidget_C_EventMissionTimerHidden__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
