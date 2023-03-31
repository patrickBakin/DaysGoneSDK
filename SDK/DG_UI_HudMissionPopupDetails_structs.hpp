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

// UserDefinedStruct UI_HudMissionPopupDetails.UI_HudMissionPopupDetails
// 0x00B8
struct FUI_HudMissionPopupDetails
{
	TEnumAsByte<EUI_HudPopupType>                      Type_2_BDD19BB8453ACD13EE0222A9F85FFF23;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Title_5_A63DA2BD423A18DF31E0709873A34380;                 // 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EUI_RewardType>                        RewardType_8_93428DD54D8CED353A255E8B54B59307;            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                RewardValue_11_32FAE68249DECCD0BD5E9BB7A9D4ED44;          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Subtitle_14_E6EE23FC4F6C4D3FED1B3FB90D1F3633;             // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FActorInteractDetails                       InteractDetails_17_879D2BCB49FA0679B4AC4EB7217C0B6C;      // 0x0040(0x0070) (Edit, BlueprintVisible)
	class UObject*                                     UtilityObjectRef_22_C2BF6CF242EF9D945AF680867E0EA95B;     // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
