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

// UserDefinedStruct UI_GrappleMeterDetails3.UI_GrappleMeterDetails3
// 0x0021
struct FUI_GrappleMeterDetails3
{
	TEnumAsByte<EUI_GrappleMeterType>                  Type_25_C6F7445D47E07B87E4054885BFB27FC9;                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TotalTime_17_B8BCDB3F4E258705FBD8939B77C03060;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationTIme_2_23E0C65846F57037138F62BA9188B196;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationDelay_5_ECAF916C476209DC2FC25B9B7F6EF648;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickWindowTime_21_DA99AF20418C8CBCE3039EACA38FA238;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillWindowTime_22_4E28F3DC48D4B82FF6D5BD850C45A68F;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SegmentsTotal_29_687BDDD344071C33E6E2F19EB3A19E95;        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SegmentsCurrent_32_6DC28B0B40D2F4BDB2BE4FAE4545E561;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                Button_14_525397524D69D6C5434842BD1869E5B9;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
