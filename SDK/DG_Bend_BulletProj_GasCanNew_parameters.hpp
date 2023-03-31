#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.UserConstructionScript
struct ABend_BulletProj_GasCanNew_C_UserConstructionScript_Params
{
};

// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveHit
struct ABend_BulletProj_GasCanNew_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ReceiveBeginPlay
struct ABend_BulletProj_GasCanNew_C_ReceiveBeginPlay_Params
{
};

// Function Bend_BulletProj_GasCanNew.Bend_BulletProj_GasCanNew_C.ExecuteUbergraph_Bend_BulletProj_GasCanNew
struct ABend_BulletProj_GasCanNew_C_ExecuteUbergraph_Bend_BulletProj_GasCanNew_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
