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

// Function StealthMeter.StealthMeter_C.CallBecameFound
struct UStealthMeter_C_CallBecameFound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.UpdateNorthRotation
struct UStealthMeter_C_UpdateNorthRotation_Params
{
};

// Function StealthMeter.StealthMeter_C.SetFocused
struct UStealthMeter_C_SetFocused_Params
{
	bool*                                              Focused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.UpdateTracking
struct UStealthMeter_C_UpdateTracking_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.DisplayTracking
struct UStealthMeter_C_DisplayTracking_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.BendPawnMakeNoiseHandler
struct UStealthMeter_C_BendPawnMakeNoiseHandler_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendSoundEventType>                   SoundEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.Init
struct UStealthMeter_C_Init_Params
{
};

// Function StealthMeter.StealthMeter_C.SetOnBike
struct UStealthMeter_C_SetOnBike_Params
{
	bool                                               OnBike;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.SetStealthed
struct UStealthMeter_C_SetStealthed_Params
{
	bool                                               Stealthed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.SetAwareness
struct UStealthMeter_C_SetAwareness_Params
{
};

// Function StealthMeter.StealthMeter_C.SetDMI
struct UStealthMeter_C_SetDMI_Params
{
	class UMaterialInstanceDynamic*                    DMI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.Construct
struct UStealthMeter_C_Construct_Params
{
};

// Function StealthMeter.StealthMeter_C.OnFocusChanged
struct UStealthMeter_C_OnFocusChanged_Params
{
};

// Function StealthMeter.StealthMeter_C.OnBecameFound
struct UStealthMeter_C_OnBecameFound_Params
{
};

// Function StealthMeter.StealthMeter_C.OnBendPawnMakeNoise
struct UStealthMeter_C_OnBendPawnMakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendSoundEventType>                   SoundEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.Pulse_Event
struct UStealthMeter_C_Pulse_Event_Params
{
};

// Function StealthMeter.StealthMeter_C.BindPlayerEvents
struct UStealthMeter_C_BindPlayerEvents_Params
{
	class ABendPlayerPawn*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.ExecuteUbergraph_StealthMeter
struct UStealthMeter_C_ExecuteUbergraph_StealthMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeter.StealthMeter_C.Pulse__DelegateSignature
struct UStealthMeter_C_Pulse__DelegateSignature_Params
{
};

// Function StealthMeter.StealthMeter_C.BecameFound__DelegateSignature
struct UStealthMeter_C_BecameFound__DelegateSignature_Params
{
};

// Function StealthMeter.StealthMeter_C.FocusChanged__DelegateSignature
struct UStealthMeter_C_FocusChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
