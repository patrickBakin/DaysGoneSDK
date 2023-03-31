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

// Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetDumpTruckView
// (Public, BlueprintCallable, BlueprintEvent)

void UBendVehiclePassengerCamFollow_C::SetDumpTruckView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetDumpTruckView");

	UBendVehiclePassengerCamFollow_C_SetDumpTruckView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetBikeView
// (Public, BlueprintCallable, BlueprintEvent)

void UBendVehiclePassengerCamFollow_C::SetBikeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetBikeView");

	UBendVehiclePassengerCamFollow_C_SetBikeView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetGolfCartView
// (Public, BlueprintCallable, BlueprintEvent)

void UBendVehiclePassengerCamFollow_C::SetGolfCartView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.SetGolfCartView");

	UBendVehiclePassengerCamFollow_C_SetGolfCartView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendVehiclePassengerCamFollow_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.OnActivate");

	UBendVehiclePassengerCamFollow_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.ExecuteUbergraph_BendVehiclePassengerCamFollow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendVehiclePassengerCamFollow_C::ExecuteUbergraph_BendVehiclePassengerCamFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehiclePassengerCamFollow.BendVehiclePassengerCamFollow_C.ExecuteUbergraph_BendVehiclePassengerCamFollow");

	UBendVehiclePassengerCamFollow_C_ExecuteUbergraph_BendVehiclePassengerCamFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
