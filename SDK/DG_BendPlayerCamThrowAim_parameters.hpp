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

// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.OnActivate
struct UBendPlayerCamThrowAim_C_OnActivate_Params
{
};

// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.HidingStateChanged
struct UBendPlayerCamThrowAim_C_HidingStateChanged_Params
{
	bool                                               IsHiding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnclosedSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.ExecuteUbergraph_BendPlayerCamThrowAim
struct UBendPlayerCamThrowAim_C_ExecuteUbergraph_BendPlayerCamThrowAim_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
