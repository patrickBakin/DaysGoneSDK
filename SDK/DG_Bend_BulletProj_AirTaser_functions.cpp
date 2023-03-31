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

// Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletProj_AirTaser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.UserConstructionScript");

	ABend_BulletProj_AirTaser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_1469_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_BulletProj_AirTaser_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_1469_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_1469_OnProjectileStopDelegate__DelegateSignature");

	ABend_BulletProj_AirTaser_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_1469_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_BulletProj_AirTaser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.ReceiveBeginPlay");

	ABend_BulletProj_AirTaser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.ExecuteUbergraph_Bend_BulletProj_AirTaser
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletProj_AirTaser_C::ExecuteUbergraph_Bend_BulletProj_AirTaser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C.ExecuteUbergraph_Bend_BulletProj_AirTaser");

	ABend_BulletProj_AirTaser_C_ExecuteUbergraph_Bend_BulletProj_AirTaser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
