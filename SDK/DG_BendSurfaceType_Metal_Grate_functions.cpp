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

// Function BendSurfaceType_Metal_Grate.BendSurfaceType_Metal_Grate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendSurfaceType_Metal_Grate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSurfaceType_Metal_Grate.BendSurfaceType_Metal_Grate_C.UserConstructionScript");

	ABendSurfaceType_Metal_Grate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif