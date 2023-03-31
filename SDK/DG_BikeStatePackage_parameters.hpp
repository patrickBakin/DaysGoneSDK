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

// Function BikeStatePackage.BikeStatePackage_C.UserConstructionScript
struct ABikeStatePackage_C_UserConstructionScript_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.WaitForNextImpact
struct ABikeStatePackage_C_WaitForNextImpact_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.BikeImpactCall
struct ABikeStatePackage_C_BikeImpactCall_Params
{
	struct FVector                                     BikeVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollidedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.OutOfGasCall
struct ABikeStatePackage_C_OutOfGasCall_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.BikeDamagedCall
struct ABikeStatePackage_C_BikeDamagedCall_Params
{
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.RepairBike
struct ABikeStatePackage_C_RepairBike_Params
{
	int                                                Scrap;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.FullyDamaged
struct ABikeStatePackage_C_FullyDamaged_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.WheelieStateChange
struct ABikeStatePackage_C_WheelieStateChange_Params
{
	unsigned char                                      PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.ReceiveBeginPlay
struct ABikeStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.RecheckPlayerPawn
struct ABikeStatePackage_C_RecheckPlayerPawn_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.RecheckBike
struct ABikeStatePackage_C_RecheckBike_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.PlayerEnteredBike
struct ABikeStatePackage_C_PlayerEnteredBike_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.ReceivePostSaveGameLoaded
struct ABikeStatePackage_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.BikeImpact
struct ABikeStatePackage_C_BikeImpact_Params
{
	struct FVector                                     BikeVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollidedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.OutOfGas
struct ABikeStatePackage_C_OutOfGas_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.BikeDamaged
struct ABikeStatePackage_C_BikeDamaged_Params
{
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.BikeRepaired
struct ABikeStatePackage_C_BikeRepaired_Params
{
	class ABillsBike_C*                                BikeRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Sabotaged;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScrapCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.PlayerRespawned
struct ABikeStatePackage_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.BikeFullyDamaged
struct ABikeStatePackage_C_BikeFullyDamaged_Params
{
};

// Function BikeStatePackage.BikeStatePackage_C.OnWheelieStateChanged
struct ABikeStatePackage_C_OnWheelieStateChanged_Params
{
	unsigned char                                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeStatePackage.BikeStatePackage_C.ExecuteUbergraph_BikeStatePackage
struct ABikeStatePackage_C_ExecuteUbergraph_BikeStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
