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

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePlayerNeed
struct ABend_SearchHumanBody_Pickup_C_HandlePlayerNeed_Params
{
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
	struct FString                                     TheNeed;                                                  // (Parm, ZeroConstructor)
	struct FInventoryItemTag                           ChosenItem;                                               // (Parm, OutParm)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HealthCheck
struct ABend_SearchHumanBody_Pickup_C_HealthCheck_Params
{
	bool                                               Player_Health_Need;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.FindPlayerNeeds
struct ABend_SearchHumanBody_Pickup_C_FindPlayerNeeds_Params
{
	struct FString                                     PlayerNeed;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleItemQuantities
struct ABend_SearchHumanBody_Pickup_C_HandleItemQuantities_Params
{
	struct FGameplayTag                                The_Item;                                                 // (Parm)
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
	int                                                Item_Quantity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetRandomArrayElement
struct ABend_SearchHumanBody_Pickup_C_GetRandomArrayElement_Params
{
	TArray<struct FInventoryItemTag>                   Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FInventoryItemTag                           Chosen_Element;                                           // (Parm, OutParm)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropItem
struct ABend_SearchHumanBody_Pickup_C_GetLootDropItem_Params
{
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Player_Need_Override;                                     // (Parm, ZeroConstructor)
	struct FGameplayTag                                Dropped_Item_Tag;                                         // (Parm, OutParm)
	int                                                Item_Quantity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropRarity
struct ABend_SearchHumanBody_Pickup_C_GetLootDropRarity_Params
{
	struct FString                                     Rarity;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleLootDrops
struct ABend_SearchHumanBody_Pickup_C_HandleLootDrops_Params
{
	struct FName                                       Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CaterToPlayerNeeds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItem*                              Dropped_Item;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Count;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.UserConstructionScript
struct ABend_SearchHumanBody_Pickup_C_UserConstructionScript_Params
{
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePickupLogic
struct ABend_SearchHumanBody_Pickup_C_HandlePickupLogic_Params
{
};

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.ExecuteUbergraph_Bend_SearchHumanBody_Pickup
struct ABend_SearchHumanBody_Pickup_C_ExecuteUbergraph_Bend_SearchHumanBody_Pickup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
