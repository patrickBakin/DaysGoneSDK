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

// Function WolfController.WolfController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWolfController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WolfController.WolfController_C.UserConstructionScript");

	AWolfController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
