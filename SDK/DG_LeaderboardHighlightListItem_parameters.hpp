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

// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.SetData
struct ULeaderboardHighlightListItem_C_SetData_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Player;                                                   // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlighted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.Invalidate
struct ULeaderboardHighlightListItem_C_Invalidate_Params
{
};

// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.ExecuteUbergraph_LeaderboardHighlightListItem
struct ULeaderboardHighlightListItem_C_ExecuteUbergraph_LeaderboardHighlightListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
