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

// Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Populate Rewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesForScripting StoryLine                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_StorylineRewardsPanel_C::Populate_Rewards(const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Populate Rewards");

	UUI_StorylineRewardsPanel_C_Populate_Rewards_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Set Storyline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_StorylineRewardsPanel_C::Set_Storyline(const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Set Storyline");

	UUI_StorylineRewardsPanel_C_Set_Storyline_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
