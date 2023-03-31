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

// Function JobScript_Interface.JobScript_Interface_C.I_InitializeJobScript
// (Public, BlueprintCallable, BlueprintEvent)

void UJobScript_Interface_C::I_InitializeJobScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobScript_Interface.JobScript_Interface_C.I_InitializeJobScript");

	UJobScript_Interface_C_I_InitializeJobScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
