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

// Function Cond_AmbushZone_HW_AZ_01_NotCleared.Cond_AmbushZone_HW_AZ_01_NotCleared_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CondOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCond_AmbushZone_HW_AZ_01_NotCleared_C::CanUse(class UObject** CondOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cond_AmbushZone_HW_AZ_01_NotCleared.Cond_AmbushZone_HW_AZ_01_NotCleared_C.CanUse");

	UCond_AmbushZone_HW_AZ_01_NotCleared_C_CanUse_Params params;
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
