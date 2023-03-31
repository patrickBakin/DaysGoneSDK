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

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.SetTutorialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)

void UUI_SkillPage_SkillAcquired_C::SetTutorialData(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.SetTutorialData");

	UUI_SkillPage_SkillAcquired_C_SetTutorialData_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillPage_SkillAcquired_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.Construct");

	UUI_SkillPage_SkillAcquired_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ButtonHoldComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItemSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_SkillAcquired_C::ButtonHoldComplete(class UUI_GridItem_Base_C** GridItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ButtonHoldComplete");

	UUI_SkillPage_SkillAcquired_C_ButtonHoldComplete_Params params;
	params.GridItemSelected = GridItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_SkillAcquired_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.CrossSelectionInputGiven");

	UUI_SkillPage_SkillAcquired_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_SkillAcquired_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.MenuSelected");

	UUI_SkillPage_SkillAcquired_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_SkillAcquired_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.OnAnimationFinished_Event_1");

	UUI_SkillPage_SkillAcquired_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ExecuteUbergraph_UI_SkillPage_SkillAcquired
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_SkillAcquired_C::ExecuteUbergraph_UI_SkillPage_SkillAcquired(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ExecuteUbergraph_UI_SkillPage_SkillAcquired");

	UUI_SkillPage_SkillAcquired_C_ExecuteUbergraph_UI_SkillPage_SkillAcquired_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
