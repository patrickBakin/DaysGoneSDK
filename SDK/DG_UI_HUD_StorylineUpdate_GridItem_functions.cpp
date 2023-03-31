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

// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Animate
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HUD_StorylineUpdate_GridItem_C::Animate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Animate");

	UUI_HUD_StorylineUpdate_GridItem_C_Animate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesBasicDataForUI StoryLineData                  (Parm)

void UUI_HUD_StorylineUpdate_GridItem_C::SetDetails(const struct FBendStoryLinesBasicDataForUI& StoryLineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.SetDetails");

	UUI_HUD_StorylineUpdate_GridItem_C_SetDetails_Params params;
	params.StoryLineData = StoryLineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUD_StorylineUpdate_GridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Construct");

	UUI_HUD_StorylineUpdate_GridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_StorylineUpdate_GridItem_C::ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem");

	UUI_HUD_StorylineUpdate_GridItem_C_ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
