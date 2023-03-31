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

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetCanRideVehicles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanRide                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_SetCanRideVehicles(bool CanRide, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetCanRideVehicles");

	UINTERFACE_PlayerController_C_I_SetCanRideVehicles_Params params;
	params.CanRide = CanRide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_GetCanRideVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_GetCanRideVehicle(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_GetCanRideVehicle");

	UINTERFACE_PlayerController_C_I_GetCanRideVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerAimVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Scoped                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimRightSide                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_SetPlayerAimVariables(bool Scoped, bool AimRightSide, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerAimVariables");

	UINTERFACE_PlayerController_C_I_SetPlayerAimVariables_Params params;
	params.Scoped = Scoped;
	params.AimRightSide = AimRightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetInteractableForBike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_SetInteractableForBike(bool Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetInteractableForBike");

	UINTERFACE_PlayerController_C_I_SetInteractableForBike_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_InRangeOfVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange_                       (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            VehicleRef                     (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_InRangeOfVehicle(bool InRange_, class AVehiclePawn* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_InRangeOfVehicle");

	UINTERFACE_PlayerController_C_I_InRangeOfVehicle_Params params;
	params.InRange_ = InRange_;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerinCinematicMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ON_                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerController_C::I_SetPlayerinCinematicMode(bool ON_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerinCinematicMode");

	UINTERFACE_PlayerController_C_I_SetPlayerinCinematicMode_Params params;
	params.ON_ = ON_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
