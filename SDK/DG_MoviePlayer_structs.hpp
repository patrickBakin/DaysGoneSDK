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

// ScriptStruct MoviePlayer.BendMoviePlayerDetails
// 0x0028
struct FBendMoviePlayerDetails
{
	struct FName                                       FontName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       LoadIconTexture;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       StudioTexture;                                            // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct MoviePlayer.BendMoviePlayerTextElement
// 0x0020
struct FBendMoviePlayerTextElement
{
	struct FName                                       ElementName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayText;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                FontSize;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MoviePlayer.BendMoviePlayerImageElement
// 0x00B0
struct FBendMoviePlayerImageElement
{
	struct FName                                       ElementName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DisplayImage;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  TextureAsset;                                             // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0020(0x0090) (Edit)
};

// ScriptStruct MoviePlayer.BendMoviePlayerElementSlot
// 0x0010
struct FBendMoviePlayerElementSlot
{
	struct FName                                       ElementName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct MoviePlayer.BendMoviePlayerPanel
// 0x0018
struct FBendMoviePlayerPanel
{
	struct FName                                       PanelType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBendMoviePlayerElementSlot>         Slots;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct MoviePlayer.BendMoviePlayerScreenDef
// 0x0028
struct FBendMoviePlayerScreenDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  OverlayHAlign;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    OverlayVAlign;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<struct FBendMoviePlayerPanel>               Panels;                                                   // 0x0018(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
