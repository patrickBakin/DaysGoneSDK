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

// Function SFAB_wigwam_hotel_b1_EXT_nest.SFAB_wigwam_hotel_b1_EXT_nest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASFAB_wigwam_hotel_b1_EXT_nest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SFAB_wigwam_hotel_b1_EXT_nest.SFAB_wigwam_hotel_b1_EXT_nest_C.UserConstructionScript");

	ASFAB_wigwam_hotel_b1_EXT_nest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
