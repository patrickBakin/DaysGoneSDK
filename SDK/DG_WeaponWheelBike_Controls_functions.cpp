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

// Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponWheelBike_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.UserConstructionScript");

	AWeaponWheelBike_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWeaponWheelBike_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveBeginPlay");

	AWeaponWheelBike_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void AWeaponWheelBike_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveActorOnInputEnabled");

	AWeaponWheelBike_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void AWeaponWheelBike_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ReceiveActorOnInputDisabled");

	AWeaponWheelBike_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ExecuteUbergraph_WeaponWheelBike_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponWheelBike_Controls_C::ExecuteUbergraph_WeaponWheelBike_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponWheelBike_Controls.WeaponWheelBike_Controls_C.ExecuteUbergraph_WeaponWheelBike_Controls");

	AWeaponWheelBike_Controls_C_ExecuteUbergraph_WeaponWheelBike_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
