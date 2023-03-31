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

// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ObjectBlownUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::ObjectBlownUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ObjectBlownUp");

	ABP_CarryWeaponPickupBase_C_ObjectBlownUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleInfiniteRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::HandleInfiniteRespawn(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleInfiniteRespawn");

	ABP_CarryWeaponPickupBase_C_HandleInfiniteRespawn_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.UserConstructionScript");

	ABP_CarryWeaponPickupBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePostSaveGameLoaded");

	ABP_CarryWeaponPickupBase_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleExploded
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::HandleExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.HandleExploded");

	ABP_CarryWeaponPickupBase_C_HandleExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature");

	ABP_CarryWeaponPickupBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ResetObject
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::ResetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ResetObject");

	ABP_CarryWeaponPickupBase_C_ResetObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveAnyDamage");

	ABP_CarryWeaponPickupBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ExplodePickup(class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickup");

	ABP_CarryWeaponPickupBase_C_ExplodePickup_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceivePreSaveGameLoaded");

	ABP_CarryWeaponPickupBase_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnPerformActionEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::OnPerformActionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnPerformActionEnd");

	ABP_CarryWeaponPickupBase_C_OnPerformActionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.DisplayHudNotificationInternal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             NotifyTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::DisplayHudNotificationInternal(class UTexture2D** NotifyTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.DisplayHudNotificationInternal");

	ABP_CarryWeaponPickupBase_C_DisplayHudNotificationInternal_Params params;
	params.NotifyTexture = NotifyTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickupDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::ExplodePickupDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExplodePickupDelayed");

	ABP_CarryWeaponPickupBase_C_ExplodePickupDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.AddExplosionForce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::AddExplosionForce(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.AddExplosionForce");

	ABP_CarryWeaponPickupBase_C_AddExplosionForce_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CreateFireDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::CreateFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CreateFireDelayed");

	ABP_CarryWeaponPickupBase_C_CreateFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.MakeExplosionNoise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::MakeExplosionNoise(class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.MakeExplosionNoise");

	ABP_CarryWeaponPickupBase_C_MakeExplosionNoise_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.InitPickupInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::InitPickupInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.InitPickupInteract");

	ABP_CarryWeaponPickupBase_C_InitPickupInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShake
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShake");

	ABP_CarryWeaponPickupBase_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShakeDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::PlayCameraShakeDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayCameraShakeDelayed");

	ABP_CarryWeaponPickupBase_C_PlayCameraShakeDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayPickupVO
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::PlayPickupVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.PlayPickupVO");

	ABP_CarryWeaponPickupBase_C_PlayPickupVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnFireDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::OnFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.OnFireDelayed");

	ABP_CarryWeaponPickupBase_C_OnFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.StopVibration
// (BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::StopVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.StopVibration");

	ABP_CarryWeaponPickupBase_C_StopVibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ReceiveEndPlay");

	ABP_CarryWeaponPickupBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExecuteUbergraph_BP_CarryWeaponPickupBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CarryWeaponPickupBase_C::ExecuteUbergraph_BP_CarryWeaponPickupBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.ExecuteUbergraph_BP_CarryWeaponPickupBase");

	ABP_CarryWeaponPickupBase_C_ExecuteUbergraph_BP_CarryWeaponPickupBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CarryWeaponExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CarryWeaponPickupBase_C::CarryWeaponExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C.CarryWeaponExploded__DelegateSignature");

	ABP_CarryWeaponPickupBase_C_CarryWeaponExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
