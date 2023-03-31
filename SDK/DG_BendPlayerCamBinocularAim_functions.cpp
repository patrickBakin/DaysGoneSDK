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

// Function BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamBinocularAim_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C.OnDeactivate");

	UBendPlayerCamBinocularAim_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C.ExecuteUbergraph_BendPlayerCamBinocularAim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamBinocularAim_C::ExecuteUbergraph_BendPlayerCamBinocularAim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C.ExecuteUbergraph_BendPlayerCamBinocularAim");

	UBendPlayerCamBinocularAim_C_ExecuteUbergraph_BendPlayerCamBinocularAim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
