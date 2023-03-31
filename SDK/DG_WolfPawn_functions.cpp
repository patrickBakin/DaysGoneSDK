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

// Function WolfPawn.WolfPawn_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWolfPawn_C::ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function WolfPawn.WolfPawn_C.ModifyDamage");

	AWolfPawn_C_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WolfPawn.WolfPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWolfPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WolfPawn.WolfPawn_C.UserConstructionScript");

	AWolfPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WolfPawn.WolfPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWolfPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WolfPawn.WolfPawn_C.ReceiveBeginPlay");

	AWolfPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WolfPawn.WolfPawn_C.ExecuteUbergraph_WolfPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWolfPawn_C::ExecuteUbergraph_WolfPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WolfPawn.WolfPawn_C.ExecuteUbergraph_WolfPawn");

	AWolfPawn_C_ExecuteUbergraph_WolfPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
