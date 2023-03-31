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

// Function BP_BendWindGust.BP_BendWindGust_C.CreateWindGust
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BendWindGust_C::CreateWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWindGust.BP_BendWindGust_C.CreateWindGust");

	ABP_BendWindGust_C_CreateWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendWindGust.BP_BendWindGust_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendWindGust_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendWindGust.BP_BendWindGust_C.UserConstructionScript");

	ABP_BendWindGust_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
