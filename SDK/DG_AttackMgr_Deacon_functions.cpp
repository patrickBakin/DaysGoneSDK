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

// Function AttackMgr_Deacon.AttackMgr_Deacon_C.GetCurrentGrapplePercent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttackMgr_Deacon_C::GetCurrentGrapplePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackMgr_Deacon.AttackMgr_Deacon_C.GetCurrentGrapplePercent");

	UAttackMgr_Deacon_C_GetCurrentGrapplePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
