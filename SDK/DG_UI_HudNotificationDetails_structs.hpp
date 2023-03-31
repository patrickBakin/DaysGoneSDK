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

// UserDefinedStruct UI_HudNotificationDetails.UI_HudNotificationDetails
// 0x01B0
struct FUI_HudNotificationDetails
{
	TEnumAsByte<EUI_HudNotificationType>               Type_2_7DE2B2A74F7056FC948EE9B3B1878391;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Title_5_7C367298434285774782F1AEACDF419B;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       TitleText_48_4468CA344CD39E0DB77B0CA607E7122B;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Subtitle_10_9B72E47441F1AD58D0E265AA2F5C6D74;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       SubtitleText_49_3BE9166A474A7C862138B394E0D4A53E;         // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Progress_24_4464D02F4E77C87CC66AF3BBD66F70A3;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       ProgressText_50_E6B8049C4B5E29DD11CFB5A4C8CA2590;         // 0x0068(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Enum_NotifyProgressType>               ProgressType_53_CB7D7A5848BD885FC0707181C43EBD75;         // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon_11_56A2E9324640FDAF1CBC0CAA4A598E50;                 // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PlaySound_27_86D1CCCF4BA965D1347118B214AFF176;            // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value_41_4ABF4C534DC1CED9BE99219D9440592B;                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime_17_176274F4495ABA2CCF5D9F977598FB94;          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Pause_19_B0D6E90A4CD4D2BD72D4D2B6FD89368D;                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MarkComplete_21_FB92BBDE4EEF66024B75FFA351CD5A61;         // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjectiveCategory_31_7AB067604C9E835D12CDF79A6C595D02;    // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BannerType>                       BannerType_38_D4517CBA402622C57ECCDBAD1D83E161;           // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon_55_02057BD6478361553E3DA6AEE2AFE162;             // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FBendStoryLinesBasicDataForUI               StoryLine_61_D321C688441D33B9A3720F9898051CC2;            // 0x00A8(0x0108) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
