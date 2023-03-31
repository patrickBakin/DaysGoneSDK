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

// Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendVehicleCamCombat_WolfAttack_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.OnActivate");

	UBendVehicleCamCombat_WolfAttack_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.OnDeactivate
// (Event, Public, BlueprintEvent)

void UBendVehicleCamCombat_WolfAttack_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.OnDeactivate");

	UBendVehicleCamCombat_WolfAttack_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.ExecuteUbergraph_BendVehicleCamCombat_WolfAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendVehicleCamCombat_WolfAttack_C::ExecuteUbergraph_BendVehicleCamCombat_WolfAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleCamCombat_WolfAttack.BendVehicleCamCombat_WolfAttack_C.ExecuteUbergraph_BendVehicleCamCombat_WolfAttack");

	UBendVehicleCamCombat_WolfAttack_C_ExecuteUbergraph_BendVehicleCamCombat_WolfAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
