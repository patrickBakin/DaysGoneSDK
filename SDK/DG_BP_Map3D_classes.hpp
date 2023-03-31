#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Map3D.BP_Map3D_C
// 0x0340 (0x0A60 - 0x0720)
class ABP_Map3D_C : public AMap3D
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ProceduralPathObjective;                                  // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ProceduralPathFastTravel;                                 // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ProceduralPathUser;                                       // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapSplineObjectiveWaypoint;                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapSplineFastTravelWaypoint;                              // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapSlineUserWaypoint;                                     // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MapMesh;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainVisibilityTimeline_Alpha_0C6D9E7F4BCF2C629A5295B402D9D558;// 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TerrainVisibilityTimeline__Direction_0C6D9E7F4BCF2C629A5295B402D9D558;// 0x0774(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TerrainVisibilityTimeline;                                // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Float_7410AFFE42A0EF9FA5604B992E0A6A63;        // 0x0780(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Zoom_7410AFFE42A0EF9FA5604B992E0A6A63;         // 0x0784(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_7410AFFE42A0EF9FA5604B992E0A6A63;   // 0x0788(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Fade_In_C6F1E831461DB08200FC49905395188D;      // 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_C6F1E831461DB08200FC49905395188D;   // 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastX_BP;                                                 // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastY_BP;                                                 // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     MapWidget_BP;                                             // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                MainCamera_BP;                                            // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              AxisThreshold_BP;                                         // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomScale_BP;                                             // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveScale_BP;                                             // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MapMaterialInstanceDyn_BP;                                // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DepthIndex_BP;                                            // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TileIndex_BP;                                             // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetU_BP;                                               // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetV_BP;                                               // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomLimitIn_BP;                                           // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomLimitOut_BP;                                          // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapZoom_BP;                                               // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Depth_BP;                                                 // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastMapScale_BP;                                          // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPrint_BP;                                            // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	TArray<class UMapLocation*>                        MapLocations_BP;                                          // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBendWidgetComponent*                        MapIconWidget;                                            // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBendWidgetComponent*>                MapLocationsWidgets_BP;                                   // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBendBunkerData*>                     BunkerList_BP;                                            // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBendNestingZone*>                    NestingZoneList_BP;                                       // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurrentMapLocation_BP;                                    // 0x0848(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	class UUI_MapMenuWidget3D_C*                       MapMenuWidgetRef_BP;                                      // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocMinDistance_BP;                                        // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	struct FString                                     LocMinName_BP;                                            // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMapLocation*>                        MapLocationsFiltered_BP;                                  // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LocMinIndex_BP;                                           // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	class UMapWidgetComponent*                         LastSelectedWidget_1;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalZPos_BP;                                             // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	class UBendMissionData*                            MissionData_BP;                                           // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MapInputChanged_BP;                                       // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	float                                              MapZpos_BP;                                               // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshSize_BP;                                              // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UTexture2D*                                  HeightMapTex_BP;                                          // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartMapLocation_BP;                                      // 0x08C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartMapZoom_BP;                                          // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Points_BP;                                                // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SplineSamples_BP;                                         // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class UStaticMesh*                                 SplineMesh_BP;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           SplineMaterialInst_BP;                                    // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis_BP;                                           // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshComponents_BP;                                  // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             WorldPoints_BP;                                           // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     WaypointLocation_BP;                                      // 0x0920(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFOV_BP;                                             // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableFogOfWarBP_BP;                                     // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	struct FVector                                     ScrollBoundsMin_BP;                                       // 0x0934(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ScrollBoundsMax_BP;                                       // 0x0940(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    NewVar_0_BP;                                              // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMult_BP;                                           // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             SimplifiedPoints_BP;                                      // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMapRoadSpline_C*                            SplineUserWaypoint_BP;                                    // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMapRoadSpline_C*                            SplineFastTravelWaypoint_BP;                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMapRoadSpline_C*                            SplineObjectiveWaypoint_BP;                               // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableMapInput_BP;                                       // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightTrigger_BP;                                          // 0x0989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftTrigger_BP;                                           // 0x098A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x098B(0x0005) MISSED OFFSET
	class AMapRoadProceduralPath_C*                    PathUserWaypoint_BP;                                      // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMapRoadProceduralPath_C*                    PathFastTravelWaypoint_BP;                                // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMapRoadProceduralPath_C*                    PathObjectiveWaypoint_BP;                                 // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PathWidth_BP;                                             // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CurrentObjectiveColor_BP;                                 // 0x09AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultZoom_BP;                                           // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DriftVector_BP;                                           // 0x09C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragScale_BP;                                             // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputZoomR3_BP;                                           // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputZoomL2_BP;                                           // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputZoomR2_BP;                                           // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         CurrentRegion_BP;                                         // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TopRegionActive_BP;                                       // 0x09DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiddleRegionActive_BP;                                    // 0x09DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BottomRegionActive_BP;                                    // 0x09DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRegionBoundsMin_BP;                                    // 0x09E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRegionBoundsMax_BP;                                    // 0x09EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiddleRegionBoundsMin_BP;                                 // 0x09F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiddleRegionBoundsMax_BP;                                 // 0x0A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRegionBoundsMin_BP;                                 // 0x0A10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRegionBoundsMax_BP;                                 // 0x0A1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGoToMainMenu;                                           // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UBendEncampmentData*>                 EncampmentListBP;                                         // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsTerrainHidden;                                         // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class UUI_PopupMenuWidget_C*                       RecoverBikePopup;                                         // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_PopupMenuWidget_C*                       FastTravelPopup;                                          // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Map3D.BP_Map3D_C");
		return ptr;
	}


	void GetWorldLocationFromNormalizedLocation(const struct FVector2D& NormalizedLocation, float FOV, struct FVector* WorldLocation);
	void SetMapFadeAmount(float Alpha);
	void PostMarkerHover(class UMapLocation* MapLocation, class UMapWidgetComponent* MapWidgetComponent);
	void GetScrollBounds(bool* bMapSpace, struct FVector* MinBounds, struct FVector* MaxBounds);
	bool IsMapInputDisabled();
	void SetActiveRegions(bool Top, bool Middle, bool Bottom);
	void GetScrollBoundsBP(bool Map_Space, struct FVector* Min, struct FVector* Max);
	void GetRegionFromVectorBP(const struct FVector& Location, TEnumAsByte<EWorldRegions>* Region, struct FName* Sector);
	void ExecuteFastTravelCostBP();
	void NotifyHudFastTravelBP();
	void UpdateMeshPathBP(const struct FVector& Start, const struct FVector& End, class AMapRoadProceduralPath_C* ProceduralRoadPath, int TranslucentSortPriority, TArray<struct FPathPoint>* PathPoints);
	struct FVector GetCursorWorldLocation();
	void SetComponentLocationFromWorldBP(class USceneComponent* Scene_Component, const struct FVector& World_Location, struct FVector* Local_Location, bool* Success);
	void WorldToMapLocation2BP(const struct FVector& WorldLocation, struct FVector* MapLocation);
	class UMapWidgetComponent* CreateLocationWidget(class UMapLocation** Location, int* ZOrder);
	void UpdateWaypointPathsBP(TEnumAsByte<EMapWaypointMarker3D> WaypointMarkerType);
	void RebuiltSplineBP();
	void TraceLocationToMapSurfaceBP(const struct FVector& Location, bool IsWorldSpace, struct FVector* WorldLocationOnMap, bool* Success, struct FVector* Delta);
	void ResetPanAndZoomToPlayerBP();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void TerrainVisibilityTimeline__FinishedFunc();
	void TerrainVisibilityTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UpdateMapDataBP();
	void Fade(class UMaterialInstanceDynamic* MaterialInstance, const struct FName& ScalarParamerter, bool Forward, class UMapWidgetComponent* Widget);
	void CenterOnPlayerAnimatedBP();
	void CustomEvent_2();
	void SetMapWidgetLocationFromWorld(class UMapWidgetComponent** Widget, struct FVector* WorldPosition);
	void OnTileTextureLoaded(int* TileIndex);
	void OnMarkerSelectionChange(struct FMapMarkerWidgetDetails* Details);
	void UpdatePlayerLocation();
	void UpdateFogOfWar();
	void SetMapOpened(bool* Opened);
	void OnWaypointPathUpdated(TEnumAsByte<EMapWaypointMarker3D>* WaypointMarkerType);
	void CustomEvent_1_Copy_Copy();
	void JobOrMissionTracked_BP(class UObject* JobOrMissionData);
	void CenterOnLocation_BP(const struct FVector& World_Location);
	void input_MenuConfirm_BP();
	void Input_LeftThumbStickButton_BP();
	void Input_RightThumbStickButton_BP();
	void Input_TogglePauseMenu_Options_BP();
	void Input_DPad_Up_BP();
	void Axis_MoveForward_BP(float Axis_Value);
	void Axis_MoveRight_BP(float Axis_Value);
	void Input_FaceButtonLeft_BP();
	void input_MenuCancel_BP();
	void SetRegionFromPlayerLocation_BP();
	void CustomEvent_3(class UMapLocation* MapLocation, class UMapWidgetComponent* MapWidgetComponent);
	void CustomEvent_1_Copy();
	void CustomEvent_1_Copy_Copy_Copy();
	void RecoverBike();
	void ShowTerrain();
	void HideTerrain();
	void Reset_Terrain_Visibility();
	void OnLocationSelection_BP(const struct FVector& WorldLocation);
	void OnCloseDelegate_Event_1();
	void ClearPopups();
	void ExecuteUbergraph_BP_Map3D(int EntryPoint);
	void OnGoToMainMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
