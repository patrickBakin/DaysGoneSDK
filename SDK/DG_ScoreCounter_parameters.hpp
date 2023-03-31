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

// Function ScoreCounter.ScoreCounter_C.DisplayScoreAward
struct UScoreCounter_C_DisplayScoreAward_Params
{
	struct FVector2D                                   MotionVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreCounter.ScoreCounter_C.Construct
struct UScoreCounter_C_Construct_Params
{
};

// Function ScoreCounter.ScoreCounter_C.Tick
struct UScoreCounter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreCounter.ScoreCounter_C.CustomEvent_1
struct UScoreCounter_C_CustomEvent_1_Params
{
};

// Function ScoreCounter.ScoreCounter_C.ExecuteUbergraph_ScoreCounter
struct UScoreCounter_C_ExecuteUbergraph_ScoreCounter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
