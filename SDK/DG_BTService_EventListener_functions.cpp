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

// Function BTService_EventListener.BTService_EventListener_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_EventListener_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_EventListener.BTService_EventListener_C.ReceiveActivation");

	UBTService_EventListener_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_EventListener.BTService_EventListener_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_EventListener_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_EventListener.BTService_EventListener_C.ReceiveDeactivation");

	UBTService_EventListener_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_EventListener.BTService_EventListener_C.targetPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_EventListener_C::targetPawn(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_EventListener.BTService_EventListener_C.targetPawn");

	UBTService_EventListener_C_targetPawn_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_EventListener.BTService_EventListener_C.ExecuteUbergraph_BTService_EventListener
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_EventListener_C::ExecuteUbergraph_BTService_EventListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_EventListener.BTService_EventListener_C.ExecuteUbergraph_BTService_EventListener");

	UBTService_EventListener_C_ExecuteUbergraph_BTService_EventListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
