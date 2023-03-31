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

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRankTag
struct UUI_HUD_ChallengeReward_Item_C_GetRankTag_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm, OutParm)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRepPatchTagByChallenge
struct UUI_HUD_ChallengeReward_Item_C_GetRepPatchTagByChallenge_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        PatchImage;                                               // (Parm, OutParm)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetRepDetails
struct UUI_HUD_ChallengeReward_Item_C_SetRepDetails_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetPatchTagByChallenge
struct UUI_HUD_ChallengeReward_Item_C_GetPatchTagByChallenge_Params
{
	struct FGameplayTag                                CHALLENGE;                                                // (Parm)
	struct FGameplayTag                                Patch_Tag;                                                // (Parm, OutParm)
	struct FText                                       Patch_Name;                                               // (Parm, OutParm)
	TEnumAsByte<EDLCValueDisplayType>                  Patch_Type;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetPatchDetails
struct UUI_HUD_ChallengeReward_Item_C_SetPatchDetails_Params
{
	struct FGameplayTag                                ChallengeType;                                            // (Parm)
	struct FLinearColor                                RewardColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_2D6A96AE4B565344B5AC71AC56C7A36E
struct UUI_HUD_ChallengeReward_Item_C_OnFail_2D6A96AE4B565344B5AC71AC56C7A36E_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E
struct UUI_HUD_ChallengeReward_Item_C_OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_8EC0E0394064DA46E1B2948AAF6A1117
struct UUI_HUD_ChallengeReward_Item_C_OnFail_8EC0E0394064DA46E1B2948AAF6A1117_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117
struct UUI_HUD_ChallengeReward_Item_C_OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.Construct
struct UUI_HUD_ChallengeReward_Item_C_Construct_Params
{
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadPatch
struct UUI_HUD_ChallengeReward_Item_C_LoadPatch_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (Parm)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadRepPatch
struct UUI_HUD_ChallengeReward_Item_C_LoadRepPatch_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (Parm)
};

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.ExecuteUbergraph_UI_HUD_ChallengeReward_Item
struct UUI_HUD_ChallengeReward_Item_C_ExecuteUbergraph_UI_HUD_ChallengeReward_Item_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
