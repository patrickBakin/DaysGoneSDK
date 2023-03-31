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

// Function BP_Menu3D.BP_Menu3D_C.GetStorylinesMenu
struct ABP_Menu3D_C_GetStorylinesMenu_Params
{
	class UUI_Storylines_Menu_C*                       StorylinesMenu;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.DisplayMenu_For3D
struct ABP_Menu3D_C_DisplayMenu_For3D_Params
{
	TEnumAsByte<EMenuTypes>                            MenuTypes;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.IsMenuClosing
struct ABP_Menu3D_C_IsMenuClosing_Params
{
	bool                                               IsClosing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.PlayMenuSounds
struct ABP_Menu3D_C_PlayMenuSounds_Params
{
	bool                                               SkipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            TargetMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSwipe;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.SetOverrideMenu
struct ABP_Menu3D_C_SetOverrideMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.FlushMaterialImages
struct ABP_Menu3D_C_FlushMaterialImages_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InitMaterialImages
struct ABP_Menu3D_C_InitMaterialImages_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.GetDragSelectedMenu
struct ABP_Menu3D_C_GetDragSelectedMenu_Params
{
	struct FVector2D                                   EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceSquared;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.IsTopLevelMenu
struct ABP_Menu3D_C_IsTopLevelMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTopLevelMenu;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.DisplayLastMenu
struct ABP_Menu3D_C_DisplayLastMenu_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TouchInputMove
struct ABP_Menu3D_C_TouchInputMove_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           TouchIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.ClearAllowedMenus
struct ABP_Menu3D_C_ClearAllowedMenus_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.IsMenuAllowed
struct ABP_Menu3D_C_IsMenuAllowed_Params
{
	TEnumAsByte<EMenuTypes>                            Desired_Menu;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Menu_Allowed_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.SetAllowedMenus
struct ABP_Menu3D_C_SetAllowedMenus_Params
{
	TArray<TEnumAsByte<EMenuTypes>>                    Allowed_Menus;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Menu3D.BP_Menu3D_C.SetBlockClose
struct ABP_Menu3D_C_SetBlockClose_Params
{
	bool                                               Should_Block_Close_;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.GetMenu2DPosition
struct ABP_Menu3D_C_GetMenu2DPosition_Params
{
	TEnumAsByte<EMenuTypes>                            MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.HideSmallImages
struct ABP_Menu3D_C_HideSmallImages_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.GoToPrevMenu
struct ABP_Menu3D_C_GoToPrevMenu_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.GoToNextMenu
struct ABP_Menu3D_C_GoToNextMenu_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.NewFunction_1
struct ABP_Menu3D_C_NewFunction_1_Params
{
	struct FVector2D                                   TouchStartVector;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.DisplayMenuAtLastTouchLocation
struct ABP_Menu3D_C_DisplayMenuAtLastTouchLocation_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.IsTouchInCenter
struct ABP_Menu3D_C_IsTouchInCenter_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InCenter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.DisableInactiveMenus
struct ABP_Menu3D_C_DisableInactiveMenus_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.ResetMenusToMain
struct ABP_Menu3D_C_ResetMenusToMain_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.SetMenuImage
struct ABP_Menu3D_C_SetMenuImage_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Texture_Asset;                                            // (Parm)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SingleChannel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInWhenLoaded;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.UpdateHudData
struct ABP_Menu3D_C_UpdateHudData_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.GetMenu
struct ABP_Menu3D_C_GetMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TargetTranslation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.DisplayMenu
struct ABP_Menu3D_C_DisplayMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSwipe;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.IsMapInputEnabled
struct ABP_Menu3D_C_IsMapInputEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.ResetInputs
struct ABP_Menu3D_C_ResetInputs_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TouchInputEnd
struct ABP_Menu3D_C_TouchInputEnd_Params
{
	struct FVector2D                                   TouchLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           TouchIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.TouchInputStart
struct ABP_Menu3D_C_TouchInputStart_Params
{
	struct FVector2D                                   TouchLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           TouchIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.ExitSelector
struct ABP_Menu3D_C_ExitSelector_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.EnterSelector
struct ABP_Menu3D_C_EnterSelector_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.UserConstructionScript
struct ABP_Menu3D_C_UserConstructionScript_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TimelineMain__FinishedFunc
struct ABP_Menu3D_C_TimelineMain__FinishedFunc_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TimelineMain__UpdateFunc
struct ABP_Menu3D_C_TimelineMain__UpdateFunc_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TimelineFade__FinishedFunc
struct ABP_Menu3D_C_TimelineFade__FinishedFunc_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TimelineFade__UpdateFunc
struct ABP_Menu3D_C_TimelineFade__UpdateFunc_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318174
struct ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318174_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318173
struct ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318173_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318172
struct ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318172_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832
struct ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831
struct ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830
struct ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829
struct ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828
struct ABP_Menu3D_C_InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827
struct ABP_Menu3D_C_InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.OnLoaded_1E5A22304C941CB4DAA34197B6B13F13
struct ABP_Menu3D_C_OnLoaded_1E5A22304C941CB4DAA34197B6B13F13_Params
{
	class UClass*                                      Loaded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.ReceiveBeginPlay
struct ABP_Menu3D_C_ReceiveBeginPlay_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.ReceiveTick
struct ABP_Menu3D_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.TweenToMenu
struct ABP_Menu3D_C_TweenToMenu_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            NextMenu;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reverse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.FadeMenu
struct ABP_Menu3D_C_FadeMenu_Params
{
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_1
struct ABP_Menu3D_C_CustomEvent_1_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnMenuOpened
struct ABP_Menu3D_C_OnMenuOpened_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnMenuClosed
struct ABP_Menu3D_C_OnMenuClosed_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.FinishClosing
struct ABP_Menu3D_C_FinishClosing_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InputFlickUp
struct ABP_Menu3D_C_InputFlickUp_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InputFlickDown
struct ABP_Menu3D_C_InputFlickDown_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InputFlickRight
struct ABP_Menu3D_C_InputFlickRight_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InputFlickLeft
struct ABP_Menu3D_C_InputFlickLeft_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TouchBegin
struct ABP_Menu3D_C_TouchBegin_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.TouchEnd
struct ABP_Menu3D_C_TouchEnd_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.TogglePauseMenu_Map
struct ABP_Menu3D_C_TogglePauseMenu_Map_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.Initialize
struct ABP_Menu3D_C_Initialize_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnMapClose
struct ABP_Menu3D_C_OnMapClose_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.TouchMove
struct ABP_Menu3D_C_TouchMove_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_2
struct ABP_Menu3D_C_CustomEvent_2_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_3
struct ABP_Menu3D_C_CustomEvent_3_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_4
struct ABP_Menu3D_C_CustomEvent_4_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_5
struct ABP_Menu3D_C_CustomEvent_5_Params
{
	TEnumAsByte<EMenuTypes>                            OpenedMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.FlushStaticImages
struct ABP_Menu3D_C_FlushStaticImages_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InitStaticImages
struct ABP_Menu3D_C_InitStaticImages_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_6
struct ABP_Menu3D_C_CustomEvent_6_Params
{
	TEnumAsByte<EMenuTypes>                            MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.SetMenuImageAsync
struct ABP_Menu3D_C_SetMenuImageAsync_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SingleChannel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInWhenLoaded;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_7
struct ABP_Menu3D_C_CustomEvent_7_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.FadeFinished
struct ABP_Menu3D_C_FadeFinished_Params
{
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnMenuClicked_Event_1
struct ABP_Menu3D_C_OnMenuClicked_Event_1_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OpenMegaMenuWidget
struct ABP_Menu3D_C_OpenMegaMenuWidget_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.CloseMegaMenuWidget
struct ABP_Menu3D_C_CloseMegaMenuWidget_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.Map_MenuConfirm
struct ABP_Menu3D_C_Map_MenuConfirm_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.UI_MenuCancel
struct ABP_Menu3D_C_UI_MenuCancel_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnRequestClose_Event_1
struct ABP_Menu3D_C_OnRequestClose_Event_1_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabNext
struct ABP_Menu3D_C_UI_MenuTabNext_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabPrevious
struct ABP_Menu3D_C_UI_MenuTabPrevious_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.Map_FastTravel
struct ABP_Menu3D_C_Map_FastTravel_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnDragStart_Event_1
struct ABP_Menu3D_C_OnDragStart_Event_1_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnDragEnd_Event_1
struct ABP_Menu3D_C_OnDragEnd_Event_1_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnCenter_Event_1
struct ABP_Menu3D_C_OnCenter_Event_1_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnTerrainVisibility
struct ABP_Menu3D_C_OnTerrainVisibility_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom
struct ABP_Menu3D_C_Map_Zoom_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnZoom
struct ABP_Menu3D_C_OnZoom_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.RightThumbStickButton
struct ABP_Menu3D_C_RightThumbStickButton_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.LeftThumbStickButton
struct ABP_Menu3D_C_LeftThumbStickButton_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnClosingFinished
struct ABP_Menu3D_C_OnClosingFinished_Params
{
	TEnumAsByte<EMenuTypes>                            OpenedMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.MouseMoveAbs_Event_1
struct ABP_Menu3D_C_MouseMoveAbs_Event_1_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.MouseHoverAbs_Event_1
struct ABP_Menu3D_C_MouseHoverAbs_Event_1_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.MouseUpAbs_Event_1
struct ABP_Menu3D_C_MouseUpAbs_Event_1_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70
struct ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_In
struct ABP_Menu3D_C_Map_Zoom_In_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_Out
struct ABP_Menu3D_C_Map_Zoom_Out_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnZoomIn
struct ABP_Menu3D_C_OnZoomIn_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnZoomOut
struct ABP_Menu3D_C_OnZoomOut_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.ClickedZoom
struct ABP_Menu3D_C_ClickedZoom_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.MapClickedZoom
struct ABP_Menu3D_C_MapClickedZoom_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnTutorialStep
struct ABP_Menu3D_C_OnTutorialStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnTutorialComplete
struct ABP_Menu3D_C_OnTutorialComplete_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.ExecuteUbergraph_BP_Menu3D
struct ABP_Menu3D_C_ExecuteUbergraph_BP_Menu3D_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnFadeOutFinished__DelegateSignature
struct ABP_Menu3D_C_OnFadeOutFinished__DelegateSignature_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnFadeInFinished__DelegateSignature
struct ABP_Menu3D_C_OnFadeInFinished__DelegateSignature_Params
{
};

// Function BP_Menu3D.BP_Menu3D_C.OnFinishedDisplayingMenu__DelegateSignature
struct ABP_Menu3D_C_OnFinishedDisplayingMenu__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnDragMenuHighlighted__DelegateSignature
struct ABP_Menu3D_C_OnDragMenuHighlighted__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnDragMenuSelected__DelegateSignature
struct ABP_Menu3D_C_OnDragMenuSelected__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.OnMenuRequested__DelegateSignature
struct ABP_Menu3D_C_OnMenuRequested__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Displayed_Menu;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu3D.BP_Menu3D_C.MenuOpened__DelegateSignature
struct ABP_Menu3D_C_MenuOpened__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            OpenedMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
