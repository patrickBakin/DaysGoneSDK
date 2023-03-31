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

// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Player                         (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHighlighted                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardHighlightListItem_C::SetData(int Rank, const struct FText& Player, int Score, bool bHighlighted, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.SetData");

	ULeaderboardHighlightListItem_C_SetData_Params params;
	params.Rank = Rank;
	params.Player = Player;
	params.Score = Score;
	params.bHighlighted = bHighlighted;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void ULeaderboardHighlightListItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.Invalidate");

	ULeaderboardHighlightListItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.ExecuteUbergraph_LeaderboardHighlightListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardHighlightListItem_C::ExecuteUbergraph_LeaderboardHighlightListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHighlightListItem.LeaderboardHighlightListItem_C.ExecuteUbergraph_LeaderboardHighlightListItem");

	ULeaderboardHighlightListItem_C_ExecuteUbergraph_LeaderboardHighlightListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
