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

// Function UI_MenuTutorial.UI_MenuTutorial_C.SetAllowedMenus
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::SetAllowedMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.SetAllowedMenus");

	UUI_MenuTutorial_C_SetAllowedMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.CheckForStepCompletion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::CheckForStepCompletion(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.CheckForStepCompletion");

	UUI_MenuTutorial_C_CheckForStepCompletion_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.NextStep
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::NextStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.NextStep");

	UUI_MenuTutorial_C_NextStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayTutorialStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::DisplayTutorialStep(int Id, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayTutorialStep");

	UUI_MenuTutorial_C_DisplayTutorialStep_Params params;
	params.Id = Id;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayMenuTutorials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::DisplayMenuTutorials(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayMenuTutorials");

	UUI_MenuTutorial_C_DisplayMenuTutorials_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayArrowAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::DisplayArrowAnimation(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayArrowAnimation");

	UUI_MenuTutorial_C_DisplayArrowAnimation_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MenuTutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.Construct");

	UUI_MenuTutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.SetupStep
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::SetupStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.SetupStep");

	UUI_MenuTutorial_C_SetupStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MenuTutorial_C::BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MenuTutorial_C_BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MenuTutorial_C::BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MenuTutorial_C_BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.OnStepAppear
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::OnStepAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.OnStepAppear");

	UUI_MenuTutorial_C_OnStepAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.OnMenuDisplayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Displayed_Menu                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::OnMenuDisplayed(TEnumAsByte<EMenuTypes> Displayed_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.OnMenuDisplayed");

	UUI_MenuTutorial_C_OnMenuDisplayed_Params params;
	params.Displayed_Menu = Displayed_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.CustomEvent_1");

	UUI_MenuTutorial_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.ExecuteUbergraph_UI_MenuTutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::ExecuteUbergraph_UI_MenuTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.ExecuteUbergraph_UI_MenuTutorial");

	UUI_MenuTutorial_C_ExecuteUbergraph_UI_MenuTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialStep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuTutorial_C::OnTutorialStep__DelegateSignature(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialStep__DelegateSignature");

	UUI_MenuTutorial_C_OnTutorialStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MenuTutorial_C::OnTutorialComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialComplete__DelegateSignature");

	UUI_MenuTutorial_C_OnTutorialComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
