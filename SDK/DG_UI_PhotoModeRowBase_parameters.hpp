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

// Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Reset
struct UUI_PhotoModeRowBase_C_Reset_Params
{
	bool                                               ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Selected
struct UUI_PhotoModeRowBase_C_Selected_Params
{
	bool                                               Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
