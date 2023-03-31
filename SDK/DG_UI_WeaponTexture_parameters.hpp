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

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetOpacity
struct UUI_WeaponTexture_C_SetOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetColor
struct UUI_WeaponTexture_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetDamage
struct UUI_WeaponTexture_C_SetDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetTexture
struct UUI_WeaponTexture_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.Construct
struct UUI_WeaponTexture_C_Construct_Params
{
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetTextureAsset
struct UUI_WeaponTexture_C_SetTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.CustomEvent_1
struct UUI_WeaponTexture_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_WeaponTexture.UI_WeaponTexture_C.ExecuteUbergraph_UI_WeaponTexture
struct UUI_WeaponTexture_C_ExecuteUbergraph_UI_WeaponTexture_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
