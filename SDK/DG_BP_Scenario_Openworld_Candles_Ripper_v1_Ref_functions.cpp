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

// Function BP_Scenario_Openworld_Candles_Ripper_v1_Ref.BP_Scenario_Openworld_Candles_Ripper_v1_Ref_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Scenario_Openworld_Candles_Ripper_v1_Ref_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scenario_Openworld_Candles_Ripper_v1_Ref.BP_Scenario_Openworld_Candles_Ripper_v1_Ref_C.UserConstructionScript");

	ABP_Scenario_Openworld_Candles_Ripper_v1_Ref_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
