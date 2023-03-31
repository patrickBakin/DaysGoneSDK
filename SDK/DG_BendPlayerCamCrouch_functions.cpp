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

// Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamCrouch_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.OnActivate");

	UBendPlayerCamCrouch_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.UpdateCombat
// (BlueprintCallable, BlueprintEvent)

void UBendPlayerCamCrouch_C::UpdateCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.UpdateCombat");

	UBendPlayerCamCrouch_C_UpdateCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamCrouch_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.OnDeactivate");

	UBendPlayerCamCrouch_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.ExecuteUbergraph_BendPlayerCamCrouch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamCrouch_C::ExecuteUbergraph_BendPlayerCamCrouch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCrouch.BendPlayerCamCrouch_C.ExecuteUbergraph_BendPlayerCamCrouch");

	UBendPlayerCamCrouch_C_ExecuteUbergraph_BendPlayerCamCrouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
