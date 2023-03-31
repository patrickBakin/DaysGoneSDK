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

// Function BP_PrecipitationManager.BP_PrecipitationManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PrecipitationManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrecipitationManager.BP_PrecipitationManager_C.UserConstructionScript");

	ABP_PrecipitationManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrecipitationManager.BP_PrecipitationManager_C.BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleCount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrecipitationManager_C::BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrecipitationManager.BP_PrecipitationManager_C.BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature");

	ABP_PrecipitationManager_C_BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrecipitationManager.BP_PrecipitationManager_C.PerFrameCameraUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDebug                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrecipitationManager_C::PerFrameCameraUpdate(float* DeltaSeconds, bool* bDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrecipitationManager.BP_PrecipitationManager_C.PerFrameCameraUpdate");

	ABP_PrecipitationManager_C_PerFrameCameraUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrecipitationManager.BP_PrecipitationManager_C.ExecuteUbergraph_BP_PrecipitationManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrecipitationManager_C::ExecuteUbergraph_BP_PrecipitationManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrecipitationManager.BP_PrecipitationManager_C.ExecuteUbergraph_BP_PrecipitationManager");

	ABP_PrecipitationManager_C_ExecuteUbergraph_BP_PrecipitationManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
