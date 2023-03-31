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

// Function UI_MapMenuLocation_StorylineRewards.UI_MapMenuLocation_StorylineRewards_C.SetFromData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesBasicDataForUI StoryLineData                  (Parm)

void UUI_MapMenuLocation_StorylineRewards_C::SetFromData(const struct FBendStoryLinesBasicDataForUI& StoryLineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocation_StorylineRewards.UI_MapMenuLocation_StorylineRewards_C.SetFromData");

	UUI_MapMenuLocation_StorylineRewards_C_SetFromData_Params params;
	params.StoryLineData = StoryLineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
