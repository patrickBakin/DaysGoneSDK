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

// Function bp_Pickup_v2.bp_Pickup_v2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_Pickup_v2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_Pickup_v2.bp_Pickup_v2_C.UserConstructionScript");

	Abp_Pickup_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
