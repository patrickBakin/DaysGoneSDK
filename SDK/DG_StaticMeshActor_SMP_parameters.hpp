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

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.switchToInteriorEdges
struct AStaticMeshActor_SMP_C_switchToInteriorEdges_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.respawnSelf
struct AStaticMeshActor_SMP_C_respawnSelf_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.levelValidityTest
struct AStaticMeshActor_SMP_C_levelValidityTest_Params
{
	bool                                               currentLevelValid;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     outputLevel;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.fullReconstruction
struct AStaticMeshActor_SMP_C_fullReconstruction_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.constructOuterLevelString
struct AStaticMeshActor_SMP_C_constructOuterLevelString_Params
{
	struct FString                                     containingLevel;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.checkForErrors
struct AStaticMeshActor_SMP_C_checkForErrors_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.controlDestMeshes
struct AStaticMeshActor_SMP_C_controlDestMeshes_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.UserConstructionScript
struct AStaticMeshActor_SMP_C_UserConstructionScript_Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.Respawn.
struct AStaticMeshActor_SMP_C_Respawn__Params
{
};

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.ExecuteUbergraph_StaticMeshActor_SMP
struct AStaticMeshActor_SMP_C_ExecuteUbergraph_StaticMeshActor_SMP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
