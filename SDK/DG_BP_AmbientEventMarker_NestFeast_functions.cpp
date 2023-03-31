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

// Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_NestFeast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.UserConstructionScript");

	ABP_AmbientEventMarker_NestFeast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_NestFeast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.ReceiveBeginPlay");

	ABP_AmbientEventMarker_NestFeast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.ExecuteUbergraph_BP_AmbientEventMarker_NestFeast
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_NestFeast_C::ExecuteUbergraph_BP_AmbientEventMarker_NestFeast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C.ExecuteUbergraph_BP_AmbientEventMarker_NestFeast");

	ABP_AmbientEventMarker_NestFeast_C_ExecuteUbergraph_BP_AmbientEventMarker_NestFeast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
