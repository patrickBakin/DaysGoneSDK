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

// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesBasicDataForUI StoryLine                      (Parm)

void UUI_HUDStoryLineNotificationWidget_C::SetDetails(const struct FBendStoryLinesBasicDataForUI& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.SetDetails");

	UUI_HUDStoryLineNotificationWidget_C_SetDetails_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDStoryLineNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.Construct");

	UUI_HUDStoryLineNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.ExecuteUbergraph_UI_HUDStoryLineNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDStoryLineNotificationWidget_C::ExecuteUbergraph_UI_HUDStoryLineNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.ExecuteUbergraph_UI_HUDStoryLineNotificationWidget");

	UUI_HUDStoryLineNotificationWidget_C_ExecuteUbergraph_UI_HUDStoryLineNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
