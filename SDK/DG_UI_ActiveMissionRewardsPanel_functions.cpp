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

// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Set Storylines
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendStoryLinesBasicDataForUI> StoryLines                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_ActiveMissionRewardsPanel_C::Set_Storylines(TArray<struct FBendStoryLinesBasicDataForUI>* StoryLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Set Storylines");

	UUI_ActiveMissionRewardsPanel_C_Set_Storylines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StoryLines != nullptr)
		*StoryLines = params.StoryLines;
}


// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ActiveMissionRewardsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Construct");

	UUI_ActiveMissionRewardsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.ExecuteUbergraph_UI_ActiveMissionRewardsPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionRewardsPanel_C::ExecuteUbergraph_UI_ActiveMissionRewardsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.ExecuteUbergraph_UI_ActiveMissionRewardsPanel");

	UUI_ActiveMissionRewardsPanel_C_ExecuteUbergraph_UI_ActiveMissionRewardsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
