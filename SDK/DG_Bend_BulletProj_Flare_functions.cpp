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

// Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletProj_Flare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.UserConstructionScript");

	ABend_BulletProj_Flare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_558_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_BulletProj_Flare_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_558_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_558_OnProjectileStopDelegate__DelegateSignature");

	ABend_BulletProj_Flare_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_558_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.OnProjectileStopCompleted
// (BlueprintCallable, BlueprintEvent)

void ABend_BulletProj_Flare_C::OnProjectileStopCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.OnProjectileStopCompleted");

	ABend_BulletProj_Flare_C_OnProjectileStopCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.ForceExplodeManual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletProj_Flare_C::ForceExplodeManual(class AController** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.ForceExplodeManual");

	ABend_BulletProj_Flare_C_ForceExplodeManual_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.ExecuteUbergraph_Bend_BulletProj_Flare
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletProj_Flare_C::ExecuteUbergraph_Bend_BulletProj_Flare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Flare.Bend_BulletProj_Flare_C.ExecuteUbergraph_Bend_BulletProj_Flare");

	ABend_BulletProj_Flare_C_ExecuteUbergraph_Bend_BulletProj_Flare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
