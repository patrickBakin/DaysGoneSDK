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

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UserConstructionScript
struct AJob_MiniMapMarker_C_UserConstructionScript_Params
{
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.ReceiveBeginPlay
struct AJob_MiniMapMarker_C_ReceiveBeginPlay_Params
{
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateFocus
struct AJob_MiniMapMarker_C_UpdateFocus_Params
{
	bool                                               HasFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateActive
struct AJob_MiniMapMarker_C_UpdateActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.HandleObjectiveJobIcon
struct AJob_MiniMapMarker_C_HandleObjectiveJobIcon_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.StoreMarkerSettings
struct AJob_MiniMapMarker_C_StoreMarkerSettings_Params
{
	bool                                               ShouldHaveMarker;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjCaqtegory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  ObjType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.IOnSelected
struct AJob_MiniMapMarker_C_IOnSelected_Params
{
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature
struct AJob_MiniMapMarker_C_BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature_Params
{
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature
struct AJob_MiniMapMarker_C_BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature_Params
{
};

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.ExecuteUbergraph_Job_MiniMapMarker
struct AJob_MiniMapMarker_C_ExecuteUbergraph_Job_MiniMapMarker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
