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

// Function BP_BranchesB_Static.BP_BranchesB_Static_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BranchesB_Static_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BranchesB_Static.BP_BranchesB_Static_C.UserConstructionScript");

	ABP_BranchesB_Static_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
