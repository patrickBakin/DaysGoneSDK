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

// Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnBike_FrontCollider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.UserConstructionScript");

	ABend_WpnBike_FrontCollider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnBike_FrontCollider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ReceiveBeginPlay");

	ABend_WpnBike_FrontCollider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnBike_FrontCollider_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ReceiveTick");

	ABend_WpnBike_FrontCollider_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ExecuteUbergraph_Bend_WpnBike_FrontCollider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnBike_FrontCollider_C::ExecuteUbergraph_Bend_WpnBike_FrontCollider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnBike_FrontCollider.Bend_WpnBike_FrontCollider_C.ExecuteUbergraph_Bend_WpnBike_FrontCollider");

	ABend_WpnBike_FrontCollider_C_ExecuteUbergraph_Bend_WpnBike_FrontCollider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
