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

// Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamMeleeKill_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.OnActivate");

	UBendPlayerCamMeleeKill_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamMeleeKill_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.OnDeactivate");

	UBendPlayerCamMeleeKill_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.DeactivateAfterTime
// (BlueprintCallable, BlueprintEvent)

void UBendPlayerCamMeleeKill_C::DeactivateAfterTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.DeactivateAfterTime");

	UBendPlayerCamMeleeKill_C_DeactivateAfterTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.ExecuteUbergraph_BendPlayerCamMeleeKill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamMeleeKill_C::ExecuteUbergraph_BendPlayerCamMeleeKill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C.ExecuteUbergraph_BendPlayerCamMeleeKill");

	UBendPlayerCamMeleeKill_C_ExecuteUbergraph_BendPlayerCamMeleeKill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
