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

// Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetSelected
struct UPerformanceProfiler_AutodetectItem_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetContent
struct UPerformanceProfiler_AutodetectItem_C_SetContent_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Description;                                              // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
