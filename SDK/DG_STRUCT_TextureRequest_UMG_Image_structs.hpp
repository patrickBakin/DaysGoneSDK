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

// UserDefinedStruct STRUCT_TextureRequest_UMG_Image.STRUCT_TextureRequest_UMG_Image
// 0x0029
struct FSTRUCT_TextureRequest_UMG_Image
{
	TAssetPtr<class UObject>                           TextureAsset_9_88916BD541CEF58453B880885C6099CC;          // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UImage*                                      Image_5_BE23389A4E94ED87EBA7CB8B0A3C36AB;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize_8_892311FA4B27C5C7A27CEE879ABA74CF;             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
