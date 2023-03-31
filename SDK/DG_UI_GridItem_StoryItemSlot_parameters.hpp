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

// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.StoreItemData
struct UUI_GridItem_StoryItemSlot_C_StoreItemData_Params
{
	struct FSTRUCT_MenuInventoryData*                  InventoryData;                                            // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.SetSelected
struct UUI_GridItem_StoryItemSlot_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.Construct
struct UUI_GridItem_StoryItemSlot_C_Construct_Params
{
};

// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.ExecuteUbergraph_UI_GridItem_StoryItemSlot
struct UUI_GridItem_StoryItemSlot_C_ExecuteUbergraph_UI_GridItem_StoryItemSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
