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

// Function MasterBuilding_v2.MasterBuilding_v2_C.BadChildrenErrorReport
struct AMasterBuilding_v2_C_BadChildrenErrorReport_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.getChildActorEdgeComponents
struct AMasterBuilding_v2_C_getChildActorEdgeComponents_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.getcombinedLocalMeshComponentBounds
struct AMasterBuilding_v2_C_getcombinedLocalMeshComponentBounds_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.getChildMeshComponents
struct AMasterBuilding_v2_C_getChildMeshComponents_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.getCombinedLocalProxyComponentBounds
struct AMasterBuilding_v2_C_getCombinedLocalProxyComponentBounds_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.AddChildCover
struct AMasterBuilding_v2_C_AddChildCover_Params
{
	class UBendCoverChildComponent*                    coverVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      coverClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.UpdateWeatherParticles
struct AMasterBuilding_v2_C_UpdateWeatherParticles_Params
{
	float                                              Rain_Intensity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.WeatherInteriorUpdateEvents
struct AMasterBuilding_v2_C_WeatherInteriorUpdateEvents_Params
{
	bool                                               Bool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.SetUpWindowEvents
struct AMasterBuilding_v2_C_SetUpWindowEvents_Params
{
};

// Function MasterBuilding_v2.MasterBuilding_v2_C.UserConstructionScript
struct AMasterBuilding_v2_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
