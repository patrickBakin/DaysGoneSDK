#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetCanRideVehicles
struct UINTERFACE_PlayerController_C_I_SetCanRideVehicles_Params
{
	bool                                               CanRide;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_GetCanRideVehicle
struct UINTERFACE_PlayerController_C_I_GetCanRideVehicle_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerAimVariables
struct UINTERFACE_PlayerController_C_I_SetPlayerAimVariables_Params
{
	bool                                               Scoped;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimRightSide;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetInteractableForBike
struct UINTERFACE_PlayerController_C_I_SetInteractableForBike_Params
{
	bool                                               Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_InRangeOfVehicle
struct UINTERFACE_PlayerController_C_I_InRangeOfVehicle_Params
{
	bool                                               InRange_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                VehicleRef;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerController.INTERFACE_PlayerController_C.I_SetPlayerinCinematicMode
struct UINTERFACE_PlayerController_C_I_SetPlayerinCinematicMode_Params
{
	bool                                               ON_;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
