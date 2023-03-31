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

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearAllNotifications
struct UUI_HudWidgetInterface_C_ClearAllNotifications_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetExclusions
struct UUI_HudWidgetInterface_C_GetExclusions_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm, OutParm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataRows
struct UUI_HudWidgetInterface_C_I_GetUiMarkupDataRows_Params
{
	TArray<struct FName>                               Rows;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataFromRow
struct UUI_HudWidgetInterface_C_I_GetUiMarkupDataFromRow_Params
{
	struct FName                                       Row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBend_UI_ButtonMarkup                       Markup;                                                   // (Parm, OutParm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_DisplayRewardPanel
struct UUI_HudWidgetInterface_C_I_DisplayRewardPanel_Params
{
	struct FBendRewardsScreenData                      RewardsScreenData;                                        // (Parm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_SpawnSimpleTutorial
struct UUI_HudWidgetInterface_C_I_SpawnSimpleTutorial_Params
{
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_RegisterTutorialMulti
struct UUI_HudWidgetInterface_C_I_RegisterTutorialMulti_Params
{
	class UUI_TutorialPanel_C*                         Tutorial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayWeaponStats
struct UUI_HudWidgetInterface_C_DisplayWeaponStats_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateInlineSkipProgress
struct UUI_HudWidgetInterface_C_UpdateInlineSkipProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayInlineSkipButton
struct UUI_HudWidgetInterface_C_DisplayInlineSkipButton_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseTutorial
struct UUI_HudWidgetInterface_C_CloseTutorial_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateDamagedWeapon
struct UUI_HudWidgetInterface_C_UpdateDamagedWeapon_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateTracking
struct UUI_HudWidgetInterface_C_UpdateTracking_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTracking
struct UUI_HudWidgetInterface_C_DisplayTracking_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.PauseObjectiveMeter
struct UUI_HudWidgetInterface_C_PauseObjectiveMeter_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTrust
struct UUI_HudWidgetInterface_C_DisplayTrust_Params
{
	int                                                TrustGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayAttributeAwardData
struct UUI_HudWidgetInterface_C_DisplayAttributeAwardData_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BannerType>                       AttributeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetCurrentObjectiveDisplayedIndex
struct UUI_HudWidgetInterface_C_GetCurrentObjectiveDisplayedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjectiveMeter
struct UUI_HudWidgetInterface_C_RemoveObjectiveMeter_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjectiveMeter
struct UUI_HudWidgetInterface_C_UpdateObjectiveMeter_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjectiveMeter
struct UUI_HudWidgetInterface_C_DisplayObjectiveMeter_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjective
struct UUI_HudWidgetInterface_C_DisplayObjective_Params
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

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.AddObjectiveUnlocked
struct UUI_HudWidgetInterface_C_AddObjectiveUnlocked_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	class UHudNotificationItemWidget*                  Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRadarVisible
struct UUI_HudWidgetInterface_C_SetRadarVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideSurvivalWheel
struct UUI_HudWidgetInterface_C_HideSurvivalWheel_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowSurvivalWheel
struct UUI_HudWidgetInterface_C_ShowSurvivalWheel_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRangedTarget
struct UUI_HudWidgetInterface_C_SetRangedTarget_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjective
struct UUI_HudWidgetInterface_C_UpdateObjective_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class UHudNotificationItemWidget*                  Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetMissionPopupQueue
struct UUI_HudWidgetInterface_C_GetMissionPopupQueue_Params
{
	TArray<struct FUI_HudMissionPopupDetails>          PopupQueue;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetMissionInfoPopupProgress
struct UUI_HudWidgetInterface_C_SetMissionInfoPopupProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetBinocularsAiming
struct UUI_HudWidgetInterface_C_SetBinocularsAiming_Params
{
	bool                                               Aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectiveMeter
struct UUI_HudWidgetInterface_C_ClearObjectiveMeter_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPercent
struct UUI_HudWidgetInterface_C_SetObjectiveMeterPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPaused
struct UUI_HudWidgetInterface_C_SetObjectiveMeterPaused_Params
{
	bool                                               Paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseLocationPanel
struct UUI_HudWidgetInterface_C_CloseLocationPanel_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseRewardPanel
struct UUI_HudWidgetInterface_C_CloseRewardPanel_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectives
struct UUI_HudWidgetInterface_C_ClearObjectives_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CompleteObjective
struct UUI_HudWidgetInterface_C_CompleteObjective_Params
{
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjective
struct UUI_HudWidgetInterface_C_RemoveObjective_Params
{
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideHUD
struct UUI_HudWidgetInterface_C_HideHUD_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowHUD
struct UUI_HudWidgetInterface_C_ShowHUD_Params
{
	struct FUI_HudVisibilityOptions                    Exclusions;                                               // (Parm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CancelNotification
struct UUI_HudWidgetInterface_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplaySimpleTutorial
struct UUI_HudWidgetInterface_C_DisplaySimpleTutorial_Params
{
	class UUI_TutorialSimple_C*                        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CloseInterface;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayNotification
struct UUI_HudWidgetInterface_C_DisplayNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayMissionInfoPopup
struct UUI_HudWidgetInterface_C_DisplayMissionInfoPopup_Params
{
	TEnumAsByte<EUI_HudPopupType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EUI_RewardType>                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FActorInteractDetails                       InteractDetails;                                          // (Parm)
	class UObject*                                     UtilityObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearLeavingMissionZoneNotification
struct UUI_HudWidgetInterface_C_ClearLeavingMissionZoneNotification_Params
{
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateMeleeMeter
struct UUI_HudWidgetInterface_C_UpdateMeleeMeter_Params
{
	bool                                               OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayLocationPanel
struct UUI_HudWidgetInterface_C_DisplayLocationPanel_Params
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
