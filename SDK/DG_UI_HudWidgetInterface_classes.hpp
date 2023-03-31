#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UI_HudWidgetInterface.UI_HudWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UUI_HudWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UI_HudWidgetInterface.UI_HudWidgetInterface_C");
		return ptr;
	}


	void ClearAllNotifications(bool* Success);
	void GetExclusions(struct FUI_HudVisibilityOptions* Exclusions);
	void I_GetUiMarkupDataRows(TArray<struct FName>* Rows);
	void I_GetUiMarkupDataFromRow(const struct FName& Row, struct FBend_UI_ButtonMarkup* Markup);
	void I_DisplayRewardPanel(const struct FBendRewardsScreenData& RewardsScreenData);
	void I_SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** Tutorial);
	void I_RegisterTutorialMulti(class UUI_TutorialPanel_C* Tutorial);
	void DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, bool* Success);
	void UpdateInlineSkipProgress(float Percent, bool* Success);
	void DisplayInlineSkipButton(bool State, bool* Success);
	void CloseTutorial(bool* Success);
	void UpdateDamagedWeapon();
	void UpdateTracking(float Percent, bool* Success);
	void DisplayTracking(bool State, bool* Success);
	void PauseObjectiveMeter(bool State, bool* Success);
	void DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, bool* Success);
	void DisplayAttributeAwardData(bool State, TEnumAsByte<Enum_BannerType> AttributeType, float Value, bool* Success);
	void GetCurrentObjectiveDisplayedIndex(int* Index);
	void RemoveObjectiveMeter(bool* Success);
	void UpdateObjectiveMeter(float Percent, bool* Success);
	void DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, bool* Success);
	void DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, bool NewData, int* Index);
	void AddObjectiveUnlocked(const struct FUI_HudNotificationDetails& Details, class UHudNotificationItemWidget** Widget);
	void SetRadarVisible(bool Visible);
	void HideSurvivalWheel();
	void ShowSurvivalWheel();
	void SetRangedTarget(class ABendPawn* Pawn);
	void UpdateObjective(const struct FString& Text, class UHudNotificationItemWidget* Widget);
	void GetMissionPopupQueue(TArray<struct FUI_HudMissionPopupDetails>* PopupQueue);
	void SetMissionInfoPopupProgress(float Progress);
	void SetBinocularsAiming(bool Aiming);
	void ClearObjectiveMeter();
	void SetObjectiveMeterPercent(float Percent);
	void SetObjectiveMeterPaused(bool Paused);
	void CloseLocationPanel();
	void CloseRewardPanel(bool* Success);
	void ClearObjectives(bool* Success);
	void CompleteObjective(class UHudNotificationItemWidget* Objective, bool* Success);
	void RemoveObjective(class UHudNotificationItemWidget* Objective, bool* Success);
	void HideHUD(const struct FUI_HudVisibilityOptions& Exclusions);
	void ShowHUD(const struct FUI_HudVisibilityOptions& Exclusions);
	void CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed);
	void DisplaySimpleTutorial(class UUI_TutorialSimple_C* Widget, const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UObject* CloseInterface);
	void DisplayNotification(const struct FUI_HudNotificationDetails& Details);
	void DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject);
	void ClearLeavingMissionZoneNotification();
	void UpdateMeleeMeter(bool OwnerIsPlayer, float Health);
	void DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
