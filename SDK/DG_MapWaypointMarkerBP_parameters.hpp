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

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointObjectiveType
struct AMapWaypointMarkerBP_C_SetWaypointObjectiveType_Params
{
	class ABP_WaypointWidget_C*                        Waypoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjectiveCat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  ObjectiveVisCat;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.UserConstructionScript
struct AMapWaypointMarkerBP_C_UserConstructionScript_Params
{
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetMarkerTexture
struct AMapWaypointMarkerBP_C_SetMarkerTexture_Params
{
	class UTexture2D**                                 Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointType
struct AMapWaypointMarkerBP_C_SetWaypointType_Params
{
	TEnumAsByte<EObjectiveCategories>*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>*                 VisualCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointMarkerType
struct AMapWaypointMarkerBP_C_SetWaypointMarkerType_Params
{
	TEnumAsByte<EMapWaypointMarker>*                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.OnVisibilityChanged
struct AMapWaypointMarkerBP_C_OnVisibilityChanged_Params
{
	bool*                                              IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.ExecuteUbergraph_MapWaypointMarkerBP
struct AMapWaypointMarkerBP_C_ExecuteUbergraph_MapWaypointMarkerBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
