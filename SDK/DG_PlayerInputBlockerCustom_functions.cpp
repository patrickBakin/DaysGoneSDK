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

// Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerInputBlockerCustom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.UserConstructionScript");

	APlayerInputBlockerCustom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerInputBlockerCustom_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveBeginPlay");

	APlayerInputBlockerCustom_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void APlayerInputBlockerCustom_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveActorOnInputEnabled");

	APlayerInputBlockerCustom_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void APlayerInputBlockerCustom_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ReceiveActorOnInputDisabled");

	APlayerInputBlockerCustom_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ExecuteUbergraph_PlayerInputBlockerCustom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerInputBlockerCustom_C::ExecuteUbergraph_PlayerInputBlockerCustom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInputBlockerCustom.PlayerInputBlockerCustom_C.ExecuteUbergraph_PlayerInputBlockerCustom");

	APlayerInputBlockerCustom_C_ExecuteUbergraph_PlayerInputBlockerCustom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
