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

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalPainAmt
struct UAnimNotify_VocalEvent_C_RandomVocalPainAmt_Params
{
	unsigned char                                      RandByte;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAttackExertAmt
struct UAnimNotify_VocalEvent_C_RandomVocalAttackExertAmt_Params
{
	unsigned char                                      RandByte;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalSniffAmt
struct UAnimNotify_VocalEvent_C_RandomVocalSniffAmt_Params
{
	unsigned char                                      RandByte;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalScreamAmt
struct UAnimNotify_VocalEvent_C_RandomVocalScreamAmt_Params
{
	unsigned char                                      RandByte;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalDeathAmt
struct UAnimNotify_VocalEvent_C_RandomVocalDeathAmt_Params
{
	unsigned char                                      RandByte;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.TriggerFaceAnim
struct UAnimNotify_VocalEvent_C_TriggerFaceAnim_Params
{
	unsigned char                                      VocalAmt;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   BendPawn;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAmount
struct UAnimNotify_VocalEvent_C_RandomVocalAmount_Params
{
};

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.Received_Notify
struct UAnimNotify_VocalEvent_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
