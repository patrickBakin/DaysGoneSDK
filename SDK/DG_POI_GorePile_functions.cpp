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

// Function POI_GorePile.POI_GorePile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_GorePile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GorePile.POI_GorePile_C.UserConstructionScript");

	APOI_GorePile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
