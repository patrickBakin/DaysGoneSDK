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

// Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.DeactivateCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBendPlayerCamLookAt_C::DeactivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.DeactivateCamera");

	UBendPlayerCamLookAt_C_DeactivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamLookAt_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.OnActivate");

	UBendPlayerCamLookAt_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.TimerExpired
// (BlueprintCallable, BlueprintEvent)

void UBendPlayerCamLookAt_C::TimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.TimerExpired");

	UBendPlayerCamLookAt_C_TimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.ExecuteUbergraph_BendPlayerCamLookAt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamLookAt_C::ExecuteUbergraph_BendPlayerCamLookAt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamLookAt.BendPlayerCamLookAt_C.ExecuteUbergraph_BendPlayerCamLookAt");

	UBendPlayerCamLookAt_C_ExecuteUbergraph_BendPlayerCamLookAt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
