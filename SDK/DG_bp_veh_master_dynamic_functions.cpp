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

// Function bp_veh_master_dynamic.bp_veh_master_dynamic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_dynamic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master_dynamic.bp_veh_master_dynamic_C.UserConstructionScript");

	Abp_veh_master_dynamic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
