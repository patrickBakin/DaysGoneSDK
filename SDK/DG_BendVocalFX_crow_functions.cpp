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

// Function BendVocalFX_crow.BendVocalFX_crow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendVocalFX_crow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVocalFX_crow.BendVocalFX_crow_C.UserConstructionScript");

	ABendVocalFX_crow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif