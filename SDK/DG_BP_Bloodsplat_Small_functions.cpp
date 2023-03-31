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

// Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bloodsplat_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.UserConstructionScript");

	ABP_Bloodsplat_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Bloodsplat_Small_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.ReceiveBeginPlay");

	ABP_Bloodsplat_Small_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.ExecuteUbergraph_BP_Bloodsplat_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bloodsplat_Small_C::ExecuteUbergraph_BP_Bloodsplat_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Small.BP_Bloodsplat_Small_C.ExecuteUbergraph_BP_Bloodsplat_Small");

	ABP_Bloodsplat_Small_C_ExecuteUbergraph_BP_Bloodsplat_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
