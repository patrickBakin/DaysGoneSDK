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

// Function UI_Score_Meter.UI_Score_Meter_C.SubobjectiveFailed
struct UUI_Score_Meter_C_SubobjectiveFailed_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.AnimateSubobjectives
struct UUI_Score_Meter_C_AnimateSubobjectives_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.UpdateSubobjectiveScore
struct UUI_Score_Meter_C_UpdateSubobjectiveScore_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Score;                                                    // (Parm)
	struct FLinearColor                                RankColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.RemoveMissionTimer
struct UUI_Score_Meter_C_RemoveMissionTimer_Params
{
};

// Function UI_Score_Meter.UI_Score_Meter_C.NotifyParentOfComplete
struct UUI_Score_Meter_C_NotifyParentOfComplete_Params
{
};

// Function UI_Score_Meter.UI_Score_Meter_C.UpdatePlayerPoints
struct UUI_Score_Meter_C_UpdatePlayerPoints_Params
{
	float                                              PlayerPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.SetParentReference
struct UUI_Score_Meter_C_SetParentReference_Params
{
	class UUI_Challenge_HUD_C*                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.SetDetails
struct UUI_Score_Meter_C_SetDetails_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoldPoints;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SilverPoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BronzePoints;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeType>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.Construct
struct UUI_Score_Meter_C_Construct_Params
{
};

// Function UI_Score_Meter.UI_Score_Meter_C.Tick
struct UUI_Score_Meter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.ActivateTimer
struct UUI_Score_Meter_C_ActivateTimer_Params
{
	struct FHudMissionTimerDetails*                    Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_Score_Meter.UI_Score_Meter_C.SetPercent
struct UUI_Score_Meter_C_SetPercent_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.UpdateCombo
struct UUI_Score_Meter_C_UpdateCombo_Params
{
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score_Meter.UI_Score_Meter_C.ExecuteUbergraph_UI_Score_Meter
struct UUI_Score_Meter_C_ExecuteUbergraph_UI_Score_Meter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
