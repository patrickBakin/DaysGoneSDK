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

// UserDefinedStruct STRUCT_MenuInventoryContainer.STRUCT_MenuInventoryContainer
// 0x0014
struct FSTRUCT_MenuInventoryContainer
{
	TArray<struct FSTRUCT_MenuInventoryData>           InventoryDataArray_10_351E0C74423B22D72C456798F3B0E8D0;   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DiscoveredCount_13_FE85641643D624859FF575839D393ECC;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
