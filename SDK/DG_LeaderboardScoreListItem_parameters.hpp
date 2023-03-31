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

// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.SetData
struct ULeaderboardScoreListItem_C_SetData_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Player;                                                   // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlighted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.Invalidate
struct ULeaderboardScoreListItem_C_Invalidate_Params
{
};

// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.ExecuteUbergraph_LeaderboardScoreListItem
struct ULeaderboardScoreListItem_C_ExecuteUbergraph_LeaderboardScoreListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
