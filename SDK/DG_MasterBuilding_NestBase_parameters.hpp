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

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalUnrotatedWindowChecks
struct AMasterBuilding_NestBase_C_verticalUnrotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledBlocked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledBlocked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalUnrotatedWindowChecks
struct AMasterBuilding_NestBase_C_horizontalUnrotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledObstructed;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledUnobstructed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.attachedToDummyPyramidReport
struct AMasterBuilding_NestBase_C_attachedToDummyPyramidReport_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.hasAnyInteriorLoaded
struct AMasterBuilding_NestBase_C_hasAnyInteriorLoaded_Params
{
	bool                                               hasInteriorLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.getWindowComponents
struct AMasterBuilding_NestBase_C_getWindowComponents_Params
{
	TArray<class UStaticMeshComponent*>                allComponents;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UStaticMeshComponent*>                windowComponents;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.GetChildrenComponents
struct AMasterBuilding_NestBase_C_GetChildrenComponents_Params
{
	TArray<class UStaticMeshComponent*>                outExtComponents;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.overrideAllEdgesFine
struct AMasterBuilding_NestBase_C_overrideAllEdgesFine_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledAssetBlockReport
struct AMasterBuilding_NestBase_C_enabledAssetBlockReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalRotatedWindowChecks
struct AMasterBuilding_NestBase_C_verticalRotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledBlocked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledBlocked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalRotatedWindowChecks
struct AMasterBuilding_NestBase_C_horizontalRotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledObstructed;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledUnobstructed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledObstructedReport
struct AMasterBuilding_NestBase_C_enabledObstructedReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.disabledUnobstructedReport
struct AMasterBuilding_NestBase_C_disabledUnobstructedReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.checkWindowEdgeValidity
struct AMasterBuilding_NestBase_C_checkWindowEdgeValidity_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.CreateNestDynamicMaterials
struct AMasterBuilding_NestBase_C_CreateNestDynamicMaterials_Params
{
	TArray<class UStaticMeshComponent*>                Static_Mesh_s;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialArray;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.UserConstructionScript
struct AMasterBuilding_NestBase_C_UserConstructionScript_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__FinishedFunc
struct AMasterBuilding_NestBase_C_DynamicBurningTimeline__FinishedFunc_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__UpdateFunc
struct AMasterBuilding_NestBase_C_DynamicBurningTimeline__UpdateFunc_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ReceiveBeginPlay
struct AMasterBuilding_NestBase_C_ReceiveBeginPlay_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestDestroyed
struct AMasterBuilding_NestBase_C_NestDestroyed_Params
{
	struct FString                                     Nest_ID;                                                  // (Parm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.FireGoneOut
struct AMasterBuilding_NestBase_C_FireGoneOut_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.BurnTheMaterials
struct AMasterBuilding_NestBase_C_BurnTheMaterials_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad
struct AMasterBuilding_NestBase_C_RetryLoad_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event
struct AMasterBuilding_NestBase_C_NestFireGoneOut_Event_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_1
struct AMasterBuilding_NestBase_C_OnNestStartedBurning_Event_1_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_1
struct AMasterBuilding_NestBase_C_NestShouldStartSmoke_Event_1_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad_Copy
struct AMasterBuilding_NestBase_C_RetryLoad_Copy_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event_Copy
struct AMasterBuilding_NestBase_C_NestFireGoneOut_Event_Copy_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_0_Copy
struct AMasterBuilding_NestBase_C_OnNestStartedBurning_Event_0_Copy_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_0_Copy
struct AMasterBuilding_NestBase_C_NestShouldStartSmoke_Event_0_Copy_Params
{
};

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ExecuteUbergraph_MasterBuilding_NestBase
struct AMasterBuilding_NestBase_C_ExecuteUbergraph_MasterBuilding_NestBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
