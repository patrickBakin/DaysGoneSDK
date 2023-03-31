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

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.UserConstructionScript
struct AFakeFlarePlaceholder_C_UserConstructionScript_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ReceiveBeginPlay
struct AFakeFlarePlaceholder_C_ReceiveBeginPlay_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.AfterFallToGround
struct AFakeFlarePlaceholder_C_AfterFallToGround_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffFireEffects
struct AFakeFlarePlaceholder_C_TurnOffFireEffects_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature
struct AFakeFlarePlaceholder_C_BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature
struct AFakeFlarePlaceholder_C_BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOnRig
struct AFakeFlarePlaceholder_C_TurnOnRig_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffRig
struct AFakeFlarePlaceholder_C_TurnOffRig_Params
{
};

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ExecuteUbergraph_FakeFlarePlaceholder
struct AFakeFlarePlaceholder_C_ExecuteUbergraph_FakeFlarePlaceholder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
