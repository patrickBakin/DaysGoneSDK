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

// Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_DeathStrandingForceUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           forcereset                     (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_AttachToBike_C::I_DeathStrandingForceUpdate(bool forcereset)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_DeathStrandingForceUpdate");

	UINTERFACE_AttachToBike_C_I_DeathStrandingForceUpdate_Params params;
	params.forcereset = forcereset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_InteractRangeUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange                        (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_AttachToBike_C::I_InteractRangeUpdate(bool InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_InteractRangeUpdate");

	UINTERFACE_AttachToBike_C_I_InteractRangeUpdate_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
