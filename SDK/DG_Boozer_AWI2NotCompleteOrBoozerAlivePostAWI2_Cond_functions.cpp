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

// Function Boozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond.Boozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CondOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBoozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond_C::CanUse(class UObject** CondOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Boozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond.Boozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond_C.CanUse");

	UBoozer_AWI2NotCompleteOrBoozerAlivePostAWI2_Cond_C_CanUse_Params params;
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
