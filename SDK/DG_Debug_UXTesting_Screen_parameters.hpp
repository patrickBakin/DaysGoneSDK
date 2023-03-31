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

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.SetText
struct UDebug_UXTesting_Screen_C_SetText_Params
{
	class UDataAsset*                                  Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Tick
struct UDebug_UXTesting_Screen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Construct
struct UDebug_UXTesting_Screen_C_Construct_Params
{
};

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.ExecuteUbergraph_Debug_UXTesting_Screen
struct UDebug_UXTesting_Screen_C_ExecuteUbergraph_Debug_UXTesting_Screen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.InputClosed__DelegateSignature
struct UDebug_UXTesting_Screen_C_InputClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
