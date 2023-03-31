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

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ForceOwnedState
struct UUI_GridItem_SkillSlot_C_ForceOwnedState_Params
{
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOff
struct UUI_GridItem_SkillSlot_C_HighlightOff_Params
{
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOn
struct UUI_GridItem_SkillSlot_C_HighlightOn_Params
{
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.UpdateSkillData
struct UUI_GridItem_SkillSlot_C_UpdateSkillData_Params
{
	bool                                               Updated;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.GetSkillData
struct UUI_GridItem_SkillSlot_C_GetSkillData_Params
{
	struct FText                                       SkillName;                                                // (Parm, OutParm)
	struct FText                                       Description;                                              // (Parm, OutParm)
	int                                                PointsRequired;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillStatus>                          CurrentState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        IconAsset;                                                // (Parm, OutParm)
	bool                                               CanAfford;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SkillTag;                                                 // (Parm, OutParm)
	TEnumAsByte<ESkillTier>                            SkillTier;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        ImageAsset;                                               // (Parm, OutParm)
	struct FText                                       TutorialText;                                             // (Parm, OutParm)
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.StoreSkill
struct UUI_GridItem_SkillSlot_C_StoreSkill_Params
{
	struct FBendSkill                                  Skill;                                                    // (Parm)
	bool                                               FOCUSEDSHOT;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.SetSelected
struct UUI_GridItem_SkillSlot_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.BindSKillToUnlock
struct UUI_GridItem_SkillSlot_C_BindSKillToUnlock_Params
{
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.OnSkillModified_Unlocked_Event_1
struct UUI_GridItem_SkillSlot_C_OnSkillModified_Unlocked_Event_1_Params
{
	TEnumAsByte<EInventorySkillID>                     SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill*                         SkillItem;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.Construct
struct UUI_GridItem_SkillSlot_C_Construct_Params
{
};

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ExecuteUbergraph_UI_GridItem_SkillSlot
struct UUI_GridItem_SkillSlot_C_ExecuteUbergraph_UI_GridItem_SkillSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
