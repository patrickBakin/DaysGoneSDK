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

// Function WeaponWheel_Controls.WeaponWheel_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponWheel_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheel_Controls.WeaponWheel_Controls_C.UserConstructionScript");

	AWeaponWheel_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWeaponWheel_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveBeginPlay");

	AWeaponWheel_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void AWeaponWheel_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveActorOnInputEnabled");

	AWeaponWheel_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void AWeaponWheel_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheel_Controls.WeaponWheel_Controls_C.ReceiveActorOnInputDisabled");

	AWeaponWheel_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheel_Controls.WeaponWheel_Controls_C.ExecuteUbergraph_WeaponWheel_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponWheel_Controls_C::ExecuteUbergraph_WeaponWheel_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheel_Controls.WeaponWheel_Controls_C.ExecuteUbergraph_WeaponWheel_Controls");

	AWeaponWheel_Controls_C_ExecuteUbergraph_WeaponWheel_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
