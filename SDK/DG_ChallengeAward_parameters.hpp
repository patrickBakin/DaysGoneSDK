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

// Function ChallengeAward.ChallengeAward_C.GetParentKey
struct UChallengeAward_C_GetParentKey_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
	struct FGameplayTag                                ParentKey;                                                // (Parm, OutParm)
};

// Function ChallengeAward.ChallengeAward_C.SetAwardValues
struct UChallengeAward_C_SetAwardValues_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubChallenge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeType>                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.SetAward
struct UChallengeAward_C_SetAward_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubChallenge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeType>                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.OnFail_516F99A54A68B3E029DB76AA48944DF9
struct UChallengeAward_C_OnFail_516F99A54A68B3E029DB76AA48944DF9_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.OnSuccess_516F99A54A68B3E029DB76AA48944DF9
struct UChallengeAward_C_OnSuccess_516F99A54A68B3E029DB76AA48944DF9_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.OnFail_5019D13A4F6D8D4FA102E8A8CA114B52
struct UChallengeAward_C_OnFail_5019D13A4F6D8D4FA102E8A8CA114B52_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52
struct UChallengeAward_C_OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeAward.ChallengeAward_C.Set Challenge From Save
struct UChallengeAward_C_Set_Challenge_From_Save_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
};

// Function ChallengeAward.ChallengeAward_C.Set Subchallenge From Save
struct UChallengeAward_C_Set_Subchallenge_From_Save_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
};

// Function ChallengeAward.ChallengeAward_C.ExecuteUbergraph_ChallengeAward
struct UChallengeAward_C_ExecuteUbergraph_ChallengeAward_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
