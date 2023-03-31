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

// Function UI_TutorialPanel.UI_TutorialPanel_C.AttemptPause
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::AttemptPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.AttemptPause");

	UUI_TutorialPanel_C_AttemptPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetFullscreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::SetFullscreen(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetFullscreen");

	UUI_TutorialPanel_C_SetFullscreen_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)
// bool                           PauseGame                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerInputButton> CloseButton                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::SetDetailsSimple(const struct FText& Content, bool PauseGame, TEnumAsByte<EControllerInputButton> CloseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsSimple");

	UUI_TutorialPanel_C_SetDetailsSimple_Params params;
	params.Content = Content;
	params.PauseGame = PauseGame;
	params.CloseButton = CloseButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.Init");

	UUI_TutorialPanel_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.CountPanels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           TargetArray2                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      TargetArray3                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            PanelCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::CountPanels(TArray<struct FText> TargetArray, TArray<struct FText> TargetArray2, TArray<class UTexture2D*> TargetArray3, int* PanelCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.CountPanels");

	UUI_TutorialPanel_C_CountPanels_Params params;
	params.TargetArray = TargetArray;
	params.TargetArray2 = TargetArray2;
	params.TargetArray3 = TargetArray3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PanelCount != nullptr)
		*PanelCount = params.PanelCount;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsStandard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Description                    (Parm)
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::SetDetailsStandard(const struct FText& Title, const struct FText& Description, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsStandard");

	UUI_TutorialPanel_C_SetDetailsStandard_Params params;
	params.Title = Title;
	params.Description = Description;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// TArray<struct FText>           Subtitles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Descriptions                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      Images                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_TutorialPanel_C::SetDetailsMulti(const struct FText& Title, TArray<struct FText>* Subtitles, TArray<struct FText>* Descriptions, TArray<class UTexture2D*>* Images)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti");

	UUI_TutorialPanel_C_SetDetailsMulti_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subtitles != nullptr)
		*Subtitles = params.Subtitles;
	if (Descriptions != nullptr)
		*Descriptions = params.Descriptions;
	if (Images != nullptr)
		*Images = params.Images;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetInvisible");

	UUI_TutorialPanel_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetVisible");

	UUI_TutorialPanel_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_TutorialPanel_C::SetTitle(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetTitle");

	UUI_TutorialPanel_C_SetTitle_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TutorialPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.Construct");

	UUI_TutorialPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UUI_TutorialPanel_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnWidgetClosed");

	UUI_TutorialPanel_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.RequestClose");

	UUI_TutorialPanel_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnSimpleTutorialClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::OnSimpleTutorialClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnSimpleTutorialClosed");

	UUI_TutorialPanel_C_OnSimpleTutorialClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti_New
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Desc                           (Parm)
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::SetDetailsMulti_New(const struct FText& Title, const struct FText& Desc, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti_New");

	UUI_TutorialPanel_C_SetDetailsMulti_New_Params params;
	params.Title = Title;
	params.Desc = Desc;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.Tick");

	UUI_TutorialPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_TutorialPanel_C::BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_TutorialPanel_C_BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_TutorialPanel_C::BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_TutorialPanel_C_BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_TutorialPanel_C::BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_TutorialPanel_C_BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.Dismissed By Player
// (BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::Dismissed_By_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.Dismissed By Player");

	UUI_TutorialPanel_C_Dismissed_By_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TutorialPanel_C::BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_TutorialPanel_C_BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::OnTutorialClosedPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedPressed");

	UUI_TutorialPanel_C_OnTutorialClosedPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::OnTutorialClosedReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedReleased");

	UUI_TutorialPanel_C_OnTutorialClosedReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmPressed");

	UUI_TutorialPanel_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::OnConfirmReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmReleased");

	UUI_TutorialPanel_C_OnConfirmReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.ExecuteUbergraph_UI_TutorialPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialPanel_C::ExecuteUbergraph_UI_TutorialPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.ExecuteUbergraph_UI_TutorialPanel");

	UUI_TutorialPanel_C_ExecuteUbergraph_UI_TutorialPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialPanel.UI_TutorialPanel_C.CloseAnimationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TutorialPanel_C::CloseAnimationCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialPanel.UI_TutorialPanel_C.CloseAnimationCompleted__DelegateSignature");

	UUI_TutorialPanel_C_CloseAnimationCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
