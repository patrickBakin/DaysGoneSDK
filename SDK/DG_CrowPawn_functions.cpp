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

// Function CrowPawn.CrowPawn_C.SpawnAndSetupSearchBodyActor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase**      AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      AnimSequenceCrouched           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SubClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ACrowPawn_C::SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.SpawnAndSetupSearchBodyActor");

	ACrowPawn_C_SpawnAndSetupSearchBodyActor_Params params;
	params.AnimSequence = AnimSequence;
	params.AnimSequenceCrouched = AnimSequenceCrouched;
	params.SubClass = SubClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrowPawn.CrowPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACrowPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.UserConstructionScript");

	ACrowPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrowPawn.CrowPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACrowPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.ReceiveBeginPlay");

	ACrowPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrowPawn.CrowPawn_C.Died
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

void ACrowPawn_C::Died(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.Died");

	ACrowPawn_C_Died_Params params;
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


// Function CrowPawn.CrowPawn_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrowPawn_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.ReceiveAnyDamage");

	ACrowPawn_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrowPawn.CrowPawn_C.SetupAnimalLootBinds
// (Event, Protected, BlueprintEvent)

void ACrowPawn_C::SetupAnimalLootBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.SetupAnimalLootBinds");

	ACrowPawn_C_SetupAnimalLootBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrowPawn.CrowPawn_C.ExecuteUbergraph_CrowPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrowPawn_C::ExecuteUbergraph_CrowPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrowPawn.CrowPawn_C.ExecuteUbergraph_CrowPawn");

	ACrowPawn_C_ExecuteUbergraph_CrowPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
