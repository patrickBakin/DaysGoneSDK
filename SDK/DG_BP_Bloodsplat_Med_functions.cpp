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

// Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bloodsplat_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.UserConstructionScript");

	ABP_Bloodsplat_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Bloodsplat_Med_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.ReceiveBeginPlay");

	ABP_Bloodsplat_Med_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.ExecuteUbergraph_BP_Bloodsplat_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bloodsplat_Med_C::ExecuteUbergraph_BP_Bloodsplat_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Med.BP_Bloodsplat_Med_C.ExecuteUbergraph_BP_Bloodsplat_Med");

	ABP_Bloodsplat_Med_C_ExecuteUbergraph_BP_Bloodsplat_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
