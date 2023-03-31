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

// Function BendVehicleCamLookBehind.BendVehicleCamLookBehind_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendVehicleCamLookBehind_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleCamLookBehind.BendVehicleCamLookBehind_C.OnActivate");

	UBendVehicleCamLookBehind_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehicleCamLookBehind.BendVehicleCamLookBehind_C.ExecuteUbergraph_BendVehicleCamLookBehind
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendVehicleCamLookBehind_C::ExecuteUbergraph_BendVehicleCamLookBehind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleCamLookBehind.BendVehicleCamLookBehind_C.ExecuteUbergraph_BendVehicleCamLookBehind");

	UBendVehicleCamLookBehind_C_ExecuteUbergraph_BendVehicleCamLookBehind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
