// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Map3D.BP_Map3D_C.GetWorldLocationFromNormalizedLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               NormalizedLocation             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::GetWorldLocationFromNormalizedLocation(const struct FVector2D& NormalizedLocation, float FOV, struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.GetWorldLocationFromNormalizedLocation");

	ABP_Map3D_C_GetWorldLocationFromNormalizedLocation_Params params;
	params.NormalizedLocation = NormalizedLocation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function BP_Map3D.BP_Map3D_C.SetMapFadeAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::SetMapFadeAmount(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetMapFadeAmount");

	ABP_Map3D_C_SetMapFadeAmount_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.PostMarkerHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapLocation*            MapLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMapWidgetComponent*     MapWidgetComponent             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::PostMarkerHover(class UMapLocation* MapLocation, class UMapWidgetComponent* MapWidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.PostMarkerHover");

	ABP_Map3D_C_PostMarkerHover_Params params;
	params.MapLocation = MapLocation;
	params.MapWidgetComponent = MapWidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.GetScrollBounds
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          bMapSpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MinBounds                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MaxBounds                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::GetScrollBounds(bool* bMapSpace, struct FVector* MinBounds, struct FVector* MaxBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.GetScrollBounds");

	ABP_Map3D_C_GetScrollBounds_Params params;
	params.bMapSpace = bMapSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinBounds != nullptr)
		*MinBounds = params.MinBounds;
	if (MaxBounds != nullptr)
		*MaxBounds = params.MaxBounds;
}


// Function BP_Map3D.BP_Map3D_C.IsMapInputDisabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Map3D_C::IsMapInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.IsMapInputDisabled");

	ABP_Map3D_C_IsMapInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Map3D.BP_Map3D_C.SetActiveRegions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Top                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Middle                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bottom                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::SetActiveRegions(bool Top, bool Middle, bool Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetActiveRegions");

	ABP_Map3D_C_SetActiveRegions_Params params;
	params.Top = Top;
	params.Middle = Middle;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.GetScrollBoundsBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Map_Space                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::GetScrollBoundsBP(bool Map_Space, struct FVector* Min, struct FVector* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.GetScrollBoundsBP");

	ABP_Map3D_C_GetScrollBoundsBP_Params params;
	params.Map_Space = Map_Space;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function BP_Map3D.BP_Map3D_C.GetRegionFromVectorBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWorldRegions>     Region                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Sector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::GetRegionFromVectorBP(const struct FVector& Location, TEnumAsByte<EWorldRegions>* Region, struct FName* Sector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.GetRegionFromVectorBP");

	ABP_Map3D_C_GetRegionFromVectorBP_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;
	if (Sector != nullptr)
		*Sector = params.Sector;
}


// Function BP_Map3D.BP_Map3D_C.ExecuteFastTravelCostBP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::ExecuteFastTravelCostBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ExecuteFastTravelCostBP");

	ABP_Map3D_C_ExecuteFastTravelCostBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.NotifyHudFastTravelBP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::NotifyHudFastTravelBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.NotifyHudFastTravelBP");

	ABP_Map3D_C_NotifyHudFastTravelBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.UpdateMeshPathBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// class AMapRoadProceduralPath_C* ProceduralRoadPath             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPathPoint>      PathPoints                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::UpdateMeshPathBP(const struct FVector& Start, const struct FVector& End, class AMapRoadProceduralPath_C* ProceduralRoadPath, int TranslucentSortPriority, TArray<struct FPathPoint>* PathPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UpdateMeshPathBP");

	ABP_Map3D_C_UpdateMeshPathBP_Params params;
	params.Start = Start;
	params.End = End;
	params.ProceduralRoadPath = ProceduralRoadPath;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;
}


// Function BP_Map3D.BP_Map3D_C.GetCursorWorldLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Map3D_C::GetCursorWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.GetCursorWorldLocation");

	ABP_Map3D_C_GetCursorWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Map3D.BP_Map3D_C.SetComponentLocationFromWorldBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Scene_Component                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 World_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Local_Location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::SetComponentLocationFromWorldBP(class USceneComponent* Scene_Component, const struct FVector& World_Location, struct FVector* Local_Location, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetComponentLocationFromWorldBP");

	ABP_Map3D_C_SetComponentLocationFromWorldBP_Params params;
	params.Scene_Component = Scene_Component;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Local_Location != nullptr)
		*Local_Location = params.Local_Location;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_Map3D.BP_Map3D_C.WorldToMapLocation2BP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MapLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::WorldToMapLocation2BP(const struct FVector& WorldLocation, struct FVector* MapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.WorldToMapLocation2BP");

	ABP_Map3D_C_WorldToMapLocation2BP_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocation != nullptr)
		*MapLocation = params.MapLocation;
}


// Function BP_Map3D.BP_Map3D_C.CreateLocationWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapLocation**           Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMapWidgetComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMapWidgetComponent* ABP_Map3D_C::CreateLocationWidget(class UMapLocation** Location, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CreateLocationWidget");

	ABP_Map3D_C_CreateLocationWidget_Params params;
	params.Location = Location;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Map3D.BP_Map3D_C.UpdateWaypointPathsBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMapWaypointMarker3D> WaypointMarkerType             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::UpdateWaypointPathsBP(TEnumAsByte<EMapWaypointMarker3D> WaypointMarkerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UpdateWaypointPathsBP");

	ABP_Map3D_C_UpdateWaypointPathsBP_Params params;
	params.WaypointMarkerType = WaypointMarkerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.RebuiltSplineBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::RebuiltSplineBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.RebuiltSplineBP");

	ABP_Map3D_C_RebuiltSplineBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.TraceLocationToMapSurfaceBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWorldSpace                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocationOnMap             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::TraceLocationToMapSurfaceBP(const struct FVector& Location, bool IsWorldSpace, struct FVector* WorldLocationOnMap, bool* Success, struct FVector* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.TraceLocationToMapSurfaceBP");

	ABP_Map3D_C_TraceLocationToMapSurfaceBP_Params params;
	params.Location = Location;
	params.IsWorldSpace = IsWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocationOnMap != nullptr)
		*WorldLocationOnMap = params.WorldLocationOnMap;
	if (Success != nullptr)
		*Success = params.Success;
	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function BP_Map3D.BP_Map3D_C.ResetPanAndZoomToPlayerBP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::ResetPanAndZoomToPlayerBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ResetPanAndZoomToPlayerBP");

	ABP_Map3D_C_ResetPanAndZoomToPlayerBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UserConstructionScript");

	ABP_Map3D_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Map3D_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Timeline_0__FinishedFunc");

	ABP_Map3D_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Map3D_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Timeline_0__UpdateFunc");

	ABP_Map3D_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Map3D_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Timeline_1__FinishedFunc");

	ABP_Map3D_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Map3D_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Timeline_1__UpdateFunc");

	ABP_Map3D_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Map3D_C::TerrainVisibilityTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__FinishedFunc");

	ABP_Map3D_C_TerrainVisibilityTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Map3D_C::TerrainVisibilityTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.TerrainVisibilityTimeline__UpdateFunc");

	ABP_Map3D_C_TerrainVisibilityTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Map3D_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ReceiveBeginPlay");

	ABP_Map3D_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ReceiveTick");

	ABP_Map3D_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.UpdateMapDataBP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::UpdateMapDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UpdateMapDataBP");

	ABP_Map3D_C_UpdateMapDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstance               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ScalarParamerter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMapWidgetComponent*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::Fade(class UMaterialInstanceDynamic* MaterialInstance, const struct FName& ScalarParamerter, bool Forward, class UMapWidgetComponent* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Fade");

	ABP_Map3D_C_Fade_Params params;
	params.MaterialInstance = MaterialInstance;
	params.ScalarParamerter = ScalarParamerter;
	params.Forward = Forward;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CenterOnPlayerAnimatedBP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::CenterOnPlayerAnimatedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CenterOnPlayerAnimatedBP");

	ABP_Map3D_C_CenterOnPlayerAnimatedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CustomEvent_2");

	ABP_Map3D_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.SetMapWidgetLocationFromWorld
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidgetComponent**    Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldPosition                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::SetMapWidgetLocationFromWorld(class UMapWidgetComponent** Widget, struct FVector* WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetMapWidgetLocationFromWorld");

	ABP_Map3D_C_SetMapWidgetLocationFromWorld_Params params;
	params.Widget = Widget;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnTileTextureLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           TileIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::OnTileTextureLoaded(int* TileIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnTileTextureLoaded");

	ABP_Map3D_C_OnTileTextureLoaded_Params params;
	params.TileIndex = TileIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnMarkerSelectionChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMapMarkerWidgetDetails* Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_Map3D_C::OnMarkerSelectionChange(struct FMapMarkerWidgetDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnMarkerSelectionChange");

	ABP_Map3D_C_OnMarkerSelectionChange_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.UpdatePlayerLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::UpdatePlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UpdatePlayerLocation");

	ABP_Map3D_C_UpdatePlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.UpdateFogOfWar
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::UpdateFogOfWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.UpdateFogOfWar");

	ABP_Map3D_C_UpdateFogOfWar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.SetMapOpened
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Opened                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::SetMapOpened(bool* Opened)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetMapOpened");

	ABP_Map3D_C_SetMapOpened_Params params;
	params.Opened = Opened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnWaypointPathUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMapWaypointMarker3D>* WaypointMarkerType             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::OnWaypointPathUpdated(TEnumAsByte<EMapWaypointMarker3D>* WaypointMarkerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnWaypointPathUpdated");

	ABP_Map3D_C_OnWaypointPathUpdated_Params params;
	params.WaypointMarkerType = WaypointMarkerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::CustomEvent_1_Copy_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy");

	ABP_Map3D_C_CustomEvent_1_Copy_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.JobOrMissionTracked_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::JobOrMissionTracked_BP(class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.JobOrMissionTracked_BP");

	ABP_Map3D_C_JobOrMissionTracked_BP_Params params;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CenterOnLocation_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::CenterOnLocation_BP(const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CenterOnLocation_BP");

	ABP_Map3D_C_CenterOnLocation_BP_Params params;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.input_MenuConfirm_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::input_MenuConfirm_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.input_MenuConfirm_BP");

	ABP_Map3D_C_input_MenuConfirm_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Input_LeftThumbStickButton_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Input_LeftThumbStickButton_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Input_LeftThumbStickButton_BP");

	ABP_Map3D_C_Input_LeftThumbStickButton_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Input_RightThumbStickButton_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Input_RightThumbStickButton_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Input_RightThumbStickButton_BP");

	ABP_Map3D_C_Input_RightThumbStickButton_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Input_TogglePauseMenu_Options_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Input_TogglePauseMenu_Options_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Input_TogglePauseMenu_Options_BP");

	ABP_Map3D_C_Input_TogglePauseMenu_Options_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Input_DPad_Up_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Input_DPad_Up_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Input_DPad_Up_BP");

	ABP_Map3D_C_Input_DPad_Up_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Axis_MoveForward_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::Axis_MoveForward_BP(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Axis_MoveForward_BP");

	ABP_Map3D_C_Axis_MoveForward_BP_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Axis_MoveRight_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::Axis_MoveRight_BP(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Axis_MoveRight_BP");

	ABP_Map3D_C_Axis_MoveRight_BP_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Input_FaceButtonLeft_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Input_FaceButtonLeft_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Input_FaceButtonLeft_BP");

	ABP_Map3D_C_Input_FaceButtonLeft_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.input_MenuCancel_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::input_MenuCancel_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.input_MenuCancel_BP");

	ABP_Map3D_C_input_MenuCancel_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.SetRegionFromPlayerLocation_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::SetRegionFromPlayerLocation_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.SetRegionFromPlayerLocation_BP");

	ABP_Map3D_C_SetRegionFromPlayerLocation_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapLocation*            MapLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMapWidgetComponent*     MapWidgetComponent             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::CustomEvent_3(class UMapLocation* MapLocation, class UMapWidgetComponent* MapWidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CustomEvent_3");

	ABP_Map3D_C_CustomEvent_3_Params params;
	params.MapLocation = MapLocation;
	params.MapWidgetComponent = MapWidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::CustomEvent_1_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy");

	ABP_Map3D_C_CustomEvent_1_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy_Copy
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::CustomEvent_1_Copy_Copy_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.CustomEvent_1_Copy_Copy_Copy");

	ABP_Map3D_C_CustomEvent_1_Copy_Copy_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.RecoverBike
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::RecoverBike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.RecoverBike");

	ABP_Map3D_C_RecoverBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.ShowTerrain
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::ShowTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ShowTerrain");

	ABP_Map3D_C_ShowTerrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.HideTerrain
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::HideTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.HideTerrain");

	ABP_Map3D_C_HideTerrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.Reset Terrain Visibility
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::Reset_Terrain_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.Reset Terrain Visibility");

	ABP_Map3D_C_Reset_Terrain_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnLocationSelection_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::OnLocationSelection_BP(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnLocationSelection_BP");

	ABP_Map3D_C_OnLocationSelection_BP_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnCloseDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::OnCloseDelegate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnCloseDelegate_Event_1");

	ABP_Map3D_C_OnCloseDelegate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.ClearPopups
// (BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::ClearPopups()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ClearPopups");

	ABP_Map3D_C_ClearPopups_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.ExecuteUbergraph_BP_Map3D
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Map3D_C::ExecuteUbergraph_BP_Map3D(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.ExecuteUbergraph_BP_Map3D");

	ABP_Map3D_C_ExecuteUbergraph_BP_Map3D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Map3D.BP_Map3D_C.OnGoToMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Map3D_C::OnGoToMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Map3D.BP_Map3D_C.OnGoToMainMenu__DelegateSignature");

	ABP_Map3D_C_OnGoToMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
