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

// BlueprintGeneratedClass Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C
// 0x004F (0x08D0 - 0x0881)
class ABend_InventoryPickup_UniversalAmmo_C : public ABP_BendInventoryPickup_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              AmmoPercentageToGive_Min;                                 // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmmoPercentageToGive_Max;                                 // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 NewVar_0_1;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoToGive;                                               // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameDifficultyAmmoMultipler;                              // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      DesiredAmmoID;                                            // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EInventoryAmmoID>>              IgnoredAmmoIDs;                                           // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              MB150AmmoIDs;                                             // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C");
		return ptr;
	}


	void IsAllowedAmmo(TEnumAsByte<EInventoryWeaponID> WeaponID, bool* AmmoAllowed);
	void PlayPickupAmmoSound();
	bool IsInventoryFull();
	void UserConstructionScript();
	void OnPerformActionMid(bool* FromAnim, bool* AlreadyDidPickup);
	void DisplayHudNotificationInternal(class UTexture2D** NotifyTexture);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
