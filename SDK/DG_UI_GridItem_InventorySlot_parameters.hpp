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

// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.GetItemInfo
struct UUI_GridItem_InventorySlot_C_GetItemInfo_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        ImageAsset;                                               // (Parm, OutParm)
	struct FText                                       ItenName;                                                 // (Parm, OutParm)
	struct FText                                       ItemDesc;                                                 // (Parm, OutParm)
};

// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.Construct
struct UUI_GridItem_InventorySlot_C_Construct_Params
{
};

// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.ExecuteUbergraph_UI_GridItem_InventorySlot
struct UUI_GridItem_InventorySlot_C_ExecuteUbergraph_UI_GridItem_InventorySlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
