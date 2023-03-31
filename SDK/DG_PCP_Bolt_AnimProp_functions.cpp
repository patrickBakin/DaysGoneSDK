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

// Function PCP_Bolt_AnimProp.PCP_Bolt_AnimProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APCP_Bolt_AnimProp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCP_Bolt_AnimProp.PCP_Bolt_AnimProp_C.UserConstructionScript");

	APCP_Bolt_AnimProp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
