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

// Function GameEventManagerBP.GameEventManagerBP_C.OnGameEvent
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBendGameEventBase*     Event                          (ConstParm, Parm, OutParm, ReferenceParm)

void UGameEventManagerBP_C::OnGameEvent(struct FBendGameEventBase* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameEventManagerBP.GameEventManagerBP_C.OnGameEvent");

	UGameEventManagerBP_C_OnGameEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
