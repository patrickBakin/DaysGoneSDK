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

// Function UniExhaustTipBase.UniExhaustTipBase_C.OnVehiclePartAttached
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AVehiclePawn**           VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void UUniExhaustTipBase_C::OnVehiclePartAttached(class AVehiclePawn** VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniExhaustTipBase.UniExhaustTipBase_C.OnVehiclePartAttached");

	UUniExhaustTipBase_C_OnVehiclePartAttached_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
