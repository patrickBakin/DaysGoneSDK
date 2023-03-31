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

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetLeaderboardType
struct UDLC_LeaderboardsPage_C_SetLeaderboardType_Params
{
	TEnumAsByte<EBendLeaderboardID>                    Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELeaderboardType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetGlobalRank
struct UDLC_LeaderboardsPage_C_SetGlobalRank_Params
{
	int                                                PlayerRank;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Set Challenge
struct UDLC_LeaderboardsPage_C_Set_Challenge_Params
{
	struct FGameplayTag                                ChallengeTag;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5
struct UDLC_LeaderboardsPage_C_OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5
struct UDLC_LeaderboardsPage_C_OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Construct
struct UDLC_LeaderboardsPage_C_Construct_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveCircle
struct UDLC_LeaderboardsPage_C_RecieveCircle_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveTriangle
struct UDLC_LeaderboardsPage_C_RecieveTriangle_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveL2
struct UDLC_LeaderboardsPage_C_RecieveL2_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveR2
struct UDLC_LeaderboardsPage_C_RecieveR2_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.On Challenge Image
struct UDLC_LeaderboardsPage_C_On_Challenge_Image_Params
{
	TAssetPtr<class UTexture2D>                        Image;                                                    // (Parm)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature
struct UDLC_LeaderboardsPage_C_BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature
struct UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.ExecuteUbergraph_DLC_LeaderboardsPage
struct UDLC_LeaderboardsPage_C_ExecuteUbergraph_DLC_LeaderboardsPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnLoadoutClicked__DelegateSignature
struct UDLC_LeaderboardsPage_C_OnLoadoutClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
