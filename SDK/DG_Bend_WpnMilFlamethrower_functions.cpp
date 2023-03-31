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

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.Verify Overlap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMilFlamethrower_C::Verify_Overlap(class UObject* OtherActor, bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.Verify Overlap");

	ABend_WpnMilFlamethrower_C_Verify_Overlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.UserConstructionScript");

	ABend_WpnMilFlamethrower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDrawStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::OnDrawStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDrawStarted");

	ABend_WpnMilFlamethrower_C_OnDrawStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnHolsterStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::OnHolsterStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnHolsterStarted");

	ABend_WpnMilFlamethrower_C_OnHolsterStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ReceiveBeginPlay");

	ABend_WpnMilFlamethrower_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_WpnMilFlamethrower_C::BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature");

	ABend_WpnMilFlamethrower_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponArmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::OnWeaponArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponArmed");

	ABend_WpnMilFlamethrower_C_OnWeaponArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponDisarmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMilFlamethrower_C::OnWeaponDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponDisarmed");

	ABend_WpnMilFlamethrower_C_OnWeaponDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponsHealthPercentage        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMilFlamethrower_C::OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDamaged");

	ABend_WpnMilFlamethrower_C_OnDamaged_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.WeaponsHealthPercentage = WeaponsHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ExecuteUbergraph_Bend_WpnMilFlamethrower
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMilFlamethrower_C::ExecuteUbergraph_Bend_WpnMilFlamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ExecuteUbergraph_Bend_WpnMilFlamethrower");

	ABend_WpnMilFlamethrower_C_ExecuteUbergraph_Bend_WpnMilFlamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
