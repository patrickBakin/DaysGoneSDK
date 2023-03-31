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

// Function Bend_ThrownProj.Bend_ThrownProj_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.UserConstructionScript");

	ABend_ThrownProj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_ThrownProj_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveBeginPlay");

	ABend_ThrownProj_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveAnyDamage");

	ABend_ThrownProj_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeManual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_C::ForceExplodeManual(class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeManual");

	ABend_ThrownProj_C_ForceExplodeManual_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.OnExploded
// (Event, Public, BlueprintEvent)

void ABend_ThrownProj_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.OnExploded");

	ABend_ThrownProj_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ReceivePreSaveGameLoaded");

	ABend_ThrownProj_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeDelayed
// (BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_C::ForceExplodeDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeDelayed");

	ABend_ThrownProj_C_ForceExplodeDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.StopVibration
// (BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_C::StopVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.StopVibration");

	ABend_ThrownProj_C_StopVibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveEndPlay");

	ABend_ThrownProj_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj.Bend_ThrownProj_C.ExecuteUbergraph_Bend_ThrownProj
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_C::ExecuteUbergraph_Bend_ThrownProj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj.Bend_ThrownProj_C.ExecuteUbergraph_Bend_ThrownProj");

	ABend_ThrownProj_C_ExecuteUbergraph_Bend_ThrownProj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
