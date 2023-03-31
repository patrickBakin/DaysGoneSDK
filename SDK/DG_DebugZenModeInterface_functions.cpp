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

// Function DebugZenModeInterface.DebugZenModeInterface_C.DisableZenMode
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugZenModeInterface_C::DisableZenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugZenModeInterface.DebugZenModeInterface_C.DisableZenMode");

	UDebugZenModeInterface_C_DisableZenMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
