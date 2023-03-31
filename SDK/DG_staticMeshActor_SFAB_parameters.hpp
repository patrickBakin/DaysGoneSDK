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

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.hasAnyInteriorLoaded
struct AstaticMeshActor_SFAB_C_hasAnyInteriorLoaded_Params
{
	bool                                               hasInteriorLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalRotatedWindowChecks
struct AstaticMeshActor_SFAB_C_verticalRotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledBlocked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledBlocked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalUnrotatedWindowChecks
struct AstaticMeshActor_SFAB_C_horizontalUnrotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponenet;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledObstructed;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledUnobstructed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowComponents
struct AstaticMeshActor_SFAB_C_getWindowComponents_Params
{
	TArray<class UStaticMeshComponent*>                windowComponents;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.attachedToDummyPyramidReport
struct AstaticMeshActor_SFAB_C_attachedToDummyPyramidReport_Params
{
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.overrideAllEdgesFine
struct AstaticMeshActor_SFAB_C_overrideAllEdgesFine_Params
{
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledAssetBlockReport
struct AstaticMeshActor_SFAB_C_enabledAssetBlockReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalUnrotatedWindowChecks
struct AstaticMeshActor_SFAB_C_verticalUnrotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledBlocked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledBlocked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalRotatedWindowChecks
struct AstaticMeshActor_SFAB_C_horizontalRotatedWindowChecks_Params
{
	class UStaticMeshComponent*                        windowComponenet;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enabledObstructed;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               disabledUnobstructed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledObstructedReport
struct AstaticMeshActor_SFAB_C_enabledObstructedReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.disabledUnobstructedReport
struct AstaticMeshActor_SFAB_C_disabledUnobstructedReport_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.checkWindowEdgeValidity
struct AstaticMeshActor_SFAB_C_checkWindowEdgeValidity_Params
{
	class UStaticMeshComponent*                        windowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowInfo
struct AstaticMeshActor_SFAB_C_getWindowInfo_Params
{
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.countWindows
struct AstaticMeshActor_SFAB_C_countWindows_Params
{
};

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.UserConstructionScript
struct AstaticMeshActor_SFAB_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
