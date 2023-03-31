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

// Function BendDebugCam.BendDebugCam_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendDebugCam_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugCam.BendDebugCam_C.OnActivate");

	UBendDebugCam_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDebugCam.BendDebugCam_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendDebugCam_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugCam.BendDebugCam_C.OnDeactivate");

	UBendDebugCam_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDebugCam.BendDebugCam_C.ExecuteUbergraph_BendDebugCam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendDebugCam_C::ExecuteUbergraph_BendDebugCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDebugCam.BendDebugCam_C.ExecuteUbergraph_BendDebugCam");

	UBendDebugCam_C_ExecuteUbergraph_BendDebugCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
