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

// Function DebugFreezeTimeScaleInterface.DebugFreezeTimeScaleInterface_C.DebugFreezeTimeScale
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugFreezeTimeScaleInterface_C::DebugFreezeTimeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugFreezeTimeScaleInterface.DebugFreezeTimeScaleInterface_C.DebugFreezeTimeScale");

	UDebugFreezeTimeScaleInterface_C_DebugFreezeTimeScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
