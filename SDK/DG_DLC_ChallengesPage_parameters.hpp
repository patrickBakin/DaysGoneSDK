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

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UnbindMouseEvents
struct UDLC_ChallengesPage_C_UnbindMouseEvents_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BindMouseEvents
struct UDLC_ChallengesPage_C_BindMouseEvents_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.GetNextOverviewState
struct UDLC_ChallengesPage_C_GetNextOverviewState_Params
{
	int                                                Next_Overview_State;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateOverview
struct UDLC_ChallengesPage_C_UpdateOverview_Params
{
	int                                                OverviewState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateVisibilityByLockState
struct UDLC_ChallengesPage_C_UpdateVisibilityByLockState_Params
{
	bool                                               bIsLocked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateHeader
struct UDLC_ChallengesPage_C_UpdateHeader_Params
{
	struct FGameplayTag                                RowName;                                                  // (Parm)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.MakeChallengeData
struct UDLC_ChallengesPage_C_MakeChallengeData_Params
{
	TArray<struct FDLCGridWidgetData>                  ChallengeData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnFail_29B37AC048E189ACF76F6D99BBA5B0D2
struct UDLC_ChallengesPage_C_OnFail_29B37AC048E189ACF76F6D99BBA5B0D2_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2
struct UDLC_ChallengesPage_C_OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Construct
struct UDLC_ChallengesPage_C_Construct_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature
struct UDLC_ChallengesPage_C_BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveUp
struct UDLC_ChallengesPage_C_RecieveUp_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveDown
struct UDLC_ChallengesPage_C_RecieveDown_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveLeft
struct UDLC_ChallengesPage_C_RecieveLeft_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveRight
struct UDLC_ChallengesPage_C_RecieveRight_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCross
struct UDLC_ChallengesPage_C_RecieveCross_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCircle
struct UDLC_ChallengesPage_C_RecieveCircle_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.On Challenge Image
struct UDLC_ChallengesPage_C_On_Challenge_Image_Params
{
	TAssetPtr<class UTexture2D>                        Image;                                                    // (Parm)
	struct FGameplayTag                                ChallengeTag;                                             // (Parm)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Update Challenges
struct UDLC_ChallengesPage_C_Update_Challenges_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveTriangle
struct UDLC_ChallengesPage_C_RecieveTriangle_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Destruct
struct UDLC_ChallengesPage_C_Destruct_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_ChallengesPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_ChallengesPage_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_ChallengesPage_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemClick
struct UDLC_ChallengesPage_C_OnItemClick_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemHoverEnter
struct UDLC_ChallengesPage_C_OnItemHoverEnter_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.ExecuteUbergraph_DLC_ChallengesPage
struct UDLC_ChallengesPage_C_ExecuteUbergraph_DLC_ChallengesPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
