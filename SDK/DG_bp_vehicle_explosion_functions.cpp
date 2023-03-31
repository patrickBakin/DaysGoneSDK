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

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_vehicle_explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.UserConstructionScript");

	Abp_vehicle_explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void Abp_vehicle_explosion_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveAnyDamage");

	Abp_vehicle_explosion_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abp_vehicle_explosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveBeginPlay");

	Abp_vehicle_explosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.On Exploded
// (BlueprintCallable, BlueprintEvent)

void Abp_vehicle_explosion_C::On_Exploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.On Exploded");

	Abp_vehicle_explosion_C_On_Exploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.HandleUsedWhenstreamIn
// (BlueprintCallable, BlueprintEvent)

void Abp_vehicle_explosion_C::HandleUsedWhenstreamIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.HandleUsedWhenstreamIn");

	Abp_vehicle_explosion_C_HandleUsedWhenstreamIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ExecuteUbergraph_bp_vehicle_explosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_vehicle_explosion_C::ExecuteUbergraph_bp_vehicle_explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.ExecuteUbergraph_bp_vehicle_explosion");

	Abp_vehicle_explosion_C_ExecuteUbergraph_bp_vehicle_explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_vehicle_explosion.bp_vehicle_explosion_C.DestructibleExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Abp_vehicle_explosion_C::DestructibleExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_vehicle_explosion.bp_vehicle_explosion_C.DestructibleExploded__DelegateSignature");

	Abp_vehicle_explosion_C_DestructibleExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
