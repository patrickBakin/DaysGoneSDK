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

// Function UI_HudObjective.UI_HudObjective_C.ClearNotifications
struct UUI_HudObjective_C_ClearNotifications_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.SetMaterialTexture
struct UUI_HudObjective_C_SetMaterialTexture_Params
{
	class UMaterialInstanceDynamic*                    DMI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.Update Survival Mode Visibility
struct UUI_HudObjective_C_Update_Survival_Mode_Visibility_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.PauseAndRemoveForRewardScreen
struct UUI_HudObjective_C_PauseAndRemoveForRewardScreen_Params
{
	bool                                               Remove;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.HideMissionFail
struct UUI_HudObjective_C_HideMissionFail_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.DisplayMissionFail
struct UUI_HudObjective_C_DisplayMissionFail_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Messages;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.HideOpenWorldObjective
struct UUI_HudObjective_C_HideOpenWorldObjective_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.DisplayOpenWorldObjective
struct UUI_HudObjective_C_DisplayOpenWorldObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.PauseObjectiveMeter
struct UUI_HudObjective_C_PauseObjectiveMeter_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.RemoveObjectiveMeter
struct UUI_HudObjective_C_RemoveObjectiveMeter_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.UnlockAnimationFinished
struct UUI_HudObjective_C_UnlockAnimationFinished_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveMeter
struct UUI_HudObjective_C_UpdateObjectiveMeter_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.DisplayObjectiveMeter
struct UUI_HudObjective_C_DisplayObjectiveMeter_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.HideUnlockObjective
struct UUI_HudObjective_C_HideUnlockObjective_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.UnlockObjective
struct UUI_HudObjective_C_UnlockObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.CancelObjective
struct UUI_HudObjective_C_CancelObjective_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.HideOverrideObjective
struct UUI_HudObjective_C_HideOverrideObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.StorePersistantData
struct UUI_HudObjective_C_StorePersistantData_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.SetMissionCompleteVisible
struct UUI_HudObjective_C_SetMissionCompleteVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.ObjectiveComplete
struct UUI_HudObjective_C_ObjectiveComplete_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FBendRewardsScreenData                      RewardScreenData;                                         // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.UpdateObjectiveData
struct UUI_HudObjective_C_UpdateObjectiveData_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.DisplayOverrideObjective
struct UUI_HudObjective_C_DisplayOverrideObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.TransitionToCurrentObjective
struct UUI_HudObjective_C_TransitionToCurrentObjective_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.HideCurrentObjective
struct UUI_HudObjective_C_HideCurrentObjective_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.HideBanner
struct UUI_HudObjective_C_HideBanner_Params
{
	bool                                               ClearBannervisible;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.UpdateObjective
struct UUI_HudObjective_C_UpdateObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	bool                                               NotNew;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.DisplayNewObjective
struct UUI_HudObjective_C_DisplayNewObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HudObjective.UI_HudObjective_C.SetDetails
struct UUI_HudObjective_C_SetDetails_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	bool                                               Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.Init
struct UUI_HudObjective_C_Init_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.Construct
struct UUI_HudObjective_C_Construct_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer1
struct UUI_HudObjective_C_OverrideTimer1_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.Timeout
struct UUI_HudObjective_C_Timeout_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer2
struct UUI_HudObjective_C_OverrideTimer2_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer3
struct UUI_HudObjective_C_OverrideTimer3_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer4
struct UUI_HudObjective_C_OverrideTimer4_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.OverrideTimer5
struct UUI_HudObjective_C_OverrideTimer5_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.Timeout2
struct UUI_HudObjective_C_Timeout2_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.Timeout3
struct UUI_HudObjective_C_Timeout3_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.Timeout4
struct UUI_HudObjective_C_Timeout4_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.Timeout5
struct UUI_HudObjective_C_Timeout5_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.CurrentAnmAnimationFin
struct UUI_HudObjective_C_CurrentAnmAnimationFin_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.HUDAnimAnimationFinished
struct UUI_HudObjective_C_HUDAnimAnimationFinished_Params
{
};

// Function UI_HudObjective.UI_HudObjective_C.ExecuteUbergraph_UI_HudObjective
struct UUI_HudObjective_C_ExecuteUbergraph_UI_HudObjective_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudObjective.UI_HudObjective_C.ObjectiveAnimationFinished__DelegateSignature
struct UUI_HudObjective_C_ObjectiveAnimationFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
