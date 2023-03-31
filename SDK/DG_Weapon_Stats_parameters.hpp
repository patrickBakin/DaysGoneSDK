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

// Function Weapon_Stats.Weapon_Stats_C.GetDamageMultiplierFromSkills
struct UWeapon_Stats_C_GetDamageMultiplierFromSkills_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetFlushLeftForInventory
struct UWeapon_Stats_C_SetFlushLeftForInventory_Params
{
};

// Function Weapon_Stats.Weapon_Stats_C.Set Is Ranged Comparison?
struct UWeapon_Stats_C_Set_Is_Ranged_Comparison__Params
{
	bool                                               Is_Ranged_Comparison_;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.Compare Stats
struct UWeapon_Stats_C_Compare_Stats_Params
{
	struct FName                                       Name_A;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name_B;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatInfo_Number
struct UWeapon_Stats_C_SetStatInfo_Number_Params
{
	struct FText                                       Text;                                                     // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatInfo_Bar
struct UWeapon_Stats_C_SetStatInfo_Bar_Params
{
	class UWeapon_Stat_Progress_C*                     Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  StatText;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              Row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsForBikePart
struct UWeapon_Stats_C_SetStatsForBikePart_Params
{
	class UInventoryItemMotorcyclePart*                BikePart;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsForInventoryItem
struct UWeapon_Stats_C_SetStatsForInventoryItem_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryItemStats                         InventoryStorageWeapon;                                   // (Parm)
};

// Function Weapon_Stats.Weapon_Stats_C.SetNames&DisplayStatBars
struct UWeapon_Stats_C_SetNames_DisplayStatBars_Params
{
	bool                                               IsMelee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.GetWeaponRange
struct UWeapon_Stats_C_GetWeaponRange_Params
{
	class ABendWeapon_Projectile*                      WeaponProjectile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsFromWeaponRef
struct UWeapon_Stats_C_SetStatsFromWeaponRef_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      AmmoID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldCompare;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsForPickup
struct UWeapon_Stats_C_SetStatsForPickup_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Better;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetShowNew
struct UWeapon_Stats_C_SetShowNew_Params
{
	bool                                               ShowNew;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsForInventoryStorageWeapon
struct UWeapon_Stats_C_SetStatsForInventoryStorageWeapon_Params
{
	struct FInventoryStorageWeapon                     InventoryStorageWeapon;                                   // (Parm)
};

// Function Weapon_Stats.Weapon_Stats_C.SetStatsForItem
struct UWeapon_Stats_C_SetStatsForItem_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.Construct
struct UWeapon_Stats_C_Construct_Params
{
};

// Function Weapon_Stats.Weapon_Stats_C.UpdateStatsForISW_Event
struct UWeapon_Stats_C_UpdateStatsForISW_Event_Params
{
	struct FInventoryStorageWeapon                     InventoryStorageWeapon;                                   // (Parm)
};

// Function Weapon_Stats.Weapon_Stats_C.ExecuteUbergraph_Weapon_Stats
struct UWeapon_Stats_C_ExecuteUbergraph_Weapon_Stats_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stats.Weapon_Stats_C.UpdateStatsForISW__DelegateSignature
struct UWeapon_Stats_C_UpdateStatsForISW__DelegateSignature_Params
{
	struct FInventoryStorageWeapon                     InventoryStorageWeapon;                                   // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
