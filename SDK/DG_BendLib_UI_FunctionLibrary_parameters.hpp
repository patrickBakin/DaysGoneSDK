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

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMenuTranslationOffset
struct UBendLib_UI_FunctionLibrary_C_GetMenuTranslationOffset_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TranslationOffset;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SaveAndApplyGameUserSettings
struct UBendLib_UI_FunctionLibrary_C_SaveAndApplyGameUserSettings_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayFileSelectMenu
struct UBendLib_UI_FunctionLibrary_C_DisplayFileSelectMenu_Params
{
	TEnumAsByte<ESaveMenuMode>                         MenuMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnFileSelected;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UFileSelectMenu_C*                           Menu;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInputActionFromButton
struct UBendLib_UI_FunctionLibrary_C_GetInputActionFromButton_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActionOffset
struct UBendLib_UI_FunctionLibrary_C_ActionOffset_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseRewardsPanel
struct UBendLib_UI_FunctionLibrary_C_CloseRewardsPanel_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowMissionInStorylinesMenu
struct UBendLib_UI_FunctionLibrary_C_ShowMissionInStorylinesMenu_Params
{
	class UObject*                                     MissionOrJob;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMultiByName
struct UBendLib_UI_FunctionLibrary_C_DisplayTutorialMultiByName_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HiddenTutorial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimpleByName
struct UBendLib_UI_FunctionLibrary_C_DisplayTutorialSimpleByName_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HiddenTutorial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayWeaponStats
struct UBendLib_UI_FunctionLibrary_C_DisplayWeaponStats_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SubstituteGlyphs
struct UBendLib_UI_FunctionLibrary_C_SubstituteGlyphs_Params
{
	struct FText                                       Target_Text;                                              // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Formatted_Text;                                           // (Parm, OutParm)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowMeshInScreenSpace
struct UBendLib_UI_FunctionLibrary_C_FollowMeshInScreenSpace_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SmoothMotion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PrevPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateTracking
struct UBendLib_UI_FunctionLibrary_C_UpdateTracking_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTracking
struct UBendLib_UI_FunctionLibrary_C_DisplayTracking_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter_1
struct UBendLib_UI_FunctionLibrary_C_RemoveObjectiveMeter_1_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTrust
struct UBendLib_UI_FunctionLibrary_C_DisplayTrust_Params
{
	int                                                TrustGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetCurrentDisplayedObjectiveIndex
struct UBendLib_UI_FunctionLibrary_C_GetCurrentDisplayedObjectiveIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter
struct UBendLib_UI_FunctionLibrary_C_RemoveObjectiveMeter_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateObjectiveMeter
struct UBendLib_UI_FunctionLibrary_C_UpdateObjectiveMeter_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjectiveMeter
struct UBendLib_UI_FunctionLibrary_C_DisplayObjectiveMeter_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjective
struct UBendLib_UI_FunctionLibrary_C_DisplayObjective_Params
{
	TEnumAsByte<EObjectiveHudState>                    HUD_State;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FBendRewardsScreenData                      RewardScreenData;                                         // (Parm)
	class UObject*                                     DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentlyTracked;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlocked
struct UBendLib_UI_FunctionLibrary_C_AddObjectiveUnlocked_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlockedOld
struct UBendLib_UI_FunctionLibrary_C_AddObjectiveUnlockedOld_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FString                                     SubTitle;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetObjectiveIconAndColor
struct UBendLib_UI_FunctionLibrary_C_GetObjectiveIconAndColor_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SlateColor;                                               // (Parm, OutParm)
	class UTexture2D*                                  MapIcon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetRadarVisible
struct UBendLib_UI_FunctionLibrary_C_SetRadarVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ContextualButtonPosition
struct UBendLib_UI_FunctionLibrary_C_ContextualButtonPosition_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SmoothPosition2D_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_SmoothPosition2D_DEPRECATED_Params
{
	struct FVector2D                                   TargetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PrevPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ConstrainToMargin
struct UBendLib_UI_FunctionLibrary_C_ConstrainToMargin_Params
{
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ButtonOffset
struct UBendLib_UI_FunctionLibrary_C_ButtonOffset_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowActorInScreenSpace_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_FollowActorInScreenSpace_DEPRECATED_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SmoothMotion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PrevPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OverrideComponent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.NormalizeAngle_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_NormalizeAngle_DEPRECATED_Params
{
	float                                              InAngle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInteractButtonTexture
struct UBendLib_UI_FunctionLibrary_C_GetInteractButtonTexture_Params
{
	TEnumAsByte<EInteractButton>                       Button_Type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetHUDIconByType
struct UBendLib_UI_FunctionLibrary_C_GetHUDIconByType_Params
{
	TEnumAsByte<Enum_IconTypes>                        Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayCredits
struct UBendLib_UI_FunctionLibrary_C_DisplayCredits_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Name;                                                     // (Parm)
	TEnumAsByte<Enum_AnchorPosition>                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlidingAnimation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TitleCredits_C*                          Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CheckTextFit
struct UBendLib_UI_FunctionLibrary_C_CheckTextFit_Params
{
	class UTextBlock*                                  TextBlock;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMissionPopupQueue
struct UBendLib_UI_FunctionLibrary_C_GetMissionPopupQueue_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUI_HudMissionPopupDetails>          Queue;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetUiWeaponColor
struct UBendLib_UI_FunctionLibrary_C_GetUiWeaponColor_Params
{
	TEnumAsByte<EWeaponType>                           Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetMissionInfoPopupInteractProgress
struct UBendLib_UI_FunctionLibrary_C_SetMissionInfoPopupInteractProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetBinocularsAiming
struct UBendLib_UI_FunctionLibrary_C_SetBinocularsAiming_Params
{
	bool                                               Aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetFactionIconTexture
struct UBendLib_UI_FunctionLibrary_C_GetFactionIconTexture_Params
{
	TEnumAsByte<EAIFactionType>                        Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenAlignment_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenAlignment_DEPRECATED_Params
{
	bool                                               IsTweening;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UCanvasPanelSlot*                            Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetAmmoCount_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_GetAmmoCount_DEPRECATED_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.IncrementProgress_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_IncrementProgress_DEPRECATED_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.HideHUD
struct UBendLib_UI_FunctionLibrary_C_HideHUD_Params
{
	bool                                               ExcludeMiniMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeWeaponInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeNotifications;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeTooltips;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeNpcMeter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeXpMeter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeReticles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeLocationInfo;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeWaypoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeCallouts;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeInteracts;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowHUD
struct UBendLib_UI_FunctionLibrary_C_ShowHUD_Params
{
	bool                                               ExcludeMiniMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeWeaponInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeNotifications;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeTooltips;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeNpcMeter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeXpMeter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeReticles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeLocationInfo;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeWaypoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeCallouts;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeInteracts;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeStamina;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeAdrenaline;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeSupplies;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeWeapons;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CancelNotification
struct UBendLib_UI_FunctionLibrary_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayPopupPrompt
struct UBendLib_UI_FunctionLibrary_C_DisplayPopupPrompt_Params
{
	struct FSlatePopupDetails                          PopupDetails;                                             // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_PopupMenuWidget_C*                       PopUp;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayNotification
struct UBendLib_UI_FunctionLibrary_C_DisplayNotification_Params
{
	TEnumAsByte<EUI_HudNotificationType>               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FText                                       TitleText;                                                // (Parm)
	struct FString                                     SubTitle;                                                 // (Parm, ZeroConstructor)
	struct FText                                       SubtitleText;                                             // (Parm)
	struct FString                                     Progress;                                                 // (Parm, ZeroConstructor)
	struct FText                                       ProgressText;                                             // (Parm)
	TEnumAsByte<Enum_NotifyProgressType>               ProgressType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ItemTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PlaySound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MarkComplete;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjectiveCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BannerType>                       BannerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesBasicDataForUI               StoryLine;                                                // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenVectorParameter_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenVectorParameter_DEPRECATED_Params
{
	bool                                               IsTweening;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ValueFrom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ValueTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetWorldTimeFriendly_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_GetWorldTimeFriendly_DEPRECATED_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Time;                                                     // (Parm, OutParm)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayMissionInfoPopup
struct UBendLib_UI_FunctionLibrary_C_DisplayMissionInfoPopup_Params
{
	TEnumAsByte<EUI_HudPopupType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EUI_RewardType>                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FActorInteractDetails                       InteractDetails;                                          // (Parm)
	class UObject*                                     UtilityObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseTutorial
struct UBendLib_UI_FunctionLibrary_C_CloseTutorial_Params
{
	class UUI_TutorialPanel_C*                         TutorialWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByEnum_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_GetButtonTextureByEnum_DEPRECATED_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Dimensions;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByMarkup_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_GetButtonTextureByMarkup_DEPRECATED_Params
{
	struct FString                                     Markup;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonTexture;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMashing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimple
struct UBendLib_UI_FunctionLibrary_C_DisplayTutorialSimple_Params
{
	class UBendTutorialSimpleData*                     DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HiddenTutorial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeForButton;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMulti
struct UBendLib_UI_FunctionLibrary_C_DisplayTutorialMulti_Params
{
	class UBendTutorialMultiData*                      DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HiddenTutorial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScalarParameter_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenScalarParameter_DEPRECATED_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           Easing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenBorderBrushColor
struct UBendLib_UI_FunctionLibrary_C_TweenBorderBrushColor_Params
{
	bool                                               IsTweening;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTweeningOut;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FrameOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateLocationPanel
struct UBendLib_UI_FunctionLibrary_C_UpdateLocationPanel_Params
{
	TEnumAsByte<Enum_HudLocation>                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     locationName;                                             // (Parm, ZeroConstructor)
	float                                              PercentComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMaxTrust;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustTier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCredits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseLocationPanel
struct UBendLib_UI_FunctionLibrary_C_CloseLocationPanel_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayLocationPanel
struct UBendLib_UI_FunctionLibrary_C_DisplayLocationPanel_Params
{
	TEnumAsByte<Enum_HudLocation>                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       locationName;                                             // (Parm)
	float                                              PercentComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrustMax;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustTier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCredits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         EncampmentData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveIcon
struct UBendLib_UI_FunctionLibrary_C_SetObjectiveIcon_Params
{
	class UHudNotificationItemWidget*                  Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Text;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveText
struct UBendLib_UI_FunctionLibrary_C_SetObjectiveText_Params
{
	class UHudNotificationItemWidget*                  Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveFailed
struct UBendLib_UI_FunctionLibrary_C_SetObjectiveFailed_Params
{
	class UHudNotificationItemWidget*                  Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectives
struct UBendLib_UI_FunctionLibrary_C_ClearObjectives_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.PauseObjectiveMeter
struct UBendLib_UI_FunctionLibrary_C_PauseObjectiveMeter_Params
{
	bool                                               Paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveMeterPercent
struct UBendLib_UI_FunctionLibrary_C_SetObjectiveMeterPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectiveMeter
struct UBendLib_UI_FunctionLibrary_C_ClearObjectiveMeter_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActivateObjectiveMeter_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_ActivateObjectiveMeter_DEPRECATED_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Inverted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UHudMissionTimerWidget*                      ObjectiveTimer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetWidgetToActorPosition_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_SetWidgetToActorPosition_DEPRECATED_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Margin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Centered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               WithinViewoport;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenCollapseHeight_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenCollapseHeight_DEPRECATED_Params
{
	bool                                               IsTweening;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    SizeBox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTweeningOut;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FrameOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenTranslation_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenTranslation_DEPRECATED_Params
{
	bool                                               IsTweening;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.WeaponTypeToSlot_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_WeaponTypeToSlot_DEPRECATED_Params
{
	TEnumAsByte<EWeaponType>                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHudWeaponWidgetSlot>                  Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScale
struct UBendLib_UI_FunctionLibrary_C_TweenScale_Params
{
	bool                                               IsTweening;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           Easing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTweeningOut;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FrameOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenColor_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_TweenColor_DEPRECATED_Params
{
	bool                                               IsTweening;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                ColorFrom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.EaseLinearColor_DEPRECATED
struct UBendLib_UI_FunctionLibrary_C_EaseLinearColor_DEPRECATED_Params
{
	TEnumAsByte<EEasingFunc>                           Function;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SourceColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DestinationColor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EasedColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
