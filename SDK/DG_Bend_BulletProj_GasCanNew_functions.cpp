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

// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletProj_GasCanNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.UserConstructionScript");

	ABend_BulletProj_GasCanNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_BulletProj_GasCanNew_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveHit");

	ABend_BulletProj_GasCanNew_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_BulletProj_GasCanNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveBeginPlay");

	ABend_BulletProj_GasCanNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ExecuteUbergraph_Bend_BulletProj_GasCanNew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletProj_GasCanNew_C::ExecuteUbergraph_Bend_BulletProj_GasCanNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ExecuteUbergraph_Bend_BulletProj_GasCanNew");

	ABend_BulletProj_GasCanNew_C_ExecuteUbergraph_Bend_BulletProj_GasCanNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
