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

// Function bp_veh_master_military.bp_veh_master_military_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_military_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master_military.bp_veh_master_military_C.UserConstructionScript");

	Abp_veh_master_military_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
