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

// BlueprintGeneratedClass BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_UI_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetMenuTranslationOffset(TEnumAsByte<EMenuTypes> Menu, class UObject* __WorldContext, struct FVector2D* TranslationOffset);
	void STATIC_SaveAndApplyGameUserSettings(class UObject* __WorldContext);
	void STATIC_DisplayFileSelectMenu(TEnumAsByte<ESaveMenuMode> MenuMode, const struct FScriptDelegate& OnFileSelected, class UObject* __WorldContext, class UFileSelectMenu_C** Menu);
	void STATIC_GetInputActionFromButton(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, struct FName* Action);
	void STATIC_ActionOffset(const struct FName& Action, const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition);
	void STATIC_CloseRewardsPanel(class UObject* __WorldContext);
	void STATIC_ShowMissionInStorylinesMenu(class UObject* MissionOrJob, class UObject* __WorldContext);
	void STATIC_DisplayTutorialMultiByName(const struct FName& TutorialName, bool HiddenTutorial, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget);
	void STATIC_DisplayTutorialSimpleByName(const struct FName& TutorialName, bool HiddenTutorial, const struct FName& CloseAction, bool AutoClose, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget);
	void STATIC_DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, class UObject* __WorldContext);
	void STATIC_SubstituteGlyphs(const struct FText& Target_Text, class UObject* __WorldContext, struct FText* Formatted_Text);
	void STATIC_FollowMeshInScreenSpace(class USkeletalMeshComponent* Mesh, const struct FName& Socket, const struct FVector& Offset, class ABendPlayerController* Player, bool SmoothMotion, const struct FVector2D& PrevPosition, class UObject* __WorldContext, struct FVector2D* ScreenPosition);
	void STATIC_UpdateTracking(float Percent, class UObject* __WorldContext);
	void STATIC_DisplayTracking(bool State, class UObject* __WorldContext);
	void STATIC_RemoveObjectiveMeter_1(class UObject* __WorldContext);
	void STATIC_DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, class UObject* __WorldContext, bool* Success);
	void STATIC_GetCurrentDisplayedObjectiveIndex(class UObject* __WorldContext, int* Index);
	void STATIC_RemoveObjectiveMeter(class UObject* __WorldContext);
	void STATIC_UpdateObjectiveMeter(float Percent, class UObject* __WorldContext);
	void STATIC_DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, class UObject* __WorldContext);
	void STATIC_DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, class UObject* DataAsset, bool CurrentlyTracked, bool IsNewData, class UObject* __WorldContext, int* Index);
	void STATIC_AddObjectiveUnlocked(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, class UObject* __WorldContext);
	void STATIC_AddObjectiveUnlockedOld(const struct FString& Text, const struct FString& SubTitle, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, class UObject* __WorldContext, class UHudNotificationItemWidget** Objective);
	void STATIC_GetObjectiveIconAndColor(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* Color, struct FSlateColor* SlateColor, class UTexture2D** MapIcon);
	void STATIC_SetRadarVisible(bool Visible, class UObject* __WorldContext);
	void STATIC_ContextualButtonPosition(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, struct FVector2D* ScreenPosition);
	void STATIC_SmoothPosition2D_DEPRECATED(const struct FVector2D& TargetPosition, const struct FVector2D& PrevPosition, float Speed, class UObject* __WorldContext, struct FVector2D* OutPosition);
	void STATIC_ConstrainToMargin(const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition);
	void STATIC_ButtonOffset(TEnumAsByte<EControllerInputButton> Button, const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition);
	void STATIC_FollowActorInScreenSpace_DEPRECATED(class AActor* Actor, const struct FName& Socket, const struct FVector& Offset, class ABendPlayerController* Player, bool SmoothMotion, const struct FVector2D& PrevPosition, class USceneComponent* OverrideComponent, class UObject* __WorldContext, struct FVector2D* ScreenPosition);
	void STATIC_NormalizeAngle_DEPRECATED(float InAngle, class UObject* __WorldContext, float* OutAngle);
	void STATIC_GetInteractButtonTexture(TEnumAsByte<EInteractButton> Button_Type, class UObject* __WorldContext, class UTexture2D** Texture, struct FLinearColor* Color);
	void STATIC_GetHUDIconByType(TEnumAsByte<Enum_IconTypes> Icon, class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_DisplayCredits(const struct FText& Title, const struct FText& Name, TEnumAsByte<Enum_AnchorPosition> Position, bool SlidingAnimation, class UObject* __WorldContext, class UUI_TitleCredits_C** Widget);
	void STATIC_CheckTextFit(class UTextBlock* TextBlock, class UObject* __WorldContext);
	void STATIC_GetMissionPopupQueue(class UObject* __WorldContext, TArray<struct FUI_HudMissionPopupDetails>* Queue);
	void STATIC_GetUiWeaponColor(TEnumAsByte<EWeaponType> Name, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_SetMissionInfoPopupInteractProgress(float Progress, class UObject* __WorldContext);
	void STATIC_SetBinocularsAiming(bool Aiming, class UObject* __WorldContext);
	void STATIC_GetFactionIconTexture(TEnumAsByte<EAIFactionType> Faction, class UObject* __WorldContext);
	void STATIC_TweenAlignment_DEPRECATED(class UCanvasPanelSlot* Slot, float Duration, const struct FVector2D& From, const struct FVector2D& To, class UObject* __WorldContext, bool* IsTweening, float* Progress);
	void STATIC_GetAmmoCount_DEPRECATED(class ABendWeapon* Weapon, class UObject* __WorldContext, int* AmmoCount);
	void STATIC_IncrementProgress_DEPRECATED(float Duration, class UObject* __WorldContext, float* Progress, float* ProgressOut);
	void STATIC_HideHUD(bool ExcludeMiniMap, bool ExcludeWeaponInfo, bool ExcludeNotifications, bool ExcludeTooltips, bool ExcludeNpcMeter, bool ExcludeXpMeter, bool ExcludeReticles, bool ExcludeLocationInfo, bool ExcludeWaypoints, bool ExcludeCallouts, bool ExcludeInteracts, class UObject* __WorldContext);
	void STATIC_ShowHUD(bool ExcludeMiniMap, bool ExcludeWeaponInfo, bool ExcludeNotifications, bool ExcludeTooltips, bool ExcludeNpcMeter, bool ExcludeXpMeter, bool ExcludeReticles, bool ExcludeLocationInfo, bool ExcludeWaypoints, bool ExcludeCallouts, bool ExcludeInteracts, bool ExcludeStamina, bool ExcludeAdrenaline, bool ExcludeHealth, bool ExcludeSupplies, bool ExcludeWeapons, class UObject* __WorldContext);
	void STATIC_CancelNotification(const struct FUI_HudNotificationDetails& Details, class UObject* __WorldContext, bool* Removed);
	void STATIC_DisplayPopupPrompt(const struct FSlatePopupDetails& PopupDetails, class UObject* __WorldContext, class UUI_PopupMenuWidget_C** PopUp);
	void STATIC_DisplayNotification(TEnumAsByte<EUI_HudNotificationType> Type, const struct FString& Title, const struct FText& TitleText, const struct FString& SubTitle, const struct FText& SubtitleText, const struct FString& Progress, const struct FText& ProgressText, TEnumAsByte<Enum_NotifyProgressType> ProgressType, class UTexture2D* ItemTexture, class USoundBase* PlaySound, float Value, float DisplayTime, bool Pause, bool MarkComplete, TEnumAsByte<EObjectiveCategories> ObjectiveCategory, TEnumAsByte<Enum_BannerType> BannerType, bool IsWeapon, const struct FBendStoryLinesBasicDataForUI& StoryLine, class UObject* __WorldContext);
	void STATIC_TweenVectorParameter_DEPRECATED(bool IsTweening, class UMaterialInstanceDynamic* MaterialInstanceDynamic, const struct FName& ParameterName, float Duration, float Progress, const struct FLinearColor& ValueFrom, const struct FLinearColor& ValueTo, class UObject* __WorldContext);
	void STATIC_GetWorldTimeFriendly_DEPRECATED(class UObject* __WorldContext, struct FText* Time);
	void STATIC_DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject, class UObject* __WorldContext);
	void STATIC_CloseTutorial(class UUI_TutorialPanel_C* TutorialWidget, class UObject* __WorldContext);
	void STATIC_GetButtonTextureByEnum_DEPRECATED(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, class UTexture2D** Texture, struct FVector2D* Dimensions);
	void STATIC_GetButtonTextureByMarkup_DEPRECATED(const struct FString& Markup, class UObject* __WorldContext, class UTexture2D** ButtonTexture, bool* IsMashing);
	void STATIC_DisplayTutorialSimple(class UBendTutorialSimpleData* DataAsset, bool HiddenTutorial, const struct FName& CloseAction, float MinimumTimeForButton, bool AutoClose, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget);
	void STATIC_DisplayTutorialMulti(class UBendTutorialMultiData* DataAsset, bool HiddenTutorial, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget);
	void STATIC_TweenScalarParameter_DEPRECATED(float Duration, class UMaterialInstanceDynamic* MaterialInstanceDynamic, const struct FName& ParameterName, float Start, float End, TEnumAsByte<EEasingFunc> Easing, class UObject* __WorldContext, float* Progress);
	void STATIC_TweenBorderBrushColor(bool IsTweening, class UBorder* Border, float Frame, float Speed, const struct FLinearColor& Color, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut);
	void STATIC_UpdateLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FString& locationName, float PercentComplete, int CurrentTrust, int CurrentMaxTrust, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UObject* __WorldContext);
	void STATIC_CloseLocationPanel(class UObject* __WorldContext);
	void STATIC_DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData, class UObject* __WorldContext);
	void STATIC_SetObjectiveIcon(class UHudNotificationItemWidget* Object, class UTexture2D* Text, class UObject* __WorldContext);
	void STATIC_SetObjectiveText(class UHudNotificationItemWidget* Object, const struct FString& Text, class UObject* __WorldContext);
	void STATIC_SetObjectiveFailed(class UHudNotificationItemWidget* Objective, bool Failed, class UObject* __WorldContext);
	void STATIC_ClearObjectives(class UObject* __WorldContext);
	void STATIC_PauseObjectiveMeter(bool Paused, class UObject* __WorldContext);
	void STATIC_SetObjectiveMeterPercent(float Percent, class UObject* __WorldContext);
	void STATIC_ClearObjectiveMeter(class UObject* __WorldContext);
	void STATIC_ActivateObjectiveMeter_DEPRECATED(class UTexture2D* Icon, float Time, bool Inverted, class UObject* __WorldContext, class UHudMissionTimerWidget** ObjectiveTimer);
	void STATIC_SetWidgetToActorPosition_DEPRECATED(const struct FVector& WorldLocation, float Margin, class UWidget* Widget, bool Centered, class UObject* __WorldContext, struct FVector2D* ScreenPosition, bool* WithinViewoport);
	void STATIC_TweenCollapseHeight_DEPRECATED(bool IsTweening, class USizeBox* SizeBox, float Frame, float Speed, float Height, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut);
	void STATIC_TweenTranslation_DEPRECATED(class UBorder* Border, float Duration, const struct FVector2D& From, const struct FVector2D& To, class UObject* __WorldContext, bool* IsTweening, float* Progress);
	void STATIC_WeaponTypeToSlot_DEPRECATED(TEnumAsByte<EWeaponType> Type, class UObject* __WorldContext, TEnumAsByte<EHudWeaponWidgetSlot>* Slot);
	void STATIC_TweenScale(bool IsTweening, class UBorder* Border, float Frame, float Delta, float Duration, float Height, TEnumAsByte<EEasingFunc> Easing, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut);
	void STATIC_TweenColor_DEPRECATED(class UBorder* Border, float Duration, const struct FLinearColor& ColorFrom, const struct FLinearColor& ColorTo, TEnumAsByte<EEasingFunc> EaseType, class UObject* __WorldContext, bool* IsTweening, float* Progress);
	void STATIC_EaseLinearColor_DEPRECATED(TEnumAsByte<EEasingFunc> Function, float Alpha, const struct FLinearColor& SourceColor, const struct FLinearColor& DestinationColor, class UObject* __WorldContext, struct FLinearColor* EasedColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
