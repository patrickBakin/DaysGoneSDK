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

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.GetNumDrops
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   AnimalSubclass                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_SearchAnimalBody_Pickup_C::GetNumDrops(const struct FName& AnimalSubclass, int* NumItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.GetNumDrops");

	ABend_SearchAnimalBody_Pickup_C_GetNumDrops_Params params;
	params.AnimalSubclass = AnimalSubclass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItem != nullptr)
		*NumItem = params.NumItem;
}


// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchAnimalBody_Pickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.UserConstructionScript");

	ABend_SearchAnimalBody_Pickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.HandlePickupLogic
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchAnimalBody_Pickup_C::HandlePickupLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.HandlePickupLogic");

	ABend_SearchAnimalBody_Pickup_C_HandlePickupLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.InitInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchAnimalBody_Pickup_C::InitInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.InitInteract");

	ABend_SearchAnimalBody_Pickup_C_InitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.OnInputSucceeded
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABend_SearchAnimalBody_Pickup_C::OnInputSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.OnInputSucceeded");

	ABend_SearchAnimalBody_Pickup_C_OnInputSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.ExecuteUbergraph_Bend_SearchAnimalBody_Pickup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchAnimalBody_Pickup_C::ExecuteUbergraph_Bend_SearchAnimalBody_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.ExecuteUbergraph_Bend_SearchAnimalBody_Pickup");

	ABend_SearchAnimalBody_Pickup_C_ExecuteUbergraph_Bend_SearchAnimalBody_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
