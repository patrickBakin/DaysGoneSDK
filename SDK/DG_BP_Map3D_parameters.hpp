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

// Function BP_Map3D.BP_Map3D_C.GetWorldLocationFromNormalizedLocation
struct ABP_Map3D_C_GetWorldLocationFromNormalizedLocation_Params
{
	struct FVector2D                                   NormalizedLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.SetMapFadeAmount
struct ABP_Map3D_C_SetMapFadeAmount_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.PostMarkerHover
struct ABP_Map3D_C_PostMarkerHover_Params
{
	class UMapLocation*                                MapLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMapWidgetComponent*                         MapWidgetComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.GetScrollBounds
struct ABP_Map3D_C_GetScrollBounds_Params
{
	bool*                                              bMapSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinBounds;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxBounds;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.IsMapInputDisabled
struct ABP_Map3D_C_IsMapInputDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.SetActiveRegions
struct ABP_Map3D_C_SetActiveRegions_Params
{
	bool                                               Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Middle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bottom;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.GetScrollBoundsBP
struct ABP_Map3D_C_GetScrollBoundsBP_Params
{
	bool                                               Map_Space;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.GetRegionFromVectorBP
struct ABP_Map3D_C_GetRegionFromVectorBP_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         Region;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.ExecuteFastTravelCostBP
struct ABP_Map3D_C_ExecuteFastTravelCostBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.NotifyHudFastTravelBP
struct ABP_Map3D_C_NotifyHudFastTravelBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.UpdateMeshPathBP
struct ABP_Map3D_C_UpdateMeshPathBP_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AMapRoadProceduralPath_C*                    ProceduralRoadPath;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPathPoint>                          PathPoints;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.GetCursorWorldLocation
struct ABP_Map3D_C_GetCursorWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.SetComponentLocationFromWorldBP
struct ABP_Map3D_C_SetComponentLocationFromWorldBP_Params
{
	class USceneComponent*                             Scene_Component;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     World_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Local_Location;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.WorldToMapLocation2BP
struct ABP_Map3D_C_WorldToMapLocation2BP_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MapLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.CreateLocationWidget
struct ABP_Map3D_C_CreateLocationWidget_Params
{
	class UMapLocation**                               Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMapWidgetComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.UpdateWaypointPathsBP
struct ABP_Map3D_C_UpdateWaypointPathsBP_Params
{
	TEnumAsByte<EMapWaypointMarker3D>                  WaypointMarkerType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.RebuiltSplineBP
struct ABP_Map3D_C_RebuiltSplineBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.TraceLocationToMapSurfaceBP
struct ABP_Map3D_C_TraceLocationToMapSurfaceBP_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWorldSpace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocationOnMap;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.ResetPanAndZoomToPlayerBP
struct ABP_Map3D_C_ResetPanAndZoomToPlayerBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.UserConstructionScript
struct ABP_Map3D_C_UserConstructionScript_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Timeline_0__FinishedFunc
struct ABP_Map3D_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Timeline_0__UpdateFunc
struct ABP_Map3D_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Timeline_1__FinishedFunc
struct ABP_Map3D_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Timeline_1__UpdateFunc
struct ABP_Map3D_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__FinishedFunc
struct ABP_Map3D_C_TerrainVisibilityTimeline__FinishedFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__UpdateFunc
struct ABP_Map3D_C_TerrainVisibilityTimeline__UpdateFunc_Params
{
};

// Function BP_Map3D.BP_Map3D_C.ReceiveBeginPlay
struct ABP_Map3D_C_ReceiveBeginPlay_Params
{
};

// Function BP_Map3D.BP_Map3D_C.ReceiveTick
struct ABP_Map3D_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.UpdateMapDataBP
struct ABP_Map3D_C_UpdateMapDataBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Fade
struct ABP_Map3D_C_Fade_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ScalarParamerter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMapWidgetComponent*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.CenterOnPlayerAnimatedBP
struct ABP_Map3D_C_CenterOnPlayerAnimatedBP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.CustomEvent_2
struct ABP_Map3D_C_CustomEvent_2_Params
{
};

// Function BP_Map3D.BP_Map3D_C.SetMapWidgetLocationFromWorld
struct ABP_Map3D_C_SetMapWidgetLocationFromWorld_Params
{
	class UMapWidgetComponent**                        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.OnTileTextureLoaded
struct ABP_Map3D_C_OnTileTextureLoaded_Params
{
	int*                                               TileIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.OnMarkerSelectionChange
struct ABP_Map3D_C_OnMarkerSelectionChange_Params
{
	struct FMapMarkerWidgetDetails*                    Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Map3D.BP_Map3D_C.UpdatePlayerLocation
struct ABP_Map3D_C_UpdatePlayerLocation_Params
{
};

// Function BP_Map3D.BP_Map3D_C.UpdateFogOfWar
struct ABP_Map3D_C_UpdateFogOfWar_Params
{
};

// Function BP_Map3D.BP_Map3D_C.SetMapOpened
struct ABP_Map3D_C_SetMapOpened_Params
{
	bool*                                              Opened;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.OnWaypointPathUpdated
struct ABP_Map3D_C_OnWaypointPathUpdated_Params
{
	TEnumAsByte<EMapWaypointMarker3D>*                 WaypointMarkerType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy
struct ABP_Map3D_C_CustomEvent_1_Copy_Copy_Params
{
};

// Function BP_Map3D.BP_Map3D_C.JobOrMissionTracked_BP
struct ABP_Map3D_C_JobOrMissionTracked_BP_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.CenterOnLocation_BP
struct ABP_Map3D_C_CenterOnLocation_BP_Params
{
	struct FVector                                     World_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.input_MenuConfirm_BP
struct ABP_Map3D_C_input_MenuConfirm_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Input_LeftThumbStickButton_BP
struct ABP_Map3D_C_Input_LeftThumbStickButton_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Input_RightThumbStickButton_BP
struct ABP_Map3D_C_Input_RightThumbStickButton_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Input_TogglePauseMenu_Options_BP
struct ABP_Map3D_C_Input_TogglePauseMenu_Options_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Input_DPad_Up_BP
struct ABP_Map3D_C_Input_DPad_Up_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Axis_MoveForward_BP
struct ABP_Map3D_C_Axis_MoveForward_BP_Params
{
	float                                              Axis_Value;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.Axis_MoveRight_BP
struct ABP_Map3D_C_Axis_MoveRight_BP_Params
{
	float                                              Axis_Value;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.Input_FaceButtonLeft_BP
struct ABP_Map3D_C_Input_FaceButtonLeft_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.input_MenuCancel_BP
struct ABP_Map3D_C_input_MenuCancel_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.SetRegionFromPlayerLocation_BP
struct ABP_Map3D_C_SetRegionFromPlayerLocation_BP_Params
{
};

// Function BP_Map3D.BP_Map3D_C.CustomEvent_3
struct ABP_Map3D_C_CustomEvent_3_Params
{
	class UMapLocation*                                MapLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMapWidgetComponent*                         MapWidgetComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy
struct ABP_Map3D_C_CustomEvent_1_Copy_Params
{
};

// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy_Copy
struct ABP_Map3D_C_CustomEvent_1_Copy_Copy_Copy_Params
{
};

// Function BP_Map3D.BP_Map3D_C.RecoverBike
struct ABP_Map3D_C_RecoverBike_Params
{
};

// Function BP_Map3D.BP_Map3D_C.ShowTerrain
struct ABP_Map3D_C_ShowTerrain_Params
{
};

// Function BP_Map3D.BP_Map3D_C.HideTerrain
struct ABP_Map3D_C_HideTerrain_Params
{
};

// Function BP_Map3D.BP_Map3D_C.Reset Terrain Visibility
struct ABP_Map3D_C_Reset_Terrain_Visibility_Params
{
};

// Function BP_Map3D.BP_Map3D_C.OnLocationSelection_BP
struct ABP_Map3D_C_OnLocationSelection_BP_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.OnCloseDelegate_Event_1
struct ABP_Map3D_C_OnCloseDelegate_Event_1_Params
{
};

// Function BP_Map3D.BP_Map3D_C.ClearPopups
struct ABP_Map3D_C_ClearPopups_Params
{
};

// Function BP_Map3D.BP_Map3D_C.ExecuteUbergraph_BP_Map3D
struct ABP_Map3D_C_ExecuteUbergraph_BP_Map3D_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Map3D.BP_Map3D_C.OnGoToMainMenu__DelegateSignature
struct ABP_Map3D_C_OnGoToMainMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
