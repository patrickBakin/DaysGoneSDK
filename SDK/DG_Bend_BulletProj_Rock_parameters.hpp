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

// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.UserConstructionScript
struct ABend_BulletProj_Rock_C_UserConstructionScript_Params
{
};

// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature
struct ABend_BulletProj_Rock_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_BulletProj_Rock.Bend_BulletProj_Rock_C.ExecuteUbergraph_Bend_BulletProj_Rock
struct ABend_BulletProj_Rock_C_ExecuteUbergraph_Bend_BulletProj_Rock_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
