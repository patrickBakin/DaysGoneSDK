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

// Function UI_HudJob.UI_HudJob_C.IsMaxLevel?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMaxLevel_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::IsMaxLevel_(bool* IsMaxLevel_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.IsMaxLevel?");

	UUI_HudJob_C_IsMaxLevel__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMaxLevel_ != nullptr)
		*IsMaxLevel_ = params.IsMaxLevel_;
}


// Function UI_HudJob.UI_HudJob_C.TurnOffTickInASecond
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::TurnOffTickInASecond()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.TurnOffTickInASecond");

	UUI_HudJob_C_TurnOffTickInASecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Allow Storylines Input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Storylines_Prompt         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::Allow_Storylines_Input(bool Show_Storylines_Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Allow Storylines Input");

	UUI_HudJob_C_Allow_Storylines_Input_Params params;
	params.Show_Storylines_Prompt = Show_Storylines_Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.GetRewardCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBendRewardsScreenData  Reward_Data                    (Parm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::GetRewardCount(const struct FBendRewardsScreenData& Reward_Data, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.GetRewardCount");

	UUI_HudJob_C_GetRewardCount_Params params;
	params.Reward_Data = Reward_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function UI_HudJob.UI_HudJob_C.RequestLoadAllImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::RequestLoadAllImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.RequestLoadAllImages");

	UUI_HudJob_C_RequestLoadAllImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.CanPause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::CanPause(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.CanPause");

	UUI_HudJob_C_CanPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function UI_HudJob.UI_HudJob_C.DisplayRewardLayout
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSecondPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFinalStorylineScreen          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::DisplayRewardLayout(bool* bSecondPart, bool* bFinalStorylineScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayRewardLayout");

	UUI_HudJob_C_DisplayRewardLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSecondPart != nullptr)
		*bSecondPart = params.bSecondPart;
	if (bFinalStorylineScreen != nullptr)
		*bFinalStorylineScreen = params.bFinalStorylineScreen;
}


// Function UI_HudJob.UI_HudJob_C.DisplayStorylineLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DisplayStorylineLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayStorylineLayout");

	UUI_HudJob_C_DisplayStorylineLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DisplayTrustLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DisplayTrustLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayTrustLayout");

	UUI_HudJob_C_DisplayTrustLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DisplayXPLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DisplayXPLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayXPLayout");

	UUI_HudJob_C_DisplayXPLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetRewardTextColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             SlateColor                     (Parm)

void UUI_HudJob_C::SetRewardTextColors(const struct FSlateColor& SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetRewardTextColors");

	UUI_HudJob_C_SetRewardTextColors_Params params;
	params.SlateColor = SlateColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Init");

	UUI_HudJob_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetHeaderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::SetHeaderData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetHeaderData");

	UUI_HudJob_C_SetHeaderData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.NotifyParentOfComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::NotifyParentOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.NotifyParentOfComplete");

	UUI_HudJob_C_NotifyParentOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetParentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudObjective_C*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::SetParentReference(class UUI_HudObjective_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetParentReference");

	UUI_HudJob_C_SetParentReference_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetPausedState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::SetPausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetPausedState");

	UUI_HudJob_C_SetPausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DisplayXPReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DisplayXPReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayXPReward");

	UUI_HudJob_C_DisplayXPReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.ClearVisibilityAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::ClearVisibilityAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.ClearVisibilityAll");

	UUI_HudJob_C_ClearVisibilityAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetColorScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::SetColorScheme(TEnumAsByte<EObjectiveCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetColorScheme");

	UUI_HudJob_C_SetColorScheme_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetNestDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::SetNestDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetNestDetails");

	UUI_HudJob_C_SetNestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.AnimateOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::AnimateOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.AnimateOut");

	UUI_HudJob_C_AnimateOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.AnimateIn
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.AnimateIn");

	UUI_HudJob_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendRewardsScreenData  RewardsScreenData              (Parm)

void UUI_HudJob_C::SetDetails(const struct FBendRewardsScreenData& RewardsScreenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.SetDetails");

	UUI_HudJob_C_SetDetails_Params params;
	params.RewardsScreenData = RewardsScreenData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudJob_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Construct");

	UUI_HudJob_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Tick");

	UUI_HudJob_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DetailsSet_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DetailsSet_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DetailsSet_Event");

	UUI_HudJob_C_DetailsSet_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Closed_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::Closed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Closed_Event");

	UUI_HudJob_C_Closed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DisplayReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Details                        (Parm)
// struct FSlateColor             DetailsColor                   (Parm)

void UUI_HudJob_C::DisplayReward(float Percent, const struct FText& Details, const struct FSlateColor& DetailsColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DisplayReward");

	UUI_HudJob_C_DisplayReward_Params params;
	params.Percent = Percent;
	params.Details = Details;
	params.DetailsColor = DetailsColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.LoadStoryLineimages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       Target                         (Parm)

void UUI_HudJob_C::LoadStoryLineimages(TAssetPtr<class UObject> Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.LoadStoryLineimages");

	UUI_HudJob_C_LoadStoryLineimages_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_HudJob_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.CustomEvent_1");

	UUI_HudJob_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.OnPreSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::OnPreSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.OnPreSaveGameLoaded_Event_1");

	UUI_HudJob_C_OnPreSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.ResetPage
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::ResetPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.ResetPage");

	UUI_HudJob_C_ResetPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudJob_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Destruct");

	UUI_HudJob_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_HudJob_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_HudJob_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.StoppedAnimating
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::StoppedAnimating()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.StoppedAnimating");

	UUI_HudJob_C_StoppedAnimating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.AssignXPFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::AssignXPFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.AssignXPFinished_Event");

	UUI_HudJob_C_AssignXPFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.FinishedAnimatingPercent_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::FinishedAnimatingPercent_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.FinishedAnimatingPercent_Event_1");

	UUI_HudJob_C_FinishedAnimatingPercent_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.OnSelect1Pressed");

	UUI_HudJob_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.OnConfirmPressed");

	UUI_HudJob_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HudJob_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_HudJob_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HudJob_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_HudJob_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.ExecuteUbergraph_UI_HudJob
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudJob_C::ExecuteUbergraph_UI_HudJob(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.ExecuteUbergraph_UI_HudJob");

	UUI_HudJob_C_ExecuteUbergraph_UI_HudJob_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.AssignXPFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::AssignXPFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.AssignXPFinished__DelegateSignature");

	UUI_HudJob_C_AssignXPFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.Closed__DelegateSignature");

	UUI_HudJob_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudJob.UI_HudJob_C.DetailsSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudJob_C::DetailsSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudJob.UI_HudJob_C.DetailsSet__DelegateSignature");

	UUI_HudJob_C_DetailsSet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
