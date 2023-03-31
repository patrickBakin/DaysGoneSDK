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

// Function DLCStatePackage.DLCStatePackage_C.UserConstructionScript
struct ADLCStatePackage_C_UserConstructionScript_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.ChallengeStartedCall
struct ADLCStatePackage_C_ChallengeStartedCall_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.ChallengeRestartedCall
struct ADLCStatePackage_C_ChallengeRestartedCall_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.ChallengeFailedCall
struct ADLCStatePackage_C_ChallengeFailedCall_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.ChallengeCompletedCall
struct ADLCStatePackage_C_ChallengeCompletedCall_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.AddPlayerChosenLoadout
struct ADLCStatePackage_C_AddPlayerChosenLoadout_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.OnPurchaseCall
struct ADLCStatePackage_C_OnPurchaseCall_Params
{
	struct FGameplayTag                                ItemTag;                                                  // (Parm)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reputation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShopPoints;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnComboFinishedCall
struct ADLCStatePackage_C_OnComboFinishedCall_Params
{
	int                                                ComboCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.ChallengeQuitToMainCall
struct ADLCStatePackage_C_ChallengeQuitToMainCall_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnScoreIncreaseCall
struct ADLCStatePackage_C_OnScoreIncreaseCall_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnMedalIncreasedCall
struct ADLCStatePackage_C_OnMedalIncreasedCall_Params
{
	int                                                SubObjectiveIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MedalIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.CollateScoresAndMedals
struct ADLCStatePackage_C_CollateScoresAndMedals_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.MediumTickEvents
struct ADLCStatePackage_C_MediumTickEvents_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.ShortestTickEvents
struct ADLCStatePackage_C_ShortestTickEvents_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.LongTickEvents
struct ADLCStatePackage_C_LongTickEvents_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.ReceiveBeginPlay
struct ADLCStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.SetCurrentScoreManager
struct ADLCStatePackage_C_SetCurrentScoreManager_Params
{
	class ABP_ScoreManager_C*                          NewScoreManager;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.FailedToFindMetaManager
struct ADLCStatePackage_C_FailedToFindMetaManager_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.OnItemPurchased
struct ADLCStatePackage_C_OnItemPurchased_Params
{
	struct FGameplayTag                                ItemTag;                                                  // (Parm)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reputation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShopPoints;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.ReCheckDLCUIManager
struct ADLCStatePackage_C_ReCheckDLCUIManager_Params
{
};

// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeComplete
struct ADLCStatePackage_C_OnDLCChallengeComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeFail
struct ADLCStatePackage_C_OnDLCChallengeFail_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeQuitToMainMenu
struct ADLCStatePackage_C_OnDLCChallengeQuitToMainMenu_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnDlcChallengeRetry
struct ADLCStatePackage_C_OnDlcChallengeRetry_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnComboComplete
struct ADLCStatePackage_C_OnComboComplete_Params
{
	int                                                ComboCountOnComplete;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnScoreIncrease
struct ADLCStatePackage_C_OnScoreIncrease_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	int                                                ScoreEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.OnMedalIncrease
struct ADLCStatePackage_C_OnMedalIncrease_Params
{
	int                                                SubObjectiveIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubObjectiveMedal;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCStatePackage.DLCStatePackage_C.ExecuteUbergraph_DLCStatePackage
struct ADLCStatePackage_C_ExecuteUbergraph_DLCStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
