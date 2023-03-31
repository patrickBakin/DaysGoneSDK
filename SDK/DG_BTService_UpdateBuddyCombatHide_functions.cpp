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

// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_UpdateBuddyCombatHide_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveActivation");

	UBTService_UpdateBuddyCombatHide_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_UpdateBuddyCombatHide_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveDeactivation");

	UBTService_UpdateBuddyCombatHide_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ExecuteUbergraph_BTService_UpdateBuddyCombatHide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_UpdateBuddyCombatHide_C::ExecuteUbergraph_BTService_UpdateBuddyCombatHide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ExecuteUbergraph_BTService_UpdateBuddyCombatHide");

	UBTService_UpdateBuddyCombatHide_C_ExecuteUbergraph_BTService_UpdateBuddyCombatHide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
