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

// Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Animal_StopWarning_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ReceiveExecuteAI");

	UBTTask_Animal_StopWarning_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ExecuteUbergraph_BTTask_Animal_StopWarning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Animal_StopWarning_C::ExecuteUbergraph_BTTask_Animal_StopWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ExecuteUbergraph_BTTask_Animal_StopWarning");

	UBTTask_Animal_StopWarning_C_ExecuteUbergraph_BTTask_Animal_StopWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
