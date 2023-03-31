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

// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusic2ndTrackComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::I_GetPlayerMusic2ndTrackComponent(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusic2ndTrackComponent");

	ABendDefaultPlayerPawn_C_I_GetPlayerMusic2ndTrackComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusicComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::I_GetPlayerMusicComponent(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_GetPlayerMusicComponent");

	ABendDefaultPlayerPawn_C_I_GetPlayerMusicComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_SetPlayerTakeFallDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TakeDamage_                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::I_SetPlayerTakeFallDamage(bool TakeDamage_, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_SetPlayerTakeFallDamage");

	ABendDefaultPlayerPawn_C_I_SetPlayerTakeFallDamage_Params params;
	params.TakeDamage_ = TakeDamage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AttachMeleeIconToPawn
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn**              Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AttachPointName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECoolMeleeType>*   MeleeType                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABendButtonPressEventBlueprintSupport* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABendButtonPressEventBlueprintSupport* ABendDefaultPlayerPawn_C::AttachMeleeIconToPawn(class ABendPawn** Target, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, bool* bAutoDestroy, TEnumAsByte<ECoolMeleeType>* MeleeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AttachMeleeIconToPawn");

	ABendDefaultPlayerPawn_C_AttachMeleeIconToPawn_Params params;
	params.Target = Target;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.MeleeType = MeleeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABendDefaultPlayerPawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ModifyDamage");

	ABendDefaultPlayerPawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckTutorials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::CheckTutorials(class UInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckTutorials");

	ABendDefaultPlayerPawn_C_CheckTutorials_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetSurroundedTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::ResetSurroundedTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetSurroundedTutorial");

	ABendDefaultPlayerPawn_C_ResetSurroundedTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetFocusModeSphere
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMeshComponent* ABendDefaultPlayerPawn_C::GetFocusModeSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetFocusModeSphere");

	ABendDefaultPlayerPawn_C_GetFocusModeSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetNativeRefs
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::SetNativeRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetNativeRefs");

	ABendDefaultPlayerPawn_C_SetNativeRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetupMolotovDamageModifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::SetupMolotovDamageModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SetupMolotovDamageModifier");

	ABendDefaultPlayerPawn_C_SetupMolotovDamageModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleInfestationReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendRewardData> FactionRewards                 (Parm, OutParm, ZeroConstructor)

void ABendDefaultPlayerPawn_C::HandleInfestationReward(TArray<struct FBendRewardData>* FactionRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleInfestationReward");

	ABendDefaultPlayerPawn_C_HandleInfestationReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FactionRewards != nullptr)
		*FactionRewards = params.FactionRewards;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FIGHTTHROUGHTHEPAINDamageModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::FIGHTTHROUGHTHEPAINDamageModifier(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FIGHTTHROUGHTHEPAINDamageModifier");

	ABendDefaultPlayerPawn_C_FIGHTTHROUGHTHEPAINDamageModifier_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HasLOS_ForStealthKill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Bend_Pawn_Target               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            RemainingIterations            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasLOS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::HasLOS_ForStealthKill(const struct FVector& StartLocation, class ABendPawn* Bend_Pawn_Target, int RemainingIterations, bool DebugDraw, TArray<class AActor*>* ActorsToIgnore, bool* HasLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HasLOS_ForStealthKill");

	ABendDefaultPlayerPawn_C_HasLOS_ForStealthKill_Params params;
	params.StartLocation = StartLocation;
	params.Bend_Pawn_Target = Bend_Pawn_Target;
	params.RemainingIterations = RemainingIterations;
	params.DebugDraw = DebugDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (HasLOS != nullptr)
		*HasLOS = params.HasLOS;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetWeaponStoppingPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Min_Stopping_Power             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max_Stopping_Power             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NPCMin_Stopping_Power          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NPCMax_Stopping_Power          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::GetWeaponStoppingPower(class AActor* DamageCauser, float* Min_Stopping_Power, float* Max_Stopping_Power, float* NPCMin_Stopping_Power, float* NPCMax_Stopping_Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetWeaponStoppingPower");

	ABendDefaultPlayerPawn_C_GetWeaponStoppingPower_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min_Stopping_Power != nullptr)
		*Min_Stopping_Power = params.Min_Stopping_Power;
	if (Max_Stopping_Power != nullptr)
		*Max_Stopping_Power = params.Max_Stopping_Power;
	if (NPCMin_Stopping_Power != nullptr)
		*NPCMin_Stopping_Power = params.NPCMin_Stopping_Power;
	if (NPCMax_Stopping_Power != nullptr)
		*NPCMax_Stopping_Power = params.NPCMax_Stopping_Power;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetPlayerFlashlight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBendSpotLightComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBendSpotLightComponent* ABendDefaultPlayerPawn_C::GetPlayerFlashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GetPlayerFlashlight");

	ABendDefaultPlayerPawn_C_GetPlayerFlashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayDeacReactHumanDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Dead_Pawn                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::PlayDeacReactHumanDeath(class ABendPawn* Dead_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayDeacReactHumanDeath");

	ABendDefaultPlayerPawn_C_PlayDeacReactHumanDeath_Params params;
	params.Dead_Pawn = Dead_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckAmmoCounts
// (Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::CheckAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckAmmoCounts");

	ABendDefaultPlayerPawn_C_CheckAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.IsPlayerInCombat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCombat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::IsPlayerInCombat(bool* InCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.IsPlayerInCombat");

	ABendDefaultPlayerPawn_C_IsPlayerInCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCombat != nullptr)
		*InCombat = params.InCombat;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UserConstructionScript");

	ABendDefaultPlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackStarted
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnCanDoCoolMeleeAttackStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackStarted");

	ABendDefaultPlayerPawn_C_OnCanDoCoolMeleeAttackStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackEnded
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnCanDoCoolMeleeAttackEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCanDoCoolMeleeAttackEnded");

	ABendDefaultPlayerPawn_C_OnCanDoCoolMeleeAttackEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackSuccessful
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnCoolMeleeAttackSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackSuccessful");

	ABendDefaultPlayerPawn_C_OnCoolMeleeAttackSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackFailed
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnCoolMeleeAttackFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCoolMeleeAttackFailed");

	ABendDefaultPlayerPawn_C_OnCoolMeleeAttackFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HalfHeightAdjust               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaledHalfHeightAdjust         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::K2_OnStartCrouch(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnStartCrouch");

	ABendDefaultPlayerPawn_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HalfHeightAdjust               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaledHalfHeightAdjust         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::K2_OnEndCrouch(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.K2_OnEndCrouch");

	ABendDefaultPlayerPawn_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartSprinting
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnStartSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartSprinting");

	ABendDefaultPlayerPawn_C_OnStartSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopSprinting
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnStopSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopSprinting");

	ABendDefaultPlayerPawn_C_OnStopSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateDeathSource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             Damage_Type                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Damage_Causer                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::UpdateDeathSource(class AController* Killer, class UDamageType* Damage_Type, class AActor* Damage_Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateDeathSource");

	ABendDefaultPlayerPawn_C_UpdateDeathSource_Params params;
	params.Killer = Killer;
	params.Damage_Type = Damage_Type;
	params.Damage_Causer = Damage_Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitFactionVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::InitFactionVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitFactionVO");

	ABendDefaultPlayerPawn_C_InitFactionVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.VO_ToggleOnBike_GlobalRegister
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerOnBike                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::VO_ToggleOnBike_GlobalRegister(bool PlayerOnBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.VO_ToggleOnBike_GlobalRegister");

	ABendDefaultPlayerPawn_C_VO_ToggleOnBike_GlobalRegister_Params params;
	params.PlayerOnBike = PlayerOnBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedEnteringVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedEnteringVehicle_Event_1");

	ABendDefaultPlayerPawn_C_OnRiderStartedEnteringVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedExitingVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnRiderStartedExitingVehicle_Event_1");

	ABendDefaultPlayerPawn_C_OnRiderStartedExitingVehicle_Event_1_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitBikeVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::InitBikeVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitBikeVO");

	ABendDefaultPlayerPawn_C_InitBikeVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TrustTierChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        PreviousTier                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        NewTier                        (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TrustTierChanged(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TrustTierChanged");

	ABendDefaultPlayerPawn_C_TrustTierChanged_Params params;
	params.Encampment = Encampment;
	params.PreviousTier = PreviousTier;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayEnemyKilledVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               VictimPawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::PlayEnemyKilledVO(class ABendPawn* VictimPawn, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayEnemyKilledVO");

	ABendDefaultPlayerPawn_C_PlayEnemyKilledVO_Params params;
	params.VictimPawn = VictimPawn;
	params.DamageType = DamageType;
	params.XPValue = XPValue;
	params.DamageCauser = DamageCauser;
	params.WasCriticalHit = WasCriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitEnemyKilledVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::InitEnemyKilledVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitEnemyKilledVO");

	ABendDefaultPlayerPawn_C_InitEnemyKilledVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetEnemyKilledVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::ResetEnemyKilledVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetEnemyKilledVO");

	ABendDefaultPlayerPawn_C_ResetEnemyKilledVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitExplosiveNearbyVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::InitExplosiveNearbyVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InitExplosiveNearbyVO");

	ABendDefaultPlayerPawn_C_InitExplosiveNearbyVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayExplosiveNearbyVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendProjectile*         Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::PlayExplosiveNearbyVO(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayExplosiveNearbyVO");

	ABendDefaultPlayerPawn_C_PlayExplosiveNearbyVO_Params params;
	params.Projectile = Projectile;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayTrapNearbyVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToExplode                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::PlayTrapNearbyVO(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.PlayTrapNearbyVO");

	ABendDefaultPlayerPawn_C_PlayTrapNearbyVO_Params params;
	params.Trap = Trap;
	params.TimeToExplode = TimeToExplode;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFailedActionBecauseOutOfStamina
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnFailedActionBecauseOutOfStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFailedActionBecauseOutOfStamina");

	ABendDefaultPlayerPawn_C_OnFailedActionBecauseOutOfStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceiveBeginPlay");

	ABendDefaultPlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnDied_Event
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

void ABendDefaultPlayerPawn_C::OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnDied_Event");

	ABendDefaultPlayerPawn_C_OnDied_Event_Params params;
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


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeBegin_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Dodger                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnPairedDodgeBegin_Event_1(class ABendPawn* Dodger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeBegin_Event_1");

	ABendDefaultPlayerPawn_C_OnPairedDodgeBegin_Event_1_Params params;
	params.Dodger = Dodger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeEnded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Dodger                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnPairedDodgeEnded_Event_1(class ABendPawn* Dodger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnPairedDodgeEnded_Event_1");

	ABendDefaultPlayerPawn_C_OnPairedDodgeEnded_Event_1_Params params;
	params.Dodger = Dodger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StabKillSuccess
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::StabKillSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StabKillSuccess");

	ABendDefaultPlayerPawn_C_StabKillSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnBrutalKillBegin_Event(class ABendPawn* Attacker, class ABendPawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillBegin_Event");

	ABendDefaultPlayerPawn_C_OnBrutalKillBegin_Event_Params params;
	params.Attacker = Attacker;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BrutalKillSuccess_Event
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::BrutalKillSuccess_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BrutalKillSuccess_Event");

	ABendDefaultPlayerPawn_C_BrutalKillSuccess_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillEnded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnBrutalKillEnded_Event(class ABendPawn* Attacker, class ABendPawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnBrutalKillEnded_Event");

	ABendDefaultPlayerPawn_C_OnBrutalKillEnded_Event_Params params;
	params.Attacker = Attacker;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSkillAcquired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill*     SkillItem                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnSkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSkillAcquired");

	ABendDefaultPlayerPawn_C_OnSkillAcquired_Params params;
	params.SkillID = SkillID;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DodgeButtonPressed
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::DodgeButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DodgeButtonPressed");

	ABendDefaultPlayerPawn_C_DodgeButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockRushNAttack
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnlockRushNAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockRushNAttack");

	ABendDefaultPlayerPawn_C_UnlockRushNAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.MakeAdrenalineLonger
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::MakeAdrenalineLonger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.MakeAdrenalineLonger");

	ABendDefaultPlayerPawn_C_MakeAdrenalineLonger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockPlayerReversalDirectional
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnlockPlayerReversalDirectional()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockPlayerReversalDirectional");

	ABendDefaultPlayerPawn_C_UnlockPlayerReversalDirectional_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockMakeAmends
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnlockMakeAmends()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockMakeAmends");

	ABendDefaultPlayerPawn_C_UnlockMakeAmends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckSixFeetUnder
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::CheckSixFeetUnder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CheckSixFeetUnder");

	ABendDefaultPlayerPawn_C_CheckSixFeetUnder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockFullThrottle_Skill
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnlockFullThrottle_Skill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnlockFullThrottle_Skill");

	ABendDefaultPlayerPawn_C_UnlockFullThrottle_Skill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryModifiedDelegate_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABendDefaultPlayerPawn_C::OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryModifiedDelegate_Event_1");

	ABendDefaultPlayerPawn_C_OnInventoryModifiedDelegate_Event_1_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCounterAttackSuccessful
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnCounterAttackSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCounterAttackSuccessful");

	ABendDefaultPlayerPawn_C_OnCounterAttackSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSurrounded_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnSurrounded_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSurrounded_Event_1");

	ABendDefaultPlayerPawn_C_OnSurrounded_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnAimStanceChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAimStance>        NewAimStance                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAimStance>        OldAimStance                   (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnAimStanceChanged_Event_1(TEnumAsByte<EAimStance> NewAimStance, TEnumAsByte<EAimStance> OldAimStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnAimStanceChanged_Event_1");

	ABendDefaultPlayerPawn_C_OnAimStanceChanged_Event_1_Params params;
	params.NewAimStance = NewAimStance;
	params.OldAimStance = OldAimStance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InventoryModified
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABendDefaultPlayerPawn_C::InventoryModified(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.InventoryModified");

	ABendDefaultPlayerPawn_C_InventoryModified_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindInventoryModified
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnbindInventoryModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindInventoryModified");

	ABendDefaultPlayerPawn_C_UnbindInventoryModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BreakGrapple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          defaultCompletionPercent       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::BreakGrapple(float defaultCompletionPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.BreakGrapple");

	ABendDefaultPlayerPawn_C_BreakGrapple_Params params;
	params.defaultCompletionPercent = defaultCompletionPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateGrappleEscapeVO
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UpdateGrappleEscapeVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateGrappleEscapeVO");

	ABendDefaultPlayerPawn_C_UpdateGrappleEscapeVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FailedGrapple
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::FailedGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FailedGrapple");

	ABendDefaultPlayerPawn_C_FailedGrapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillInitiatedEvent
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::StealthKillInitiatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillInitiatedEvent");

	ABendDefaultPlayerPawn_C_StealthKillInitiatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampment
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendEncampmentData**    Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::EnteredEncampment(class UBendEncampmentData** Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampment");

	ABendDefaultPlayerPawn_C_EnteredEncampment_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampment
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendEncampmentData**    Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::LeavingEncampment(class UBendEncampmentData** Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampment");

	ABendDefaultPlayerPawn_C_LeavingEncampment_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateEncampmentDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UpdateEncampmentDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UpdateEncampmentDisplay");

	ABendDefaultPlayerPawn_C_UpdateEncampmentDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.NotifyTrustModified
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendEncampmentData**    Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ModificationAmount             (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::NotifyTrustModified(class UBendEncampmentData** Encampment, float* ModificationAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.NotifyTrustModified");

	ABendDefaultPlayerPawn_C_NotifyTrustModified_Params params;
	params.Encampment = Encampment;
	params.ModificationAmount = ModificationAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartAiming
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnStartAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStartAiming");

	ABendDefaultPlayerPawn_C_OnStartAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopAiming
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnStopAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnStopAiming");

	ABendDefaultPlayerPawn_C_OnStopAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetAim
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::ResetAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ResetAim");

	ABendDefaultPlayerPawn_C_ResetAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ReceivePostSaveGameLoaded");

	ABendDefaultPlayerPawn_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnWeaponFired_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnWeaponFired_Event(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnWeaponFired_Event");

	ABendDefaultPlayerPawn_C_OnWeaponFired_Event_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AmmoVOBinds
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::AmmoVOBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AmmoVOBinds");

	ABendDefaultPlayerPawn_C_AmmoVOBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionBegin_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionBegin_MM_Event_1");

	ABendDefaultPlayerPawn_C_OnMissionBegin_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionComplete_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMissionComplete_MM_Event_1");

	ABendDefaultPlayerPawn_C_OnMissionComplete_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindMissionCheckEvents
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::UnbindMissionCheckEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.UnbindMissionCheckEvents");

	ABendDefaultPlayerPawn_C_UnbindMissionCheckEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMeleeCriticalHitSuccessful
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnMeleeCriticalHitSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnMeleeCriticalHitSuccessful");

	ABendDefaultPlayerPawn_C_OnMeleeCriticalHitSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCollectibleDiscovered
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryCollectibleID>* CollectibleID                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnCollectibleDiscovered(TEnumAsByte<EInventoryCollectibleID>* CollectibleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnCollectibleDiscovered");

	ABendDefaultPlayerPawn_C_OnCollectibleDiscovered_Params params;
	params.CollectibleID = CollectibleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnEquipCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon**            EquippedItem                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::OnEquipCompleted(class ABendWeapon** EquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnEquipCompleted");

	ABendDefaultPlayerPawn_C_OnEquipCompleted_Params params;
	params.EquippedItem = EquippedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ActivateAutoKills
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::ActivateAutoKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ActivateAutoKills");

	ABendDefaultPlayerPawn_C_ActivateAutoKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoActivated_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnSlomoActivated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoActivated_Event_1");

	ABendDefaultPlayerPawn_C_OnSlomoActivated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoDeactivated_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnSlomoDeactivated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnSlomoDeactivated_Event_1");

	ABendDefaultPlayerPawn_C_OnSlomoDeactivated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CustomEvent_1");

	ABendDefaultPlayerPawn_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_WearRadioOnChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WearRadio                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::I_WearRadioOnChest(bool WearRadio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.I_WearRadioOnChest");

	ABendDefaultPlayerPawn_C_I_WearRadioOnChest_Params params;
	params.WearRadio = WearRadio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryConsumableItemUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInventoryItemConsumable** Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayEffect**        Effect                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle* GE_Handle                      (Parm)

void ABendDefaultPlayerPawn_C::OnInventoryConsumableItemUsed(class UInventoryItemConsumable** Item, class UGameplayEffect** Effect, float* Duration, struct FActiveGameplayEffectHandle* GE_Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnInventoryConsumableItemUsed");

	ABendDefaultPlayerPawn_C_OnInventoryConsumableItemUsed_Params params;
	params.Item = Item;
	params.Effect = Effect;
	params.Duration = Duration;
	params.GE_Handle = GE_Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HealthComplete
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::HealthComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HealthComplete");

	ABendDefaultPlayerPawn_C_HealthComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StaminaComplete
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::StaminaComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StaminaComplete");

	ABendDefaultPlayerPawn_C_StaminaComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FocusComplete
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::FocusComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FocusComplete");

	ABendDefaultPlayerPawn_C_FocusComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampmentRange
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendEncampmentData**    Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::EnteredEncampmentRange(class UBendEncampmentData** Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.EnteredEncampmentRange");

	ABendDefaultPlayerPawn_C_EnteredEncampmentRange_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampmentRange
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBendEncampmentData**    Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::LeavingEncampmentRange(class UBendEncampmentData** Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.LeavingEncampmentRange");

	ABendDefaultPlayerPawn_C_LeavingEncampmentRange_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CreateStealthKillPrompt
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::CreateStealthKillPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.CreateStealthKillPrompt");

	ABendDefaultPlayerPawn_C_CreateStealthKillPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DestroyStealthKillPrompt
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::DestroyStealthKillPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DestroyStealthKillPrompt");

	ABendDefaultPlayerPawn_C_DestroyStealthKillPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnFocusFadingFinished_Event_1");

	ABendDefaultPlayerPawn_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadFinished
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadFinished");

	ABendDefaultPlayerPawn_C_OnReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadStarted
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.OnReloadStarted");

	ABendDefaultPlayerPawn_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SaveOnEncampmentEnterExit
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::SaveOnEncampmentEnterExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.SaveOnEncampmentEnterExit");

	ABendDefaultPlayerPawn_C_SaveOnEncampmentEnterExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleSpawningForEncampments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::HandleSpawningForEncampments(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleSpawningForEncampments");

	ABendDefaultPlayerPawn_C_HandleSpawningForEncampments_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AskToRecoverStuckVehicle
// (Event, Public, BlueprintEvent)

void ABendDefaultPlayerPawn_C::AskToRecoverStuckVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.AskToRecoverStuckVehicle");

	ABendDefaultPlayerPawn_C_AskToRecoverStuckVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleRecoverMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::HandleRecoverMessage(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.HandleRecoverMessage");

	ABendDefaultPlayerPawn_C_HandleRecoverMessage_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FadeFromBlackStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABendDefaultPlayerPawn_C::FadeFromBlackStart(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.FadeFromBlackStart");

	ABendDefaultPlayerPawn_C_FadeFromBlackStart_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ExecuteUbergraph_BendDefaultPlayerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::ExecuteUbergraph_BendDefaultPlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.ExecuteUbergraph_BendDefaultPlayerPawn");

	ABendDefaultPlayerPawn_C_ExecuteUbergraph_BendDefaultPlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconCounterSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::DeaconCounterSuccess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconCounterSuccess__DelegateSignature");

	ABendDefaultPlayerPawn_C_DeaconCounterSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::GrappleFailed__DelegateSignature(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleFailed__DelegateSignature");

	ABendDefaultPlayerPawn_C_GrappleFailed__DelegateSignature_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_NestClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DestroyedNestID                (Parm, ZeroConstructor)
// class ABendNest*               DestroyedNest                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TelemetryEvent_GS_NestClear__DelegateSignature(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_NestClear__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_GS_NestClear__DelegateSignature_Params params;
	params.DestroyedNestID = DestroyedNestID;
	params.DestroyedNest = DestroyedNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_ExitEncampment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TelemetryEvent_GS_ExitEncampment__DelegateSignature(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_ExitEncampment__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_GS_ExitEncampment__DelegateSignature_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_EnterEncampment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TelemetryEvent_GS_EnterEncampment__DelegateSignature(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_EnterEncampment__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_GS_EnterEncampment__DelegateSignature_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_PS_AutoRegen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::TelemetryEvent_PS_AutoRegen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_PS_AutoRegen__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_PS_AutoRegen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Infestation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendNestingZoneActor*   ZoneActor                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TelemetryEvent_GS_Infestation__DelegateSignature(class ABendNestingZoneActor* ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Infestation__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_GS_Infestation__DelegateSignature_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Collectible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryCollectibleID> CollectibleID                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::TelemetryEvent_GS_Collectible__DelegateSignature(TEnumAsByte<EInventoryCollectibleID> CollectibleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.TelemetryEvent_GS_Collectible__DelegateSignature");

	ABendDefaultPlayerPawn_C_TelemetryEvent_GS_Collectible__DelegateSignature_Params params;
	params.CollectibleID = CollectibleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::StealthKillBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.StealthKillBegin__DelegateSignature");

	ABendDefaultPlayerPawn_C_StealthKillBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleBroken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultPlayerPawn_C::GrappleBroken__DelegateSignature(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.GrappleBroken__DelegateSignature");

	ABendDefaultPlayerPawn_C_GrappleBroken__DelegateSignature_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconDiedDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendDefaultPlayerPawn_C::DeaconDiedDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultPlayerPawn.BendDefaultPlayerPawn_C.DeaconDiedDispatch__DelegateSignature");

	ABendDefaultPlayerPawn_C_DeaconDiedDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
