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

// Function SwarmerPawn.SwarmerPawn_C.ActivateObjectiveCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ActivateObjectiveCallout");

	ASwarmerPawn_C_ActivateObjectiveCallout_Params params;
	params.Category = Category;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function SwarmerPawn.SwarmerPawn_C.IsCalloutActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::IsCalloutActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.IsCalloutActive");

	ASwarmerPawn_C_IsCalloutActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function SwarmerPawn.SwarmerPawn_C.GetAwareness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>     Awareness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::GetAwareness(TEnumAsByte<EAIAwareState>* Awareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.GetAwareness");

	ASwarmerPawn_C_GetAwareness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Awareness != nullptr)
		*Awareness = params.Awareness;
}


// Function SwarmerPawn.SwarmerPawn_C.ActivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_CalloutType>  CalloutType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CalloutOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ActivateCallout");

	ASwarmerPawn_C_ActivateCallout_Params params;
	params.CalloutType = CalloutType;
	params.CalloutOverride = CalloutOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function SwarmerPawn.SwarmerPawn_C.DeactivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::DeactivateCallout(bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.DeactivateCallout");

	ASwarmerPawn_C_DeactivateCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function SwarmerPawn.SwarmerPawn_C.SetCalloutPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::SetCalloutPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.SetCalloutPosition");

	ASwarmerPawn_C_SetCalloutPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.AwareWaitingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::AwareWaitingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.AwareWaitingUpdate");

	ASwarmerPawn_C_AwareWaitingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.OnFireUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::OnFireUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.OnFireUpdate");

	ASwarmerPawn_C_OnFireUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASwarmerPawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ModifyDamage");

	ASwarmerPawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SwarmerPawn.SwarmerPawn_C.ClampGrappleResult
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InResult                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASwarmerPawn_C::ClampGrappleResult(float* InResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ClampGrappleResult");

	ASwarmerPawn_C_ClampGrappleResult_Params params;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SwarmerPawn.SwarmerPawn_C.EquipClaws
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::EquipClaws()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.EquipClaws");

	ASwarmerPawn_C_EquipClaws_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.PlayLastStateTransitionSound
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::PlayLastStateTransitionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.PlayLastStateTransitionSound");

	ASwarmerPawn_C_PlayLastStateTransitionSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.Semi-AwareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::Semi_AwareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.Semi-AwareUpdate");

	ASwarmerPawn_C_Semi_AwareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.FrustratedUpdate 
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::FrustratedUpdate_()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.FrustratedUpdate ");

	ASwarmerPawn_C_FrustratedUpdate__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.EnragedUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::EnragedUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.EnragedUpdate");

	ASwarmerPawn_C_EnragedUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.NestingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::NestingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.NestingUpdate");

	ASwarmerPawn_C_NestingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.GrapplingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::GrapplingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.GrapplingUpdate");

	ASwarmerPawn_C_GrapplingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::HandleDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.HandleDamage");

	ASwarmerPawn_C_HandleDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.NoneUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::NoneUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.NoneUpdate");

	ASwarmerPawn_C_NoneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.UpdateCurrentState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::UpdateCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.UpdateCurrentState");

	ASwarmerPawn_C_UpdateCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.StateCheckForAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::StateCheckForAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.StateCheckForAudio");

	ASwarmerPawn_C_StateCheckForAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.AwareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::AwareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.AwareUpdate");

	ASwarmerPawn_C_AwareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.LightUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::LightUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.LightUpdate");

	ASwarmerPawn_C_LightUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.UnawareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::UnawareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.UnawareUpdate");

	ASwarmerPawn_C_UnawareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.EatingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::EatingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.EatingUpdate");

	ASwarmerPawn_C_EatingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.CalculateXPGain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ExperienceAwarded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::CalculateXPGain(int* ExperienceAwarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.CalculateXPGain");

	ASwarmerPawn_C_CalculateXPGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExperienceAwarded != nullptr)
		*ExperienceAwarded = params.ExperienceAwarded;
}


// Function SwarmerPawn.SwarmerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.UserConstructionScript");

	ASwarmerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASwarmerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ReceiveBeginPlay");

	ASwarmerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ReceivePointDamage
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

void ASwarmerPawn_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ReceivePointDamage");

	ASwarmerPawn_C_ReceivePointDamage_Params params;
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


// Function SwarmerPawn.SwarmerPawn_C.OnDied_Event
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

void ASwarmerPawn_C::OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.OnDied_Event");

	ASwarmerPawn_C_OnDied_Event_Params params;
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


// Function SwarmerPawn.SwarmerPawn_C.Fire Damage Anims
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::Fire_Damage_Anims()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.Fire Damage Anims");

	ASwarmerPawn_C_Fire_Damage_Anims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.AnimComplete
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.AnimComplete");

	ASwarmerPawn_C_AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.AnimFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::AnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.AnimFailed");

	ASwarmerPawn_C_AnimFailed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.OnHeadBlownOff
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** pLimbMesh                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASkeletalMeshActor**     pSeveredLimb                   (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::OnHeadBlownOff(class USkeletalMeshComponent** pLimbMesh, class ASkeletalMeshActor** pSeveredLimb)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.OnHeadBlownOff");

	ASwarmerPawn_C_OnHeadBlownOff_Params params;
	params.pLimbMesh = pLimbMesh;
	params.pSeveredLimb = pSeveredLimb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.SearchedBody
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::SearchedBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.SearchedBody");

	ASwarmerPawn_C_SearchedBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.SpawnActorPOIGoreBody
// (Event, Public, BlueprintEvent)

void ASwarmerPawn_C::SpawnActorPOIGoreBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.SpawnActorPOIGoreBody");

	ASwarmerPawn_C_SpawnActorPOIGoreBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.WillHearThrownNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** ThrownWeapon                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WillHear                       (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.WillHearThrownNoise");

	ASwarmerPawn_C_WillHearThrownNoise_Params params;
	params.ThrownWeapon = ThrownWeapon;
	params.WillHear = WillHear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ReceiveAnyDamage");

	ASwarmerPawn_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.OnFocusFadingFinished_Event_1");

	ASwarmerPawn_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.CatchAnimNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::CatchAnimNotifyMessage(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.CatchAnimNotifyMessage");

	ASwarmerPawn_C_CatchAnimNotifyMessage_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.OnBeingStealthKilledStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               AttackerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.OnBeingStealthKilledStart_Event_1");

	ASwarmerPawn_C_OnBeingStealthKilledStart_Event_1_Params params;
	params.AttackerPawn = AttackerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.StealthKillCheckForStamina
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::StealthKillCheckForStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.StealthKillCheckForStamina");

	ASwarmerPawn_C_StealthKillCheckForStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ReceivePossessed");

	ASwarmerPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.SwarmerAwareOPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::SwarmerAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.SwarmerAwareOPlayer");

	ASwarmerPawn_C_SwarmerAwareOPlayer_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.KillRockHighlightSwarmersNow
// (BlueprintCallable, BlueprintEvent)

void ASwarmerPawn_C::KillRockHighlightSwarmersNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.KillRockHighlightSwarmersNow");

	ASwarmerPawn_C_KillRockHighlightSwarmersNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwarmerPawn.SwarmerPawn_C.ExecuteUbergraph_SwarmerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASwarmerPawn_C::ExecuteUbergraph_SwarmerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwarmerPawn.SwarmerPawn_C.ExecuteUbergraph_SwarmerPawn");

	ASwarmerPawn_C_ExecuteUbergraph_SwarmerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
