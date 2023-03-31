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

// Function BendDebugCam.BendDebugCam_C.OnActivate
struct UBendDebugCam_C_OnActivate_Params
{
};

// Function BendDebugCam.BendDebugCam_C.OnDeactivate
struct UBendDebugCam_C_OnDeactivate_Params
{
};

// Function BendDebugCam.BendDebugCam_C.ExecuteUbergraph_BendDebugCam
struct UBendDebugCam_C_ExecuteUbergraph_BendDebugCam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
