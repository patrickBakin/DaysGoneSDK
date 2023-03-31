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

// Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.SetNewtCameraValues
// (Public, BlueprintCallable, BlueprintEvent)

void UBendPlayerCamGrapple_C::SetNewtCameraValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.SetNewtCameraValues");

	UBendPlayerCamGrapple_C_SetNewtCameraValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamGrapple_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.OnActivate");

	UBendPlayerCamGrapple_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.ExecuteUbergraph_BendPlayerCamGrapple
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamGrapple_C::ExecuteUbergraph_BendPlayerCamGrapple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamGrapple.BendPlayerCamGrapple_C.ExecuteUbergraph_BendPlayerCamGrapple");

	UBendPlayerCamGrapple_C_ExecuteUbergraph_BendPlayerCamGrapple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
