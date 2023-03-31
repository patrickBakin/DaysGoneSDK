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

// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.StoreTrophyData
struct UUI_GridItem_TrophySlot_C_StoreTrophyData_Params
{
	struct FBendTrophy                                 TrophyData;                                               // (Parm)
};

// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.Construct
struct UUI_GridItem_TrophySlot_C_Construct_Params
{
};

// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.ExecuteUbergraph_UI_GridItem_TrophySlot
struct UUI_GridItem_TrophySlot_C_ExecuteUbergraph_UI_GridItem_TrophySlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
