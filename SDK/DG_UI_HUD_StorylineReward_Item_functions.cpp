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

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ResetAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HUD_StorylineReward_Item_C::ResetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ResetAll");

	UUI_HUD_StorylineReward_Item_C_ResetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.PlaySecondPart
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HUD_StorylineReward_Item_C::PlaySecondPart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.PlaySecondPart");

	UUI_HUD_StorylineReward_Item_C_PlaySecondPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesBasicDataForUI StoryLineData                  (Parm)

void UUI_HUD_StorylineReward_Item_C::SetDetails(const struct FBendStoryLinesBasicDataForUI& StoryLineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.SetDetails");

	UUI_HUD_StorylineReward_Item_C_SetDetails_Params params;
	params.StoryLineData = StoryLineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUD_StorylineReward_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.Construct");

	UUI_HUD_StorylineReward_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ExecuteUbergraph_UI_HUD_StorylineReward_Item
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_StorylineReward_Item_C::ExecuteUbergraph_UI_HUD_StorylineReward_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ExecuteUbergraph_UI_HUD_StorylineReward_Item");

	UUI_HUD_StorylineReward_Item_C_ExecuteUbergraph_UI_HUD_StorylineReward_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
