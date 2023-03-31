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

// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.ConvertRoman
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 str                            (Parm, OutParm, ZeroConstructor)

void UUI_SkillPage_TierUnlocked_C::ConvertRoman(int Int, struct FString* str)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.ConvertRoman");

	UUI_SkillPage_TierUnlocked_C_ConvertRoman_Params params;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (str != nullptr)
		*str = params.str;
}


// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.SetTutorialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)

void UUI_SkillPage_TierUnlocked_C::SetTutorialData(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.SetTutorialData");

	UUI_SkillPage_TierUnlocked_C_SetTutorialData_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillPage_TierUnlocked_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.Construct");

	UUI_SkillPage_TierUnlocked_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_TierUnlocked_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.MenuSelected");

	UUI_SkillPage_TierUnlocked_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.BndEvt__Flash_K2Node_ComponentBoundEvent_317_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_TierUnlocked_C::BndEvt__Flash_K2Node_ComponentBoundEvent_317_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.BndEvt__Flash_K2Node_ComponentBoundEvent_317_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_SkillPage_TierUnlocked_C_BndEvt__Flash_K2Node_ComponentBoundEvent_317_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.ExecuteUbergraph_UI_SkillPage_TierUnlocked
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_TierUnlocked_C::ExecuteUbergraph_UI_SkillPage_TierUnlocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_TierUnlocked.UI_SkillPage_TierUnlocked_C.ExecuteUbergraph_UI_SkillPage_TierUnlocked");

	UUI_SkillPage_TierUnlocked_C_ExecuteUbergraph_UI_SkillPage_TierUnlocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
