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

// Function MapRoadSpline.MapRoadSpline_C.SetActiveColor
struct AMapRoadSpline_C_SetActiveColor_Params
{
	struct FLinearColor                                NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadSpline.MapRoadSpline_C.BuildSplineLinear
struct AMapRoadSpline_C_BuildSplineLinear_Params
{
	TArray<struct FVector>                             WorldPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Meta;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TranslucentSortPriority;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadSpline.MapRoadSpline_C.BuildSpline
struct AMapRoadSpline_C_BuildSpline_Params
{
	TArray<struct FVector>                             WorldPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadSpline.MapRoadSpline_C.ResetSpline
struct AMapRoadSpline_C_ResetSpline_Params
{
};

// Function MapRoadSpline.MapRoadSpline_C.UserConstructionScript
struct AMapRoadSpline_C_UserConstructionScript_Params
{
};

// Function MapRoadSpline.MapRoadSpline_C.ReceiveBeginPlay
struct AMapRoadSpline_C_ReceiveBeginPlay_Params
{
};

// Function MapRoadSpline.MapRoadSpline_C.UpdateSpline
struct AMapRoadSpline_C_UpdateSpline_Params
{
};

// Function MapRoadSpline.MapRoadSpline_C.ExecuteUbergraph_MapRoadSpline
struct AMapRoadSpline_C_ExecuteUbergraph_MapRoadSpline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
