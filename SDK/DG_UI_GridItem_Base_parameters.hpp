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

// Function UI_GridItem_Base.UI_GridItem_Base_C.GetMerchantItemLevelRequired
struct UUI_GridItem_Base_C_GetMerchantItemLevelRequired_Params
{
	int                                                Required;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreMissionJobZoneData
struct UUI_GridItem_Base_C_StoreMissionJobZoneData_Params
{
	class UBendMissionData*                            MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActiveObjectiveMenu;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemColumn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_MenuPage_Base_C*                         MenuRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.SetRememberedHighlight
struct UUI_GridItem_Base_C_SetRememberedHighlight_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreWeaponData
struct UUI_GridItem_Base_C_StoreWeaponData_Params
{
	class ABendWeapon*                                 WeaponRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreItemData
struct UUI_GridItem_Base_C_StoreItemData_Params
{
	struct FSTRUCT_MenuInventoryData                   InventoryData;                                            // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.IsBlankButton
struct UUI_GridItem_Base_C_IsBlankButton_Params
{
	bool                                               BlankButton;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.SetSelected
struct UUI_GridItem_Base_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.SetTexture
struct UUI_GridItem_Base_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.Construct
struct UUI_GridItem_Base_C_Construct_Params
{
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.AsyncLoadTextureAsset
struct UUI_GridItem_Base_C_AsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.CustomEvent_1
struct UUI_GridItem_Base_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_GridItem_Base.UI_GridItem_Base_C.ExecuteUbergraph_UI_GridItem_Base
struct UUI_GridItem_Base_C_ExecuteUbergraph_UI_GridItem_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
