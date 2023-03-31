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

// Function Impact_Incendiary.Impact_Incendiary_C.SetBendDetourCrowdAvoidance
// (Public, BlueprintCallable, BlueprintEvent)

void AImpact_Incendiary_C::SetBendDetourCrowdAvoidance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.SetBendDetourCrowdAvoidance");

	AImpact_Incendiary_C_SetBendDetourCrowdAvoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.CalculateDetourComponentBounds
// (Public, BlueprintCallable, BlueprintEvent)

void AImpact_Incendiary_C::CalculateDetourComponentBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.CalculateDetourComponentBounds");

	AImpact_Incendiary_C_CalculateDetourComponentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.DebugEnableWorldBurn
// (Public, BlueprintCallable, BlueprintEvent)

void AImpact_Incendiary_C::DebugEnableWorldBurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.DebugEnableWorldBurn");

	AImpact_Incendiary_C_DebugEnableWorldBurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.DistanceCheckSpawnedSpheres
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorToUse                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AImpact_Incendiary_C::DistanceCheckSpawnedSpheres(const struct FVector& Vector, bool* Spawn, struct FVector* VectorToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.DistanceCheckSpawnedSpheres");

	AImpact_Incendiary_C_DistanceCheckSpawnedSpheres_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawn != nullptr)
		*Spawn = params.Spawn;
	if (VectorToUse != nullptr)
		*VectorToUse = params.VectorToUse;
}


// Function Impact_Incendiary.Impact_Incendiary_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImpact_Incendiary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.UserConstructionScript");

	AImpact_Incendiary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__FinishedFunc
// (BlueprintEvent)

void AImpact_Incendiary_C::CoreGrowth__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__FinishedFunc");

	AImpact_Incendiary_C_CoreGrowth__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__UpdateFunc
// (BlueprintEvent)

void AImpact_Incendiary_C::CoreGrowth__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.CoreGrowth__UpdateFunc");

	AImpact_Incendiary_C_CoreGrowth__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.OnParticleCollide_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AImpact_Incendiary_C::OnParticleCollide_Event_1(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.OnParticleCollide_Event_1");

	AImpact_Incendiary_C_OnParticleCollide_Event_1_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.OnImpactEffectSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>* SurfaceType                    (Parm, ZeroConstructor, IsPlainOldData)

void AImpact_Incendiary_C::OnImpactEffectSpawned(TEnumAsByte<EPhysicalSurface>* SurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.OnImpactEffectSpawned");

	AImpact_Incendiary_C_OnImpactEffectSpawned_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.HandleOnParticleCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Emitter_Time                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Particle_Time                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Bone_Name                      (Parm, ZeroConstructor, IsPlainOldData)

void AImpact_Incendiary_C::HandleOnParticleCollide(const struct FName& Event_Name, float Emitter_Time, int Particle_Time, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& Bone_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.HandleOnParticleCollide");

	AImpact_Incendiary_C_HandleOnParticleCollide_Params params;
	params.Event_Name = Event_Name;
	params.Emitter_Time = Emitter_Time;
	params.Particle_Time = Particle_Time;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.Bone_Name = Bone_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.PreRemoveCollision
// (Event, Public, BlueprintEvent)

void AImpact_Incendiary_C::PreRemoveCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.PreRemoveCollision");

	AImpact_Incendiary_C_PreRemoveCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impact_Incendiary.Impact_Incendiary_C.ExecuteUbergraph_Impact_Incendiary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AImpact_Incendiary_C::ExecuteUbergraph_Impact_Incendiary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impact_Incendiary.Impact_Incendiary_C.ExecuteUbergraph_Impact_Incendiary");

	AImpact_Incendiary_C_ExecuteUbergraph_Impact_Incendiary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
