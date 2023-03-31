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

// Function BendDebugAngleCam.BendDebugAngleCam_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendDebugAngleCam_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugAngleCam.BendDebugAngleCam_C.OnActivate");

	UBendDebugAngleCam_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDebugAngleCam.BendDebugAngleCam_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendDebugAngleCam_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugAngleCam.BendDebugAngleCam_C.OnDeactivate");

	UBendDebugAngleCam_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDebugAngleCam.BendDebugAngleCam_C.ExecuteUbergraph_BendDebugAngleCam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendDebugAngleCam_C::ExecuteUbergraph_BendDebugAngleCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugAngleCam.BendDebugAngleCam_C.ExecuteUbergraph_BendDebugAngleCam");

	UBendDebugAngleCam_C_ExecuteUbergraph_BendDebugAngleCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
