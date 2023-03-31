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

// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetColors
struct UUI_HorizontalSegmentMeter_C_SetColors_Params
{
	struct FLinearColor                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.SetSegments
struct UUI_HorizontalSegmentMeter_C_SetSegments_Params
{
	int                                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.Construct
struct UUI_HorizontalSegmentMeter_C_Construct_Params
{
};

// Function UI_HorizontalSegmentMeter.UI_HorizontalSegmentMeter_C.ExecuteUbergraph_UI_HorizontalSegmentMeter
struct UUI_HorizontalSegmentMeter_C_ExecuteUbergraph_UI_HorizontalSegmentMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
