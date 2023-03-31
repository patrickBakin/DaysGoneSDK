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

// Function BuddyBasePawn.BuddyBasePawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuddyBasePawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.ModifyDamage");

	ABuddyBasePawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuddyBasePawn.BuddyBasePawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuddyBasePawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.UserConstructionScript");

	ABuddyBasePawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.ReceivePossessed");

	ABuddyBasePawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipButtonEvent                (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::BuddyGrappleBegin(class ABendPawn* Attacker, bool SkipButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleBegin");

	ABuddyBasePawn_C_BuddyGrappleBegin_Params params;
	params.Attacker = Attacker;
	params.SkipButtonEvent = SkipButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::BuddyGrappleEnd(class ABendPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.BuddyGrappleEnd");

	ABuddyBasePawn_C_BuddyGrappleEnd_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::CustomEvent_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.CustomEvent_1");

	ABuddyBasePawn_C_CustomEvent_1_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.BuddyFellOffBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::BuddyFellOffBike(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.BuddyFellOffBike");

	ABuddyBasePawn_C_BuddyFellOffBike_Params params;
	params.Character = Character;
	params.Vehicle = Vehicle;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.DelayBuddyFireDeath
// (BlueprintCallable, BlueprintEvent)

void ABuddyBasePawn_C::DelayBuddyFireDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.DelayBuddyFireDeath");

	ABuddyBasePawn_C_DelayBuddyFireDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.OnDied_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::OnDied_Event(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.OnDied_Event");

	ABuddyBasePawn_C_OnDied_Event_Params params;
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


// Function BuddyBasePawn.BuddyBasePawn_C.ExecuteUbergraph_BuddyBasePawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyBasePawn_C::ExecuteUbergraph_BuddyBasePawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.ExecuteUbergraph_BuddyBasePawn");

	ABuddyBasePawn_C_ExecuteUbergraph_BuddyBasePawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyBasePawn_C::OnBuddyGrappleEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleEnd__DelegateSignature");

	ABuddyBasePawn_C_OnBuddyGrappleEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyBasePawn_C::OnBuddyGrappleBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyBasePawn.BuddyBasePawn_C.OnBuddyGrappleBegin__DelegateSignature");

	ABuddyBasePawn_C_OnBuddyGrappleBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
