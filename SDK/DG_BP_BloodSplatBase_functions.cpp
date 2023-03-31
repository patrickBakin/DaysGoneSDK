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

// Function BP_BloodSplatBase.BP_BloodSplatBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodSplatBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatBase.BP_BloodSplatBase_C.UserConstructionScript");

	ABP_BloodSplatBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplatBase.BP_BloodSplatBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BloodSplatBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatBase.BP_BloodSplatBase_C.ReceiveBeginPlay");

	ABP_BloodSplatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplatBase.BP_BloodSplatBase_C.ExecuteUbergraph_BP_BloodSplatBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodSplatBase_C::ExecuteUbergraph_BP_BloodSplatBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatBase.BP_BloodSplatBase_C.ExecuteUbergraph_BP_BloodSplatBase");

	ABP_BloodSplatBase_C_ExecuteUbergraph_BP_BloodSplatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
