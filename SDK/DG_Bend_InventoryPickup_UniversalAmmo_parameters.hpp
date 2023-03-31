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

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsAllowedAmmo
struct ABend_InventoryPickup_UniversalAmmo_C_IsAllowedAmmo_Params
{
	TEnumAsByte<EInventoryWeaponID>                    WeaponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoAllowed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.PlayPickupAmmoSound
struct ABend_InventoryPickup_UniversalAmmo_C_PlayPickupAmmoSound_Params
{
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsInventoryFull
struct ABend_InventoryPickup_UniversalAmmo_C_IsInventoryFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.UserConstructionScript
struct ABend_InventoryPickup_UniversalAmmo_C_UserConstructionScript_Params
{
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.OnPerformActionMid
struct ABend_InventoryPickup_UniversalAmmo_C_OnPerformActionMid_Params
{
	bool*                                              FromAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AlreadyDidPickup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.DisplayHudNotificationInternal
struct ABend_InventoryPickup_UniversalAmmo_C_DisplayHudNotificationInternal_Params
{
	class UTexture2D**                                 NotifyTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ReceivePostSaveGameLoaded
struct ABend_InventoryPickup_UniversalAmmo_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo
struct ABend_InventoryPickup_UniversalAmmo_C_ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
