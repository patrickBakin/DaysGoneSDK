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

// Function UI_HudWeapon.UI_HudWeapon_C.GetEquippedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::GetEquippedWeapon(class ABendWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.GetEquippedWeapon");

	UUI_HudWeapon_C_GetEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetQuickUseMedkitProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetQuickUseMedkitProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetQuickUseMedkitProgress");

	UUI_HudWeapon_C_SetQuickUseMedkitProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateDropWeaponListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateDropWeaponListener(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateDropWeaponListener");

	UUI_HudWeapon_C_UpdateDropWeaponListener_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.HandleInputState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::HandleInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.HandleInputState");

	UUI_HudWeapon_C_HandleInputState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SurvivalModeSurvivalVision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SurvivalModeSurvivalVision(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SurvivalModeSurvivalVision");

	UUI_HudWeapon_C_SurvivalModeSurvivalVision_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UUI_HudWeapon_C::DeactivateRing(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRing");

	UUI_HudWeapon_C_DeactivateRing_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ActivateRing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UUI_HudWeapon_C::ActivateRing(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ActivateRing");

	UUI_HudWeapon_C_ActivateRing_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateSuppliesValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::UpdateSuppliesValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateSuppliesValues");

	UUI_HudWeapon_C_UpdateSuppliesValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.Update Survival Mode Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::Update_Survival_Mode_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.Update Survival Mode Visibility");

	UUI_HudWeapon_C_Update_Survival_Mode_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponStats");

	UUI_HudWeapon_C_DisplayWeaponStats_Params params;
	params.State = State;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateQuickSavePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateQuickSavePrompt(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateQuickSavePrompt");

	UUI_HudWeapon_C_UpdateQuickSavePrompt_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayQuicksavePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayQuicksavePrompt(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayQuicksavePrompt");

	UUI_HudWeapon_C_DisplayQuicksavePrompt_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayLadderPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayLadderPrompt(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayLadderPrompt");

	UUI_HudWeapon_C_DisplayLadderPrompt_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateBikeExitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateBikeExitUI(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateBikeExitUI");

	UUI_HudWeapon_C_UpdateBikeExitUI_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayBikeExitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Display                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayBikeExitUI(bool Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayBikeExitUI");

	UUI_HudWeapon_C_DisplayBikeExitUI_Params params;
	params.Display = Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateInlineSkipProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateInlineSkipProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateInlineSkipProgress");

	UUI_HudWeapon_C_UpdateInlineSkipProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayInlineSkipButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayInlineSkipButton(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayInlineSkipButton");

	UUI_HudWeapon_C_DisplayInlineSkipButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DetonateAttemptResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDetonateAttemptResultType> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DetonateAttemptResult(TEnumAsByte<EDetonateAttemptResultType>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DetonateAttemptResult");

	UUI_HudWeapon_C_DetonateAttemptResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateShouldShowHealingCircle
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::UpdateShouldShowHealingCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateShouldShowHealingCircle");

	UUI_HudWeapon_C_UpdateShouldShowHealingCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.CheckWeaponUpgrades
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             BendWeapon                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::CheckWeaponUpgrades(class ABendWeapon* BendWeapon, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.CheckWeaponUpgrades");

	UUI_HudWeapon_C_CheckWeaponUpgrades_Params params;
	params.BendWeapon = BendWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuffs
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::DeactivateBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuffs");

	UUI_HudWeapon_C_DeactivateBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DPadTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::DPadTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DPadTimerUpdate");

	UUI_HudWeapon_C_DPadTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ConsumableButtonHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Released                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::ConsumableButtonHold(float Percentage, bool Released)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ConsumableButtonHold");

	UUI_HudWeapon_C_ConsumableButtonHold_Params params;
	params.Percentage = Percentage;
	params.Released = Released;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DPadInputPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               KeyViaVector                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DPadInputPressed(const struct FVector2D& KeyViaVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DPadInputPressed");

	UUI_HudWeapon_C_DPadInputPressed_Params params;
	params.KeyViaVector = KeyViaVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetAmmoMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetAmmoMeter(int Current, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetAmmoMeter");

	UUI_HudWeapon_C_SetAmmoMeter_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetUnderArmorUILength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BarLength                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetUnderArmorUILength(int BarLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetUnderArmorUILength");

	UUI_HudWeapon_C_SetUnderArmorUILength_Params params;
	params.BarLength = BarLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayAdrenaline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayAdrenaline(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayAdrenaline");

	UUI_HudWeapon_C_DisplayAdrenaline_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetScrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetScrap(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetScrap");

	UUI_HudWeapon_C_SetScrap_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.AddAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryAmmoID>  AmmoID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::AddAmmo(int Count, TEnumAsByte<EInventoryAmmoID> AmmoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.AddAmmo");

	UUI_HudWeapon_C_AddAmmo_Params params;
	params.Count = Count;
	params.AmmoID = AmmoID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayDPadPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayDPadPanel(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayDPadPanel");

	UUI_HudWeapon_C_DisplayDPadPanel_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetBinoculars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetBinoculars(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetBinoculars");

	UUI_HudWeapon_C_SetBinoculars_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetFlashlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetFlashlight(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetFlashlight");

	UUI_HudWeapon_C_SetFlashlight_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetMedkitCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetMedkitCount(int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetMedkitCount");

	UUI_HudWeapon_C_SetMedkitCount_Params params;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudWidget_C*         Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetParent(class UUI_HudWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetParent");

	UUI_HudWeapon_C_SetParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateAttributeAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateAttributeAward(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateAttributeAward");

	UUI_HudWeapon_C_UpdateAttributeAward_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayAttributeAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_BannerType>   AttributeType                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayAttributeAward(bool State, TEnumAsByte<Enum_BannerType> AttributeType, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayAttributeAward");

	UUI_HudWeapon_C_DisplayAttributeAward_Params params;
	params.State = State;
	params.AttributeType = AttributeType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerAttributeType> BuffType                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DeactivateBuff(TEnumAsByte<EPlayerAttributeType> BuffType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DeactivateBuff");

	UUI_HudWeapon_C_DeactivateBuff_Params params;
	params.BuffType = BuffType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ActivateBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerAttributeType> BuffType                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::ActivateBuff(TEnumAsByte<EPlayerAttributeType> BuffType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ActivateBuff");

	UUI_HudWeapon_C_ActivateBuff_Params params;
	params.BuffType = BuffType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.GetAimingDownSights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::GetAimingDownSights(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.GetAimingDownSights");

	UUI_HudWeapon_C_GetAimingDownSights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetAimingDownSights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetAimingDownSights(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetAimingDownSights");

	UUI_HudWeapon_C_SetAimingDownSights_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.UpdateIconDamageState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::UpdateIconDamageState(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.UpdateIconDamageState");

	UUI_HudWeapon_C_UpdateIconDamageState_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.NewXPBonusAward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BonusText                      (Parm)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetReference                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::NewXPBonusAward(class ABendPawn* Target, const struct FText& BonusText, int XPValue, class UWidget** WidgetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.NewXPBonusAward");

	UUI_HudWeapon_C_NewXPBonusAward_Params params;
	params.Target = Target;
	params.BonusText = BonusText;
	params.XPValue = XPValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetReference != nullptr)
		*WidgetReference = params.WidgetReference;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               EnemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetTarget(class ABendPawn* EnemyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetTarget");

	UUI_HudWeapon_C_SetTarget_Params params;
	params.EnemyTarget = EnemyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.NewXPAward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetReference                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::NewXPAward(class ABendPawn* Target, int XPValue, class UWidget** WidgetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.NewXPAward");

	UUI_HudWeapon_C_NewXPAward_Params params;
	params.Target = Target;
	params.XPValue = XPValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetReference != nullptr)
		*WidgetReference = params.WidgetReference;
}


// Function UI_HudWeapon.UI_HudWeapon_C.RemoveHitCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WidgetReference                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::RemoveHitCounter(class UWidget* WidgetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.RemoveHitCounter");

	UUI_HudWeapon_C_RemoveHitCounter_Params params;
	params.WidgetReference = WidgetReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ButtonLabel                    (Parm)
// TEnumAsByte<ESlateVisibility>  State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayWeaponPrompt(TEnumAsByte<EInteractButton> ButtonType, const struct FText& ButtonLabel, TEnumAsByte<ESlateVisibility> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponPrompt");

	UUI_HudWeapon_C_DisplayWeaponPrompt_Params params;
	params.ButtonType = ButtonType;
	params.ButtonLabel = ButtonLabel;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Equipped                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetWeaponHUD(class ABendWeapon* Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponHUD");

	UUI_HudWeapon_C_SetWeaponHUD_Params params;
	params.Equipped = Equipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetHolsteredAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetHolsteredAmmoCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetHolsteredAmmoCount");

	UUI_HudWeapon_C_SetHolsteredAmmoCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.CheckPlayerWeaponState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::CheckPlayerWeaponState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.CheckPlayerWeaponState");

	UUI_HudWeapon_C_CheckPlayerWeaponState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayWeaponInventory(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayWeaponInventory");

	UUI_HudWeapon_C_DisplayWeaponInventory_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.WeaponLayoutType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Weapon_Layouts> Weapon_Type                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::WeaponLayoutType(TEnumAsByte<Enum_Weapon_Layouts> Weapon_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.WeaponLayoutType");

	UUI_HudWeapon_C_WeaponLayoutType_Params params;
	params.Weapon_Type = Weapon_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MeleeHealth                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetAmmo(float MeleeHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetAmmo");

	UUI_HudWeapon_C_SetAmmo_Params params;
	params.MeleeHealth = MeleeHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.Init");

	UUI_HudWeapon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              WeaponIconType                 (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    WeaponIconTypeAsset            (Parm)
// int                            WeaponSlotID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          WeaponDamage                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetWeaponIcon(class UTexture2D* WeaponIconType, TAssetPtr<class UTexture2D> WeaponIconTypeAsset, int WeaponSlotID, float WeaponDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetWeaponIcon");

	UUI_HudWeapon_C_SetWeaponIcon_Params params;
	params.WeaponIconType = WeaponIconType;
	params.WeaponIconTypeAsset = WeaponIconTypeAsset;
	params.WeaponSlotID = WeaponSlotID;
	params.WeaponDamage = WeaponDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlotID                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::SetWeapon(class ABendWeapon* Weapon, int WeaponSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.SetWeapon");

	UUI_HudWeapon_C_SetWeapon_Params params;
	params.Weapon = Weapon;
	params.WeaponSlotID = WeaponSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudWeapon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.Construct");

	UUI_HudWeapon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnAnimationFinished_Event_1");

	UUI_HudWeapon_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.HitEnemyWithMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            HitCounter                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               HitVector                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::HitEnemyWithMelee(class ABendPawn* VictimPawn, int HitCounter, const struct FVector2D& HitVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.HitEnemyWithMelee");

	UUI_HudWeapon_C_HitEnemyWithMelee_Params params;
	params.VictimPawn = VictimPawn;
	params.HitCounter = HitCounter;
	params.HitVector = HitVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponFired_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnWeaponFired_Event_1(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponFired_Event_1");

	UUI_HudWeapon_C_OnWeaponFired_Event_1_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.Tick");

	UUI_HudWeapon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.CheckClosePanel
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::CheckClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.CheckClosePanel");

	UUI_HudWeapon_C_CheckClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ClosePanel
// (BlueprintCallable, BlueprintEvent)

void UUI_HudWeapon_C::ClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ClosePanel");

	UUI_HudWeapon_C_ClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnHideWeaponUIToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideWpnUI                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnHideWeaponUIToggle(bool HideWpnUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnHideWeaponUIToggle");

	UUI_HudWeapon_C_OnHideWeaponUIToggle_Params params;
	params.HideWpnUI = HideWpnUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.CheckParts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeaponPart*         Part                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::CheckParts(class ABendWeapon* Weapon, class ABendWeaponPart* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.CheckParts");

	UUI_HudWeapon_C_CheckParts_Params params;
	params.Weapon = Weapon;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnPostSaveGameLoaded_Event_1");

	UUI_HudWeapon_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnPlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnPlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnPlayerRespawned");

	UUI_HudWeapon_C_OnPlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DisplayHealthAndStamina
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::DisplayHealthAndStamina(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DisplayHealthAndStamina");

	UUI_HudWeapon_C_DisplayHealthAndStamina_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    PickupRef                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnWeaponDropped(class ABendInventoryPickup* PickupRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnWeaponDropped");

	UUI_HudWeapon_C_OnWeaponDropped_Params params;
	params.PickupRef = PickupRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnUpdateDropTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnUpdateDropTimer(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnUpdateDropTimer");

	UUI_HudWeapon_C_OnUpdateDropTimer_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ActivateRingBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UUI_HudWeapon_C::ActivateRingBuff(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ActivateRingBuff");

	UUI_HudWeapon_C_ActivateRingBuff_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRingBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UUI_HudWeapon_C::DeactivateRingBuff(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.DeactivateRingBuff");

	UUI_HudWeapon_C_DeactivateRingBuff_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCStealthRingCountUpdate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnDLCStealthRingCountUpdate_Event_1(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnDLCStealthRingCountUpdate_Event_1");

	UUI_HudWeapon_C_OnDLCStealthRingCountUpdate_Event_1_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCUnderArmorMeleeBuffCountUpdate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnDLCUnderArmorMeleeBuffCountUpdate_Event_1(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnDLCUnderArmorMeleeBuffCountUpdate_Event_1");

	UUI_HudWeapon_C_OnDLCUnderArmorMeleeBuffCountUpdate_Event_1_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.OnDLCBikeFuelEfficiencyUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::OnDLCBikeFuelEfficiencyUpdated_Event_1(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.OnDLCBikeFuelEfficiencyUpdated_Event_1");

	UUI_HudWeapon_C_OnDLCBikeFuelEfficiencyUpdated_Event_1_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudWeapon.UI_HudWeapon_C.ExecuteUbergraph_UI_HudWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudWeapon_C::ExecuteUbergraph_UI_HudWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudWeapon.UI_HudWeapon_C.ExecuteUbergraph_UI_HudWeapon");

	UUI_HudWeapon_C_ExecuteUbergraph_UI_HudWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
