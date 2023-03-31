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

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BeginTransition
struct UDLC_ChallengesMenu_C_BeginTransition_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnChallengeSelected
struct UDLC_ChallengesMenu_C_OnChallengeSelected_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.HandleNavigation
struct UDLC_ChallengesMenu_C_HandleNavigation_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Challenges | From Loadout
struct UDLC_ChallengesMenu_C_To_Challenges_|_From_Loadout_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Loadout | From Challenges
struct UDLC_ChallengesMenu_C_To_Loadout_|_From_Challenges_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Weekly Challenge Loadout
struct UDLC_ChallengesMenu_C_To_Weekly_Challenge_Loadout_Params
{
	struct FName                                       ChallengeTagName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Construct
struct UDLC_ChallengesMenu_C_Construct_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Tick
struct UDLC_ChallengesMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnCancelPressed
struct UDLC_ChallengesMenu_C_OnCancelPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnConfirmPressed
struct UDLC_ChallengesMenu_C_OnConfirmPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnWidgetClosed
struct UDLC_ChallengesMenu_C_OnWidgetClosed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature
struct UDLC_ChallengesMenu_C_BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPagePreviousPressed
struct UDLC_ChallengesMenu_C_OnPagePreviousPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPageNextPressed
struct UDLC_ChallengesMenu_C_OnPageNextPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnLeftPressed
struct UDLC_ChallengesMenu_C_OnLeftPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnRightPressed
struct UDLC_ChallengesMenu_C_OnRightPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnDownPressed
struct UDLC_ChallengesMenu_C_OnDownPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnUpPressed
struct UDLC_ChallengesMenu_C_OnUpPressed_Params
{
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ExecuteUbergraph_DLC_ChallengesMenu
struct UDLC_ChallengesMenu_C_ExecuteUbergraph_DLC_ChallengesMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ChallengeSelected__DelegateSignature
struct UDLC_ChallengesMenu_C_ChallengeSelected__DelegateSignature_Params
{
	TEnumAsByte<EMissionIDs>                           ChallengeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
