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

// Function ControllerTouchpad.ControllerTouchpad_C.Construct
struct UControllerTouchpad_C_Construct_Params
{
};

// Function ControllerTouchpad.ControllerTouchpad_C.Tick
struct UControllerTouchpad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControllerTouchpad.ControllerTouchpad_C.Close
struct UControllerTouchpad_C_Close_Params
{
};

// Function ControllerTouchpad.ControllerTouchpad_C.ExecuteUbergraph_ControllerTouchpad
struct UControllerTouchpad_C_ExecuteUbergraph_ControllerTouchpad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
