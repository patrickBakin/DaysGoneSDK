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

// Function UI_BikeAdvertise.UI_BikeAdvertise_C.Construct
struct UUI_BikeAdvertise_C_Construct_Params
{
};

// Function UI_BikeAdvertise.UI_BikeAdvertise_C.SetState
struct UUI_BikeAdvertise_C_SetState_Params
{
	bool                                               Available;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BikeAdvertise.UI_BikeAdvertise_C.ExecuteUbergraph_UI_BikeAdvertise
struct UUI_BikeAdvertise_C_ExecuteUbergraph_UI_BikeAdvertise_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
