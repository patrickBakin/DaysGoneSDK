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

// Function Tracking_minimapmarker.Tracking_minimapmarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATracking_minimapmarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracking_minimapmarker.Tracking_minimapmarker_C.UserConstructionScript");

	ATracking_minimapmarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
