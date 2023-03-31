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

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.Reset
struct ULeaderboardsLeaderboard_C_Reset_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.PreviousPage
struct ULeaderboardsLeaderboard_C_PreviousPage_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.NextPage
struct ULeaderboardsLeaderboard_C_NextPage_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.Construct
struct ULeaderboardsLeaderboard_C_Construct_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.Invalidate
struct ULeaderboardsLeaderboard_C_Invalidate_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.InvalidateRank
struct ULeaderboardsLeaderboard_C_InvalidateRank_Params
{
	int*                                               Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2214_OnMenuInteractClickedEvent__DelegateSignature
struct ULeaderboardsLeaderboard_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2214_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.BndEvt__MenuInteract_Prev_K2Node_ComponentBoundEvent_2216_OnMenuInteractClickedEvent__DelegateSignature
struct ULeaderboardsLeaderboard_C_BndEvt__MenuInteract_Prev_K2Node_ComponentBoundEvent_2216_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.ExecuteUbergraph_LeaderboardsLeaderboard
struct ULeaderboardsLeaderboard_C_ExecuteUbergraph_LeaderboardsLeaderboard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.OnPrevClicked__DelegateSignature
struct ULeaderboardsLeaderboard_C_OnPrevClicked__DelegateSignature_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.OnNextClicked__DelegateSignature
struct ULeaderboardsLeaderboard_C_OnNextClicked__DelegateSignature_Params
{
};

// Function LeaderboardsLeaderboard.LeaderboardsLeaderboard_C.RankUpdate__DelegateSignature
struct ULeaderboardsLeaderboard_C_RankUpdate__DelegateSignature_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
