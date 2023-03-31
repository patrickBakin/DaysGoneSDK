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

// Function Electrocutor.Electrocutor_C.SetFiringProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABend_BulletProj_AirTaser_C* FiringProj                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::SetFiringProjectile(class ABend_BulletProj_AirTaser_C* FiringProj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.SetFiringProjectile");

	AElectrocutor_C_SetFiringProjectile_Params params;
	params.FiringProj = FiringProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.SetProngVisbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ProngVisibility                (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::SetProngVisbility(bool ProngVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.SetProngVisbility");

	AElectrocutor_C_SetProngVisbility_Params params;
	params.ProngVisibility = ProngVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.SetActorAttachedTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorAttachedTo                (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::SetActorAttachedTo(class AActor* ActorAttachedTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.SetActorAttachedTo");

	AElectrocutor_C_SetActorAttachedTo_Params params;
	params.ActorAttachedTo = ActorAttachedTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.RemoveStatusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void AElectrocutor_C::RemoveStatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.RemoveStatusEffect");

	AElectrocutor_C_RemoveStatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.CauseStatusEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToEffect                  (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::CauseStatusEffect(class AActor* ActorToEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.CauseStatusEffect");

	AElectrocutor_C_CauseStatusEffect_Params params;
	params.ActorToEffect = ActorToEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AElectrocutor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.UserConstructionScript");

	AElectrocutor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ReceiveTick");

	AElectrocutor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AElectrocutor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ReceiveBeginPlay");

	AElectrocutor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void AElectrocutor_C::BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature");

	AElectrocutor_C_BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.BreakCable
// (BlueprintCallable, BlueprintEvent)

void AElectrocutor_C::BreakCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.BreakCable");

	AElectrocutor_C_BreakCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ReceiveEndPlay");

	AElectrocutor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ReceivePostSaveGameLoaded");

	AElectrocutor_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ReceivePreSaveGameLoaded");

	AElectrocutor_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electrocutor.Electrocutor_C.ExecuteUbergraph_Electrocutor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectrocutor_C::ExecuteUbergraph_Electrocutor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electrocutor.Electrocutor_C.ExecuteUbergraph_Electrocutor");

	AElectrocutor_C_ExecuteUbergraph_Electrocutor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
