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

// BlueprintGeneratedClass Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C
// 0x007C (0x0750 - 0x06D4)
class ABend_SearchHumanBody_Pickup_C : public ABend_SearchBody_Pickup_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Legendary_Probability;                                    // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Epic_Probability;                                         // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rare_Probability;                                         // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Uncommon_Probability;                                     // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FInventoryItemTag>                   Legendary_Items;                                          // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryItemTag>                   Epic_Items;                                               // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryItemTag>                   Rare_Items;                                               // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryItemTag>                   Uncommon_Items;                                           // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryItemTag>                   Common_Items;                                             // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryItemTag>                   HealthItems;                                              // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_SearchHumanBody_Pickup.Bend_SearchHumanBody_Pickup_C");
		return ptr;
	}


	void HandlePlayerNeed(const struct FString& Rarity, const struct FString& TheNeed, struct FInventoryItemTag* ChosenItem);
	void HealthCheck(bool* Player_Health_Need);
	void FindPlayerNeeds(struct FString* PlayerNeed);
	void HandleItemQuantities(const struct FGameplayTag& The_Item, const struct FString& Rarity, int* Item_Quantity);
	void GetRandomArrayElement(TArray<struct FInventoryItemTag>* Array, struct FInventoryItemTag* Chosen_Element);
	void GetLootDropItem(const struct FString& Rarity, const struct FString& Player_Need_Override, struct FGameplayTag* Dropped_Item_Tag, int* Item_Quantity);
	void GetLootDropRarity(struct FString* Rarity);
	void HandleLootDrops(const struct FName& Faction, bool CaterToPlayerNeeds, class UInventoryItem** Dropped_Item, int* Item_Count);
	void UserConstructionScript();
	void HandlePickupLogic();
	void ExecuteUbergraph_Bend_SearchHumanBody_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
