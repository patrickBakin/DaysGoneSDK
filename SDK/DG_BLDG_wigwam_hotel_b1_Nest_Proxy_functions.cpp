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

// Function BLDG_wigwam_hotel_b1_Nest_Proxy.BLDG_wigwam_hotel_b1_Nest_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABLDG_wigwam_hotel_b1_Nest_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest_Proxy.BLDG_wigwam_hotel_b1_Nest_Proxy_C.UserConstructionScript");

	ABLDG_wigwam_hotel_b1_Nest_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
