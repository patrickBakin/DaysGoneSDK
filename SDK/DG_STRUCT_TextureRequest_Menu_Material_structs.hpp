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

// UserDefinedStruct STRUCT_TextureRequest_Menu_Material.STRUCT_TextureRequest_Menu_Material
// 0x0029
struct FSTRUCT_TextureRequest_Menu_Material
{
	TAssetPtr<class UTexture2D>                        TextureAsset_2_88916BD541CEF58453B880885C6099CC;          // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*                    MID_21_BE23389A4E94ED87EBA7CB8B0A3C36AB;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInWhenLoaded_19_A0ACC82E42E3DBAFD49E10B6BA331230;     // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
