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

// Function UI_Bunk.UI_Bunk_C.Construct
struct UUI_Bunk_C_Construct_Params
{
};

// Function UI_Bunk.UI_Bunk_C.SetVisibilityOverride
struct UUI_Bunk_C_SetVisibilityOverride_Params
{
	TEnumAsByte<ESlateVisibility>*                     VisibilityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bunk.UI_Bunk_C.ExecuteUbergraph_UI_Bunk
struct UUI_Bunk_C_ExecuteUbergraph_UI_Bunk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
