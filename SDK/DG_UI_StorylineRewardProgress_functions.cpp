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

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetStoryline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesBasicDataForUI StoryLine                      (Parm)

void UUI_StorylineRewardProgress_C::SetStoryline(const struct FBendStoryLinesBasicDataForUI& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetStoryline");

	UUI_StorylineRewardProgress_C_SetStoryline_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Progress               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Target_Progress                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Icon                           (Parm)

void UUI_StorylineRewardProgress_C::SetProgress(int Current_Progress, int Target_Progress, const struct FText& Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetProgress");

	UUI_StorylineRewardProgress_C_SetProgress_Params params;
	params.Current_Progress = Current_Progress;
	params.Target_Progress = Target_Progress;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetAccentColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylineRewardProgress_C::SetAccentColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetAccentColor");

	UUI_StorylineRewardProgress_C_SetAccentColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StorylineRewardProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.Construct");

	UUI_StorylineRewardProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.ExecuteUbergraph_UI_StorylineRewardProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylineRewardProgress_C::ExecuteUbergraph_UI_StorylineRewardProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.ExecuteUbergraph_UI_StorylineRewardProgress");

	UUI_StorylineRewardProgress_C_ExecuteUbergraph_UI_StorylineRewardProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
