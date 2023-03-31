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

// Function Interface_PickupableObject.Interface_PickupableObject_C.MomentOfDrop
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_PickupableObject_C::MomentOfDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PickupableObject.Interface_PickupableObject_C.MomentOfDrop");

	UInterface_PickupableObject_C_MomentOfDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_PickupableObject.Interface_PickupableObject_C.MomentOfPickup
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_PickupableObject_C::MomentOfPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PickupableObject.Interface_PickupableObject_C.MomentOfPickup");

	UInterface_PickupableObject_C_MomentOfPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
