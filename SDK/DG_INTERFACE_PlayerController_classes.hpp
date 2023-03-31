#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INTERFACE_PlayerController.INTERFACE_PlayerController_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_PlayerController_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_PlayerController.INTERFACE_PlayerController_C");
		return ptr;
	}


	void I_SetCanRideVehicles(bool CanRide, bool* Success);
	void I_GetCanRideVehicle(bool* Can);
	void I_SetPlayerAimVariables(bool Scoped, bool AimRightSide, bool* Success);
	void I_SetInteractableForBike(bool Interactable);
	void I_InRangeOfVehicle(bool InRange_, class AVehiclePawn* VehicleRef);
	void I_SetPlayerinCinematicMode(bool ON_, bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
