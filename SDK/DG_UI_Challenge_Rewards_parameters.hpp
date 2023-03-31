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

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigitMS
struct UUI_Challenge_Rewards_C_FormatDigitMS_Params
{
	int                                                Int;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigit
struct UUI_Challenge_Rewards_C_FormatDigit_Params
{
	int                                                Int;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveResult
struct UUI_Challenge_Rewards_C_FormatSubobjectiveResult_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSubChallengeData>                   TargetArray1;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDLCChallengeType>                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveScore
struct UUI_Challenge_Rewards_C_FormatSubobjectiveScore_Params
{
	TArray<struct FSubChallengeData>                   TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlayPatchAwardAudio
struct UUI_Challenge_Rewards_C_PlayPatchAwardAudio_Params
{
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlaySubAwardAudio
struct UUI_Challenge_Rewards_C_PlaySubAwardAudio_Params
{
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromChallengeComplete
struct UUI_Challenge_Rewards_C_ContinueFromChallengeComplete_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCompleteLayout
struct UUI_Challenge_Rewards_C_DisplayCompleteLayout_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCellPop
struct UUI_Challenge_Rewards_C_DisplayCellPop_Params
{
	int                                                ResultsStep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCounter
struct UUI_Challenge_Rewards_C_DisplayCounter_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayContentCell
struct UUI_Challenge_Rewards_C_DisplayContentCell_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetSubobjectiveResult
struct UUI_Challenge_Rewards_C_SetSubobjectiveResult_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EDLCChallengeRank>                     Award;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayChallengeResults
struct UUI_Challenge_Rewards_C_DisplayChallengeResults_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.GetRewardCount
struct UUI_Challenge_Rewards_C_GetRewardCount_Params
{
	struct FBendRewardsScreenData                      Reward_Data;                                              // (Parm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.RequestLoadAllImages
struct UUI_Challenge_Rewards_C_RequestLoadAllImages_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CanPause
struct UUI_Challenge_Rewards_C_CanPause_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRewardLayout
struct UUI_Challenge_Rewards_C_DisplayRewardLayout_Params
{
	bool                                               isPatch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalStorylineScreen;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepLayout
struct UUI_Challenge_Rewards_C_DisplayRepLayout_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetRewardTextColors
struct UUI_Challenge_Rewards_C_SetRewardTextColors_Params
{
	struct FSlateColor                                 SlateColor;                                               // (Parm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Init
struct UUI_Challenge_Rewards_C_Init_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetHeaderData
struct UUI_Challenge_Rewards_C_SetHeaderData_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.NotifyParentOfComplete
struct UUI_Challenge_Rewards_C_NotifyParentOfComplete_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetParentReference
struct UUI_Challenge_Rewards_C_SetParentReference_Params
{
	class UUI_Challenge_HUD_C*                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetPausedState
struct UUI_Challenge_Rewards_C_SetPausedState_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepReward
struct UUI_Challenge_Rewards_C_DisplayRepReward_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ClearVisibilityAll
struct UUI_Challenge_Rewards_C_ClearVisibilityAll_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetColorScheme
struct UUI_Challenge_Rewards_C_SetColorScheme_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateOut
struct UUI_Challenge_Rewards_C_AnimateOut_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateIn
struct UUI_Challenge_Rewards_C_AnimateIn_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetDetails
struct UUI_Challenge_Rewards_C_SetDetails_Params
{
	TEnumAsByte<EDLCChallengeType>                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Challenge_Name;                                           // (Parm)
	float                                              RepAwarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RepMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CreditsAwarded;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCredits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CreditsMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Patch_Award;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total_Score;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRepGained;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRepTotal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRepMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   Time;                                                     // (Parm, ZeroConstructor)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Construct
struct UUI_Challenge_Rewards_C_Construct_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Tick
struct UUI_Challenge_Rewards_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet_Event
struct UUI_Challenge_Rewards_C_DetailsSet_Event_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed_Event
struct UUI_Challenge_Rewards_C_Closed_Event_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayReward
struct UUI_Challenge_Rewards_C_DisplayReward_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Details;                                                  // (Parm)
	struct FSlateColor                                 DetailsColor;                                             // (Parm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.LoadStoryLineimages
struct UUI_Challenge_Rewards_C_LoadStoryLineimages_Params
{
	TAssetPtr<class UObject>                           Target;                                                   // (Parm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CustomEvent_1
struct UUI_Challenge_Rewards_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnPreSaveGameLoaded_Event_1
struct UUI_Challenge_Rewards_C_OnPreSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ResetPage
struct UUI_Challenge_Rewards_C_ResetPage_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Destruct
struct UUI_Challenge_Rewards_C_Destruct_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_Challenge_Rewards_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished_Event
struct UUI_Challenge_Rewards_C_AssignXPFinished_Event_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FinishedAnimatingPercent_Event_1
struct UUI_Challenge_Rewards_C_FinishedAnimatingPercent_Event_1_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromComplete
struct UUI_Challenge_Rewards_C_ContinueFromComplete_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect1Pressed
struct UUI_Challenge_Rewards_C_OnSelect1Pressed_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnConfirmPressed
struct UUI_Challenge_Rewards_C_OnConfirmPressed_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect2Pressed
struct UUI_Challenge_Rewards_C_OnSelect2Pressed_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ExecuteUbergraph_UI_Challenge_Rewards
struct UUI_Challenge_Rewards_C_ExecuteUbergraph_UI_Challenge_Rewards_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished__DelegateSignature
struct UUI_Challenge_Rewards_C_AssignXPFinished__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed__DelegateSignature
struct UUI_Challenge_Rewards_C_Closed__DelegateSignature_Params
{
};

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet__DelegateSignature
struct UUI_Challenge_Rewards_C_DetailsSet__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
