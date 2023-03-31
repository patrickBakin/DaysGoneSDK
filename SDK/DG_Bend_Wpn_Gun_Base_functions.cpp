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

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanEverBeRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_Wpn_Gun_Base_C::ICanEverBeRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanEverBeRepaired");

	ABend_Wpn_Gun_Base_C_ICanEverBeRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanBeRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_Wpn_Gun_Base_C::ICanBeRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanBeRepaired");

	ABend_Wpn_Gun_Base_C_ICanBeRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IGetRepairCost
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABend_Wpn_Gun_Base_C::IGetRepairCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IGetRepairCost");

	ABend_Wpn_Gun_Base_C_IGetRepairCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IOnRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_Wpn_Gun_Base_C::IOnRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IOnRepaired");

	ABend_Wpn_Gun_Base_C_IOnRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetHiddenForDLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::SetHiddenForDLC(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetHiddenForDLC");

	ABend_Wpn_Gun_Base_C_SetHiddenForDLC_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.GetHideReticle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideReticle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::GetHideReticle(bool* HideReticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.GetHideReticle");

	ABend_Wpn_Gun_Base_C_GetHideReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HideReticle != nullptr)
		*HideReticle = params.HideReticle;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.VerifyOverlap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::VerifyOverlap(class UObject* OtherActor, bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.VerifyOverlap");

	ABend_Wpn_Gun_Base_C_VerifyOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.AdjustReticleByMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::AdjustReticleByMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.AdjustReticleByMovement");

	ABend_Wpn_Gun_Base_C_AdjustReticleByMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.Debug_GunAccuracy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::Debug_GunAccuracy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.Debug_GunAccuracy");

	ABend_Wpn_Gun_Base_C_Debug_GunAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ShakeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::ShakeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ShakeCamera");

	ABend_Wpn_Gun_Base_C_ShakeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.UserConstructionScript");

	ABend_Wpn_Gun_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ReceiveBeginPlay");

	ABend_Wpn_Gun_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponArmed
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::OnWeaponArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponArmed");

	ABend_Wpn_Gun_Base_C_OnWeaponArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::OnWeaponDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed");

	ABend_Wpn_Gun_Base_C_OnWeaponDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponsHealthPercentage        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDamaged");

	ABend_Wpn_Gun_Base_C_OnDamaged_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.WeaponsHealthPercentage = WeaponsHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed_Copy
// (BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::OnWeaponDisarmed_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed_Copy");

	ABend_Wpn_Gun_Base_C_OnWeaponDisarmed_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_Wpn_Gun_Base_C::BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature");

	ABend_Wpn_Gun_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnClipLoaded(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipLoaded");

	ABend_Wpn_Gun_Base_C_OnClipLoaded_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnClipRemoved(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipRemoved");

	ABend_Wpn_Gun_Base_C_OnClipRemoved_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnBaseMaterialSet
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::OnBaseMaterialSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnBaseMaterialSet");

	ABend_Wpn_Gun_Base_C_OnBaseMaterialSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeaponPart**        WeaponPart                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnPartAdded(class ABendWeaponPart** WeaponPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartAdded");

	ABend_Wpn_Gun_Base_C_OnPartAdded_Params params;
	params.WeaponPart = WeaponPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendWeaponPart**        WeaponPart                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnPartRemoved(class ABendWeaponPart** WeaponPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartRemoved");

	ABend_Wpn_Gun_Base_C_OnPartRemoved_Params params;
	params.WeaponPart = WeaponPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetupBaseMaterial
// (BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::SetupBaseMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetupBaseMaterial");

	ABend_Wpn_Gun_Base_C_SetupBaseMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnAmmoTakenFromBike
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           AmmoTaken                      (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::OnAmmoTakenFromBike(int* AmmoTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnAmmoTakenFromBike");

	ABend_Wpn_Gun_Base_C_OnAmmoTakenFromBike_Params params;
	params.AmmoTaken = AmmoTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDebuggingActive
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Gun_Base_C::OnDebuggingActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDebuggingActive");

	ABend_Wpn_Gun_Base_C_OnDebuggingActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ExecuteUbergraph_Bend_Wpn_Gun_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Gun_Base_C::ExecuteUbergraph_Bend_Wpn_Gun_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ExecuteUbergraph_Bend_Wpn_Gun_Base");

	ABend_Wpn_Gun_Base_C_ExecuteUbergraph_Bend_Wpn_Gun_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
