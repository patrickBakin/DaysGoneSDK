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

// Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bloodsplat_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.UserConstructionScript");

	ABP_Bloodsplat_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Bloodsplat_Shotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.ReceiveBeginPlay");

	ABP_Bloodsplat_Shotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.ExecuteUbergraph_BP_Bloodsplat_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bloodsplat_Shotgun_C::ExecuteUbergraph_BP_Bloodsplat_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bloodsplat_Shotgun.BP_Bloodsplat_Shotgun_C.ExecuteUbergraph_BP_Bloodsplat_Shotgun");

	ABP_Bloodsplat_Shotgun_C_ExecuteUbergraph_BP_Bloodsplat_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
