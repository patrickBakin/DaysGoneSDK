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

// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePlayerNeed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Rarity                         (Parm, ZeroConstructor)
// struct FString                 TheNeed                        (Parm, ZeroConstructor)
// struct FInventoryItemTag       ChosenItem                     (Parm, OutParm)

void ABend_SearchHumanBody_Pickup_C::HandlePlayerNeed(const struct FString& Rarity, const struct FString& TheNeed, struct FInventoryItemTag* ChosenItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePlayerNeed");

	ABend_SearchHumanBody_Pickup_C_HandlePlayerNeed_Params params;
	params.Rarity = Rarity;
	params.TheNeed = TheNeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChosenItem != nullptr)
		*ChosenItem = params.ChosenItem;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HealthCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Player_Health_Need             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_SearchHumanBody_Pickup_C::HealthCheck(bool* Player_Health_Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HealthCheck");

	ABend_SearchHumanBody_Pickup_C_HealthCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Health_Need != nullptr)
		*Player_Health_Need = params.Player_Health_Need;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.FindPlayerNeeds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerNeed                     (Parm, OutParm, ZeroConstructor)

void ABend_SearchHumanBody_Pickup_C::FindPlayerNeeds(struct FString* PlayerNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.FindPlayerNeeds");

	ABend_SearchHumanBody_Pickup_C_FindPlayerNeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerNeed != nullptr)
		*PlayerNeed = params.PlayerNeed;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleItemQuantities
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            The_Item                       (Parm)
// struct FString                 Rarity                         (Parm, ZeroConstructor)
// int                            Item_Quantity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_SearchHumanBody_Pickup_C::HandleItemQuantities(const struct FGameplayTag& The_Item, const struct FString& Rarity, int* Item_Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleItemQuantities");

	ABend_SearchHumanBody_Pickup_C_HandleItemQuantities_Params params;
	params.The_Item = The_Item;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Quantity != nullptr)
		*Item_Quantity = params.Item_Quantity;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetRandomArrayElement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemTag> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FInventoryItemTag       Chosen_Element                 (Parm, OutParm)

void ABend_SearchHumanBody_Pickup_C::GetRandomArrayElement(TArray<struct FInventoryItemTag>* Array, struct FInventoryItemTag* Chosen_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetRandomArrayElement");

	ABend_SearchHumanBody_Pickup_C_GetRandomArrayElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Chosen_Element != nullptr)
		*Chosen_Element = params.Chosen_Element;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Rarity                         (Parm, ZeroConstructor)
// struct FString                 Player_Need_Override           (Parm, ZeroConstructor)
// struct FGameplayTag            Dropped_Item_Tag               (Parm, OutParm)
// int                            Item_Quantity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_SearchHumanBody_Pickup_C::GetLootDropItem(const struct FString& Rarity, const struct FString& Player_Need_Override, struct FGameplayTag* Dropped_Item_Tag, int* Item_Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropItem");

	ABend_SearchHumanBody_Pickup_C_GetLootDropItem_Params params;
	params.Rarity = Rarity;
	params.Player_Need_Override = Player_Need_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dropped_Item_Tag != nullptr)
		*Dropped_Item_Tag = params.Dropped_Item_Tag;
	if (Item_Quantity != nullptr)
		*Item_Quantity = params.Item_Quantity;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Rarity                         (Parm, OutParm, ZeroConstructor)

void ABend_SearchHumanBody_Pickup_C::GetLootDropRarity(struct FString* Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.GetLootDropRarity");

	ABend_SearchHumanBody_Pickup_C_GetLootDropRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rarity != nullptr)
		*Rarity = params.Rarity;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleLootDrops
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CaterToPlayerNeeds             (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItem*          Dropped_Item                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Item_Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_SearchHumanBody_Pickup_C::HandleLootDrops(const struct FName& Faction, bool CaterToPlayerNeeds, class UInventoryItem** Dropped_Item, int* Item_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandleLootDrops");

	ABend_SearchHumanBody_Pickup_C_HandleLootDrops_Params params;
	params.Faction = Faction;
	params.CaterToPlayerNeeds = CaterToPlayerNeeds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dropped_Item != nullptr)
		*Dropped_Item = params.Dropped_Item;
	if (Item_Count != nullptr)
		*Item_Count = params.Item_Count;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_SearchHumanBody_Pickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.UserConstructionScript");

	ABend_SearchHumanBody_Pickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePickupLogic
// (BlueprintCallable, BlueprintEvent)

void ABend_SearchHumanBody_Pickup_C::HandlePickupLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.HandlePickupLogic");

	ABend_SearchHumanBody_Pickup_C_HandlePickupLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.ExecuteUbergraph_Bend_SearchHumanBody_Pickup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_SearchHumanBody_Pickup_C::ExecuteUbergraph_Bend_SearchHumanBody_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C.ExecuteUbergraph_Bend_SearchHumanBody_Pickup");

	ABend_SearchHumanBody_Pickup_C_ExecuteUbergraph_Bend_SearchHumanBody_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
