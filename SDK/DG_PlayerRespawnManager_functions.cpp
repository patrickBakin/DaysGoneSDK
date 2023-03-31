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

// Function PlayerRespawnManager.PlayerRespawnManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerRespawnManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnManager.PlayerRespawnManager_C.UserConstructionScript");

	APlayerRespawnManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnManager.PlayerRespawnManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerRespawnManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnManager.PlayerRespawnManager_C.ReceiveBeginPlay");

	APlayerRespawnManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnManager.PlayerRespawnManager_C.OnRespawnPointTriggered_Impl
// (BlueprintCallable, BlueprintEvent)

void APlayerRespawnManager_C::OnRespawnPointTriggered_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnManager.PlayerRespawnManager_C.OnRespawnPointTriggered_Impl");

	APlayerRespawnManager_C_OnRespawnPointTriggered_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnManager.PlayerRespawnManager_C.ExecuteUbergraph_PlayerRespawnManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnManager_C::ExecuteUbergraph_PlayerRespawnManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnManager.PlayerRespawnManager_C.ExecuteUbergraph_PlayerRespawnManager");

	APlayerRespawnManager_C_ExecuteUbergraph_PlayerRespawnManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
