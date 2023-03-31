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

// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnedInGasCan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.UserConstructionScript");

	ABP_SpawnedInGasCan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_SpawnedInGasCan_C::BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature");

	ABP_SpawnedInGasCan_C_BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ObjectBlownUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnedInGasCan_C::ObjectBlownUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ObjectBlownUp");

	ABP_SpawnedInGasCan_C_ObjectBlownUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnedInGasCan_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ReceivePreSaveGameLoaded");

	ABP_SpawnedInGasCan_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_SpawnedInGasCan_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature");

	ABP_SpawnedInGasCan_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ExecuteUbergraph_BP_SpawnedInGasCan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnedInGasCan_C::ExecuteUbergraph_BP_SpawnedInGasCan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnedInGasCan.BP_SpawnedInGasCan_C.ExecuteUbergraph_BP_SpawnedInGasCan");

	ABP_SpawnedInGasCan_C_ExecuteUbergraph_BP_SpawnedInGasCan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
