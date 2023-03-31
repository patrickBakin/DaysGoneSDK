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

// Function POISlot_BuddyPaired.POISlot_BuddyPaired_C.GetAutoNavGoal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APOISlot_BuddyPaired_C::GetAutoNavGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function POISlot_BuddyPaired.POISlot_BuddyPaired_C.GetAutoNavGoal");

	APOISlot_BuddyPaired_C_GetAutoNavGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function POISlot_BuddyPaired.POISlot_BuddyPaired_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOISlot_BuddyPaired_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POISlot_BuddyPaired.POISlot_BuddyPaired_C.UserConstructionScript");

	APOISlot_BuddyPaired_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
