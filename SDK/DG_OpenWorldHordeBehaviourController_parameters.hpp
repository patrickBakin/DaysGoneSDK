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

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SanitizeByNameGetAttachedActors
struct AOpenWorldHordeBehaviourController_C_SanitizeByNameGetAttachedActors_Params
{
	TArray<class AActor*>                              In;                                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupPathArray
struct AOpenWorldHordeBehaviourController_C_SetupPathArray_Params
{
	class ABendCrowdPOI*                               StartPOI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendCrowdPOI*                               EndPOI;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PathArray;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      PathActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReverseArray
struct AOpenWorldHordeBehaviourController_C_ReverseArray_Params
{
	TArray<struct FVector>                             ReverseArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             ArrayToSet;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DrawNavPaths
struct AOpenWorldHordeBehaviourController_C_DrawNavPaths_Params
{
	float                                              TickTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupGeneratorPaths
struct AOpenWorldHordeBehaviourController_C_SetupGeneratorPaths_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.OverrideSettings
struct AOpenWorldHordeBehaviourController_C_OverrideSettings_Params
{
	bool                                               Sunset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sunrise;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sunset02;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUseGenerator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_HordeActivities>                  Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUsePOI;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_HordeActivities>                  POI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideActivityTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinEat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxEat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDrink;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDrink;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.TurnGeneratorsOff
struct AOpenWorldHordeBehaviourController_C_TurnGeneratorsOff_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DebugPrint
struct AOpenWorldHordeBehaviourController_C_DebugPrint_Params
{
	struct FString                                     PrintString;                                              // (Parm, ZeroConstructor)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIsqDistanceFromClosestHordeMember
struct AOpenWorldHordeBehaviourController_C_POIsqDistanceFromClosestHordeMember_Params
{
	float                                              sqDistance;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RegisterPOIsWithHordeQuery
struct AOpenWorldHordeBehaviourController_C_RegisterPOIsWithHordeQuery_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetPath
struct AOpenWorldHordeBehaviourController_C_SetPath_Params
{
	class ABendCrowdPatrolPath_C*                      Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckNight
struct AOpenWorldHordeBehaviourController_C_CheckNight_Params
{
	bool                                               isNight;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.FindNewPOI
struct AOpenWorldHordeBehaviourController_C_FindNewPOI_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewPOI
struct AOpenWorldHordeBehaviourController_C_SetNewPOI_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIDistanceFromHorde
struct AOpenWorldHordeBehaviourController_C_POIDistanceFromHorde_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.VectorVectorDistance
struct AOpenWorldHordeBehaviourController_C_VectorVectorDistance_Params
{
	struct FVector                                     FromVector;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ToVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.UserConstructionScript
struct AOpenWorldHordeBehaviourController_C_UserConstructionScript_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveBeginPlay
struct AOpenWorldHordeBehaviourController_C_ReceiveBeginPlay_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone
struct AOpenWorldHordeBehaviourController_C_timerdone_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_3
struct AOpenWorldHordeBehaviourController_C_timerdone_3_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckPOIs
struct AOpenWorldHordeBehaviourController_C_CheckPOIs_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_4
struct AOpenWorldHordeBehaviourController_C_timerdone_4_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Initialize Horde
struct AOpenWorldHordeBehaviourController_C_Initialize_Horde_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2
struct AOpenWorldHordeBehaviourController_C_CustomEvent_2_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_2
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_2_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Call BeginPlay
struct AOpenWorldHordeBehaviourController_C_Call_BeginPlay_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_3
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_3_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Copy_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_1_Copy_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_4
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_4_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy_2
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Copy_2_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy_2
struct AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_1_Copy_2_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.MoveGenerator
struct AOpenWorldHordeBehaviourController_C_MoveGenerator_Params
{
	float                                              TickTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.GeneratorFinishedPath
struct AOpenWorldHordeBehaviourController_C_GeneratorFinishedPath_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveTick
struct AOpenWorldHordeBehaviourController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewGeneratorPath
struct AOpenWorldHordeBehaviourController_C_SetNewGeneratorPath_Params
{
	TArray<struct FVector>                             NewPath;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Enum_HordeActivities>                  NewActivity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.InitializeGeneratorMovement
struct AOpenWorldHordeBehaviourController_C_InitializeGeneratorMovement_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RestartGeneratorMovement
struct AOpenWorldHordeBehaviourController_C_RestartGeneratorMovement_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ResumeMoving
struct AOpenWorldHordeBehaviourController_C_ResumeMoving_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeMemberSpawned
struct AOpenWorldHordeBehaviourController_C_HordeMemberSpawned_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeDoneSpawning
struct AOpenWorldHordeBehaviourController_C_HordeDoneSpawning_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_3
struct AOpenWorldHordeBehaviourController_C_CustomEvent_3_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2_Copy
struct AOpenWorldHordeBehaviourController_C_CustomEvent_2_Copy_Params
{
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.PostSaveGameLoaded
struct AOpenWorldHordeBehaviourController_C_PostSaveGameLoaded_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ExecuteUbergraph_OpenWorldHordeBehaviourController
struct AOpenWorldHordeBehaviourController_C_ExecuteUbergraph_OpenWorldHordeBehaviourController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
