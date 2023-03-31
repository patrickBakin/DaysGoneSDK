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

// Function BendCinematicCutCam.BendCinematicCutCam_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendCinematicCutCam_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCinematicCutCam.BendCinematicCutCam_C.OnActivate");

	UBendCinematicCutCam_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCinematicCutCam.BendCinematicCutCam_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendCinematicCutCam_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCinematicCutCam.BendCinematicCutCam_C.OnDeactivate");

	UBendCinematicCutCam_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCinematicCutCam.BendCinematicCutCam_C.ExecuteUbergraph_BendCinematicCutCam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendCinematicCutCam_C::ExecuteUbergraph_BendCinematicCutCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCinematicCutCam.BendCinematicCutCam_C.ExecuteUbergraph_BendCinematicCutCam");

	UBendCinematicCutCam_C_ExecuteUbergraph_BendCinematicCutCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
