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

// WidgetBlueprintGeneratedClass UI_GridItem_Base.UI_GridItem_Base_C
// 0x01D4 (0x0474 - 0x02A0)
class UUI_GridItem_Base_C : public UGridMenuItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSTRUCT_MenuInventoryData                   Stored_ItemData;                                          // 0x02A8(0x01C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NewTrustLevel;                                            // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	int                                                CurrentTrustLevel;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GridSlotID;                                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GridItem_Base.UI_GridItem_Base_C");
		return ptr;
	}


	void GetMerchantItemLevelRequired(int* Required);
	void StoreMissionJobZoneData(class UBendMissionData* MissionData, class UJobClassInfo* JobData, bool IsActiveObjectiveMenu, int ItemColumn, class UUI_MenuPage_Base_C* MenuRef, bool* Success);
	void SetRememberedHighlight(bool On);
	void StoreWeaponData(class ABendWeapon* WeaponRef, bool* Success);
	void StoreItemData(const struct FSTRUCT_MenuInventoryData& InventoryData, bool* Success);
	void IsBlankButton(bool* BlankButton);
	void SetSelected(bool Selected);
	void SetTexture(class UTexture2D* Texture);
	void Construct();
	void AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize);
	void CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr);
	void ExecuteUbergraph_UI_GridItem_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
