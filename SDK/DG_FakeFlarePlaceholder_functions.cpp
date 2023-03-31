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

// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFakeFlarePlaceholder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.UserConstructionScript");

	AFakeFlarePlaceholder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFakeFlarePlaceholder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ReceiveBeginPlay");

	AFakeFlarePlaceholder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.AfterFallToGround
// (BlueprintCallable, BlueprintEvent)

void AFakeFlarePlaceholder_C::AfterFallToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.AfterFallToGround");

	AFakeFlarePlaceholder_C_AfterFallToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffFireEffects
// (BlueprintCallable, BlueprintEvent)

void AFakeFlarePlaceholder_C::TurnOffFireEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffFireEffects");

	AFakeFlarePlaceholder_C_TurnOffFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void AFakeFlarePlaceholder_C::BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature");

	AFakeFlarePlaceholder_C_BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFakeFlarePlaceholder_C::BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature");

	AFakeFlarePlaceholder_C_BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOnRig
// (BlueprintCallable, BlueprintEvent)

void AFakeFlarePlaceholder_C::TurnOnRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOnRig");

	AFakeFlarePlaceholder_C_TurnOnRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffRig
// (BlueprintCallable, BlueprintEvent)

void AFakeFlarePlaceholder_C::TurnOffRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.TurnOffRig");

	AFakeFlarePlaceholder_C_TurnOffRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ExecuteUbergraph_FakeFlarePlaceholder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFakeFlarePlaceholder_C::ExecuteUbergraph_FakeFlarePlaceholder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakeFlarePlaceholder.FakeFlarePlaceholder_C.ExecuteUbergraph_FakeFlarePlaceholder");

	AFakeFlarePlaceholder_C_ExecuteUbergraph_FakeFlarePlaceholder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
