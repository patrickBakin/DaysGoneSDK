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

// Function Mission_AWI2_NotComplete_Cond.Mission_AWI2_NotComplete_Cond_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CondOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMission_AWI2_NotComplete_Cond_C::CanUse(class UObject** CondOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_AWI2_NotComplete_Cond.Mission_AWI2_NotComplete_Cond_C.CanUse");

	UMission_AWI2_NotComplete_Cond_C_CanUse_Params params;
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