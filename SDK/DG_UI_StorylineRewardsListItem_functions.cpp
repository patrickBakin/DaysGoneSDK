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

// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Get Unlock Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_StorylineRewardsListItem_C::Get_Unlock_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Get Unlock Text");

	UUI_StorylineRewardsListItem_C_Get_Unlock_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StorylineRewardsListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Construct");

	UUI_StorylineRewardsListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.ExecuteUbergraph_UI_StorylineRewardsListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylineRewardsListItem_C::ExecuteUbergraph_UI_StorylineRewardsListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.ExecuteUbergraph_UI_StorylineRewardsListItem");

	UUI_StorylineRewardsListItem_C_ExecuteUbergraph_UI_StorylineRewardsListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
