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

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetLockedState
struct UUI_GridItem_WeaponSlot_C_SetLockedState_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetAllStateInvisible
struct UUI_GridItem_WeaponSlot_C_SetAllStateInvisible_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetBlank
struct UUI_GridItem_WeaponSlot_C_SetBlank_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.DisplayNew
struct UUI_GridItem_WeaponSlot_C_DisplayNew_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetColorScheme
struct UUI_GridItem_WeaponSlot_C_SetColorScheme_Params
{
	bool                                               IsMerchant;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetIsWeaponDelapidated
struct UUI_GridItem_WeaponSlot_C_GetIsWeaponDelapidated_Params
{
	bool                                               Delapidated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.GetDurability
struct UUI_GridItem_WeaponSlot_C_GetDurability_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreWeaponData
struct UUI_GridItem_WeaponSlot_C_StoreWeaponData_Params
{
	class ABendWeapon**                                WeaponRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.StoreItemData
struct UUI_GridItem_WeaponSlot_C_StoreItemData_Params
{
	struct FSTRUCT_MenuInventoryData*                  InventoryData;                                            // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOff
struct UUI_GridItem_WeaponSlot_C_HighlightOff_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.HighlightOn
struct UUI_GridItem_WeaponSlot_C_HighlightOn_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.SetSelected
struct UUI_GridItem_WeaponSlot_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.Construct
struct UUI_GridItem_WeaponSlot_C_Construct_Params
{
};

// Function UI_GridItem_WeaponSlot.UI_GridItem_WeaponSlot_C.ExecuteUbergraph_UI_GridItem_WeaponSlot
struct UUI_GridItem_WeaponSlot_C_ExecuteUbergraph_UI_GridItem_WeaponSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
