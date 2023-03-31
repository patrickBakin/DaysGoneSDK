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

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RepairBike
struct UBendLib_GameplayFunctions_C_RepairBike_Params
{
	bool                                               Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RefuelBike
struct UBendLib_GameplayFunctions_C_RefuelBike_Params
{
	bool                                               Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FuelRemainingGallons;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAtAndFollow
struct UBendLib_GameplayFunctions_C_PointCameraAtAndFollow_Params
{
	class AActor*                                      ActorToFollow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToFollow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAt
struct UBendLib_GameplayFunctions_C_PointCameraAt_Params
{
	struct FVector                                     LocationToPointAt;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interruptable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.IsWeaponEquippedInHands
struct UBendLib_GameplayFunctions_C_IsWeaponEquippedInHands_Params
{
	TEnumAsByte<EInventoryWeaponID>                    WeaponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Equipped_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.SetHUDWeaponsVisibility
struct UBendLib_GameplayFunctions_C_SetHUDWeaponsVisibility_Params
{
	TEnumAsByte<EScriptVisibility>                     Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
