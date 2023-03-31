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

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.EnteredNewRegion
struct AWildlifeListenerForestNear_C_EnteredNewRegion_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.PlayAudio
struct AWildlifeListenerForestNear_C_PlayAudio_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.StopAudio
struct AWildlifeListenerForestNear_C_StopAudio_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.TimerExpire
struct AWildlifeListenerForestNear_C_TimerExpire_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.UserConstructionScript
struct AWildlifeListenerForestNear_C_UserConstructionScript_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature
struct AWildlifeListenerForestNear_C_BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.ReceiveBeginPlay
struct AWildlifeListenerForestNear_C_ReceiveBeginPlay_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.weatherChanged
struct AWildlifeListenerForestNear_C_weatherChanged_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.Every5Mins
struct AWildlifeListenerForestNear_C_Every5Mins_Params
{
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.EveryHour
struct AWildlifeListenerForestNear_C_EveryHour_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WildlifeListenerForestNear.WildlifeListenerForestNear_C.ExecuteUbergraph_WildlifeListenerForestNear
struct AWildlifeListenerForestNear_C_ExecuteUbergraph_WildlifeListenerForestNear_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
