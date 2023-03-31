// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HudWidget.UI_HudWidget_C.ClearAllNotifications
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::ClearAllNotifications(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearAllNotifications");

	UUI_HudWidget_C_ClearAllNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.CloseRewardPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::CloseRewardPanel(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CloseRewardPanel");

	UUI_HudWidget_C_CloseRewardPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.GetExclusions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm, OutParm)

void UUI_HudWidget_C::GetExclusions(struct FUI_HudVisibilityOptions* Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GetExclusions");

	UUI_HudWidget_C_GetExclusions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exclusions != nullptr)
		*Exclusions = params.Exclusions;
}


// Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataRows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Rows                           (Parm, OutParm, ZeroConstructor)

void UUI_HudWidget_C::I_GetUiMarkupDataRows(TArray<struct FName>* Rows)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataRows");

	UUI_HudWidget_C_I_GetUiMarkupDataRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rows != nullptr)
		*Rows = params.Rows;
}


// Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataFromRow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Row                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FBend_UI_ButtonMarkup   Markup                         (Parm, OutParm)

void UUI_HudWidget_C::I_GetUiMarkupDataFromRow(const struct FName& Row, struct FBend_UI_ButtonMarkup* Markup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.I_GetUiMarkupDataFromRow");

	UUI_HudWidget_C_I_GetUiMarkupDataFromRow_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Markup != nullptr)
		*Markup = params.Markup;
}


// Function UI_HudWidget.UI_HudWidget_C.I_SpawnSimpleTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Tutorial                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::I_SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.I_SpawnSimpleTutorial");

	UUI_HudWidget_C_I_SpawnSimpleTutorial_Params params;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tutorial != nullptr)
		*Tutorial = params.Tutorial;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayWeaponStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayWeaponStats");

	UUI_HudWidget_C_DisplayWeaponStats_Params params;
	params.State = State;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateInlineSkipProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateInlineSkipProgress(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateInlineSkipProgress");

	UUI_HudWidget_C_UpdateInlineSkipProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayInlineSkipButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayInlineSkipButton(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayInlineSkipButton");

	UUI_HudWidget_C_DisplayInlineSkipButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.CloseTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::CloseTutorial(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CloseTutorial");

	UUI_HudWidget_C_CloseTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayTracking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayTracking(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayTracking");

	UUI_HudWidget_C_DisplayTracking_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateTracking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateTracking(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateTracking");

	UUI_HudWidget_C_UpdateTracking_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.PauseObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::PauseObjectiveMeter(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.PauseObjectiveMeter");

	UUI_HudWidget_C_PauseObjectiveMeter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayTrust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrustGained                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayTrust");

	UUI_HudWidget_C_DisplayTrust_Params params;
	params.TrustGained = TrustGained;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayAttributeAwardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_BannerType>   AttributeType                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayAttributeAwardData(bool State, TEnumAsByte<Enum_BannerType> AttributeType, float Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayAttributeAwardData");

	UUI_HudWidget_C_DisplayAttributeAwardData_Params params;
	params.State = State;
	params.AttributeType = AttributeType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.GetCurrentObjectiveDisplayedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::GetCurrentObjectiveDisplayedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GetCurrentObjectiveDisplayedIndex");

	UUI_HudWidget_C_GetCurrentObjectiveDisplayedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_HudWidget.UI_HudWidget_C.RemoveObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::RemoveObjectiveMeter(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RemoveObjectiveMeter");

	UUI_HudWidget_C_RemoveObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateObjectiveMeter(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateObjectiveMeter");

	UUI_HudWidget_C_UpdateObjectiveMeter_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayObjectiveMeter");

	UUI_HudWidget_C_DisplayObjectiveMeter_Params params;
	params.Type = Type;
	params.Title = Title;
	params.Percent = Percent;
	params.Invert = Invert;
	params.IsHealthBar = IsHealthBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayObjective
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveHudState> HUD_State                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// struct FBendRewardsScreenData  RewardScreenData               (Parm)
// bool                           NewData                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, bool NewData, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayObjective");

	UUI_HudWidget_C_DisplayObjective_Params params;
	params.HUD_State = HUD_State;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.RewardScreenData = RewardScreenData;
	params.NewData = NewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_HudWidget.UI_HudWidget_C.AddObjectiveUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_HudWidget_C::AddObjectiveUnlocked(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.AddObjectiveUnlocked");

	UUI_HudWidget_C_AddObjectiveUnlocked_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.GetMissionPopupQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUI_HudMissionPopupDetails> PopupQueue                     (Parm, OutParm, ZeroConstructor)

void UUI_HudWidget_C::GetMissionPopupQueue(TArray<struct FUI_HudMissionPopupDetails>* PopupQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GetMissionPopupQueue");

	UUI_HudWidget_C_GetMissionPopupQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupQueue != nullptr)
		*PopupQueue = params.PopupQueue;
}


// Function UI_HudWidget.UI_HudWidget_C.ClearObjectives
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::ClearObjectives(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearObjectives");

	UUI_HudWidget_C_ClearObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.CompleteObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::CompleteObjective(class UHudNotificationItemWidget* Objective, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CompleteObjective");

	UUI_HudWidget_C_CompleteObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.RemoveObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::RemoveObjective(class UHudNotificationItemWidget* Objective, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RemoveObjective");

	UUI_HudWidget_C_RemoveObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidget.UI_HudWidget_C.CancelNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CancelNotification");

	UUI_HudWidget_C_CancelNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function UI_HudWidget.UI_HudWidget_C.GetIsSurvivalDifficulty
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Survival                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::GetIsSurvivalDifficulty(bool* Survival)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GetIsSurvivalDifficulty");

	UUI_HudWidget_C_GetIsSurvivalDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Survival != nullptr)
		*Survival = params.Survival;
}


// Function UI_HudWidget.UI_HudWidget_C.CheckSurvivalHUDState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::CheckSurvivalHUDState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CheckSurvivalHUDState");

	UUI_HudWidget_C_CheckSurvivalHUDState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.HideWeaponAndRadarForRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendRewardsScreenData  RewardsData                    (Parm)

void UUI_HudWidget_C::HideWeaponAndRadarForRewards(const struct FBendRewardsScreenData& RewardsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.HideWeaponAndRadarForRewards");

	UUI_HudWidget_C_HideWeaponAndRadarForRewards_Params params;
	params.RewardsData = RewardsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DestroyCollectableViewer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::DestroyCollectableViewer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DestroyCollectableViewer");

	UUI_HudWidget_C_DestroyCollectableViewer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.EnqueueCollectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* New_Collectible                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Category                       (Parm)

void UUI_HudWidget_C::EnqueueCollectable(class UInventoryItemCollectible* New_Collectible, const struct FText& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.EnqueueCollectable");

	UUI_HudWidget_C_EnqueueCollectable_Params params;
	params.New_Collectible = New_Collectible;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.Update Survival Mode Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::Update_Survival_Mode_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.Update Survival Mode Visibility");

	UUI_HudWidget_C_Update_Survival_Mode_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.IsCompletionScreenActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_HudWidget_C::IsCompletionScreenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.IsCompletionScreenActive");

	UUI_HudWidget_C_IsCompletionScreenActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HudWidget.UI_HudWidget_C.QuicksaveButtonHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldPercentage                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Released                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::QuicksaveButtonHold(float HoldPercentage, bool Released)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.QuicksaveButtonHold");

	UUI_HudWidget_C_QuicksaveButtonHold_Params params;
	params.HoldPercentage = HoldPercentage;
	params.Released = Released;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayQuicksavePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayQuicksavePrompt(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayQuicksavePrompt");

	UUI_HudWidget_C_DisplayQuicksavePrompt_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.CheckMeleeHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::CheckMeleeHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CheckMeleeHealth");

	UUI_HudWidget_C_CheckMeleeHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.AttemptedStaminaUseWhileEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::AttemptedStaminaUseWhileEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.AttemptedStaminaUseWhileEmpty");

	UUI_HudWidget_C_AttemptedStaminaUseWhileEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateBikeHUDVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateBikeHUDVisibility(bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateBikeHUDVisibility");

	UUI_HudWidget_C_UpdateBikeHUDVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.RemoveTrapStickyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::RemoveTrapStickyIcon(class ABendTrap* Trap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RemoveTrapStickyIcon");

	UUI_HudWidget_C_RemoveTrapStickyIcon_Params params;
	params.Trap = Trap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.AddTrapStickyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::AddTrapStickyIcon(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.AddTrapStickyIcon");

	UUI_HudWidget_C_AddTrapStickyIcon_Params params;
	params.Trap = Trap;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetHealthRedOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::SetHealthRedOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetHealthRedOverlay");

	UUI_HudWidget_C_SetHealthRedOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OverrideLevelUpBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OverrideLevelUpBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OverrideLevelUpBanner");

	UUI_HudWidget_C_OverrideLevelUpBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SpawnSimpleTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     TutorialPanel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** TutorialPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SpawnSimpleTutorial");

	UUI_HudWidget_C_SpawnSimpleTutorial_Params params;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TutorialPanel != nullptr)
		*TutorialPanel = params.TutorialPanel;
}


// Function UI_HudWidget.UI_HudWidget_C.CheckForScrap
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::CheckForScrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CheckForScrap");

	UUI_HudWidget_C_CheckForScrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ScaledOverlayValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          LimitPercent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FinalPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::ScaledOverlayValue(float Percent, float LimitPercent, float* FinalPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ScaledOverlayValue");

	UUI_HudWidget_C_ScaledOverlayValue_Params params;
	params.Percent = Percent;
	params.LimitPercent = LimitPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalPercent != nullptr)
		*FinalPercent = params.FinalPercent;
}


// Function UI_HudWidget.UI_HudWidget_C.SetHealPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetHealPrompt(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetHealPrompt");

	UUI_HudWidget_C_SetHealPrompt_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.IsLocationPanelVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::IsLocationPanelVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.IsLocationPanelVisible");

	UUI_HudWidget_C_IsLocationPanelVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function UI_HudWidget.UI_HudWidget_C.RemoveGrenadeStickyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendProjectile*         Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::RemoveGrenadeStickyIcon(class ABendProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RemoveGrenadeStickyIcon");

	UUI_HudWidget_C_RemoveGrenadeStickyIcon_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.AddGrenadeStickyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendProjectile*         Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::AddGrenadeStickyIcon(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.AddGrenadeStickyIcon");

	UUI_HudWidget_C_AddGrenadeStickyIcon_Params params;
	params.Projectile = Projectile;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetBinocularsAim(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAim");

	UUI_HudWidget_C_SetBinocularsAim_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.RemoveCollectibleClueInteract
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::RemoveCollectibleClueInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RemoveCollectibleClueInteract");

	UUI_HudWidget_C_RemoveCollectibleClueInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ActivateCollectibleClueInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Collectible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CollectibleInteract_C* ClueInteract                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::ActivateCollectibleClueInteract(class UInventoryItemCollectible* Collectible, class UUI_CollectibleInteract_C** ClueInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ActivateCollectibleClueInteract");

	UUI_HudWidget_C_ActivateCollectibleClueInteract_Params params;
	params.Collectible = Collectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClueInteract != nullptr)
		*ClueInteract = params.ClueInteract;
}


// Function UI_HudWidget.UI_HudWidget_C.InitWidgetsArray
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::InitWidgetsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.InitWidgetsArray");

	UUI_HudWidget_C_InitWidgetsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetWidgetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetWidgetVisible(class UWidgetAnimation* Animation, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetWidgetVisible");

	UUI_HudWidget_C_SetWidgetVisible_Params params;
	params.Animation = Animation;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.InitVisibleWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::InitVisibleWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.InitVisibleWidgets");

	UUI_HudWidget_C_InitVisibleWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnDisplayNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_HudWidget_C::OnDisplayNotification(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnDisplayNotification");

	UUI_HudWidget_C_OnDisplayNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.Init");

	UUI_HudWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUI_HudVisibilityOptions Exclusions                     (Parm)

void UUI_HudWidget_C::SetVisible(bool IsVisible, const struct FUI_HudVisibilityOptions& Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetVisible");

	UUI_HudWidget_C_SetVisible_Params params;
	params.IsVisible = IsVisible;
	params.Exclusions = Exclusions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.InitMinimap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::InitMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.InitMinimap");

	UUI_HudWidget_C_InitMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ClearLeavingMissionZoneNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ClearLeavingMissionZoneNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearLeavingMissionZoneNotification");

	UUI_HudWidget_C_ClearLeavingMissionZoneNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplaySimpleTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialSimple_C*    Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CloseInterface                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplaySimpleTutorial(class UUI_TutorialSimple_C* Widget, const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UObject* CloseInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplaySimpleTutorial");

	UUI_HudWidget_C_DisplaySimpleTutorial_Params params;
	params.Widget = Widget;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;
	params.CloseInterface = CloseInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetObjectiveMeterPaused(bool Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPaused");

	UUI_HudWidget_C_SetObjectiveMeterPaused_Params params;
	params.Paused = Paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetObjectiveMeterPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetObjectiveMeterPercent");

	UUI_HudWidget_C_SetObjectiveMeterPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ClearObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ClearObjectiveMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearObjectiveMeter");

	UUI_HudWidget_C_ClearObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UHudNotificationItemWidget* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateObjective(const struct FString& Text, class UHudNotificationItemWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateObjective");

	UUI_HudWidget_C_UpdateObjective_Params params;
	params.Text = Text;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetRangedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetRangedTarget(class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetRangedTarget");

	UUI_HudWidget_C_SetRangedTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.Construct");

	UUI_HudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SyncBikeFuel
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SyncBikeFuel(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SyncBikeFuel");

	UUI_HudWidget_C_SyncBikeFuel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SyncBikeBoost
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SyncBikeBoost(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SyncBikeBoost");

	UUI_HudWidget_C_SyncBikeBoost_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.PostWidgetInitialize
// (Event, Public, BlueprintEvent)

void UUI_HudWidget_C::PostWidgetInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.PostWidgetInitialize");

	UUI_HudWidget_C_PostWidgetInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerAim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon**            EquippedWeapon                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAiming                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerAim(class ABendWeapon** EquippedWeapon, bool* IsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerAim");

	UUI_HudWidget_C_OnPlayerAim_Params params;
	params.EquippedWeapon = EquippedWeapon;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetBikeHudVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetBikeHudVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetBikeHudVisible");

	UUI_HudWidget_C_SetBikeHudVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SyncBikeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SyncBikeDamage(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SyncBikeDamage");

	UUI_HudWidget_C_SyncBikeDamage_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnEquipWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon**            EquippedWeapon                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnEquipWeapon(class ABendWeapon** EquippedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnEquipWeapon");

	UUI_HudWidget_C_OnEquipWeapon_Params params;
	params.EquippedWeapon = EquippedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon**            Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerFire(class ABendWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerFire");

	UUI_HudWidget_C_OnPlayerFire_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetHudVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetHudVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetHudVisible");

	UUI_HudWidget_C_SetHudVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerStealth
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsStealthed                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerStealth(bool* IsStealthed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerStealth");

	UUI_HudWidget_C_OnPlayerStealth_Params params;
	params.IsStealthed = IsStealthed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerScope
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon**            EquippedWeapon                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsScoping                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerScope(class ABendWeapon** EquippedWeapon, bool* IsScoping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerScope");

	UUI_HudWidget_C_OnPlayerScope_Params params;
	params.EquippedWeapon = EquippedWeapon;
	params.IsScoping = IsScoping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SyncAmmoCount
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon**            Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Clip                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Spare                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SyncAmmoCount(class ABendWeapon** Weapon, int* Clip, int* Spare)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SyncAmmoCount");

	UUI_HudWidget_C_SyncAmmoCount_Params params;
	params.Weapon = Weapon;
	params.Clip = Clip;
	params.Spare = Spare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayLocationPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_HudLocation>  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   locationName                   (Parm)
// float                          PercentComplete                (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrust                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrustMax                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustTier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCredits                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     EncampmentData                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayLocationPanel");

	UUI_HudWidget_C_DisplayLocationPanel_Params params;
	params.LocationType = LocationType;
	params.locationName = locationName;
	params.PercentComplete = PercentComplete;
	params.CurrentTrust = CurrentTrust;
	params.CurrentTrustMax = CurrentTrustMax;
	params.TrustTier = TrustTier;
	params.CurrentCredits = CurrentCredits;
	params.EncampmentData = EncampmentData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayMissionInfoPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EUI_RewardType>    RewardType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)
// struct FActorInteractDetails   InteractDetails                (Parm)
// class UObject*                 UtilityObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayMissionInfoPopup");

	UUI_HudWidget_C_DisplayMissionInfoPopup_Params params;
	params.Type = Type;
	params.Title = Title;
	params.RewardType = RewardType;
	params.RewardValue = RewardValue;
	params.SubTitle = SubTitle;
	params.InteractDetails = InteractDetails;
	params.UtilityObject = UtilityObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateMeleeMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateMeleeMeter(bool OwnerIsPlayer, float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateMeleeMeter");

	UUI_HudWidget_C_UpdateMeleeMeter_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ShowHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm)

void UUI_HudWidget_C::ShowHUD(const struct FUI_HudVisibilityOptions& Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ShowHUD");

	UUI_HudWidget_C_ShowHUD_Params params;
	params.Exclusions = Exclusions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm)

void UUI_HudWidget_C::HideHUD(const struct FUI_HudVisibilityOptions& Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.HideHUD");

	UUI_HudWidget_C_HideHUD_Params params;
	params.Exclusions = Exclusions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerEarnedCategoryXP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPlayerExperienceLevel** PlayerXP                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayerExperience>* Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           XPEarned                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerEarnedCategoryXP(class UPlayerExperienceLevel** PlayerXP, TEnumAsByte<EPlayerExperience>* Type, int* XPEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerEarnedCategoryXP");

	UUI_HudWidget_C_OnPlayerEarnedCategoryXP_Params params;
	params.PlayerXP = PlayerXP;
	params.Type = Type;
	params.XPEarned = XPEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.CloseLocationPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::CloseLocationPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.CloseLocationPanel");

	UUI_HudWidget_C_CloseLocationPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAiming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetBinocularsAiming(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetBinocularsAiming");

	UUI_HudWidget_C_SetBinocularsAiming_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetMissionInfoPopupProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetMissionInfoPopupProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetMissionInfoPopupProgress");

	UUI_HudWidget_C_SetMissionInfoPopupProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnWeaponRepaired
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon**            Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Health                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnWeaponRepaired(class ABendWeapon** Weapon, float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnWeaponRepaired");

	UUI_HudWidget_C_OnWeaponRepaired_Params params;
	params.Weapon = Weapon;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnWeaponHolstered
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendEquippableItem**    Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnWeaponHolstered(class ABendEquippableItem** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnWeaponHolstered");

	UUI_HudWidget_C_OnWeaponHolstered_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnHealthModified
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendAttribute**         Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnHealthModified(class UBendAttribute** Attribute, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnHealthModified");

	UUI_HudWidget_C_OnHealthModified_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnStaminaModifed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendAttribute**         Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnStaminaModifed(class UBendAttribute** Attribute, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnStaminaModifed");

	UUI_HudWidget_C_OnStaminaModifed_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnFocusModifed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendAttribute**         Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnFocusModifed(class UBendAttribute** Attribute, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnFocusModifed");

	UUI_HudWidget_C_OnFocusModifed_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendProjectile*         Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::GrenadeOverlapBegin(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapBegin");

	UUI_HudWidget_C_GrenadeOverlapBegin_Params params;
	params.Projectile = Projectile;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendProjectile*         Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::GrenadeOverlapEnd(class ABendProjectile* Projectile, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GrenadeOverlapEnd");

	UUI_HudWidget_C_GrenadeOverlapEnd_Params params;
	params.Projectile = Projectile;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerRespawnEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABendPlayerController**  PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerRespawnEvent(class ABendPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerRespawnEvent");

	UUI_HudWidget_C_OnPlayerRespawnEvent_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Grapple Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Grapple_Exit(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Grapple Exit");

	UUI_HudWidget_C_On_Grapple_Exit_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Grapple Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipButtonEvent                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Grapple_Start(class ABendPawn* Attacker, bool SkipButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Grapple Start");

	UUI_HudWidget_C_On_Grapple_Start_Params params;
	params.Attacker = Attacker;
	params.SkipButtonEvent = SkipButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnTrapBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               TriggeringPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnTrapBegin(class ABendTrap* Trap, class ABendPawn* TriggeringPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnTrapBegin");

	UUI_HudWidget_C_OnTrapBegin_Params params;
	params.Trap = Trap;
	params.TriggeringPawn = TriggeringPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.TrapSuccess
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::TrapSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.TrapSuccess");

	UUI_HudWidget_C_TrapSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Death
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Death(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Death");

	UUI_HudWidget_C_On_Death_Params params;
	params.ActualDamage = ActualDamage;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ShowSurvivalWheel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ShowSurvivalWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ShowSurvivalWheel");

	UUI_HudWidget_C_ShowSurvivalWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.HideSurvivalWheel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::HideSurvivalWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.HideSurvivalWheel");

	UUI_HudWidget_C_HideSurvivalWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetRadarVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetRadarVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetRadarVisible");

	UUI_HudWidget_C_SetRadarVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.RebindPlayerBoundEvents
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::RebindPlayerBoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RebindPlayerBoundEvents");

	UUI_HudWidget_C_RebindPlayerBoundEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Respawn(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Respawn");

	UUI_HudWidget_C_On_Respawn_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisplayNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_HudWidget_C::DisplayNotification(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisplayNotification");

	UUI_HudWidget_C_DisplayNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateDamagedWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::UpdateDamagedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateDamagedWeapon");

	UUI_HudWidget_C_UpdateDamagedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnInventoryModifiedDelegate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_HudWidget_C::OnInventoryModifiedDelegate(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnInventoryModifiedDelegate");

	UUI_HudWidget_C_OnInventoryModifiedDelegate_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnFlashlightToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlashlightOn                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnFlashlightToggle(bool FlashlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnFlashlightToggle");

	UUI_HudWidget_C_OnFlashlightToggle_Params params;
	params.FlashlightOn = FlashlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetUnderArmorVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorVisible");

	UUI_HudWidget_C_SetUnderArmorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetUnderArmorPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorPercent");

	UUI_HudWidget_C_SetUnderArmorPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorUILength
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           BarLength                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetUnderArmorUILength(int* BarLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetUnderArmorUILength");

	UUI_HudWidget_C_SetUnderArmorUILength_Params params;
	params.BarLength = BarLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnConsumableHold
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldPercentage                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Released                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnConsumableHold(float* HoldPercentage, bool* Released)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnConsumableHold");

	UUI_HudWidget_C_OnConsumableHold_Params params;
	params.HoldPercentage = HoldPercentage;
	params.Released = Released;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnDPadPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnDPadPressed(struct FVector2D* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnDPadPressed");

	UUI_HudWidget_C_OnDPadPressed_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ProcessSimpleTutorialQueue
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ProcessSimpleTutorialQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ProcessSimpleTutorialQueue");

	UUI_HudWidget_C_ProcessSimpleTutorialQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnSimpleTutorialClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnSimpleTutorialClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnSimpleTutorialClosed");

	UUI_HudWidget_C_OnSimpleTutorialClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ClearTutorials
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ClearTutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearTutorials");

	UUI_HudWidget_C_ClearTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerFastTravel
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnPlayerFastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerFastTravel");

	UUI_HudWidget_C_OnPlayerFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.EnableMissionFailMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewtText                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          IsFullFailure                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::EnableMissionFailMessage(struct FText* NewtText, bool* IsFullFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.EnableMissionFailMessage");

	UUI_HudWidget_C_EnableMissionFailMessage_Params params;
	params.NewtText = NewtText;
	params.IsFullFailure = IsFullFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.DisableMissionFailMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::DisableMissionFailMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.DisableMissionFailMessage");

	UUI_HudWidget_C_DisableMissionFailMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Grapple End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Grapple_End(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Grapple End");

	UUI_HudWidget_C_On_Grapple_End_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         PSVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerVisibility(float* PSVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerVisibility");

	UUI_HudWidget_C_OnPlayerVisibility_Params params;
	params.PSVisibility = PSVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnPlayerAudibility
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         PSAudibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnPlayerAudibility(float* PSAudibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnPlayerAudibility");

	UUI_HudWidget_C_OnPlayerAudibility_Params params;
	params.PSAudibility = PSAudibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnNewPlayerStealth
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          DisplayMeter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Alerted                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnNewPlayerStealth(bool* DisplayMeter, bool* Alerted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnNewPlayerStealth");

	UUI_HudWidget_C_OnNewPlayerStealth_Params params;
	params.DisplayMeter = DisplayMeter;
	params.Alerted = Alerted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ResetHudVisibilityExclusions
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ResetHudVisibilityExclusions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ResetHudVisibilityExclusions");

	UUI_HudWidget_C_ResetHudVisibilityExclusions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnDisplayLowHealthWarning_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnDisplayLowHealthWarning_Event_1(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnDisplayLowHealthWarning_Event_1");

	UUI_HudWidget_C_OnDisplayLowHealthWarning_Event_1_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateHealthItemCount
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateHealthItemCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateHealthItemCount");

	UUI_HudWidget_C_UpdateHealthItemCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnTrapOverlapBegin(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapBegin");

	UUI_HudWidget_C_OnTrapOverlapBegin_Params params;
	params.Trap = Trap;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnTrapOverlapEnd(class ABendTrap* Trap, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnTrapOverlapEnd");

	UUI_HudWidget_C_OnTrapOverlapEnd_Params params;
	params.Trap = Trap;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnBinocularStart
// (Event, Public, BlueprintEvent)

void UUI_HudWidget_C::OnBinocularStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnBinocularStart");

	UUI_HudWidget_C_OnBinocularStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnBinocularEnd
// (Event, Public, BlueprintEvent)

void UUI_HudWidget_C::OnBinocularEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnBinocularEnd");

	UUI_HudWidget_C_OnBinocularEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnFocusModeToggle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnteredFocusMode               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnFocusModeToggle_Event_1(bool EnteredFocusMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnFocusModeToggle_Event_1");

	UUI_HudWidget_C_OnFocusModeToggle_Event_1_Params params;
	params.EnteredFocusMode = EnteredFocusMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnCloseDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnCloseDelegate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnCloseDelegate_Event_1");

	UUI_HudWidget_C_OnCloseDelegate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Post Save Game Loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Post_Save_Game_Loaded(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Post Save Game Loaded");

	UUI_HudWidget_C_On_Post_Save_Game_Loaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.RegisterTutorialMulti
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::RegisterTutorialMulti(class UUI_TutorialPanel_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.RegisterTutorialMulti");

	UUI_HudWidget_C_RegisterTutorialMulti_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnTutoirialMultiClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnTutoirialMultiClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnTutoirialMultiClosed");

	UUI_HudWidget_C_OnTutoirialMultiClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ClearTutorialMultis
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::ClearTutorialMultis()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ClearTutorialMultis");

	UUI_HudWidget_C_ClearTutorialMultis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.HitEnemyWithMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            HitCounter                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               HitVector                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::HitEnemyWithMelee(class ABendPawn* VictimPawn, int HitCounter, const struct FVector2D& HitVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.HitEnemyWithMelee");

	UUI_HudWidget_C_HitEnemyWithMelee_Params params;
	params.VictimPawn = VictimPawn;
	params.HitCounter = HitCounter;
	params.HitVector = HitVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnDisplayQuicksaveInteractEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnDisplayQuicksaveInteractEvent(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnDisplayQuicksaveInteractEvent");

	UUI_HudWidget_C_OnDisplayQuicksaveInteractEvent_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnQuicksaveHold
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldPercentage                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Released                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnQuicksaveHold(float* HoldPercentage, bool* Released)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnQuicksaveHold");

	UUI_HudWidget_C_OnQuicksaveHold_Params params;
	params.HoldPercentage = HoldPercentage;
	params.Released = Released;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.UpdateGetOffBikeInteractProgress
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::UpdateGetOffBikeInteractProgress(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.UpdateGetOffBikeInteractProgress");

	UUI_HudWidget_C_UpdateGetOffBikeInteractProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.SetBikeGetOffInteractVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::SetBikeGetOffInteractVisible(bool* IsVisible, bool* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.SetBikeGetOffInteractVisible");

	UUI_HudWidget_C_SetBikeGetOffInteractVisible_Params params;
	params.IsVisible = IsVisible;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.GetOffBikeInputDisplayTimer
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::GetOffBikeInputDisplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.GetOffBikeInputDisplayTimer");

	UUI_HudWidget_C_GetOffBikeInputDisplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Ladder Approach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTopLadder                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Ladder_Approach(bool IsTopLadder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Ladder Approach");

	UUI_HudWidget_C_On_Ladder_Approach_Params params;
	params.IsTopLadder = IsTopLadder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Ladder Mount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartingTopRung                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Ladder_Mount(class ABendPawn* Pawn, bool StartingTopRung)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Ladder Mount");

	UUI_HudWidget_C_On_Ladder_Mount_Params params;
	params.Pawn = Pawn;
	params.StartingTopRung = StartingTopRung;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Ladder Leave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTopLadder                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Ladder_Leave(bool IsTopLadder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Ladder Leave");

	UUI_HudWidget_C_On_Ladder_Leave_Params params;
	params.IsTopLadder = IsTopLadder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.WaterBarStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::WaterBarStart(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.WaterBarStart");

	UUI_HudWidget_C_WaterBarStart_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.WaterBarEnd
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::WaterBarEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.WaterBarEnd");

	UUI_HudWidget_C_WaterBarEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.I_RegisterTutorialMulti
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     Tutorial                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::I_RegisterTutorialMulti(class UUI_TutorialPanel_C* Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.I_RegisterTutorialMulti");

	UUI_HudWidget_C_I_RegisterTutorialMulti_Params params;
	params.Tutorial = Tutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.I_DisplayRewardPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendRewardsScreenData  RewardsScreenData              (Parm)

void UUI_HudWidget_C::I_DisplayRewardPanel(const struct FBendRewardsScreenData& RewardsScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.I_DisplayRewardPanel");

	UUI_HudWidget_C_I_DisplayRewardPanel_Params params;
	params.RewardsScreenData = RewardsScreenData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnSurvivalFocusMode
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnSurvivalFocusMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnSurvivalFocusMode");

	UUI_HudWidget_C_OnSurvivalFocusMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnObjectiveAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::OnObjectiveAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnObjectiveAnimFinished");

	UUI_HudWidget_C_OnObjectiveAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.BindSurvivalDifficultyVision
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::BindSurvivalDifficultyVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.BindSurvivalDifficultyVision");

	UUI_HudWidget_C_BindSurvivalDifficultyVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.On Ladder Dismount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeavingTopRung                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::On_Ladder_Dismount(class ABendPawn* Pawn, bool LeavingTopRung)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.On Ladder Dismount");

	UUI_HudWidget_C_On_Ladder_Dismount_Params params;
	params.Pawn = Pawn;
	params.LeavingTopRung = LeavingTopRung;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.OnQuickSwap
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           InSlotIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::OnQuickSwap(int* InSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.OnQuickSwap");

	UUI_HudWidget_C_OnQuickSwap_Params params;
	params.InSlotIndex = InSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.ExecuteUbergraph_UI_HudWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidget_C::ExecuteUbergraph_UI_HudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.ExecuteUbergraph_UI_HudWidget");

	UUI_HudWidget_C_ExecuteUbergraph_UI_HudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::EventMissionTimerComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerComplete__DelegateSignature");

	UUI_HudWidget_C_EventMissionTimerComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudWidget_C::EventMissionTimerHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidget.UI_HudWidget_C.EventMissionTimerHidden__DelegateSignature");

	UUI_HudWidget_C_EventMissionTimerHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
