#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_HudJob.UI_HudJob_C.IsMaxLevel?
struct UUI_HudJob_C_IsMaxLevel__Params
{
	bool                                               IsMaxLevel_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.TurnOffTickInASecond
struct UUI_HudJob_C_TurnOffTickInASecond_Params
{
};

// Function UI_HudJob.UI_HudJob_C.Allow Storylines Input
struct UUI_HudJob_C_Allow_Storylines_Input_Params
{
	bool                                               Show_Storylines_Prompt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.GetRewardCount
struct UUI_HudJob_C_GetRewardCount_Params
{
	struct FBendRewardsScreenData                      Reward_Data;                                              // (Parm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.RequestLoadAllImages
struct UUI_HudJob_C_RequestLoadAllImages_Params
{
};

// Function UI_HudJob.UI_HudJob_C.CanPause
struct UUI_HudJob_C_CanPause_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.DisplayRewardLayout
struct UUI_HudJob_C_DisplayRewardLayout_Params
{
	bool                                               bSecondPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalStorylineScreen;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.DisplayStorylineLayout
struct UUI_HudJob_C_DisplayStorylineLayout_Params
{
};

// Function UI_HudJob.UI_HudJob_C.DisplayTrustLayout
struct UUI_HudJob_C_DisplayTrustLayout_Params
{
};

// Function UI_HudJob.UI_HudJob_C.DisplayXPLayout
struct UUI_HudJob_C_DisplayXPLayout_Params
{
};

// Function UI_HudJob.UI_HudJob_C.SetRewardTextColors
struct UUI_HudJob_C_SetRewardTextColors_Params
{
	struct FSlateColor                                 SlateColor;                                               // (Parm)
};

// Function UI_HudJob.UI_HudJob_C.Init
struct UUI_HudJob_C_Init_Params
{
};

// Function UI_HudJob.UI_HudJob_C.SetHeaderData
struct UUI_HudJob_C_SetHeaderData_Params
{
};

// Function UI_HudJob.UI_HudJob_C.NotifyParentOfComplete
struct UUI_HudJob_C_NotifyParentOfComplete_Params
{
};

// Function UI_HudJob.UI_HudJob_C.SetParentReference
struct UUI_HudJob_C_SetParentReference_Params
{
	class UUI_HudObjective_C*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.SetPausedState
struct UUI_HudJob_C_SetPausedState_Params
{
};

// Function UI_HudJob.UI_HudJob_C.DisplayXPReward
struct UUI_HudJob_C_DisplayXPReward_Params
{
};

// Function UI_HudJob.UI_HudJob_C.ClearVisibilityAll
struct UUI_HudJob_C_ClearVisibilityAll_Params
{
};

// Function UI_HudJob.UI_HudJob_C.SetColorScheme
struct UUI_HudJob_C_SetColorScheme_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.SetNestDetails
struct UUI_HudJob_C_SetNestDetails_Params
{
};

// Function UI_HudJob.UI_HudJob_C.AnimateOut
struct UUI_HudJob_C_AnimateOut_Params
{
};

// Function UI_HudJob.UI_HudJob_C.AnimateIn
struct UUI_HudJob_C_AnimateIn_Params
{
};

// Function UI_HudJob.UI_HudJob_C.SetDetails
struct UUI_HudJob_C_SetDetails_Params
{
	struct FBendRewardsScreenData                      RewardsScreenData;                                        // (Parm)
};

// Function UI_HudJob.UI_HudJob_C.Construct
struct UUI_HudJob_C_Construct_Params
{
};

// Function UI_HudJob.UI_HudJob_C.Tick
struct UUI_HudJob_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.DetailsSet_Event
struct UUI_HudJob_C_DetailsSet_Event_Params
{
};

// Function UI_HudJob.UI_HudJob_C.Closed_Event
struct UUI_HudJob_C_Closed_Event_Params
{
};

// Function UI_HudJob.UI_HudJob_C.DisplayReward
struct UUI_HudJob_C_DisplayReward_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Details;                                                  // (Parm)
	struct FSlateColor                                 DetailsColor;                                             // (Parm)
};

// Function UI_HudJob.UI_HudJob_C.LoadStoryLineimages
struct UUI_HudJob_C_LoadStoryLineimages_Params
{
	TAssetPtr<class UObject>                           Target;                                                   // (Parm)
};

// Function UI_HudJob.UI_HudJob_C.CustomEvent_1
struct UUI_HudJob_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_HudJob.UI_HudJob_C.OnPreSaveGameLoaded_Event_1
struct UUI_HudJob_C_OnPreSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.ResetPage
struct UUI_HudJob_C_ResetPage_Params
{
};

// Function UI_HudJob.UI_HudJob_C.Destruct
struct UUI_HudJob_C_Destruct_Params
{
};

// Function UI_HudJob.UI_HudJob_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_HudJob_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_HudJob.UI_HudJob_C.StoppedAnimating
struct UUI_HudJob_C_StoppedAnimating_Params
{
};

// Function UI_HudJob.UI_HudJob_C.AssignXPFinished_Event
struct UUI_HudJob_C_AssignXPFinished_Event_Params
{
};

// Function UI_HudJob.UI_HudJob_C.FinishedAnimatingPercent_Event_1
struct UUI_HudJob_C_FinishedAnimatingPercent_Event_1_Params
{
};

// Function UI_HudJob.UI_HudJob_C.OnSelect1Pressed
struct UUI_HudJob_C_OnSelect1Pressed_Params
{
};

// Function UI_HudJob.UI_HudJob_C.OnConfirmPressed
struct UUI_HudJob_C_OnConfirmPressed_Params
{
};

// Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_HudJob_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_HudJob.UI_HudJob_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_HudJob_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1397_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_HudJob.UI_HudJob_C.ExecuteUbergraph_UI_HudJob
struct UUI_HudJob_C_ExecuteUbergraph_UI_HudJob_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudJob.UI_HudJob_C.AssignXPFinished__DelegateSignature
struct UUI_HudJob_C_AssignXPFinished__DelegateSignature_Params
{
};

// Function UI_HudJob.UI_HudJob_C.Closed__DelegateSignature
struct UUI_HudJob_C_Closed__DelegateSignature_Params
{
};

// Function UI_HudJob.UI_HudJob_C.DetailsSet__DelegateSignature
struct UUI_HudJob_C_DetailsSet__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
