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

// Function CalibrationPostProcess.CalibrationPostProcess_C.SetEnabled
struct ACalibrationPostProcess_C_SetEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HDR;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CalibrationPostProcess.CalibrationPostProcess_C.UserConstructionScript
struct ACalibrationPostProcess_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
