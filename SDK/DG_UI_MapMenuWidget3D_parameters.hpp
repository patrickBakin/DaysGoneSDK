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

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDoubleClick
struct UUI_MapMenuWidget3D_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonUp
struct UUI_MapMenuWidget3D_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDown
struct UUI_MapMenuWidget3D_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseMove
struct UUI_MapMenuWidget3D_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TutorialComplete
struct UUI_MapMenuWidget3D_C_TutorialComplete_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ActivateMapBanner
struct UUI_MapMenuWidget3D_C_ActivateMapBanner_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetStorylineSelected
struct UUI_MapMenuWidget3D_C_SetStorylineSelected_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.GoToPageByType
struct UUI_MapMenuWidget3D_C_GoToPageByType_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RegionCheck
struct UUI_MapMenuWidget3D_C_RegionCheck_Params
{
	TEnumAsByte<ERegions>                              Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RegionUnlocked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetRegionEntryInfo
struct UUI_MapMenuWidget3D_C_SetRegionEntryInfo_Params
{
	class UMap_RegionStat_C*                           Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UnlockKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            MissionUnlock;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateRegionData
struct UUI_MapMenuWidget3D_C_UpdateRegionData_Params
{
	TEnumAsByte<EWorldRegions>                         Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Initialize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetLocationImage
struct UUI_MapMenuWidget3D_C_SetLocationImage_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateActiveMissionJobDisplay
struct UUI_MapMenuWidget3D_C_UpdateActiveMissionJobDisplay_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTrackedMissionJob
struct UUI_MapMenuWidget3D_C_UpdateTrackedMissionJob_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.NoObjectiveActive
struct UUI_MapMenuWidget3D_C_NoObjectiveActive_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayObjective
struct UUI_MapMenuWidget3D_C_DisplayObjective_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (Parm)
	struct FText                                       SubtitleText;                                             // (Parm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTimeWeather
struct UUI_MapMenuWidget3D_C_UpdateTimeWeather_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.LocationZOrder
struct UUI_MapMenuWidget3D_C_LocationZOrder_Params
{
	TEnumAsByte<EMiniMapLocation>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Initialize
struct UUI_MapMenuWidget3D_C_Initialize_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Construct
struct UUI_MapMenuWidget3D_C_Construct_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSynchronizePropertiesEvent
struct UUI_MapMenuWidget3D_C_OnSynchronizePropertiesEvent_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetAlphaFade
struct UUI_MapMenuWidget3D_C_SetAlphaFade_Params
{
	float                                              FadeAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnUpdateFogOfWar
struct UUI_MapMenuWidget3D_C_OnUpdateFogOfWar_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteFastTravel
struct UUI_MapMenuWidget3D_C_ExecuteFastTravel_Params
{
	struct FTransform                                  PlayerTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  BikeTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnNewMissionOrJobTracked_Event_1
struct UUI_MapMenuWidget3D_C_OnNewMissionOrJobTracked_Event_1_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RequestClose
struct UUI_MapMenuWidget3D_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayAlternateNavigation
struct UUI_MapMenuWidget3D_C_DisplayAlternateNavigation_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabNextPressed
struct UUI_MapMenuWidget3D_C_OnTabNextPressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabPreviousPressed
struct UUI_MapMenuWidget3D_C_OnTabPreviousPressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect1Pressed
struct UUI_MapMenuWidget3D_C_OnSelect1Pressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.InitInputs
struct UUI_MapMenuWidget3D_C_InitInputs_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCancelPressed
struct UUI_MapMenuWidget3D_C_OnCancelPressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravelClicked_Event_1
struct UUI_MapMenuWidget3D_C_OnFastTravelClicked_Event_1_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarkerClicked_Event_1
struct UUI_MapMenuWidget3D_C_OnSetMarkerClicked_Event_1_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnConfirmPressed
struct UUI_MapMenuWidget3D_C_OnConfirmPressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect2Pressed
struct UUI_MapMenuWidget3D_C_OnSelect2Pressed_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseLeave
struct UUI_MapMenuWidget3D_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Zoom
struct UUI_MapMenuWidget3D_C_Zoom_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Center
struct UUI_MapMenuWidget3D_C_Center_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TerrainVisibility
struct UUI_MapMenuWidget3D_C_TerrainVisibility_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomIn
struct UUI_MapMenuWidget3D_C_ZoomIn_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomOut
struct UUI_MapMenuWidget3D_C_ZoomOut_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteUbergraph_UI_MapMenuWidget3D
struct UUI_MapMenuWidget3D_C_ExecuteUbergraph_UI_MapMenuWidget3D_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClickedZoom__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnClickedZoom__DelegateSignature_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUpAbs__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseUpAbs__DelegateSignature_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMoveAbs__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseMoveAbs__DelegateSignature_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHoverAbs__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseHoverAbs__DelegateSignature_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoom__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnZoom__DelegateSignature_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTerrainVisibility__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnTerrainVisibility__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCenter__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnCenter__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMove__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseMove__DelegateSignature_Params
{
	struct FVector2D                                   Normalized;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragEnd__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnDragEnd__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragStart__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnDragStart__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseDown__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseDown__DelegateSignature_Params
{
	struct FVector2D                                   NormalizedLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravel__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnFastTravel__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHover__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseHover__DelegateSignature_Params
{
	struct FVector2D                                   Normalized;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUp__DelegateSignature
struct UUI_MapMenuWidget3D_C_MouseUp__DelegateSignature_Params
{
	struct FVector2D                                   NormalizedLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMapDrag__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnMapDrag__DelegateSignature_Params
{
	struct FVector2D                                   ScreenPixelDelta;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomOut__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnZoomOut__DelegateSignature_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomIn__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnZoomIn__DelegateSignature_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMenuClicked__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToPrevPage__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToNextPage__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToStorylines__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnGoToStorylines__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarker__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnSetMarker__DelegateSignature_Params
{
};

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClose__DelegateSignature
struct UUI_MapMenuWidget3D_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
