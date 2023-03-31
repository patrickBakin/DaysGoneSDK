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

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.DisplayDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (Parm)

void ABend_WpnMelee_NoMesh_Base_C::DisplayDebugInfo(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.DisplayDebugInfo");

	ABend_WpnMelee_NoMesh_Base_C_DisplayDebugInfo_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.VerifyOverlap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Other_Actor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_NoMesh_Base_C::VerifyOverlap(class AActor* Other_Actor, bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.VerifyOverlap");

	ABend_WpnMelee_NoMesh_Base_C_VerifyOverlap_Params params;
	params.Other_Actor = Other_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMelee_NoMesh_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.UserConstructionScript");

	ABend_WpnMelee_NoMesh_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABend_WpnMelee_NoMesh_Base_C::BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature");

	ABend_WpnMelee_NoMesh_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponArmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_NoMesh_Base_C::OnWeaponArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponArmed");

	ABend_WpnMelee_NoMesh_Base_C_OnWeaponArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponDisarmed
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_NoMesh_Base_C::OnWeaponDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponDisarmed");

	ABend_WpnMelee_NoMesh_Base_C_OnWeaponDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_NoMesh_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ReceiveBeginPlay");

	ABend_WpnMelee_NoMesh_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnDebuggingActive
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_NoMesh_Base_C::OnDebuggingActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnDebuggingActive");

	ABend_WpnMelee_NoMesh_Base_C_OnDebuggingActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_NoMesh_Base_C::ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base");

	ABend_WpnMelee_NoMesh_Base_C_ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
