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

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.UserConstructionScript
struct ABP_SpawnedInGasCan_C_UserConstructionScript_Params
{
};

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature
struct ABP_SpawnedInGasCan_C_BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ObjectBlownUp
struct ABP_SpawnedInGasCan_C_ObjectBlownUp_Params
{
};

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ReceivePreSaveGameLoaded
struct ABP_SpawnedInGasCan_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature
struct ABP_SpawnedInGasCan_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ExecuteUbergraph_BP_SpawnedInGasCan
struct ABP_SpawnedInGasCan_C_ExecuteUbergraph_BP_SpawnedInGasCan_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
