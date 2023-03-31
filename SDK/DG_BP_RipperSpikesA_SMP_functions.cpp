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

// Function BP_RipperSpikesA_SMP.BP_RipperSpikesA_SMP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RipperSpikesA_SMP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RipperSpikesA_SMP.BP_RipperSpikesA_SMP_C.UserConstructionScript");

	ABP_RipperSpikesA_SMP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
