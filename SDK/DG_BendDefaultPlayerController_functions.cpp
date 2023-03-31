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

// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetCanRideVehicles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanRide                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_SetCanRideVehicles(bool CanRide, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetCanRideVehicles");

	ABendDefaultPlayerController_C_I_SetCanRideVehicles_Params params;
	params.CanRide = CanRide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_GetCanRideVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_GetCanRideVehicle(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_GetCanRideVehicle");

	ABendDefaultPlayerController_C_I_GetCanRideVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerAimVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Scoped                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimRightSide                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_SetPlayerAimVariables(bool Scoped, bool AimRightSide, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerAimVariables");

	ABendDefaultPlayerController_C_I_SetPlayerAimVariables_Params params;
	params.Scoped = Scoped;
	params.AimRightSide = AimRightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerinCinematicMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ON_                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_SetPlayerinCinematicMode(bool ON_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetPlayerinCinematicMode");

	ABendDefaultPlayerController_C_I_SetPlayerinCinematicMode_Params params;
	params.ON_ = ON_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CanKillGrappler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanKill                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::CanKillGrappler(bool* CanKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CanKillGrappler");

	ABendDefaultPlayerController_C_CanKillGrappler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanKill != nullptr)
		*CanKill = params.CanKill;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AutoCompleteGrappleEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AutoComplete                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AutoCompleteGrappleEvent(bool* AutoComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AutoCompleteGrappleEvent");

	ABendDefaultPlayerController_C_AutoCompleteGrappleEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutoComplete != nullptr)
		*AutoComplete = params.AutoComplete;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleAiming
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Toggle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ToggleAiming(bool* Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleAiming");

	ABendDefaultPlayerController_C_ToggleAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Toggle != nullptr)
		*Toggle = params.Toggle;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleSurvivalWheel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Toggle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ToggleSurvivalWheel(bool* Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleSurvivalWheel");

	ABendDefaultPlayerController_C_ToggleSurvivalWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Toggle != nullptr)
		*Toggle = params.Toggle;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AddOnDeathContextualTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AddOnDeathContextualTips(class AController* Killer, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AddOnDeathContextualTips");

	ABendDefaultPlayerController_C_AddOnDeathContextualTips_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HeldExitTheVehicle
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABendDefaultPlayerController_C::HeldExitTheVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.HeldExitTheVehicle");

	ABendDefaultPlayerController_C_HeldExitTheVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayQuickhealSound
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::PlayQuickhealSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayQuickhealSound");

	ABendDefaultPlayerController_C_PlayQuickhealSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReacts
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::AmbushHitReacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReacts");

	ABendDefaultPlayerController_C_AmbushHitReacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreaseAmmoCap
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::IncreaseAmmoCap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreaseAmmoCap");

	ABendDefaultPlayerController_C_IncreaseAmmoCap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetPlayerOnBikeTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInVehicle                    (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::SetPlayerOnBikeTags(bool IsInVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetPlayerOnBikeTags");

	ABendDefaultPlayerController_C_SetPlayerOnBikeTags_Params params;
	params.IsInVehicle = IsInVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ConfigureFocusModeDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ConfigureFocusModeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ConfigureFocusModeDistance");

	ABendDefaultPlayerController_C_ConfigureFocusModeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForFocusEfficiencySkill
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetFocusForFocusEfficiencySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForFocusEfficiencySkill");

	ABendDefaultPlayerController_C_SetFocusForFocusEfficiencySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForJudgeJurySkill
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetFocusForJudgeJurySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetFocusForJudgeJurySkill");

	ABendDefaultPlayerController_C_SetFocusForJudgeJurySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.NeedCounter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABendDefaultPlayerController_C::NeedCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.NeedCounter");

	ABendDefaultPlayerController_C_NeedCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheelAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CloseWeaponWheelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheelAction");

	ABendDefaultPlayerController_C_CloseWeaponWheelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OpenWeaponWheelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromBike                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OpenWeaponWheelAction(bool FromBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OpenWeaponWheelAction");

	ABendDefaultPlayerController_C_OpenWeaponWheelAction_Params params;
	params.FromBike = FromBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HandleAcquiredSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> Acquired_Skill_ID              (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::HandleAcquiredSkills(TEnumAsByte<EInventorySkillID> Acquired_Skill_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.HandleAcquiredSkills");

	ABendDefaultPlayerController_C_HandleAcquiredSkills_Params params;
	params.Acquired_Skill_ID = Acquired_Skill_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkillAcquire_Weak-HandReloading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Skip_Has_Acquired_Check        (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::SkillAcquire_Weak_HandReloading(bool Skip_Has_Acquired_Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkillAcquire_Weak-HandReloading");

	ABendDefaultPlayerController_C_SkillAcquire_Weak_HandReloading_Params params;
	params.Skip_Has_Acquired_Check = Skip_Has_Acquired_Check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreasePlayerAmmoCapacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpgradeAllAmmoTypes            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryAmmoID>  AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeTier_1_4                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FillAmmo                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::IncreasePlayerAmmoCapacity(bool UpgradeAllAmmoTypes, TEnumAsByte<EInventoryAmmoID> AmmoType, int UpgradeTier_1_4, bool FillAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.IncreasePlayerAmmoCapacity");

	ABendDefaultPlayerController_C_IncreasePlayerAmmoCapacity_Params params;
	params.UpgradeAllAmmoTypes = UpgradeAllAmmoTypes;
	params.AmmoType = AmmoType;
	params.UpgradeTier_1_4 = UpgradeTier_1_4;
	params.FillAmmo = FillAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset4
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetBikePartPreset4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset4");

	ABendDefaultPlayerController_C_SetBikePartPreset4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset3
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetBikePartPreset3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset3");

	ABendDefaultPlayerController_C_SetBikePartPreset3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset2
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetBikePartPreset2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset2");

	ABendDefaultPlayerController_C_SetBikePartPreset2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset1
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SetBikePartPreset1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetBikePartPreset1");

	ABendDefaultPlayerController_C_SetBikePartPreset1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckFlashback
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInFlashback                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::CheckFlashback(bool* IsInFlashback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckFlashback");

	ABendDefaultPlayerController_C_CheckFlashback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInFlashback != nullptr)
		*IsInFlashback = params.IsInFlashback;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameNotification
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DisplaySaveGameNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameNotification");

	ABendDefaultPlayerController_C_DisplaySaveGameNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PrintPlayerPosForScreenshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::PrintPlayerPosForScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PrintPlayerPosForScreenshot");

	ABendDefaultPlayerController_C_PrintPlayerPosForScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SimplifyVectorForPrint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor)

void ABendDefaultPlayerController_C::SimplifyVectorForPrint(const struct FVector& InputVector, struct FString* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SimplifyVectorForPrint");

	ABendDefaultPlayerController_C_SimplifyVectorForPrint_Params params;
	params.InputVector = InputVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerPawnTakeScreenshot
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::PlayerPawnTakeScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerPawnTakeScreenshot");

	ABendDefaultPlayerController_C_PlayerPawnTakeScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MarkEnemiesInBinoculars
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::MarkEnemiesInBinoculars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.MarkEnemiesInBinoculars");

	ABendDefaultPlayerController_C_MarkEnemiesInBinoculars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CreateGrappleButtonEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CreateGrappleButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CreateGrappleButtonEvent");

	ABendDefaultPlayerController_C_CreateGrappleButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RestoreButtonEventForNextGrapple
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::RestoreButtonEventForNextGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.RestoreButtonEventForNextGrapple");

	ABendDefaultPlayerController_C_RestoreButtonEventForNextGrapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkipButtonEventForNextGrapple
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SkipButtonEventForNextGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SkipButtonEventForNextGrapple");

	ABendDefaultPlayerController_C_SkipButtonEventForNextGrapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ChooseDeathCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             Damaged_By                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Killers_actor                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killers_Controller             (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ChooseDeathCam(float Damage, const struct FVector& Momentum, class UDamageType* Damaged_By, class AActor* Killers_actor, class AController* Killers_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ChooseDeathCam");

	ABendDefaultPlayerController_C_ChooseDeathCam_Params params;
	params.Damage = Damage;
	params.Momentum = Momentum;
	params.Damaged_By = Damaged_By;
	params.Killers_actor = Killers_actor;
	params.Killers_Controller = Killers_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetDeathCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Turn_On_                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::SetDeathCam(bool Turn_On_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SetDeathCam");

	ABendDefaultPlayerController_C_SetDeathCam_Params params;
	params.Turn_On_ = Turn_On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateStatSoundEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StatIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBendAttribute*          Stat                           (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::UpdateStatSoundEffects(int StatIndex, class UBendAttribute* Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateStatSoundEffects");

	ABendDefaultPlayerController_C_UpdateStatSoundEffects_Params params;
	params.StatIndex = StatIndex;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStatSoundEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::InitStatSoundEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStatSoundEffects");

	ABendDefaultPlayerController_C_InitStatSoundEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UnForceCrouch
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::UnForceCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.UnForceCrouch");

	ABendDefaultPlayerController_C_UnForceCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceCrouch
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ForceCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceCrouch");

	ABendDefaultPlayerController_C_ForceCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayDebugCameraText
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DisplayDebugCameraText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayDebugCameraText");

	ABendDefaultPlayerController_C_DisplayDebugCameraText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleZenMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ToggleZenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleZenMode");

	ABendDefaultPlayerController_C_ToggleZenMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStats
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::InitStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InitStats");

	ABendDefaultPlayerController_C_InitStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.UserConstructionScript");

	ABendDefaultPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusPost_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__FinishedFunc");

	ABendDefaultPlayerController_C_FocusPost_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusPost_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusPost_Timeline__UpdateFunc");

	ABendDefaultPlayerController_C_FocusPost_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusModeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__FinishedFunc");

	ABendDefaultPlayerController_C_FocusModeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusModeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeOut__UpdateFunc");

	ABendDefaultPlayerController_C_FocusModeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__FinishedFunc");

	ABendDefaultPlayerController_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_0__UpdateFunc");

	ABendDefaultPlayerController_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__FinishedFunc");

	ABendDefaultPlayerController_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_1__UpdateFunc");

	ABendDefaultPlayerController_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::GrappleOverlayBlendingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__FinishedFunc");

	ABendDefaultPlayerController_C_GrappleOverlayBlendingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::GrappleOverlayBlendingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleOverlayBlendingTimeline__UpdateFunc");

	ABendDefaultPlayerController_C_GrappleOverlayBlendingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__FinishedFunc");

	ABendDefaultPlayerController_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_3__UpdateFunc");

	ABendDefaultPlayerController_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusFadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__FinishedFunc");

	ABendDefaultPlayerController_C_FocusFadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::FocusFadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusFadeOut__UpdateFunc");

	ABendDefaultPlayerController_C_FocusFadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_Death__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__FinishedFunc");

	ABendDefaultPlayerController_C_Timeline_Death__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_Death__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_Death__UpdateFunc");

	ABendDefaultPlayerController_C_Timeline_Death__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnDied_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__FinishedFunc");

	ABendDefaultPlayerController_C_OnDied_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnDied_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDied_Timeline__UpdateFunc");

	ABendDefaultPlayerController_C_OnDied_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnDamage_TImeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__FinishedFunc");

	ABendDefaultPlayerController_C_OnDamage_TImeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnDamage_TImeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDamage_TImeline__UpdateFunc");

	ABendDefaultPlayerController_C_OnDamage_TImeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnEnemySemiAware_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__FinishedFunc");

	ABendDefaultPlayerController_C_OnEnemySemiAware_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnEnemySemiAware_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemySemiAware_Timeline__UpdateFunc");

	ABendDefaultPlayerController_C_OnEnemySemiAware_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnEnemyAware_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__FinishedFunc");

	ABendDefaultPlayerController_C_OnEnemyAware_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnEnemyAware_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnEnemyAware_Timeline__UpdateFunc");

	ABendDefaultPlayerController_C_OnEnemyAware_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnHide_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__FinishedFunc");

	ABendDefaultPlayerController_C_OnHide_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::OnHide_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHide_Timeline__UpdateFunc");

	ABendDefaultPlayerController_C_OnHide_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__FinishedFunc");

	ABendDefaultPlayerController_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABendDefaultPlayerController_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Timeline_2__UpdateFunc");

	ABendDefaultPlayerController_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121");

	ABendDefaultPlayerController_C_InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_120
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_SprintAction_UniqueObjectNameForCooking_120(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_120");

	ABendDefaultPlayerController_C_InpActEvt_SprintAction_UniqueObjectNameForCooking_120_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_119
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_SprintAction_UniqueObjectNameForCooking_119(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintAction_UniqueObjectNameForCooking_119");

	ABendDefaultPlayerController_C_InpActEvt_SprintAction_UniqueObjectNameForCooking_119_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_118
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_LightToggle_UniqueObjectNameForCooking_118(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_118");

	ABendDefaultPlayerController_C_InpActEvt_LightToggle_UniqueObjectNameForCooking_118_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_117
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_LightToggle_UniqueObjectNameForCooking_117(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_LightToggle_UniqueObjectNameForCooking_117");

	ABendDefaultPlayerController_C_InpActEvt_LightToggle_UniqueObjectNameForCooking_117_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Reload_UniqueObjectNameForCooking_115
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Reload_UniqueObjectNameForCooking_115(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Reload_UniqueObjectNameForCooking_115");

	ABendDefaultPlayerController_C_InpActEvt_Reload_UniqueObjectNameForCooking_115_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114");

	ABendDefaultPlayerController_C_InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113");

	ABendDefaultPlayerController_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112");

	ABendDefaultPlayerController_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_111
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponFire_UniqueObjectNameForCooking_111(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_111");

	ABendDefaultPlayerController_C_InpActEvt_WeaponFire_UniqueObjectNameForCooking_111_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_110
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponFire_UniqueObjectNameForCooking_110(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponFire_UniqueObjectNameForCooking_110");

	ABendDefaultPlayerController_C_InpActEvt_WeaponFire_UniqueObjectNameForCooking_110_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109");

	ABendDefaultPlayerController_C_InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108");

	ABendDefaultPlayerController_C_InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107");

	ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106");

	ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105");

	ABendDefaultPlayerController_C_InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104");

	ABendDefaultPlayerController_C_InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103");

	ABendDefaultPlayerController_C_InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102");

	ABendDefaultPlayerController_C_InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101");

	ABendDefaultPlayerController_C_InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_100
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Crouch_UniqueObjectNameForCooking_100(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_100");

	ABendDefaultPlayerController_C_InpActEvt_Crouch_UniqueObjectNameForCooking_100_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_99
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Crouch_UniqueObjectNameForCooking_99(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Crouch_UniqueObjectNameForCooking_99");

	ABendDefaultPlayerController_C_InpActEvt_Crouch_UniqueObjectNameForCooking_99_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98");

	ABendDefaultPlayerController_C_InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97");

	ABendDefaultPlayerController_C_InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Climb_UniqueObjectNameForCooking_96
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_Climb_UniqueObjectNameForCooking_96(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Climb_UniqueObjectNameForCooking_96");

	ABendDefaultPlayerController_C_InpActEvt_Player_Climb_UniqueObjectNameForCooking_96_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Roll_UniqueObjectNameForCooking_95
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_Roll_UniqueObjectNameForCooking_95(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Roll_UniqueObjectNameForCooking_95");

	ABendDefaultPlayerController_C_InpActEvt_Player_Roll_UniqueObjectNameForCooking_95_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91");

	ABendDefaultPlayerController_C_InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90");

	ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89");

	ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88");

	ABendDefaultPlayerController_C_InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87");

	ABendDefaultPlayerController_C_InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86");

	ABendDefaultPlayerController_C_InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85");

	ABendDefaultPlayerController_C_InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84");

	ABendDefaultPlayerController_C_InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Interact3_UniqueObjectNameForCooking_83
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Interact3_UniqueObjectNameForCooking_83(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Interact3_UniqueObjectNameForCooking_83");

	ABendDefaultPlayerController_C_InpActEvt_Interact3_UniqueObjectNameForCooking_83_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78");

	ABendDefaultPlayerController_C_InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77");

	ABendDefaultPlayerController_C_InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Hyphen_UniqueObjectNameForCooking_68
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Hyphen_UniqueObjectNameForCooking_68(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Hyphen_UniqueObjectNameForCooking_68");

	ABendDefaultPlayerController_C_InpActEvt_Hyphen_UniqueObjectNameForCooking_68_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Zero_UniqueObjectNameForCooking_67
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Zero_UniqueObjectNameForCooking_67(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Zero_UniqueObjectNameForCooking_67");

	ABendDefaultPlayerController_C_InpActEvt_Zero_UniqueObjectNameForCooking_67_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76");

	ABendDefaultPlayerController_C_InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75");

	ABendDefaultPlayerController_C_InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABendDefaultPlayerController_C::InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66");

	ABendDefaultPlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_InRangeOfVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange_                       (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            VehicleRef                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_InRangeOfVehicle(bool InRange_, class AVehiclePawn* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_InRangeOfVehicle");

	ABendDefaultPlayerController_C_I_InRangeOfVehicle_Params params;
	params.InRange_ = InRange_;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DebugFreezeTimeScale
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DebugFreezeTimeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DebugFreezeTimeScale");

	ABendDefaultPlayerController_C_DebugFreezeTimeScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnBeginSwimming
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CustomEvent_OnBeginSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnBeginSwimming");

	ABendDefaultPlayerController_C_CustomEvent_OnBeginSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnEndSwimming
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CustomEvent_OnEndSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CustomEvent_OnEndSwimming");

	ABendDefaultPlayerController_C_CustomEvent_OnEndSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DieFromWater
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DieFromWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DieFromWater");

	ABendDefaultPlayerController_C_DieFromWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_BeginSwimming
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CODE_BeginSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_BeginSwimming");

	ABendDefaultPlayerController_C_CODE_BeginSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_EndSwimming
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CODE_EndSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CODE_EndSwimming");

	ABendDefaultPlayerController_C_CODE_EndSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeEnabled
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::OnPhotoModeEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeEnabled");

	ABendDefaultPlayerController_C_OnPhotoModeEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeDisabled
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::OnPhotoModeDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPhotoModeDisabled");

	ABendDefaultPlayerController_C_OnPhotoModeDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TriggerOutOfBreath
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TriggerOutOfBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TriggerOutOfBreath");

	ABendDefaultPlayerController_C_TriggerOutOfBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateOutOfBreath
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::UpdateOutOfBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateOutOfBreath");

	ABendDefaultPlayerController_C_UpdateOutOfBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModePostProcessHandling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Turn_On_                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::FocusModePostProcessHandling(bool Turn_On_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModePostProcessHandling");

	ABendDefaultPlayerController_C_FocusModePostProcessHandling_Params params;
	params.Turn_On_ = Turn_On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetBikeAim
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ResetBikeAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetBikeAim");

	ABendDefaultPlayerController_C_ResetBikeAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallCrouch
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CallCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallCrouch");

	ABendDefaultPlayerController_C_CallCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SwitchAimSides
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SwitchAimSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SwitchAimSides");

	ABendDefaultPlayerController_C_SwitchAimSides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetInteractableForBike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::I_SetInteractableForBike(bool Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.I_SetInteractableForBike");

	ABendDefaultPlayerController_C_I_SetInteractableForBike_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnPlayerFlashlightOnOff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TurnOn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TurnPlayerFlashlightOnOff(bool* TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnPlayerFlashlightOnOff");

	ABendDefaultPlayerController_C_TurnPlayerFlashlightOnOff_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetWWBikeAim
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ResetWWBikeAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetWWBikeAim");

	ABendDefaultPlayerController_C_ResetWWBikeAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisableWeaponWheelPost
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DisableWeaponWheelPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisableWeaponWheelPost");

	ABendDefaultPlayerController_C_DisableWeaponWheelPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnableWeaponWheelPost
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::EnableWeaponWheelPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnableWeaponWheelPost");

	ABendDefaultPlayerController_C_EnableWeaponWheelPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PerformDodge
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::PerformDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PerformDodge");

	ABendDefaultPlayerController_C_PerformDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Dodge Buffered Input Expired_Copy_Copy
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::Dodge_Buffered_Input_Expired_Copy_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Dodge Buffered Input Expired_Copy_Copy");

	ABendDefaultPlayerController_C_Dodge_Buffered_Input_Expired_Copy_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateFocusMode_NEW
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayExitSound                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::DeactivateFocusMode_NEW(bool* PlayExitSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateFocusMode_NEW");

	ABendDefaultPlayerController_C_DeactivateFocusMode_NEW_Params params;
	params.PlayExitSound = PlayExitSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheel_Blueprint
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CloseWeaponWheel_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseWeaponWheel_Blueprint");

	ABendDefaultPlayerController_C_CloseWeaponWheel_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Melee
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Melee");

	ABendDefaultPlayerController_C_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TryAutoTraversal
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TryAutoTraversal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TryAutoTraversal");

	ABendDefaultPlayerController_C_TryAutoTraversal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateAdrenalineMode
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DeactivateAdrenalineMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateAdrenalineMode");

	ABendDefaultPlayerController_C_DeactivateAdrenalineMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateAdrenalineMode
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ActivateAdrenalineMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateAdrenalineMode");

	ABendDefaultPlayerController_C_ActivateAdrenalineMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetAdrenalineMode
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ResetAdrenalineMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetAdrenalineMode");

	ABendDefaultPlayerController_C_ResetAdrenalineMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DrawThrownWeaponCheck
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DrawThrownWeaponCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DrawThrownWeaponCheck");

	ABendDefaultPlayerController_C_DrawThrownWeaponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateGrappleOverlayEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ActivateGrappleOverlayEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ActivateGrappleOverlayEffect");

	ABendDefaultPlayerController_C_ActivateGrappleOverlayEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateGrappleOverlayEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Instant                        (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::DeactivateGrappleOverlayEffect(bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeactivateGrappleOverlayEffect");

	ABendDefaultPlayerController_C_DeactivateGrappleOverlayEffect_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetFire
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ResetFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ResetFire");

	ABendDefaultPlayerController_C_ResetFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayWeaponReturnedToLocker
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           WeaponTag                      (Parm)
// int*                           AmmoReturned                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::DisplayWeaponReturnedToLocker(struct FGameplayTag* WeaponTag, int* AmmoReturned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplayWeaponReturnedToLocker");

	ABendDefaultPlayerController_C_DisplayWeaponReturnedToLocker_Params params;
	params.WeaponTag = WeaponTag;
	params.AmmoReturned = AmmoReturned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AmbushHitReactTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactTick");

	ABendDefaultPlayerController_C_AmbushHitReactTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::AmbushHitReactEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactEnd");

	ABendDefaultPlayerController_C_AmbushHitReactEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AmbushHitReactBegin(float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactBegin");

	ABendDefaultPlayerController_C_AmbushHitReactBegin_Params params;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDeactivatedSurvivalVision
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerController_C::OnDeactivatedSurvivalVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnDeactivatedSurvivalVision");

	ABendDefaultPlayerController_C_OnDeactivatedSurvivalVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactForceStop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::AmbushHitReactForceStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AmbushHitReactForceStop");

	ABendDefaultPlayerController_C_AmbushHitReactForceStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnOnRockThrowPostProcess
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TurnOnRockThrowPostProcess(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TurnOnRockThrowPostProcess");

	ABendDefaultPlayerController_C_TurnOnRockThrowPostProcess_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MeleeCamFollow
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::MeleeCamFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.MeleeCamFollow");

	ABendDefaultPlayerController_C_MeleeCamFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnActivatedSurvivalVision
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerController_C::OnActivatedSurvivalVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnActivatedSurvivalVision");

	ABendDefaultPlayerController_C_OnActivatedSurvivalVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeTimerUp
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::FocusModeTimerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.FocusModeTimerUp");

	ABendDefaultPlayerController_C_FocusModeTimerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SurvivalVisionDisablePostProcessAndStartTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::SurvivalVisionDisablePostProcessAndStartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SurvivalVisionDisablePostProcessAndStartTimer");

	ABendDefaultPlayerController_C_SurvivalVisionDisablePostProcessAndStartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bFromBike                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnSurvivalWheelPressed(bool* bFromBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelPressed");

	ABendDefaultPlayerController_C_OnSurvivalWheelPressed_Params params;
	params.bFromBike = bFromBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bFromBike                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnSurvivalWheelReleased(bool* bFromBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSurvivalWheelReleased");

	ABendDefaultPlayerController_C_OnSurvivalWheelReleased_Params params;
	params.bFromBike = bFromBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateAfterImagesCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Added                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::UpdateAfterImagesCount(int* Added)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.UpdateAfterImagesCount");

	ABendDefaultPlayerController_C_UpdateAfterImagesCount_Params params;
	params.Added = Added;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceUpdateSurvivalVisionHighlight
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ForceUpdateSurvivalVisionHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ForceUpdateSurvivalVisionHighlight");

	ABendDefaultPlayerController_C_ForceUpdateSurvivalVisionHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.NoBoostTutorialCheck
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::NoBoostTutorialCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.NoBoostTutorialCheck");

	ABendDefaultPlayerController_C_NoBoostTutorialCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnTutorialBoostInputPressed
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerController_C::OnTutorialBoostInputPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnTutorialBoostInputPressed");

	ABendDefaultPlayerController_C_OnTutorialBoostInputPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckSprintSlide
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CheckSprintSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CheckSprintSlide");

	ABendDefaultPlayerController_C_CheckSprintSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38");

	ABendDefaultPlayerController_C_InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleWeaponWheel
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ToggleWeaponWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ToggleWeaponWheel");

	ABendDefaultPlayerController_C_ToggleWeaponWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48");

	ABendDefaultPlayerController_C_InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnDespawnBikeDamageCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Spawn                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::SpawnDespawnBikeDamageCam(bool Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnDespawnBikeDamageCam");

	ABendDefaultPlayerController_C_SpawnDespawnBikeDamageCam_Params params;
	params.Spawn = Spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.HideGrappleIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrappleButtonPressEvent_C* GrappleIcon                    (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::HideGrappleIcon(class AGrappleButtonPressEvent_C* GrappleIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.HideGrappleIcon");

	ABendDefaultPlayerController_C_HideGrappleIcon_Params params;
	params.GrappleIcon = GrappleIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RetryGrappleHide
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::RetryGrappleHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.RetryGrappleHide");

	ABendDefaultPlayerController_C_RetryGrappleHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDie
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

void ABendDefaultPlayerController_C::OnPawnDie(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDie");

	ABendDefaultPlayerController_C_OnPawnDie_Params params;
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


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnPlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerRespawned");

	ABendDefaultPlayerController_C_OnPlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveBeginPlay");

	ABendDefaultPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Stamina
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendAttribute*          Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AttributeChangedDelegate_Stamina(class UBendAttribute* Attribute, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Stamina");

	ABendDefaultPlayerController_C_AttributeChangedDelegate_Stamina_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipButtonEvent                (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnGrappledBegin_Event(class ABendPawn* Attacker, bool SkipButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledBegin_Event");

	ABendDefaultPlayerController_C_OnGrappledBegin_Event_Params params;
	params.Attacker = Attacker;
	params.SkipButtonEvent = SkipButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleButtonPressEventSuccess
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::GrappleButtonPressEventSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.GrappleButtonPressEventSuccess");

	ABendDefaultPlayerController_C_GrappleButtonPressEventSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReBindOnGrappleBegin
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ReBindOnGrappleBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReBindOnGrappleBegin");

	ABendDefaultPlayerController_C_ReBindOnGrappleBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnStabKillBegin(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillBegin");

	ABendDefaultPlayerController_C_OnStabKillBegin_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnStabKillEnded(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnStabKillEnded");

	ABendDefaultPlayerController_C_OnStabKillEnded_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.StabKillSuccess
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::StabKillSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.StabKillSuccess");

	ABendDefaultPlayerController_C_StabKillSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnOnTakeAnyDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::PawnOnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnOnTakeAnyDamage_Event");

	ABendDefaultPlayerController_C_PawnOnTakeAnyDamage_Event_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnDiedSignature__DelegateSignature_Event
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

void ABendDefaultPlayerController_C::PawnDiedSignature__DelegateSignature_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PawnDiedSignature__DelegateSignature_Event");

	ABendDefaultPlayerController_C_PawnDiedSignature__DelegateSignature_Event_Params params;
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


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CauseGrappleFail
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CauseGrappleFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CauseGrappleFail");

	ABendDefaultPlayerController_C_CauseGrappleFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ButtonEventFailure_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::ButtonEventFailure_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ButtonEventFailure_Event_1");

	ABendDefaultPlayerController_C_ButtonEventFailure_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnNewGrappler_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               NewGrappler                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            GrapplerCount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnNewGrappler_Event_1(class ABendPawn* NewGrappler, int GrapplerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnNewGrappler_Event_1");

	ABendDefaultPlayerController_C_OnNewGrappler_Event_1_Params params;
	params.NewGrappler = NewGrappler;
	params.GrapplerCount = GrapplerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRiderStartedExitingVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRiderStartedExitingVehicle_Event_1");

	ABendDefaultPlayerController_C_OnRiderStartedExitingVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveSetNegateDamage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ReceiveSetNegateDamage(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveSetNegateDamage");

	ABendDefaultPlayerController_C_ReceiveSetNegateDamage_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHidingStateChanged_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHiding                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanControl                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnclosedSpace                (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnHidingStateChanged_Event_0_Copy(bool IsHiding, bool CanControl, bool IsEnclosedSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnHidingStateChanged_Event_0_Copy");

	ABendDefaultPlayerController_C_OnHidingStateChanged_Event_0_Copy_Params params;
	params.IsHiding = IsHiding;
	params.CanControl = CanControl;
	params.IsEnclosedSpace = IsEnclosedSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDetectedPlayer_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               DetectingPawn                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AwarenessLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnPawnDetectedPlayer_Event_1(class ABendPawn* DetectingPawn, float AwarenessLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnDetectedPlayer_Event_1");

	ABendDefaultPlayerController_C_OnPawnDetectedPlayer_Event_1_Params params;
	params.DetectingPawn = DetectingPawn;
	params.AwarenessLevel = AwarenessLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUI
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DisplaySaveGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUI");

	ABendDefaultPlayerController_C_DisplaySaveGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSkillAcquired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill*     SkillItem                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnSkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnSkillAcquired");

	ABendDefaultPlayerController_C_OnSkillAcquired_Params params;
	params.SkillID = SkillID;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePostSaveGameLoaded");

	ABendDefaultPlayerController_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledEnded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnGrappledEnded_Event_1(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnGrappledEnded_Event_1");

	ABendDefaultPlayerController_C_OnGrappledEnded_Event_1_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendAttribute*          Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::AttributeChangedDelegate_Focus(class UBendAttribute* Attribute, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.AttributeChangedDelegate_Focus");

	ABendDefaultPlayerController_C_AttributeChangedDelegate_Focus_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverCollectibleDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Collectible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnPlayerDiscoverCollectibleDelegate_Event_1(class UInventoryItemCollectible* Collectible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverCollectibleDelegate_Event_1");

	ABendDefaultPlayerController_C_OnPlayerDiscoverCollectibleDelegate_Event_1_Params params;
	params.Collectible = Collectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverRecipeDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemRecipe*    Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnPlayerDiscoverRecipeDelegate_Event_1(class UInventoryItemRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerDiscoverRecipeDelegate_Event_1");

	ABendDefaultPlayerController_C_OnPlayerDiscoverRecipeDelegate_Event_1_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRecipeCraftable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemRecipe*    Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnRecipeCraftable(class UInventoryItemRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnRecipeCraftable");

	ABendDefaultPlayerController_C_OnRecipeCraftable_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnAttributeChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendAttribute*          Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnAttributeChanged_Event_1(class UBendAttribute* Attribute, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnAttributeChanged_Event_1");

	ABendDefaultPlayerController_C_OnAttributeChanged_Event_1_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadStarted_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::OnPlayerReloadStarted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadStarted_Event_1");

	ABendDefaultPlayerController_C_OnPlayerReloadStarted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.Inventory_UsedForNode
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABendDefaultPlayerController_C::Inventory_UsedForNode(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.Inventory_UsedForNode");

	ABendDefaultPlayerController_C_Inventory_UsedForNode_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadFinished
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::OnPlayerReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPlayerReloadFinished");

	ABendDefaultPlayerController_C_OnPlayerReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceivePreSaveGameLoaded");

	ABendDefaultPlayerController_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUIOnCheckpoint
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::DisplaySaveGameUIOnCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DisplaySaveGameUIOnCheckpoint");

	ABendDefaultPlayerController_C_DisplaySaveGameUIOnCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EscalationStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeConflictEventType> ConflictEventType              (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::EscalationStarted(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> ConflictEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.EscalationStarted");

	ABendDefaultPlayerController_C_EscalationStarted_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.ConflictEventType = ConflictEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderApproachedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTopLadder                    (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::LadderApproachedEvent(bool IsTopLadder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderApproachedEvent");

	ABendDefaultPlayerController_C_LadderApproachedEvent_Params params;
	params.IsTopLadder = IsTopLadder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeaconEnteredLadder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartingTopRung                (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::DeaconEnteredLadder(class ABendPawn* Pawn, bool StartingTopRung)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.DeaconEnteredLadder");

	ABendDefaultPlayerController_C_DeaconEnteredLadder_Params params;
	params.Pawn = Pawn;
	params.StartingTopRung = StartingTopRung;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderTutorialClosed
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LadderTutorialClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LadderTutorialClosed");

	ABendDefaultPlayerController_C_LadderTutorialClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeStarted
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CallPhotoModeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeStarted");

	ABendDefaultPlayerController_C_CallPhotoModeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeEnded
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CallPhotoModeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CallPhotoModeEnded");

	ABendDefaultPlayerController_C_CallPhotoModeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.RecipeTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TutorialKey                    (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::RecipeTutorial(const struct FName& TutorialKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.RecipeTutorial");

	ABendDefaultPlayerController_C_RecipeTutorial_Params params;
	params.TutorialKey = TutorialKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::OnPawnSet(class APawn** InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.OnPawnSet");

	ABendDefaultPlayerController_C_OnPawnSet_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnteredRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERegions>*         Region                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::EnteredRegion(TEnumAsByte<ERegions>* Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.EnteredRegion");

	ABendDefaultPlayerController_C_EnteredRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDied
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDied");

	ABendDefaultPlayerController_C_LightBar_OnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDamage
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_OnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnDamage");

	ABendDefaultPlayerController_C_LightBar_OnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnHide
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_OnHide");

	ABendDefaultPlayerController_C_LightBar_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemySemiAware
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_EnemySemiAware()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemySemiAware");

	ABendDefaultPlayerController_C_LightBar_EnemySemiAware_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyAware
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_EnemyAware()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyAware");

	ABendDefaultPlayerController_C_LightBar_EnemyAware_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyUnaware
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::LightBar_EnemyUnaware()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.LightBar_EnemyUnaware");

	ABendDefaultPlayerController_C_LightBar_EnemyUnaware_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.StopAllLightBar
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::StopAllLightBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.StopAllLightBar");

	ABendDefaultPlayerController_C_StopAllLightBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ReceiveEndPlay");

	ABendDefaultPlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.GivePlayerKillEXP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Experience                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::GivePlayerKillEXP(int* Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.GivePlayerKillEXP");

	ABendDefaultPlayerController_C_GivePlayerKillEXP_Params params;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ShouldSkipButtonEventForNextGrapple
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Skip                           (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ShouldSkipButtonEventForNextGrapple(bool* Skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ShouldSkipButtonEventForNextGrapple");

	ABendDefaultPlayerController_C_ShouldSkipButtonEventForNextGrapple_Params params;
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerHidingUpdate
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::PlayerHidingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.PlayerHidingUpdate");

	ABendDefaultPlayerController_C_PlayerHidingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseRangeEnemyHeadLook
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::CloseRangeEnemyHeadLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.CloseRangeEnemyHeadLook");

	ABendDefaultPlayerController_C_CloseRangeEnemyHeadLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnWeaponFromMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryWeaponID>* WeaponIDToAdd                  (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                CallingMenu                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isWeaponMerchant               (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::SpawnWeaponFromMenu(TEnumAsByte<EInventoryWeaponID>* WeaponIDToAdd, class UWidget** CallingMenu, bool* isWeaponMerchant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.SpawnWeaponFromMenu");

	ABendDefaultPlayerController_C_SpawnWeaponFromMenu_Params params;
	params.WeaponIDToAdd = WeaponIDToAdd;
	params.CallingMenu = CallingMenu;
	params.isWeaponMerchant = isWeaponMerchant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.ExecuteUbergraph_BendDefaultPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::ExecuteUbergraph_BendDefaultPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.ExecuteUbergraph_BendDefaultPlayerController");

	ABendDefaultPlayerController_C_ExecuteUbergraph_BendDefaultPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.MoveForwardPhotoMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::MoveForwardPhotoMode__DelegateSignature(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.MoveForwardPhotoMode__DelegateSignature");

	ABendDefaultPlayerController_C_MoveForwardPhotoMode__DelegateSignature_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_EnemyTagged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendCalloutWidgetComponent* PawnTagged                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_EnemyTagged__DelegateSignature(class UBendCalloutWidgetComponent* PawnTagged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_EnemyTagged__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_EnemyTagged__DelegateSignature_Params params;
	params.PawnTagged = PawnTagged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_CrouchEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchEnd__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_CrouchEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_CrouchBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_CrouchBegin__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_CrouchBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_SprintEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintEnd__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_SprintEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_SprintBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_SprintBegin__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_SprintBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_OpenMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWidgetMenuClass>  Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_OpenMenu__DelegateSignature(TEnumAsByte<EWidgetMenuClass> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_OpenMenu__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_OpenMenu__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_ZenExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenExit__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_ZenExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_ZenEnter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_ZenEnter__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_ZenEnter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_BushHideEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideEnd__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_BushHideEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_BushHideBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_BushHideBegin__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_BushHideBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_FocusEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusEnd__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_FocusEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_FocusBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_FocusBegin__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_FocusBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_GS_EnterRegion__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERegions>          Region                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TelemetryEvent_GS_EnterRegion__DelegateSignature(TEnumAsByte<ERegions> Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_GS_EnterRegion__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_GS_EnterRegion__DelegateSignature_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_LevelUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerController_C::TelemetryEvent_PS_LevelUp__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerController.BendDefaultPlayerController_C.TelemetryEvent_PS_LevelUp__DelegateSignature");

	ABendDefaultPlayerController_C_TelemetryEvent_PS_LevelUp__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
