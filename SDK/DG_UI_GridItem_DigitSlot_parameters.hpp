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

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.GetItemData
struct UUI_GridItem_DigitSlot_C_GetItemData_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetLockedState
struct UUI_GridItem_DigitSlot_C_SetLockedState_Params
{
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayEquipped
struct UUI_GridItem_DigitSlot_C_DisplayEquipped_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetAllStateInvisible
struct UUI_GridItem_DigitSlot_C_SetAllStateInvisible_Params
{
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetBlank
struct UUI_GridItem_DigitSlot_C_SetBlank_Params
{
	bool                                               IsMerchant;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayNew
struct UUI_GridItem_DigitSlot_C_DisplayNew_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.DisplayCount
struct UUI_GridItem_DigitSlot_C_DisplayCount_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.StoreItemData
struct UUI_GridItem_DigitSlot_C_StoreItemData_Params
{
	struct FSTRUCT_MenuInventoryData*                  InventoryData;                                            // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOff
struct UUI_GridItem_DigitSlot_C_HighlightOff_Params
{
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.HighlightOn
struct UUI_GridItem_DigitSlot_C_HighlightOn_Params
{
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.SetSelected
struct UUI_GridItem_DigitSlot_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.Construct
struct UUI_GridItem_DigitSlot_C_Construct_Params
{
};

// Function UI_GridItem_DigitSlot.UI_GridItem_DigitSlot_C.ExecuteUbergraph_UI_GridItem_DigitSlot
struct UUI_GridItem_DigitSlot_C_ExecuteUbergraph_UI_GridItem_DigitSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
