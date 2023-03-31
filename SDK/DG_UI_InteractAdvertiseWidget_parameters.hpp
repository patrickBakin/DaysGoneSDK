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

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayMaxCapacity
struct UUI_InteractAdvertiseWidget_C_DisplayMaxCapacity_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayWeaponBackground
struct UUI_InteractAdvertiseWidget_C_DisplayWeaponBackground_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseHidden
struct UUI_InteractAdvertiseWidget_C_SetTheAdvertiseHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseVisible
struct UUI_InteractAdvertiseWidget_C_SetTheAdvertiseVisible_Params
{
	bool*                                              UseWideLayout;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItem**                             InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAmmoPickup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIconTypes>*                           IconType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.IsPlayerFullOnAmmo
struct UUI_InteractAdvertiseWidget_C_IsPlayerFullOnAmmo_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoIsFull;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetDisabled
struct UUI_InteractAdvertiseWidget_C_SetDisabled_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Friendly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayMaxCapacityIfDiabled;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetIconType
struct UUI_InteractAdvertiseWidget_C_SetIconType_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	float                                              WeaponDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.Construct
struct UUI_InteractAdvertiseWidget_C_Construct_Params
{
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ResetAdvertiseForPool
struct UUI_InteractAdvertiseWidget_C_ResetAdvertiseForPool_Params
{
};

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ExecuteUbergraph_UI_InteractAdvertiseWidget
struct UUI_InteractAdvertiseWidget_C_ExecuteUbergraph_UI_InteractAdvertiseWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
