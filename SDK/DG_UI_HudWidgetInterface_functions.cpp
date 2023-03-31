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

// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearAllNotifications
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::ClearAllNotifications(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearAllNotifications");

	UUI_HudWidgetInterface_C_ClearAllNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetExclusions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm, OutParm)

void UUI_HudWidgetInterface_C::GetExclusions(struct FUI_HudVisibilityOptions* Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetExclusions");

	UUI_HudWidgetInterface_C_GetExclusions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exclusions != nullptr)
		*Exclusions = params.Exclusions;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataRows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Rows                           (Parm, OutParm, ZeroConstructor)

void UUI_HudWidgetInterface_C::I_GetUiMarkupDataRows(TArray<struct FName>* Rows)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataRows");

	UUI_HudWidgetInterface_C_I_GetUiMarkupDataRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rows != nullptr)
		*Rows = params.Rows;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataFromRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Row                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FBend_UI_ButtonMarkup   Markup                         (Parm, OutParm)

void UUI_HudWidgetInterface_C::I_GetUiMarkupDataFromRow(const struct FName& Row, struct FBend_UI_ButtonMarkup* Markup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_GetUiMarkupDataFromRow");

	UUI_HudWidgetInterface_C_I_GetUiMarkupDataFromRow_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Markup != nullptr)
		*Markup = params.Markup;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_DisplayRewardPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendRewardsScreenData  RewardsScreenData              (Parm)

void UUI_HudWidgetInterface_C::I_DisplayRewardPanel(const struct FBendRewardsScreenData& RewardsScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_DisplayRewardPanel");

	UUI_HudWidgetInterface_C_I_DisplayRewardPanel_Params params;
	params.RewardsScreenData = RewardsScreenData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_SpawnSimpleTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Tutorial                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::I_SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_SpawnSimpleTutorial");

	UUI_HudWidgetInterface_C_I_SpawnSimpleTutorial_Params params;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tutorial != nullptr)
		*Tutorial = params.Tutorial;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_RegisterTutorialMulti
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     Tutorial                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::I_RegisterTutorialMulti(class UUI_TutorialPanel_C* Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.I_RegisterTutorialMulti");

	UUI_HudWidgetInterface_C_I_RegisterTutorialMulti_Params params;
	params.Tutorial = Tutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayWeaponStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayWeaponStats");

	UUI_HudWidgetInterface_C_DisplayWeaponStats_Params params;
	params.State = State;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateInlineSkipProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::UpdateInlineSkipProgress(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateInlineSkipProgress");

	UUI_HudWidgetInterface_C_UpdateInlineSkipProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayInlineSkipButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayInlineSkipButton(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayInlineSkipButton");

	UUI_HudWidgetInterface_C_DisplayInlineSkipButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::CloseTutorial(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseTutorial");

	UUI_HudWidgetInterface_C_CloseTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateDamagedWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::UpdateDamagedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateDamagedWeapon");

	UUI_HudWidgetInterface_C_UpdateDamagedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateTracking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::UpdateTracking(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateTracking");

	UUI_HudWidgetInterface_C_UpdateTracking_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTracking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayTracking(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTracking");

	UUI_HudWidgetInterface_C_DisplayTracking_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.PauseObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::PauseObjectiveMeter(bool State, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.PauseObjectiveMeter");

	UUI_HudWidgetInterface_C_PauseObjectiveMeter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTrust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrustGained                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayTrust");

	UUI_HudWidgetInterface_C_DisplayTrust_Params params;
	params.TrustGained = TrustGained;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayAttributeAwardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_BannerType>   AttributeType                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayAttributeAwardData(bool State, TEnumAsByte<Enum_BannerType> AttributeType, float Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayAttributeAwardData");

	UUI_HudWidgetInterface_C_DisplayAttributeAwardData_Params params;
	params.State = State;
	params.AttributeType = AttributeType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetCurrentObjectiveDisplayedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::GetCurrentObjectiveDisplayedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetCurrentObjectiveDisplayedIndex");

	UUI_HudWidgetInterface_C_GetCurrentObjectiveDisplayedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::RemoveObjectiveMeter(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjectiveMeter");

	UUI_HudWidgetInterface_C_RemoveObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::UpdateObjectiveMeter(float Percent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjectiveMeter");

	UUI_HudWidgetInterface_C_UpdateObjectiveMeter_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjectiveMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjectiveMeter");

	UUI_HudWidgetInterface_C_DisplayObjectiveMeter_Params params;
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


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveHudState> HUD_State                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// struct FBendRewardsScreenData  RewardScreenData               (Parm)
// bool                           NewData                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, bool NewData, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayObjective");

	UUI_HudWidgetInterface_C_DisplayObjective_Params params;
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


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.AddObjectiveUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// class UHudNotificationItemWidget* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::AddObjectiveUnlocked(const struct FUI_HudNotificationDetails& Details, class UHudNotificationItemWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.AddObjectiveUnlocked");

	UUI_HudWidgetInterface_C_AddObjectiveUnlocked_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRadarVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetRadarVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRadarVisible");

	UUI_HudWidgetInterface_C_SetRadarVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideSurvivalWheel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::HideSurvivalWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideSurvivalWheel");

	UUI_HudWidgetInterface_C_HideSurvivalWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowSurvivalWheel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::ShowSurvivalWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowSurvivalWheel");

	UUI_HudWidgetInterface_C_ShowSurvivalWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRangedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetRangedTarget(class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetRangedTarget");

	UUI_HudWidgetInterface_C_SetRangedTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UHudNotificationItemWidget* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::UpdateObjective(const struct FString& Text, class UHudNotificationItemWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateObjective");

	UUI_HudWidgetInterface_C_UpdateObjective_Params params;
	params.Text = Text;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetMissionPopupQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUI_HudMissionPopupDetails> PopupQueue                     (Parm, OutParm, ZeroConstructor)

void UUI_HudWidgetInterface_C::GetMissionPopupQueue(TArray<struct FUI_HudMissionPopupDetails>* PopupQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.GetMissionPopupQueue");

	UUI_HudWidgetInterface_C_GetMissionPopupQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupQueue != nullptr)
		*PopupQueue = params.PopupQueue;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetMissionInfoPopupProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetMissionInfoPopupProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetMissionInfoPopupProgress");

	UUI_HudWidgetInterface_C_SetMissionInfoPopupProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetBinocularsAiming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetBinocularsAiming(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetBinocularsAiming");

	UUI_HudWidgetInterface_C_SetBinocularsAiming_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::ClearObjectiveMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectiveMeter");

	UUI_HudWidgetInterface_C_ClearObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetObjectiveMeterPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPercent");

	UUI_HudWidgetInterface_C_SetObjectiveMeterPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::SetObjectiveMeterPaused(bool Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.SetObjectiveMeterPaused");

	UUI_HudWidgetInterface_C_SetObjectiveMeterPaused_Params params;
	params.Paused = Paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseLocationPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::CloseLocationPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseLocationPanel");

	UUI_HudWidgetInterface_C_CloseLocationPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseRewardPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::CloseRewardPanel(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CloseRewardPanel");

	UUI_HudWidgetInterface_C_CloseRewardPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectives
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::ClearObjectives(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearObjectives");

	UUI_HudWidgetInterface_C_ClearObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CompleteObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::CompleteObjective(class UHudNotificationItemWidget* Objective, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CompleteObjective");

	UUI_HudWidgetInterface_C_CompleteObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::RemoveObjective(class UHudNotificationItemWidget* Objective, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.RemoveObjective");

	UUI_HudWidgetInterface_C_RemoveObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm)

void UUI_HudWidgetInterface_C::HideHUD(const struct FUI_HudVisibilityOptions& Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.HideHUD");

	UUI_HudWidgetInterface_C_HideHUD_Params params;
	params.Exclusions = Exclusions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudVisibilityOptions Exclusions                     (Parm)

void UUI_HudWidgetInterface_C::ShowHUD(const struct FUI_HudVisibilityOptions& Exclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ShowHUD");

	UUI_HudWidgetInterface_C_ShowHUD_Params params;
	params.Exclusions = Exclusions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CancelNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.CancelNotification");

	UUI_HudWidgetInterface_C_CancelNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplaySimpleTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialSimple_C*    Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CloseInterface                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplaySimpleTutorial(class UUI_TutorialSimple_C* Widget, const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UObject* CloseInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplaySimpleTutorial");

	UUI_HudWidgetInterface_C_DisplaySimpleTutorial_Params params;
	params.Widget = Widget;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;
	params.CloseInterface = CloseInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_HudWidgetInterface_C::DisplayNotification(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayNotification");

	UUI_HudWidgetInterface_C_DisplayNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayMissionInfoPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EUI_RewardType>    RewardType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)
// struct FActorInteractDetails   InteractDetails                (Parm)
// class UObject*                 UtilityObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayMissionInfoPopup");

	UUI_HudWidgetInterface_C_DisplayMissionInfoPopup_Params params;
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


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearLeavingMissionZoneNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWidgetInterface_C::ClearLeavingMissionZoneNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.ClearLeavingMissionZoneNotification");

	UUI_HudWidgetInterface_C_ClearLeavingMissionZoneNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateMeleeMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWidgetInterface_C::UpdateMeleeMeter(bool OwnerIsPlayer, float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.UpdateMeleeMeter");

	UUI_HudWidgetInterface_C_UpdateMeleeMeter_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayLocationPanel
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

void UUI_HudWidgetInterface_C::DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWidgetInterface.UI_HudWidgetInterface_C.DisplayLocationPanel");

	UUI_HudWidgetInterface_C_DisplayLocationPanel_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
