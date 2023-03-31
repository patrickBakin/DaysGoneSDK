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

// Function BP_LogPileExplode.BP_LogPileExplode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LogPileExplode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.UserConstructionScript");

	ABP_LogPileExplode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LogPileExplode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveBeginPlay");

	ABP_LogPileExplode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogPileExplode_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.ReceivePostSaveGameLoaded");

	ABP_LogPileExplode_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogPileExplode_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveAnyDamage");

	ABP_LogPileExplode_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogPileExplode.BP_LogPileExplode_C.ExecuteUbergraph_BP_LogPileExplode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogPileExplode_C::ExecuteUbergraph_BP_LogPileExplode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.ExecuteUbergraph_BP_LogPileExplode");

	ABP_LogPileExplode_C_ExecuteUbergraph_BP_LogPileExplode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogPileExplode.BP_LogPileExplode_C.DestructibleExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LogPileExplode_C::DestructibleExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogPileExplode.BP_LogPileExplode_C.DestructibleExploded__DelegateSignature");

	ABP_LogPileExplode_C_DestructibleExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
