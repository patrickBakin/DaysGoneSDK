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

// Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_RocketProj_RPG_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.UserConstructionScript");

	ABend_RocketProj_RPG_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_135_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_RocketProj_RPG_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_135_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_135_OnProjectileStopDelegate__DelegateSignature");

	ABend_RocketProj_RPG_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_135_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.ExecuteUbergraph_Bend_RocketProj_RPG
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_RocketProj_RPG_C::ExecuteUbergraph_Bend_RocketProj_RPG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_RocketProj_RPG.Bend_RocketProj_RPG_C.ExecuteUbergraph_Bend_RocketProj_RPG");

	ABend_RocketProj_RPG_C_ExecuteUbergraph_Bend_RocketProj_RPG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
