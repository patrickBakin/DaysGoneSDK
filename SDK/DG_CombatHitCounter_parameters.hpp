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

// Function CombatHitCounter.CombatHitCounter_C.DisplayXLScoreAward
struct UCombatHitCounter_C_DisplayXLScoreAward_Params
{
	struct FText                                       XPBonus;                                                  // (Parm)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MotionVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.Reset
struct UCombatHitCounter_C_Reset_Params
{
};

// Function CombatHitCounter.CombatHitCounter_C.DisplayScoreAward
struct UCombatHitCounter_C_DisplayScoreAward_Params
{
	struct FText                                       XPBonus;                                                  // (Parm)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MotionVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.DisplayXPBonusAward
struct UCombatHitCounter_C_DisplayXPBonusAward_Params
{
	struct FVector2D                                   Motion_Vector;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BonusXP;                                                  // (Parm)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.DisplayXPAward
struct UCombatHitCounter_C_DisplayXPAward_Params
{
	struct FVector2D                                   MotionVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.DisplayHitCounter
struct UCombatHitCounter_C_DisplayHitCounter_Params
{
	TEnumAsByte<Enum_Combat_Award_Types>               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MotionVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.Construct
struct UCombatHitCounter_C_Construct_Params
{
};

// Function CombatHitCounter.CombatHitCounter_C.Tick
struct UCombatHitCounter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.CustomEvent_1
struct UCombatHitCounter_C_CustomEvent_1_Params
{
};

// Function CombatHitCounter.CombatHitCounter_C.ExecuteUbergraph_CombatHitCounter
struct UCombatHitCounter_C_ExecuteUbergraph_CombatHitCounter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombatHitCounter.CombatHitCounter_C.OnClose__DelegateSignature
struct UCombatHitCounter_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
