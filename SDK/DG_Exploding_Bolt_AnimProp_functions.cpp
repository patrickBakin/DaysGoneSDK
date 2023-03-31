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

// Function Exploding_Bolt_AnimProp.Exploding_Bolt_AnimProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExploding_Bolt_AnimProp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exploding_Bolt_AnimProp.Exploding_Bolt_AnimProp_C.UserConstructionScript");

	AExploding_Bolt_AnimProp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
