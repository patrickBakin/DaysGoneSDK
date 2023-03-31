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

// Function BP_MissionStartLocation.BP_MissionStartLocation_C.UserConstructionScript
struct ABP_MissionStartLocation_C_UserConstructionScript_Params
{
};

// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnEnterVehicleFromLoc__DelegateSignature
struct ABP_MissionStartLocation_C_OnPawnEnterVehicleFromLoc__DelegateSignature_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnVehicleSpawnedFromLoc__DelegateSignature
struct ABP_MissionStartLocation_C_OnVehicleSpawnedFromLoc__DelegateSignature_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VehicleIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnSpawnedFromLoc__DelegateSignature
struct ABP_MissionStartLocation_C_OnPawnSpawnedFromLoc__DelegateSignature_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PawnIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
