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

// Function HumanBasePawn.HumanBasePawn_C.UpdateCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OffScreen                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::UpdateCallout(bool OffScreen, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.UpdateCallout");

	AHumanBasePawn_C_UpdateCallout_Params params;
	params.OffScreen = OffScreen;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.SetVolumetricMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::SetVolumetricMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.SetVolumetricMaterial");

	AHumanBasePawn_C_SetVolumetricMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.GetNumberOfDroppedItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num_Items_Dropped              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::GetNumberOfDroppedItems(int* Num_Items_Dropped)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.GetNumberOfDroppedItems");

	AHumanBasePawn_C_GetNumberOfDroppedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num_Items_Dropped != nullptr)
		*Num_Items_Dropped = params.Num_Items_Dropped;
}


// Function HumanBasePawn.HumanBasePawn_C.GetLootAnimations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*       Search_Animation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Crouched_Search_Animation      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::GetLootAnimations(class UAnimSequenceBase** Search_Animation, class UAnimSequenceBase** Crouched_Search_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.GetLootAnimations");

	AHumanBasePawn_C_GetLootAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Search_Animation != nullptr)
		*Search_Animation = params.Search_Animation;
	if (Crouched_Search_Animation != nullptr)
		*Crouched_Search_Animation = params.Crouched_Search_Animation;
}


// Function HumanBasePawn.HumanBasePawn_C.ClampGrappleResult
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InResult                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanBasePawn_C::ClampGrappleResult(float* InResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ClampGrappleResult");

	AHumanBasePawn_C_ClampGrappleResult_Params params;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HumanBasePawn.HumanBasePawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanBasePawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ModifyDamage");

	AHumanBasePawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HumanBasePawn.HumanBasePawn_C.SetCalloutPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::SetCalloutPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.SetCalloutPosition");

	AHumanBasePawn_C_SetCalloutPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.DisableFireAnims
// (Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::DisableFireAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.DisableFireAnims");

	AHumanBasePawn_C_DisableFireAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.IsPawnInCombat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCombat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::IsPawnInCombat(bool* InCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.IsPawnInCombat");

	AHumanBasePawn_C_IsPawnInCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCombat != nullptr)
		*InCombat = params.InCombat;
}


// Function HumanBasePawn.HumanBasePawn_C.TriggerUpperBodyHitReaction
// (Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::TriggerUpperBodyHitReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.TriggerUpperBodyHitReaction");

	AHumanBasePawn_C_TriggerUpperBodyHitReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.TriggerFullBodyHitReaction
// (Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::TriggerFullBodyHitReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.TriggerFullBodyHitReaction");

	AHumanBasePawn_C_TriggerFullBodyHitReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::HandleDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.HandleDamage");

	AHumanBasePawn_C_HandleDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.CalculateIfCriticalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bone_Name                      (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             Damage_Type                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::CalculateIfCriticalHit(const struct FName& Bone_Name, class UDamageType* Damage_Type, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.CalculateIfCriticalHit");

	AHumanBasePawn_C_CalculateIfCriticalHit_Params params;
	params.Bone_Name = Bone_Name;
	params.Damage_Type = Damage_Type;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.CalculateXPGain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ExperienceEarned               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::CalculateXPGain(int* ExperienceEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.CalculateXPGain");

	AHumanBasePawn_C_CalculateXPGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExperienceEarned != nullptr)
		*ExperienceEarned = params.ExperienceEarned;
}


// Function HumanBasePawn.HumanBasePawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.UserConstructionScript");

	AHumanBasePawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.VO_LowHealth
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::VO_LowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.VO_LowHealth");

	AHumanBasePawn_C_VO_LowHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.VO_DeaconDiedNearby
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::VO_DeaconDiedNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.VO_DeaconDiedNearby");

	AHumanBasePawn_C_VO_DeaconDiedNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.VO_DeathEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             Damage_Type                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Damage_Causer                  (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::VO_DeathEvent(class AController* Killer, class UDamageType* Damage_Type, class AActor* Damage_Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.VO_DeathEvent");

	AHumanBasePawn_C_VO_DeathEvent_Params params;
	params.Killer = Killer;
	params.Damage_Type = Damage_Type;
	params.Damage_Causer = Damage_Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.WeatherVOCDExpired
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::WeatherVOCDExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.WeatherVOCDExpired");

	AHumanBasePawn_C_WeatherVOCDExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.VO_Weather
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::VO_Weather()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.VO_Weather");

	AHumanBasePawn_C_VO_Weather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnPlayerPawnDied
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

void AHumanBasePawn_C::OnPlayerPawnDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnPlayerPawnDied");

	AHumanBasePawn_C_OnPlayerPawnDied_Params params;
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


// Function HumanBasePawn.HumanBasePawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHumanBasePawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ReceiveBeginPlay");

	AHumanBasePawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnDied_Event
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

void AHumanBasePawn_C::OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnDied_Event");

	AHumanBasePawn_C_OnDied_Event_Params params;
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


// Function HumanBasePawn.HumanBasePawn_C.CalculateCriticalHit
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABendProjectile**        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::CalculateCriticalHit(struct FName* BoneName, class UDamageType** DamageType, class ABendProjectile** Projectile, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.CalculateCriticalHit");

	AHumanBasePawn_C_CalculateCriticalHit_Params params;
	params.BoneName = BoneName;
	params.DamageType = DamageType;
	params.Projectile = Projectile;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ReceivePointDamage");

	AHumanBasePawn_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnGrappledBegin_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipButtonEvent                (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::OnGrappledBegin_Event_1(class ABendPawn* Attacker, bool SkipButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnGrappledBegin_Event_1");

	AHumanBasePawn_C_OnGrappledBegin_Event_1_Params params;
	params.Attacker = Attacker;
	params.SkipButtonEvent = SkipButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.Fire Damage Anims
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::Fire_Damage_Anims()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.Fire Damage Anims");

	AHumanBasePawn_C_Fire_Damage_Anims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ReceiveEndPlay");

	AHumanBasePawn_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnExitStunState
// (Event, Public, BlueprintEvent)

void AHumanBasePawn_C::OnExitStunState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnExitStunState");

	AHumanBasePawn_C_OnExitStunState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnPickup_Event_1
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::OnPickup_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnPickup_Event_1");

	AHumanBasePawn_C_OnPickup_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.StartTimeDilation
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::StartTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.StartTimeDilation");

	AHumanBasePawn_C_StartTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.DialtionStep
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::DialtionStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.DialtionStep");

	AHumanBasePawn_C_DialtionStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.StopTimer
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.StopTimer");

	AHumanBasePawn_C_StopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.SpawnActorPOIGoreBody
// (Event, Public, BlueprintEvent)

void AHumanBasePawn_C::SpawnActorPOIGoreBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.SpawnActorPOIGoreBody");

	AHumanBasePawn_C_SpawnActorPOIGoreBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.WillHearThrownNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** ThrownWeapon                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WillHear                       (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.WillHearThrownNoise");

	AHumanBasePawn_C_WillHearThrownNoise_Params params;
	params.ThrownWeapon = ThrownWeapon;
	params.WillHear = WillHear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.HeavyWeaponCheck
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::HeavyWeaponCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.HeavyWeaponCheck");

	AHumanBasePawn_C_HeavyWeaponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ReceiveAnyDamage");

	AHumanBasePawn_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ReceivePossessed");

	AHumanBasePawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.TrophyCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            TrophyTagName                  (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::TrophyCount(const struct FGameplayTag& TrophyTagName, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.TrophyCount");

	AHumanBasePawn_C_TrophyCount_Params params;
	params.TrophyTagName = TrophyTagName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.Event_OnAngleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::Event_OnAngleChanged(float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.Event_OnAngleChanged");

	AHumanBasePawn_C_Event_OnAngleChanged_Params params;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.Event_OnOffScreenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OffScreen                      (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::Event_OnOffScreenChanged(bool OffScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.Event_OnOffScreenChanged");

	AHumanBasePawn_C_Event_OnOffScreenChanged_Params params;
	params.OffScreen = OffScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnFocusFadingFinished_Event_1");

	AHumanBasePawn_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.SpawnActorSearchBody
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NumItemSpawns                  (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::SpawnActorSearchBody(int* NumItemSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.SpawnActorSearchBody");

	AHumanBasePawn_C_SpawnActorSearchBody_Params params;
	params.NumItemSpawns = NumItemSpawns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.CatchAnimNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::CatchAnimNotifyMessage(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.CatchAnimNotifyMessage");

	AHumanBasePawn_C_CatchAnimNotifyMessage_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.OnBeingStealthKilledStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               AttackerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.OnBeingStealthKilledStart_Event_1");

	AHumanBasePawn_C_OnBeingStealthKilledStart_Event_1_Params params;
	params.AttackerPawn = AttackerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.StealthKillCheckForStamina
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::StealthKillCheckForStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.StealthKillCheckForStamina");

	AHumanBasePawn_C_StealthKillCheckForStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.DudeAwareOPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::DudeAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.DudeAwareOPlayer");

	AHumanBasePawn_C_DudeAwareOPlayer_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.KillRockHighlightHumansNow
// (BlueprintCallable, BlueprintEvent)

void AHumanBasePawn_C::KillRockHighlightHumansNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.KillRockHighlightHumansNow");

	AHumanBasePawn_C_KillRockHighlightHumansNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBasePawn.HumanBasePawn_C.ExecuteUbergraph_HumanBasePawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBasePawn_C::ExecuteUbergraph_HumanBasePawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBasePawn.HumanBasePawn_C.ExecuteUbergraph_HumanBasePawn");

	AHumanBasePawn_C_ExecuteUbergraph_HumanBasePawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
