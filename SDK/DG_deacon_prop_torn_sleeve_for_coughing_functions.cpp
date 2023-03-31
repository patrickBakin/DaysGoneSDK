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

// Function deacon_prop_torn_sleeve_for_coughing.deacon_prop_torn_sleeve_for_coughing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Adeacon_prop_torn_sleeve_for_coughing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deacon_prop_torn_sleeve_for_coughing.deacon_prop_torn_sleeve_for_coughing_C.UserConstructionScript");

	Adeacon_prop_torn_sleeve_for_coughing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
