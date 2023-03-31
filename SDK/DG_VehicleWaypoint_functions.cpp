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

// Function VehicleWaypoint.VehicleWaypoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicleWaypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.UserConstructionScript");

	AVehicleWaypoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleWaypoint.VehicleWaypoint_C.OnReachedEndWaypoint
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVehiclePawn**           VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleWaypoint_C::OnReachedEndWaypoint(class AVehiclePawn** VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.OnReachedEndWaypoint");

	AVehicleWaypoint_C_OnReachedEndWaypoint_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleWaypoint.VehicleWaypoint_C.OnReachedWaypoint
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVehiclePawn**           VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isEndWaypoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleWaypoint_C::OnReachedWaypoint(class AVehiclePawn** VehiclePawn, bool* isEndWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.OnReachedWaypoint");

	AVehicleWaypoint_C_OnReachedWaypoint_Params params;
	params.VehiclePawn = VehiclePawn;
	params.isEndWaypoint = isEndWaypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleWaypoint.VehicleWaypoint_C.ExecuteUbergraph_VehicleWaypoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleWaypoint_C::ExecuteUbergraph_VehicleWaypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.ExecuteUbergraph_VehicleWaypoint");

	AVehicleWaypoint_C_ExecuteUbergraph_VehicleWaypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleWaypoint.VehicleWaypoint_C.ReachedWaypoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isEndWaypoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleWaypoint_C::ReachedWaypoint__DelegateSignature(class AVehiclePawn* VehiclePawn, bool isEndWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.ReachedWaypoint__DelegateSignature");

	AVehicleWaypoint_C_ReachedWaypoint__DelegateSignature_Params params;
	params.VehiclePawn = VehiclePawn;
	params.isEndWaypoint = isEndWaypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleWaypoint.VehicleWaypoint_C.ReachedEndWaypoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleWaypoint_C::ReachedEndWaypoint__DelegateSignature(class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWaypoint.VehicleWaypoint_C.ReachedEndWaypoint__DelegateSignature");

	AVehicleWaypoint_C_ReachedEndWaypoint__DelegateSignature_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
