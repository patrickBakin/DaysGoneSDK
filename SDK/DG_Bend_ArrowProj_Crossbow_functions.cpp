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

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::CheckDLCRings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRings");

	ABend_ArrowProj_Crossbow_C_CheckDLCRings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.SpawnCorrectArrowPickup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::SpawnCorrectArrowPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.SpawnCorrectArrowPickup");

	ABend_ArrowProj_Crossbow_C_SpawnCorrectArrowPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.EnablePickup
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::EnablePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.EnablePickup");

	ABend_ArrowProj_Crossbow_C_EnablePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.UserConstructionScript");

	ABend_ArrowProj_Crossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStopProximityMine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (Parm)
// class ABendPawn*               OwningPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ArrowProj_Crossbow_C::ProjectileStopProximityMine(const struct FHitResult& HitResult, class ABendPawn* OwningPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStopProximityMine");

	ABend_ArrowProj_Crossbow_C_ProjectileStopProximityMine_Params params;
	params.HitResult = HitResult;
	params.OwningPawn = OwningPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_ArrowProj_Crossbow_C::ProjectileStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStop");

	ABend_ArrowProj_Crossbow_C_ProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ReceiveBeginPlay");

	ABend_ArrowProj_Crossbow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.BaseProjectileStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact_Result                  (Parm)

void ABend_ArrowProj_Crossbow_C::BaseProjectileStop(const struct FHitResult& Impact_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.BaseProjectileStop");

	ABend_ArrowProj_Crossbow_C_BaseProjectileStop_Params params;
	params.Impact_Result = Impact_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRingEffectsOnProjectile
// (Event, Public, BlueprintEvent)

void ABend_ArrowProj_Crossbow_C::CheckDLCRingEffectsOnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRingEffectsOnProjectile");

	ABend_ArrowProj_Crossbow_C_CheckDLCRingEffectsOnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ExecuteUbergraph_Bend_ArrowProj_Crossbow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ArrowProj_Crossbow_C::ExecuteUbergraph_Bend_ArrowProj_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ExecuteUbergraph_Bend_ArrowProj_Crossbow");

	ABend_ArrowProj_Crossbow_C_ExecuteUbergraph_Bend_ArrowProj_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
