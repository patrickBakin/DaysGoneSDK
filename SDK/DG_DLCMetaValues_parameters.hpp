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

// Function DLCMetaValues.DLCMetaValues_C.SetCostColor
struct UDLCMetaValues_C_SetCostColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCMetaValues.DLCMetaValues_C.UpdateMetaData
struct UDLCMetaValues_C_UpdateMetaData_Params
{
};

// Function DLCMetaValues.DLCMetaValues_C.Construct
struct UDLCMetaValues_C_Construct_Params
{
};

// Function DLCMetaValues.DLCMetaValues_C.ExecuteUbergraph_DLCMetaValues
struct UDLCMetaValues_C_ExecuteUbergraph_DLCMetaValues_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
