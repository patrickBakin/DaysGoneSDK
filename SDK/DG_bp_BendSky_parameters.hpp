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

// Function bp_BendSky.bp_BendSky_C.UserConstructionScript
struct Abp_BendSky_C_UserConstructionScript_Params
{
};

// Function bp_BendSky.bp_BendSky_C.Enable Painted Sky
struct Abp_BendSky_C_Enable_Painted_Sky_Params
{
};

// Function bp_BendSky.bp_BendSky_C.Disable Painted Sky
struct Abp_BendSky_C_Disable_Painted_Sky_Params
{
};

// Function bp_BendSky.bp_BendSky_C.ReceiveBeginPlay
struct Abp_BendSky_C_ReceiveBeginPlay_Params
{
};

// Function bp_BendSky.bp_BendSky_C.ExecuteUbergraph_bp_BendSky
struct Abp_BendSky_C_ExecuteUbergraph_bp_BendSky_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
