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

// Function PlayerSkillManager.PlayerSkillManager_C.ResetMeleeSkills
struct UPlayerSkillManager_C_ResetMeleeSkills_Params
{
};

// Function PlayerSkillManager.PlayerSkillManager_C.ResetGeoffsSkills
struct UPlayerSkillManager_C_ResetGeoffsSkills_Params
{
};

// Function PlayerSkillManager.PlayerSkillManager_C.OnSkillAcquired
struct UPlayerSkillManager_C_OnSkillAcquired_Params
{
	TEnumAsByte<EInventorySkillID>*                    SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill**                        Skill;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSkillManager.PlayerSkillManager_C.OnSkillsModified
struct UPlayerSkillManager_C_OnSkillsModified_Params
{
};

// Function PlayerSkillManager.PlayerSkillManager_C.ExecuteUbergraph_PlayerSkillManager
struct UPlayerSkillManager_C_ExecuteUbergraph_PlayerSkillManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
