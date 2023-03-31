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

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanUpgrade
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_WpnMelee_Blunt_Base_C::ICanUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanUpgrade");

	ABend_WpnMelee_Blunt_Base_C_ICanUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetTier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EWeaponMeleeTier>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWeaponMeleeTier> ABend_WpnMelee_Blunt_Base_C::IGetTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetTier");

	ABend_WpnMelee_Blunt_Base_C_IGetTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetUpgradeCost
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABend_WpnMelee_Blunt_Base_C::IGetUpgradeCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetUpgradeCost");

	ABend_WpnMelee_Blunt_Base_C_IGetUpgradeCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ISetTier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponMeleeTier>  Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_WpnMelee_Blunt_Base_C::ISetTier(TEnumAsByte<EWeaponMeleeTier> Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ISetTier");

	ABend_WpnMelee_Blunt_Base_C_ISetTier_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanEverBeRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_WpnMelee_Blunt_Base_C::ICanEverBeRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanEverBeRepaired");

	ABend_WpnMelee_Blunt_Base_C_ICanEverBeRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanBeRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_WpnMelee_Blunt_Base_C::ICanBeRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanBeRepaired");

	ABend_WpnMelee_Blunt_Base_C_ICanBeRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetRepairCost
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABend_WpnMelee_Blunt_Base_C::IGetRepairCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetRepairCost");

	ABend_WpnMelee_Blunt_Base_C_IGetRepairCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IOnRepaired
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_WpnMelee_Blunt_Base_C::IOnRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IOnRepaired");

	ABend_WpnMelee_Blunt_Base_C_IOnRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyBrokenOverlap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_Blunt_Base_C::VerifyBrokenOverlap(class UObject* OtherActor, bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyBrokenOverlap");

	ABend_WpnMelee_Blunt_Base_C_VerifyBrokenOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyOverlap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_Blunt_Base_C::VerifyOverlap(class UObject* OtherActor, bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyOverlap");

	ABend_WpnMelee_Blunt_Base_C_VerifyOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.DisplayDebugInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABend_WpnMelee_Blunt_Base_C::DisplayDebugInfo(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.DisplayDebugInfo");

	ABend_WpnMelee_Blunt_Base_C_DisplayDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.UserConstructionScript");

	ABend_WpnMelee_Blunt_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_WpnMelee_Blunt_Base_C::BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature");

	ABend_WpnMelee_Blunt_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponArmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::OnWeaponArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponArmed");

	ABend_WpnMelee_Blunt_Base_C_OnWeaponArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponDisarmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::OnWeaponDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponDisarmed");

	ABend_WpnMelee_Blunt_Base_C_OnWeaponDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponsHealthPercentage        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_Blunt_Base_C::OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDamaged");

	ABend_WpnMelee_Blunt_Base_C_OnDamaged_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.WeaponsHealthPercentage = WeaponsHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ReceiveBeginPlay");

	ABend_WpnMelee_Blunt_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnHolsterStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::OnHolsterStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnHolsterStarted");

	ABend_WpnMelee_Blunt_Base_C_OnHolsterStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDrawFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::OnDrawFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDrawFinished");

	ABend_WpnMelee_Blunt_Base_C_OnDrawFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_WpnMelee_Blunt_Base_C::BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature");

	ABend_WpnMelee_Blunt_Base_C_BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDebuggingActive
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::OnDebuggingActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDebuggingActive");

	ABend_WpnMelee_Blunt_Base_C_OnDebuggingActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.Melee_Tutorials
// (BlueprintCallable, BlueprintEvent)

void ABend_WpnMelee_Blunt_Base_C::Melee_Tutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.Melee_Tutorials");

	ABend_WpnMelee_Blunt_Base_C_Melee_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ExecuteUbergraph_Bend_WpnMelee_Blunt_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_Blunt_Base_C::ExecuteUbergraph_Bend_WpnMelee_Blunt_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ExecuteUbergraph_Bend_WpnMelee_Blunt_Base");

	ABend_WpnMelee_Blunt_Base_C_ExecuteUbergraph_Bend_WpnMelee_Blunt_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
