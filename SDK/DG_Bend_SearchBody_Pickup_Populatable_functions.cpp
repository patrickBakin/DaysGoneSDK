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

// Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_Populatable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.UserConstructionScript");

	ABend_SearchBody_Pickup_Populatable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.InitInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchBody_Pickup_Populatable_C::InitInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.InitInteract");

	ABend_SearchBody_Pickup_Populatable_C_InitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.ExecuteUbergraph_Bend_SearchBody_Pickup_Populatable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchBody_Pickup_Populatable_C::ExecuteUbergraph_Bend_SearchBody_Pickup_Populatable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C.ExecuteUbergraph_Bend_SearchBody_Pickup_Populatable");

	ABend_SearchBody_Pickup_Populatable_C_ExecuteUbergraph_Bend_SearchBody_Pickup_Populatable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
