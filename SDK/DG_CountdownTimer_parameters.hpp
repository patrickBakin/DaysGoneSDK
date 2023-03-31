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

// Function CountdownTimer.CountdownTimer_C.SetCountdownTime
struct UCountdownTimer_C_SetCountdownTime_Params
{
	struct FTimespan                                   TotalTime;                                                // (Parm, ZeroConstructor)
	struct FTimespan                                   RemainingTime;                                            // (Parm, ZeroConstructor)
};

// Function CountdownTimer.CountdownTimer_C.SetTime
struct UCountdownTimer_C_SetTime_Params
{
	struct FTimespan                                   CurrentTime;                                              // (Parm, ZeroConstructor)
};

// Function CountdownTimer.CountdownTimer_C.Construct
struct UCountdownTimer_C_Construct_Params
{
};

// Function CountdownTimer.CountdownTimer_C.ResetTimer
struct UCountdownTimer_C_ResetTimer_Params
{
};

// Function CountdownTimer.CountdownTimer_C.Display Flashing
struct UCountdownTimer_C_Display_Flashing_Params
{
};

// Function CountdownTimer.CountdownTimer_C.Display Steady
struct UCountdownTimer_C_Display_Steady_Params
{
};

// Function CountdownTimer.CountdownTimer_C.Tick
struct UCountdownTimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountdownTimer.CountdownTimer_C.ExecuteUbergraph_CountdownTimer
struct UCountdownTimer_C_ExecuteUbergraph_CountdownTimer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
