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

// Function UI_Reward_XP.UI_Reward_XP_C.SetTexture
struct UUI_Reward_XP_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reward_XP.UI_Reward_XP_C.UpdatePercent
struct UUI_Reward_XP_C_UpdatePercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reward_XP.UI_Reward_XP_C.SetDetails
struct UUI_Reward_XP_C_SetDetails_Params
{
	struct FSlateColor                                 DetailsColorSlate;                                        // (Parm)
	int                                                Next_Level;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPAfterAward;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPGained;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DetailsColorLinear;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLevelUp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XpCount;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                XPTotal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reward_XP.UI_Reward_XP_C.Construct
struct UUI_Reward_XP_C_Construct_Params
{
};

// Function UI_Reward_XP.UI_Reward_XP_C.Tick
struct UUI_Reward_XP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reward_XP.UI_Reward_XP_C.ExecuteUbergraph_UI_Reward_XP
struct UUI_Reward_XP_C_ExecuteUbergraph_UI_Reward_XP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reward_XP.UI_Reward_XP_C.FinishedAnimatingPercent__DelegateSignature
struct UUI_Reward_XP_C_FinishedAnimatingPercent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
