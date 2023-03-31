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

// Function BTTask_InitBuddy.BTTask_InitBuddy_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_InitBuddy_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_InitBuddy.BTTask_InitBuddy_C.ReceiveExecute");

	UBTTask_InitBuddy_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_InitBuddy.BTTask_InitBuddy_C.ExecuteUbergraph_BTTask_InitBuddy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_InitBuddy_C::ExecuteUbergraph_BTTask_InitBuddy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_InitBuddy.BTTask_InitBuddy_C.ExecuteUbergraph_BTTask_InitBuddy");

	UBTTask_InitBuddy_C_ExecuteUbergraph_BTTask_InitBuddy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
