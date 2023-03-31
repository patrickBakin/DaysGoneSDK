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

// Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerInitializeBlackboard_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ReceiveExecute");

	UBTTask_FreakerInitializeBlackboard_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ExecuteUbergraph_BTTask_FreakerInitializeBlackboard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerInitializeBlackboard_C::ExecuteUbergraph_BTTask_FreakerInitializeBlackboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ExecuteUbergraph_BTTask_FreakerInitializeBlackboard");

	UBTTask_FreakerInitializeBlackboard_C_ExecuteUbergraph_BTTask_FreakerInitializeBlackboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
