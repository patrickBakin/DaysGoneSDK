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

// Function Electrocutor.Electrocutor_C.SetFiringProjectile
struct AElectrocutor_C_SetFiringProjectile_Params
{
	class ABend_BulletProj_AirTaser_C*                 FiringProj;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.SetProngVisbility
struct AElectrocutor_C_SetProngVisbility_Params
{
	bool                                               ProngVisibility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.SetActorAttachedTo
struct AElectrocutor_C_SetActorAttachedTo_Params
{
	class AActor*                                      ActorAttachedTo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.RemoveStatusEffect
struct AElectrocutor_C_RemoveStatusEffect_Params
{
};

// Function Electrocutor.Electrocutor_C.CauseStatusEffect
struct AElectrocutor_C_CauseStatusEffect_Params
{
	class AActor*                                      ActorToEffect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.UserConstructionScript
struct AElectrocutor_C_UserConstructionScript_Params
{
};

// Function Electrocutor.Electrocutor_C.ReceiveTick
struct AElectrocutor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.ReceiveBeginPlay
struct AElectrocutor_C_ReceiveBeginPlay_Params
{
};

// Function Electrocutor.Electrocutor_C.BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature
struct AElectrocutor_C_BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Electrocutor.Electrocutor_C.BreakCable
struct AElectrocutor_C_BreakCable_Params
{
};

// Function Electrocutor.Electrocutor_C.ReceiveEndPlay
struct AElectrocutor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.ReceivePostSaveGameLoaded
struct AElectrocutor_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.ReceivePreSaveGameLoaded
struct AElectrocutor_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Electrocutor.Electrocutor_C.ExecuteUbergraph_Electrocutor
struct AElectrocutor_C_ExecuteUbergraph_Electrocutor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
