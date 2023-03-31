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

// Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.DisplayPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Map_MissionJobSelectedExtraContent_C::DisplayPrompt(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.DisplayPrompt");

	UUI_Map_MissionJobSelectedExtraContent_C_DisplayPrompt_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.SetVisualStuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ObjectiveText                  (Parm)
// bool                           IsCurrentlyTracked             (Parm, ZeroConstructor, IsPlainOldData)
// class UBendMissionData*        MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           JobData                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Map_MissionJobSelectedExtraContent_C::SetVisualStuff(const struct FLinearColor& Color, const struct FText& ObjectiveText, bool IsCurrentlyTracked, class UBendMissionData* MissionData, class UJobClassInfo* JobData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.SetVisualStuff");

	UUI_Map_MissionJobSelectedExtraContent_C_SetVisualStuff_Params params;
	params.Color = Color;
	params.ObjectiveText = ObjectiveText;
	params.IsCurrentlyTracked = IsCurrentlyTracked;
	params.MissionData = MissionData;
	params.JobData = JobData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
