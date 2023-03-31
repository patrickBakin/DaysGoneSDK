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

// Function UI_HudObjective.UI_HudObjective_C.ClearNotifications
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.ClearNotifications");

	UUI_HudObjective_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.SetMaterialTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMI                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::SetMaterialTexture(class UMaterialInstanceDynamic* DMI, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.SetMaterialTexture");

	UUI_HudObjective_C_SetMaterialTexture_Params params;
	params.DMI = DMI;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Update Survival Mode Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::Update_Survival_Mode_Visibility(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Update Survival Mode Visibility");

	UUI_HudObjective_C_Update_Survival_Mode_Visibility_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.PauseAndRemoveForRewardScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Remove                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::PauseAndRemoveForRewardScreen(bool Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.PauseAndRemoveForRewardScreen");

	UUI_HudObjective_C_PauseAndRemoveForRewardScreen_Params params;
	params.Remove = Remove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideMissionFail
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::HideMissionFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideMissionFail");

	UUI_HudObjective_C_HideMissionFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.DisplayMissionFail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Messages                       (Parm)

void UUI_HudObjective_C::DisplayMissionFail(bool State, const struct FText& Messages)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.DisplayMissionFail");

	UUI_HudObjective_C_DisplayMissionFail_Params params;
	params.State = State;
	params.Messages = Messages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideOpenWorldObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::HideOpenWorldObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideOpenWorldObjective");

	UUI_HudObjective_C_HideOpenWorldObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.DisplayOpenWorldObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::DisplayOpenWorldObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.DisplayOpenWorldObjective");

	UUI_HudObjective_C_DisplayOpenWorldObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.PauseObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::PauseObjectiveMeter(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.PauseObjectiveMeter");

	UUI_HudObjective_C_PauseObjectiveMeter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.RemoveObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::RemoveObjectiveMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.RemoveObjectiveMeter");

	UUI_HudObjective_C_RemoveObjectiveMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.UnlockAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::UnlockAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.UnlockAnimationFinished");

	UUI_HudObjective_C_UnlockAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::UpdateObjectiveMeter(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveMeter");

	UUI_HudObjective_C_UpdateObjectiveMeter_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.DisplayObjectiveMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.DisplayObjectiveMeter");

	UUI_HudObjective_C_DisplayObjectiveMeter_Params params;
	params.Type = Type;
	params.Title = Title;
	params.Percent = Percent;
	params.Invert = Invert;
	params.IsHealthBar = IsHealthBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideUnlockObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::HideUnlockObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideUnlockObjective");

	UUI_HudObjective_C_HideUnlockObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.UnlockObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::UnlockObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.UnlockObjective");

	UUI_HudObjective_C_UnlockObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.CancelObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::CancelObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.CancelObjective");

	UUI_HudObjective_C_CancelObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideOverrideObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::HideOverrideObjective(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideOverrideObjective");

	UUI_HudObjective_C_HideOverrideObjective_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.StorePersistantData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::StorePersistantData(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.StorePersistantData");

	UUI_HudObjective_C_StorePersistantData_Params params;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.SetMissionCompleteVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::SetMissionCompleteVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.SetMissionCompleteVisible");

	UUI_HudObjective_C_SetMissionCompleteVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.ObjectiveComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// struct FBendRewardsScreenData  RewardScreenData               (Parm)

void UUI_HudObjective_C::ObjectiveComplete(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.ObjectiveComplete");

	UUI_HudObjective_C_ObjectiveComplete_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.RewardScreenData = RewardScreenData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::UpdateObjectiveData(const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveData");

	UUI_HudObjective_C_UpdateObjectiveData_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.DisplayOverrideObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::DisplayOverrideObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.DisplayOverrideObjective");

	UUI_HudObjective_C_DisplayOverrideObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.TransitionToCurrentObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::TransitionToCurrentObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.TransitionToCurrentObjective");

	UUI_HudObjective_C_TransitionToCurrentObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideCurrentObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::HideCurrentObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideCurrentObjective");

	UUI_HudObjective_C_HideCurrentObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HideBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClearBannervisible             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::HideBanner(bool ClearBannervisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HideBanner");

	UUI_HudObjective_C_HideBanner_Params params;
	params.ClearBannervisible = ClearBannervisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.UpdateObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// bool                           NotNew                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::UpdateObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, bool NotNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.UpdateObjective");

	UUI_HudObjective_C_UpdateObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.NotNew = NotNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.DisplayNewObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HudObjective_C::DisplayNewObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.DisplayNewObjective");

	UUI_HudObjective_C_DisplayNewObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// bool                           Override                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::SetDetails(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, bool Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.SetDetails");

	UUI_HudObjective_C_SetDetails_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.Override = Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Init");

	UUI_HudObjective_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudObjective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Construct");

	UUI_HudObjective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::OverrideTimer1(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.OverrideTimer1");

	UUI_HudObjective_C_OverrideTimer1_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Timeout");

	UUI_HudObjective_C_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::OverrideTimer2(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.OverrideTimer2");

	UUI_HudObjective_C_OverrideTimer2_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::OverrideTimer3(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.OverrideTimer3");

	UUI_HudObjective_C_OverrideTimer3_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::OverrideTimer4(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.OverrideTimer4");

	UUI_HudObjective_C_OverrideTimer4_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::OverrideTimer5(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.OverrideTimer5");

	UUI_HudObjective_C_OverrideTimer5_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Timeout2
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Timeout2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Timeout2");

	UUI_HudObjective_C_Timeout2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Timeout3
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Timeout3()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Timeout3");

	UUI_HudObjective_C_Timeout3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Timeout4
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Timeout4()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Timeout4");

	UUI_HudObjective_C_Timeout4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.Timeout5
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::Timeout5()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.Timeout5");

	UUI_HudObjective_C_Timeout5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.CurrentAnmAnimationFin
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::CurrentAnmAnimationFin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.CurrentAnmAnimationFin");

	UUI_HudObjective_C_CurrentAnmAnimationFin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.HUDAnimAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::HUDAnimAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.HUDAnimAnimationFinished");

	UUI_HudObjective_C_HUDAnimAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.ExecuteUbergraph_UI_HudObjective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudObjective_C::ExecuteUbergraph_UI_HudObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.ExecuteUbergraph_UI_HudObjective");

	UUI_HudObjective_C_ExecuteUbergraph_UI_HudObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudObjective.UI_HudObjective_C.ObjectiveAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudObjective_C::ObjectiveAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudObjective.UI_HudObjective_C.ObjectiveAnimationFinished__DelegateSignature");

	UUI_HudObjective_C_ObjectiveAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
