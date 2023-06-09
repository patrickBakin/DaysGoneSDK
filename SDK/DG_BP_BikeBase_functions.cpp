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

// Function BP_BikeBase.BP_BikeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BikeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeBase.BP_BikeBase_C.UserConstructionScript");

	ABP_BikeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeBase.BP_BikeBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BikeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeBase.BP_BikeBase_C.ReceiveBeginPlay");

	ABP_BikeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BikeBase.BP_BikeBase_C.ExecuteUbergraph_BP_BikeBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BikeBase_C::ExecuteUbergraph_BP_BikeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BikeBase.BP_BikeBase_C.ExecuteUbergraph_BP_BikeBase");

	ABP_BikeBase_C_ExecuteUbergraph_BP_BikeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
