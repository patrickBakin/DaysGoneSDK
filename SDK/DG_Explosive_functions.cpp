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

// Function Explosive.Explosive_C.ForceExplode
// (Public, BlueprintCallable, BlueprintEvent)

void AExplosive_C::ForceExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ForceExplode");

	AExplosive_C_ForceExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.RepositionExplosivePieces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AExplosive_C::RepositionExplosivePieces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.RepositionExplosivePieces");

	AExplosive_C_RepositionExplosivePieces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.Explode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadExploded                   (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::Explode(bool LoadExploded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.Explode");

	AExplosive_C_Explode_Params params;
	params.LoadExploded = LoadExploded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AExplosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.UserConstructionScript");

	AExplosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AExplosive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ReceiveBeginPlay");

	AExplosive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ReceiveAnyDamage");

	AExplosive_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ReceivePostSaveGameLoaded");

	AExplosive_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ExplodeDelayed
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::ExplodeDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ExplodeDelayed");

	AExplosive_C_ExplodeDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.SetStateToExploded
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::SetStateToExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.SetStateToExploded");

	AExplosive_C_SetStateToExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ReceivePreSaveGameLoaded");

	AExplosive_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.CreateFire
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::CreateFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.CreateFire");

	AExplosive_C_CreateFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.CreateFireDelayed
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::CreateFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.CreateFireDelayed");

	AExplosive_C_CreateFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.PlayCameraShake
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.PlayCameraShake");

	AExplosive_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.PlayCameraShakeDelayed
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::PlayCameraShakeDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.PlayCameraShakeDelayed");

	AExplosive_C_PlayCameraShakeDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void AExplosive_C::BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature");

	AExplosive_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.OnFireDelayed
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::OnFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.OnFireDelayed");

	AExplosive_C_OnFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.SwapExplodedMesh
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::SwapExplodedMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.SwapExplodedMesh");

	AExplosive_C_SwapExplodedMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.SwapExplodedMeshDelayed
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::SwapExplodedMeshDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.SwapExplodedMeshDelayed");

	AExplosive_C_SwapExplodedMeshDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.StopVibration
// (BlueprintCallable, BlueprintEvent)

void AExplosive_C::StopVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.StopVibration");

	AExplosive_C_StopVibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ReceiveEndPlay");

	AExplosive_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ExecuteUbergraph_Explosive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ExecuteUbergraph_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ExecuteUbergraph_Explosive");

	AExplosive_C_ExecuteUbergraph_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosive.Explosive_C.ExplosiveExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AExplosive_C*            Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AExplosive_C::ExplosiveExploded__DelegateSignature(class AExplosive_C* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosive.Explosive_C.ExplosiveExploded__DelegateSignature");

	AExplosive_C_ExplosiveExploded__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
