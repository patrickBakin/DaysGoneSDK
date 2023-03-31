// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Player                         (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHighlighted                   (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardScoreListItem_C::SetData(int Rank, const struct FText& Player, int Score, bool bHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.SetData");

	ULeaderboardScoreListItem_C_SetData_Params params;
	params.Rank = Rank;
	params.Player = Player;
	params.Score = Score;
	params.bHighlighted = bHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void ULeaderboardScoreListItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.Invalidate");

	ULeaderboardScoreListItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.ExecuteUbergraph_LeaderboardScoreListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardScoreListItem_C::ExecuteUbergraph_LeaderboardScoreListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardScoreListItem.LeaderboardScoreListItem_C.ExecuteUbergraph_LeaderboardScoreListItem");

	ULeaderboardScoreListItem_C_ExecuteUbergraph_LeaderboardScoreListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
