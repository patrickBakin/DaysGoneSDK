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

// Function Impact_Incendiary.Impact_Incendiary_C.SetBendDetourCrowdAvoidance
struct AImpact_Incendiary_C_SetBendDetourCrowdAvoidance_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.CalculateDetourComponentBounds
struct AImpact_Incendiary_C_CalculateDetourComponentBounds_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.DebugEnableWorldBurn
struct AImpact_Incendiary_C_DebugEnableWorldBurn_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.DistanceCheckSpawnedSpheres
struct AImpact_Incendiary_C_DistanceCheckSpawnedSpheres_Params
{
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Spawn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorToUse;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Impact_Incendiary.Impact_Incendiary_C.UserConstructionScript
struct AImpact_Incendiary_C_UserConstructionScript_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__FinishedFunc
struct AImpact_Incendiary_C_CoreGrowth__FinishedFunc_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__UpdateFunc
struct AImpact_Incendiary_C_CoreGrowth__UpdateFunc_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.OnParticleCollide_Event_1
struct AImpact_Incendiary_C_OnParticleCollide_Event_1_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Impact_Incendiary.Impact_Incendiary_C.OnImpactEffectSpawned
struct AImpact_Incendiary_C_OnImpactEffectSpawned_Params
{
	TEnumAsByte<EPhysicalSurface>*                     SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Impact_Incendiary.Impact_Incendiary_C.HandleOnParticleCollide
struct AImpact_Incendiary_C_HandleOnParticleCollide_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Emitter_Time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Particle_Time;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone_Name;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Impact_Incendiary.Impact_Incendiary_C.PreRemoveCollision
struct AImpact_Incendiary_C_PreRemoveCollision_Params
{
};

// Function Impact_Incendiary.Impact_Incendiary_C.ExecuteUbergraph_Impact_Incendiary
struct AImpact_Incendiary_C_ExecuteUbergraph_Impact_Incendiary_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
