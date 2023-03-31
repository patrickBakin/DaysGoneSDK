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

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.CalculateScreenPosition
struct UUI_Challenge_HUD_C_CalculateScreenPosition_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideSkills
struct UUI_Challenge_HUD_C_HideSkills_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideAllChallengeHUD
struct UUI_Challenge_HUD_C_HideAllChallengeHUD_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeImage
struct UUI_Challenge_HUD_C_SetChallengeImage_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (Parm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ShowExtendedSubobjectives
struct UUI_Challenge_HUD_C_ShowExtendedSubobjectives_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayCountdownTimer
struct UUI_Challenge_HUD_C_DisplayCountdownTimer_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   TotalTime;                                                // (Parm, ZeroConstructor)
	struct FTimespan                                   CurrentTime;                                              // (Parm, ZeroConstructor)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ResultsComplete
struct UUI_Challenge_HUD_C_ResultsComplete_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveAward
struct UUI_Challenge_HUD_C_DisplaySubobjectiveAward_Params
{
	struct FText                                       Title;                                                    // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     ChallengeRank;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySkills
struct UUI_Challenge_HUD_C_DisplaySkills_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.IsScoreMeterVisible
struct UUI_Challenge_HUD_C_IsScoreMeterVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetRankColor
struct UUI_Challenge_HUD_C_GetRankColor_Params
{
	TEnumAsByte<EDLCChallengeRank>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCheckpointBP
struct UUI_Challenge_HUD_C_UpdateChallengeCheckpointBP_Params
{
	float                                              PlayerPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveCompleteBP
struct UUI_Challenge_HUD_C_SubobjectiveCompleteBP_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveWithValues
struct UUI_Challenge_HUD_C_DisplaySubobjectiveWithValues_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FText                                       Value;                                                    // (Parm)
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetChallengeColorAndIcon
struct UUI_Challenge_HUD_C_GetChallengeColorAndIcon_Params
{
	TEnumAsByte<EDLCChallengeType>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAwardBP
struct UUI_Challenge_HUD_C_DisplayPatchAwardBP_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	TEnumAsByte<EDLCChallengeRank>                     ChallengeRank;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScoreBP
struct UUI_Challenge_HUD_C_UpdateChallengeScoreBP_Params
{
	float                                              PlayerPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayPopup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   EnemyPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendSkeletalMeshComponent*                  EnemyMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	class UScoreCounter_C*                             Widget_Reference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMaterialTexture
struct UUI_Challenge_HUD_C_SetMaterialTexture_Params
{
	class UMaterialInstanceDynamic*                    DMI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMissionCompleteVisible
struct UUI_Challenge_HUD_C_SetMissionCompleteVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.TransitionToStatic
struct UUI_Challenge_HUD_C_TransitionToStatic_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideCurrentObjective
struct UUI_Challenge_HUD_C_HideCurrentObjective_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideBanner
struct UUI_Challenge_HUD_C_HideBanner_Params
{
	bool                                               ClearBannervisible;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallenge
struct UUI_Challenge_HUD_C_UpdateChallenge_Params
{
	TEnumAsByte<EDLCChallengeType>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetDetails
struct UUI_Challenge_HUD_C_SetDetails_Params
{
	TEnumAsByte<EDLCChallengeType>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	float                                              GoldPoints;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SilverPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BronzePoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Init
struct UUI_Challenge_HUD_C_Init_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_FFB9D4C04B2A734E230A1AB0D4D34446
struct UUI_Challenge_HUD_C_OnFail_FFB9D4C04B2A734E230A1AB0D4D34446_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446
struct UUI_Challenge_HUD_C_OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_BB2592EC4B3594DB62CA2B84D3297821
struct UUI_Challenge_HUD_C_OnFail_BB2592EC4B3594DB62CA2B84D3297821_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_BB2592EC4B3594DB62CA2B84D3297821
struct UUI_Challenge_HUD_C_OnSuccess_BB2592EC4B3594DB62CA2B84D3297821_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Construct
struct UUI_Challenge_HUD_C_Construct_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Tick
struct UUI_Challenge_HUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.CurrentAnmAnimationFin
struct UUI_Challenge_HUD_C_CurrentAnmAnimationFin_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HUDAnimAnimationFinished
struct UUI_Challenge_HUD_C_HUDAnimAnimationFinished_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayChallenge
struct UUI_Challenge_HUD_C_DisplayChallenge_Params
{
	TEnumAsByte<EDLCChallengeType>*                    ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      SubTitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             GoldPoints;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SilverPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BronzePoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSubobjectives;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ChallengeComplete
struct UUI_Challenge_HUD_C_ChallengeComplete_Params
{
	struct FDLCCompleteChallengeData*                  CompleteChallengeData;                                    // (Parm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjective
struct UUI_Challenge_HUD_C_DisplaySubobjective_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeTime
struct UUI_Challenge_HUD_C_UpdateChallengeTime_Params
{
	struct FTimespan*                                  CurrentTime;                                              // (Parm, ZeroConstructor)
	bool*                                              bUseLargeTimer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScore
struct UUI_Challenge_HUD_C_UpdateChallengeScore_Params
{
	float*                                             Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveComplete
struct UUI_Challenge_HUD_C_SubobjectiveComplete_Params
{
	int*                                               Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAward
struct UUI_Challenge_HUD_C_DisplayPatchAward_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      SubTitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EDLCChallengeRank>*                    ChallengeRank;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Start321Countdown
struct UUI_Challenge_HUD_C_Start321Countdown_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubChallengeAward
struct UUI_Challenge_HUD_C_DisplaySubChallengeAward_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>*                    SubChallengeRank;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNew;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTextureAsync
struct UUI_Challenge_HUD_C_SetTextureAsync_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetCountdownTime
struct UUI_Challenge_HUD_C_SetCountdownTime_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan*                                  TotalTime;                                                // (Parm, ZeroConstructor)
	struct FTimespan*                                  RemainingTime;                                            // (Parm, ZeroConstructor)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTime
struct UUI_Challenge_HUD_C_SetTime_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan*                                  Time;                                                     // (Parm, ZeroConstructor)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeSkills
struct UUI_Challenge_HUD_C_SetChallengeSkills_Params
{
	TArray<struct FBendSkill>*                         Skills;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayAltScore
struct UUI_Challenge_HUD_C_DisplayAltScore_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ContinueToResults
struct UUI_Challenge_HUD_C_ContinueToResults_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveScoreMeter
struct UUI_Challenge_HUD_C_DisplaySubobjectiveScoreMeter_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Score;                                                    // (Parm)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayDashboard
struct UUI_Challenge_HUD_C_DisplayDashboard_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnChallengeImage
struct UUI_Challenge_HUD_C_OnChallengeImage_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (Parm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCombo
struct UUI_Challenge_HUD_C_UpdateChallengeCombo_Params
{
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Cancel321Countdown
struct UUI_Challenge_HUD_C_Cancel321Countdown_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayTimeGain
struct UUI_Challenge_HUD_C_DisplayTimeGain_Params
{
	float                                              SecondsGained;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (Parm)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.InternalCooldownTimerAudio
struct UUI_Challenge_HUD_C_InternalCooldownTimerAudio_Params
{
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayEndOfRoundBonus
struct UUI_Challenge_HUD_C_DisplayEndOfRoundBonus_Params
{
	struct FText                                       Title;                                                    // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ExecuteUbergraph_UI_Challenge_HUD
struct UUI_Challenge_HUD_C_ExecuteUbergraph_UI_Challenge_HUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
