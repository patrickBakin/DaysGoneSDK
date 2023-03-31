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

// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletProj_Rock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.UserConstructionScript");

	ABend_BulletProj_Rock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_BulletProj_Rock_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature");

	ABend_BulletProj_Rock_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.ExecuteUbergraph_Bend_BulletProj_Rock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletProj_Rock_C::ExecuteUbergraph_Bend_BulletProj_Rock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.ExecuteUbergraph_Bend_BulletProj_Rock");

	ABend_BulletProj_Rock_C_ExecuteUbergraph_Bend_BulletProj_Rock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
