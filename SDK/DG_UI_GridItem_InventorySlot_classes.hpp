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

// WidgetBlueprintGeneratedClass UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C
// 0x000C (0x0480 - 0x0474)
class UUI_GridItem_InventorySlot_C : public UUI_GridItem_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C");
		return ptr;
	}


	void GetItemInfo(int* Count, TAssetPtr<class UTexture2D>* ImageAsset, struct FText* ItenName, struct FText* ItemDesc);
	void Construct();
	void ExecuteUbergraph_UI_GridItem_InventorySlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
