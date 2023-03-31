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

// UserDefinedStruct STRUCT_TextureRequest_Menu_Mesh.STRUCT_TextureRequest_Menu_Mesh
// 0x003E
struct FSTRUCT_TextureRequest_Menu_Mesh
{
	TAssetPtr<class UTexture2D>                        TextureAsset_2_88916BD541CEF58453B880885C6099CC;          // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UPrimitiveComponent*                         Mesh_8_BE23389A4E94ED87EBA7CB8B0A3C36AB;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Opacity_11_4723E490439EC24E9DAE51A6D7B5E081;              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint_14_A6BD2B604816C45EAFE1549AF96B4E5A;                 // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SingleChannel_17_BD7721DB4F37FD70B6EA828DF77DE452;        // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInWhenLoaded_19_A0ACC82E42E3DBAFD49E10B6BA331230;     // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
