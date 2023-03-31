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

// Function FreakerListenerDistant.FreakerListenerDistant_C.PlayAudio
struct AFreakerListenerDistant_C_PlayAudio_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.StopAudio
struct AFreakerListenerDistant_C_StopAudio_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.TimerExpire
struct AFreakerListenerDistant_C_TimerExpire_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.UserConstructionScript
struct AFreakerListenerDistant_C_UserConstructionScript_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature
struct AFreakerListenerDistant_C_BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.ReceiveBeginPlay
struct AFreakerListenerDistant_C_ReceiveBeginPlay_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.EveryHour
struct AFreakerListenerDistant_C_EveryHour_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.weatherChanged
struct AFreakerListenerDistant_C_weatherChanged_Params
{
};

// Function FreakerListenerDistant.FreakerListenerDistant_C.ExecuteUbergraph_FreakerListenerDistant
struct AFreakerListenerDistant_C_ExecuteUbergraph_FreakerListenerDistant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
