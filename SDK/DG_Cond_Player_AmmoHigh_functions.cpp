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

// Function Cond_Player_AmmoHigh.Cond_Player_AmmoHigh_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CondOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCond_Player_AmmoHigh_C::CanUse(class UObject** CondOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cond_Player_AmmoHigh.Cond_Player_AmmoHigh_C.CanUse");

	UCond_Player_AmmoHigh_C_CanUse_Params params;
	params.CondOwner = CondOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
