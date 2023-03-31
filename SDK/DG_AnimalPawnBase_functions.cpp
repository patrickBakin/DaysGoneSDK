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

// Function AnimalPawnBase.AnimalPawnBase_C.ClampGrappleResult
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InResult                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAnimalPawnBase_C::ClampGrappleResult(float* InResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ClampGrappleResult");

	AAnimalPawnBase_C_ClampGrappleResult_Params params;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimalPawnBase.AnimalPawnBase_C.UpdateCurrentState
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::UpdateCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.UpdateCurrentState");

	AAnimalPawnBase_C_UpdateCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.OnFireUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::OnFireUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.OnFireUpdate");

	AAnimalPawnBase_C_OnFireUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.FrustratedUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::FrustratedUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.FrustratedUpdate");

	AAnimalPawnBase_C_FrustratedUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.GrappleUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::GrappleUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.GrappleUpdate");

	AAnimalPawnBase_C_GrappleUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.DrinkingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::DrinkingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.DrinkingUpdate");

	AAnimalPawnBase_C_DrinkingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.EatingUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::EatingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.EatingUpdate");

	AAnimalPawnBase_C_EatingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.UnawareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::UnawareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.UnawareUpdate");

	AAnimalPawnBase_C_UnawareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.SemiawareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::SemiawareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.SemiawareUpdate");

	AAnimalPawnBase_C_SemiawareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.AwareUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::AwareUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.AwareUpdate");

	AAnimalPawnBase_C_AwareUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.NoneUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::NoneUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.NoneUpdate");

	AAnimalPawnBase_C_NoneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.StateCheckForAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::StateCheckForAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.StateCheckForAudio");

	AAnimalPawnBase_C_StateCheckForAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAnimalPawnBase_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ModifyDamage");

	AAnimalPawnBase_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimalPawnBase.AnimalPawnBase_C.SetCalloutPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::SetCalloutPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.SetCalloutPosition");

	AAnimalPawnBase_C_SetCalloutPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.SpawnAndSetupSearchBodyActor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase**      AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      AnimSequenceCrouched           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SubClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAnimalPawnBase_C::SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.SpawnAndSetupSearchBodyActor");

	AAnimalPawnBase_C_SpawnAndSetupSearchBodyActor_Params params;
	params.AnimSequence = AnimSequence;
	params.AnimSequenceCrouched = AnimSequenceCrouched;
	params.SubClass = SubClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimalPawnBase.AnimalPawnBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.UserConstructionScript");

	AAnimalPawnBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.SpawnActorPOIGoreBody
// (Event, Public, BlueprintEvent)

void AAnimalPawnBase_C::SpawnActorPOIGoreBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.SpawnActorPOIGoreBody");

	AAnimalPawnBase_C_SpawnActorPOIGoreBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAnimalPawnBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ReceiveBeginPlay");

	AAnimalPawnBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.AnimalDied
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

void AAnimalPawnBase_C::AnimalDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.AnimalDied");

	AAnimalPawnBase_C_AnimalDied_Params params;
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


// Function AnimalPawnBase.AnimalPawnBase_C.ReceivePointDamage
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

void AAnimalPawnBase_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ReceivePointDamage");

	AAnimalPawnBase_C_ReceivePointDamage_Params params;
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


// Function AnimalPawnBase.AnimalPawnBase_C.OnPickup_Event_1
// (BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::OnPickup_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.OnPickup_Event_1");

	AAnimalPawnBase_C_OnPickup_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.OnInventoryPickup_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)

void AAnimalPawnBase_C::OnInventoryPickup_Event_1(class ABendInventoryPickup* InventoryPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.OnInventoryPickup_Event_1");

	AAnimalPawnBase_C_OnInventoryPickup_Event_1_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.SetupAnimalLootBinds
// (Event, Protected, BlueprintEvent)

void AAnimalPawnBase_C::SetupAnimalLootBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.SetupAnimalLootBinds");

	AAnimalPawnBase_C_SetupAnimalLootBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.WillHearThrownNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** ThrownWeapon                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WillHear                       (Parm, ZeroConstructor, IsPlainOldData)

void AAnimalPawnBase_C::WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.WillHearThrownNoise");

	AAnimalPawnBase_C_WillHearThrownNoise_Params params;
	params.ThrownWeapon = ThrownWeapon;
	params.WillHear = WillHear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAnimalPawnBase_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ReceiveAnyDamage");

	AAnimalPawnBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void AAnimalPawnBase_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.OnFocusFadingFinished_Event_1");

	AAnimalPawnBase_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalPawnBase.AnimalPawnBase_C.ExecuteUbergraph_AnimalPawnBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnimalPawnBase_C::ExecuteUbergraph_AnimalPawnBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalPawnBase.AnimalPawnBase_C.ExecuteUbergraph_AnimalPawnBase");

	AAnimalPawnBase_C_ExecuteUbergraph_AnimalPawnBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
