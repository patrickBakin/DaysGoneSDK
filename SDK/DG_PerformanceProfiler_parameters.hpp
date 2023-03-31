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

// Function PerformanceProfiler.PerformanceProfiler_C.SetState
struct UPerformanceProfiler_C_SetState_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceProfiler.PerformanceProfiler_C.SetSelection
struct UPerformanceProfiler_C_SetSelection_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceProfiler.PerformanceProfiler_C.GetPercent_1
struct UPerformanceProfiler_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PerformanceProfiler.PerformanceProfiler_C.MakeText
struct UPerformanceProfiler_C_MakeText_Params
{
	struct FPerfTest                                   PerfTest;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_ColorAndOpacity_1
struct UPerformanceProfiler_C_Get_FPSCurrent_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_ColorAndOpacity_1
struct UPerformanceProfiler_C_Get_FPSMedian_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_Text_1
struct UPerformanceProfiler_C_Get_FPSMedian_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_Text_1
struct UPerformanceProfiler_C_Get_FPSCurrent_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageMedian_Text_1
struct UPerformanceProfiler_C_Get_GPUUsageMedian_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageCurrent_Text_1
struct UPerformanceProfiler_C_Get_GPUUsageCurrent_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameMedian_Text_1
struct UPerformanceProfiler_C_Get_FrameMedian_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUMedian_Text_1
struct UPerformanceProfiler_C_Get_GPUMedian_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameCurrent_Text_1
struct UPerformanceProfiler_C_Get_FrameCurrent_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUCurrent_Text_1
struct UPerformanceProfiler_C_Get_GPUCurrent_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.End Autodetect
struct UPerformanceProfiler_C_End_Autodetect_Params
{
};

// Function PerformanceProfiler.PerformanceProfiler_C.PreAutodetect
struct UPerformanceProfiler_C_PreAutodetect_Params
{
};

// Function PerformanceProfiler.PerformanceProfiler_C.PostAutodetect
struct UPerformanceProfiler_C_PostAutodetect_Params
{
	struct FPerfTest*                                  Optimized;                                                // (Parm)
};

// Function PerformanceProfiler.PerformanceProfiler_C.OnAutodetectCancelled
struct UPerformanceProfiler_C_OnAutodetectCancelled_Params
{
};

// Function PerformanceProfiler.PerformanceProfiler_C.Construct
struct UPerformanceProfiler_C_Construct_Params
{
};

// Function PerformanceProfiler.PerformanceProfiler_C.OnPopupInteract
struct UPerformanceProfiler_C_OnPopupInteract_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceProfiler.PerformanceProfiler_C.Cancel
struct UPerformanceProfiler_C_Cancel_Params
{
};

// Function PerformanceProfiler.PerformanceProfiler_C.ExecuteUbergraph_PerformanceProfiler
struct UPerformanceProfiler_C_ExecuteUbergraph_PerformanceProfiler_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
