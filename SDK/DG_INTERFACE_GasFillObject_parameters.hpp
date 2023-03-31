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

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasPumpFinished
struct UINTERFACE_GasFillObject_C_I_GasPumpFinished_Params
{
};

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasCanHasControl
struct UINTERFACE_GasFillObject_C_I_SetGasCanHasControl_Params
{
	bool                                               HasControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_RefuelingFinished
struct UINTERFACE_GasFillObject_C_I_RefuelingFinished_Params
{
};

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasCanDropped
struct UINTERFACE_GasFillObject_C_I_GasCanDropped_Params
{
};

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GetGasValues
struct UINTERFACE_GasFillObject_C_I_GetGasValues_Params
{
	float                                              Gas_Current;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Gas_Max;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasAmounts
struct UINTERFACE_GasFillObject_C_I_SetGasAmounts_Params
{
	float                                              NewGas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
