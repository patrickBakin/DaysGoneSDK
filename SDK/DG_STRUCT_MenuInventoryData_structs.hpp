#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRUCT_MenuInventoryData.STRUCT_MenuInventoryData
// 0x01BA
struct FSTRUCT_MenuInventoryData
{
	class UInventoryItem*                              InventoryItem_2_351E0C74423B22D72C456798F3B0E8D0;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count_5_A1B358BA4DF66A54CABAF7B884898CB6;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered_7_1BF0559F462506D5DB7220B1FED30952;            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplayCount_9_76C1FF264FE16B2D7F9D32AC6EA1B3EA;    // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMerchantMenuOption_16_FA07F011408D9121C908EEA7D4D63089; // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnlocked_18_0F27BB2440015D769ADB2FAB6CFAFFC8;           // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMerchantItem_35_8E91D4F7413BA3BD62874A95C70750B1;       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMerchantBikePart_38_539BB424487B306C95E525ACA9B32F00;   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FMerchantStockItem                          MerchantItem_21_68DAFADF46A58BCD6989D2B917571F11;         // 0x0018(0x0050) (Edit, BlueprintVisible)
	bool                                               IsMerchantWeapon_36_D690DAF742DA2D2053FBCD81EFD6E9DF;     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FMerchantStockWeapon                        MerchantWeapon_26_1BC720EC41B2486313A6E8A8F313BA92;       // 0x0070(0x0060) (Edit, BlueprintVisible)
	int                                                SpecialAmmoInventoryIndex_43_11AD4970483C007A7253A9A883DCD798;// 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Locker_AlreadyOwnedWeapon_45_BED46FDD470D3ECE09B2F2863EFCFF20;// 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	int                                                MerchantDataIndex_48_7F540FC040B6C7945AF052BB61A97D06;    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBikePartCategory_55_9D47618E40C56FA86790B784A4664C1C;   // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FBendBikePartCategoryData                   BikePartCategories_53_6022E16743E89C2761F8BFB9C80AECEC;   // 0x00E0(0x0058) (Edit, BlueprintVisible)
	struct FMerchantPart                               BikePartMerchantData_61_B1DDCE0E4423D76E1B184CAD7CFAC872; // 0x0138(0x0080) (Edit, BlueprintVisible)
	bool                                               BikePartIsCurrentlyEquipped_57_9389732D46F0CFDBEA3445B0187F6ABF;// 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewItem_63_58A502484020E8FA953D3E92E2BE29A8;            // 0x01B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
