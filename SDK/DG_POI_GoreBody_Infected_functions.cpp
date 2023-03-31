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

// Function POI_GoreBody_Infected.POI_GoreBody_Infected_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_GoreBody_Infected_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GoreBody_Infected.POI_GoreBody_Infected_C.UserConstructionScript");

	APOI_GoreBody_Infected_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
