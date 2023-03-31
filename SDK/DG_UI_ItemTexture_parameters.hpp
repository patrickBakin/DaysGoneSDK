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

// Function UI_ItemTexture.UI_ItemTexture_C.SetColor
struct UUI_ItemTexture_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemTexture.UI_ItemTexture_C.SetDamage
struct UUI_ItemTexture_C_SetDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemTexture.UI_ItemTexture_C.SetTexture
struct UUI_ItemTexture_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemTexture.UI_ItemTexture_C.Construct
struct UUI_ItemTexture_C_Construct_Params
{
};

// Function UI_ItemTexture.UI_ItemTexture_C.SetTextureAsset
struct UUI_ItemTexture_C_SetTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemTexture.UI_ItemTexture_C.CustomEvent_1
struct UUI_ItemTexture_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_ItemTexture.UI_ItemTexture_C.ExecuteUbergraph_UI_ItemTexture
struct UUI_ItemTexture_C_ExecuteUbergraph_UI_ItemTexture_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
