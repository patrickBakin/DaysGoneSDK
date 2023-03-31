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

// Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnFail_19F51DDD49F39D19D5A98F839DDFCEF2
struct UUI_Challenge_Skill_C_OnFail_19F51DDD49F39D19D5A98F839DDFCEF2_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2
struct UUI_Challenge_Skill_C_OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Skill.UI_Challenge_Skill_C.SetSkill
struct UUI_Challenge_Skill_C_SetSkill_Params
{
	struct FBendSkill                                  Skill;                                                    // (Parm)
};

// Function UI_Challenge_Skill.UI_Challenge_Skill_C.ExecuteUbergraph_UI_Challenge_Skill
struct UUI_Challenge_Skill_C_ExecuteUbergraph_UI_Challenge_Skill_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
