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

// Function NewtPawn.NewtPawn_C.ActivateObjectiveCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ActivateObjectiveCallout");

	ANewtPawn_C_ActivateObjectiveCallout_Params params;
	params.Category = Category;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function NewtPawn.NewtPawn_C.IsCalloutActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::IsCalloutActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.IsCalloutActive");

	ANewtPawn_C_IsCalloutActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function NewtPawn.NewtPawn_C.GetAwareness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>     Awareness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::GetAwareness(TEnumAsByte<EAIAwareState>* Awareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.GetAwareness");

	ANewtPawn_C_GetAwareness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Awareness != nullptr)
		*Awareness = params.Awareness;
}


// Function NewtPawn.NewtPawn_C.ActivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_CalloutType>  CalloutType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CalloutOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ActivateCallout");

	ANewtPawn_C_ActivateCallout_Params params;
	params.CalloutType = CalloutType;
	params.CalloutOverride = CalloutOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function NewtPawn.NewtPawn_C.DeactivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::DeactivateCallout(bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.DeactivateCallout");

	ANewtPawn_C_DeactivateCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function NewtPawn.NewtPawn_C.SetCalloutPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::SetCalloutPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.SetCalloutPosition");

	ANewtPawn_C_SetCalloutPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.OnFireUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::OnFireUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.OnFireUpdate");

	ANewtPawn_C_OnFireUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANewtPawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ModifyDamage");

	ANewtPawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewtPawn.NewtPawn_C.AwarePassiveUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::AwarePassiveUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.AwarePassiveUpdate");

	ANewtPawn_C_AwarePassiveUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.PlayLastStateTransitionSound
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::PlayLastStateTransitionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.PlayLastStateTransitionSound");

	ANewtPawn_C_PlayLastStateTransitionSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.Semi-AwareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::Semi_AwareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.Semi-AwareUpdate");

	ANewtPawn_C_Semi_AwareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.FrustratedUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::FrustratedUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.FrustratedUpdate");

	ANewtPawn_C_FrustratedUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.EnragedUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::EnragedUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.EnragedUpdate");

	ANewtPawn_C_EnragedUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.NestingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::NestingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.NestingUpdate");

	ANewtPawn_C_NestingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.SetColors");

	ANewtPawn_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.GrapplingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::GrapplingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.GrapplingUpdate");

	ANewtPawn_C_GrapplingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.HandleDamageTypes
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::HandleDamageTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.HandleDamageTypes");

	ANewtPawn_C_HandleDamageTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.UpdateCurrentState
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::UpdateCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.UpdateCurrentState");

	ANewtPawn_C_UpdateCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.StateCheckForAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::StateCheckForAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.StateCheckForAudio");

	ANewtPawn_C_StateCheckForAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.AwareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::AwareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.AwareUpdate");

	ANewtPawn_C_AwareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.LightUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::LightUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.LightUpdate");

	ANewtPawn_C_LightUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.UnawareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::UnawareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.UnawareUpdate");

	ANewtPawn_C_UnawareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.EatingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::EatingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.EatingUpdate");

	ANewtPawn_C_EatingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.CalculateXPGain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ExperienceAwarded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::CalculateXPGain(int* ExperienceAwarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.CalculateXPGain");

	ANewtPawn_C_CalculateXPGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExperienceAwarded != nullptr)
		*ExperienceAwarded = params.ExperienceAwarded;
}


// Function NewtPawn.NewtPawn_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::HandleDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.HandleDamage");

	ANewtPawn_C_HandleDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.UserConstructionScript");

	ANewtPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ANewtPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ReceiveBeginPlay");

	ANewtPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ReceivePointDamage
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

void ANewtPawn_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ReceivePointDamage");

	ANewtPawn_C_ReceivePointDamage_Params params;
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


// Function NewtPawn.NewtPawn_C.OnDied_Event
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

void ANewtPawn_C::OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.OnDied_Event");

	ANewtPawn_C_OnDied_Event_Params params;
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


// Function NewtPawn.NewtPawn_C.OnGrappledBegin_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipButtonEvent                (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::OnGrappledBegin_Event_1(class ABendPawn* Attacker, bool SkipButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.OnGrappledBegin_Event_1");

	ANewtPawn_C_OnGrappledBegin_Event_1_Params params;
	params.Attacker = Attacker;
	params.SkipButtonEvent = SkipButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.NonTablePickedUp
// (BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::NonTablePickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.NonTablePickedUp");

	ANewtPawn_C_NonTablePickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.StatusStartedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStatusEffect*           StatusEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::StatusStartedDelegate_Event_1(class UStatusEffect* StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.StatusStartedDelegate_Event_1");

	ANewtPawn_C_StatusStartedDelegate_Event_1_Params params;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.Complete
// (BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.Complete");

	ANewtPawn_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.SpawnActorPOIGoreBody
// (Event, Public, BlueprintEvent)

void ANewtPawn_C::SpawnActorPOIGoreBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.SpawnActorPOIGoreBody");

	ANewtPawn_C_SpawnActorPOIGoreBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.WillHearThrownNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** ThrownWeapon                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WillHear                       (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.WillHearThrownNoise");

	ANewtPawn_C_WillHearThrownNoise_Params params;
	params.ThrownWeapon = ThrownWeapon;
	params.WillHear = WillHear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ReceiveAnyDamage");

	ANewtPawn_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.OnFocusFadingFinished_Event_1");

	ANewtPawn_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.OnBeingStealthKilledStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               AttackerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.OnBeingStealthKilledStart_Event_1");

	ANewtPawn_C_OnBeingStealthKilledStart_Event_1_Params params;
	params.AttackerPawn = AttackerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.StealthKillCheckForStamina
// (BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::StealthKillCheckForStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.StealthKillCheckForStamina");

	ANewtPawn_C_StealthKillCheckForStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.KillRockHighlightNewtsNow
// (BlueprintCallable, BlueprintEvent)

void ANewtPawn_C::KillRockHighlightNewtsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.KillRockHighlightNewtsNow");

	ANewtPawn_C_KillRockHighlightNewtsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ReceivePossessed");

	ANewtPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.SwarmerAwareOPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::SwarmerAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.SwarmerAwareOPlayer");

	ANewtPawn_C_SwarmerAwareOPlayer_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtPawn.NewtPawn_C.ExecuteUbergraph_NewtPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANewtPawn_C::ExecuteUbergraph_NewtPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtPawn.NewtPawn_C.ExecuteUbergraph_NewtPawn");

	ANewtPawn_C_ExecuteUbergraph_NewtPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
