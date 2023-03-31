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

// Function BendSurfaceType_DeepestSnow.BendSurfaceType_DeepestSnow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendSurfaceType_DeepestSnow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSurfaceType_DeepestSnow.BendSurfaceType_DeepestSnow_C.UserConstructionScript");

	ABendSurfaceType_DeepestSnow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
