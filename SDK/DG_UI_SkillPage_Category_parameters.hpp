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

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForSurvivalDifficultyLockedSkills
struct UUI_SkillPage_Category_C_CheckForSurvivalDifficultyLockedSkills_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	bool                                               ShouldLockSkill;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForUnlock
struct UUI_SkillPage_Category_C_CheckForUnlock_Params
{
	bool                                               bHasUnlock;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTutorialReference
struct UUI_SkillPage_Category_C_SetTutorialReference_Params
{
	class UWidget*                                     WidgetRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckTierUnlocked
struct UUI_SkillPage_Category_C_CheckTierUnlocked_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateTrophies
struct UUI_SkillPage_Category_C_UpdateTrophies_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckFocusedShot
struct UUI_SkillPage_Category_C_CheckFocusedShot_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.Sortskills
struct UUI_SkillPage_Category_C_Sortskills_Params
{
	TArray<int>                                        TierSizes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.StoreDataByFName
struct UUI_SkillPage_Category_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSelectionDetails
struct UUI_SkillPage_Category_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTheMenuHeader
struct UUI_SkillPage_Category_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetSkillTierUnlockedState
struct UUI_SkillPage_Category_C_SetSkillTierUnlockedState_Params
{
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CircleSelectionInputGiven
struct UUI_SkillPage_Category_C_CircleSelectionInputGiven_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.Construct
struct UUI_SkillPage_Category_C_Construct_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionHold
struct UUI_SkillPage_Category_C_CrossSelectionHold_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSkillTierStates
struct UUI_SkillPage_Category_C_UpdateSkillTierStates_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.ResetHoldInput
struct UUI_SkillPage_Category_C_ResetHoldInput_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionInputGiven
struct UUI_SkillPage_Category_C_CrossSelectionInputGiven_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.MenuSelected
struct UUI_SkillPage_Category_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.R1orL1SelectionInputGiven
struct UUI_SkillPage_Category_C_R1orL1SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.RecreateAllGrids
struct UUI_SkillPage_Category_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SkillAsyncLoadTextureAsset
struct UUI_SkillPage_Category_C_SkillAsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.FlushStaticImages
struct UUI_SkillPage_Category_C_FlushStaticImages_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SkillPage_Category_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SkillPage_Category_C_BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SkillPage_Category_C_BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SkillPage_Category_C_BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.HandleMousePress
struct UUI_SkillPage_Category_C_HandleMousePress_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnClick
struct UUI_SkillPage_Category_C_OnClick_Params
{
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnHoldStart
struct UUI_SkillPage_Category_C_OnHoldStart_Params
{
	TEnumAsByte<ESkillStatus>                          CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SkillTag;                                                 // (Parm)
};

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.ExecuteUbergraph_UI_SkillPage_Category
struct UUI_SkillPage_Category_C_ExecuteUbergraph_UI_SkillPage_Category_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
