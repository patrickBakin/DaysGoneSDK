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

// UserDefinedStruct Struct_ConversationLineDetails.Struct_ConversationLineDetails
// 0x0012
struct FStruct_ConversationLineDetails
{
	struct FName                                       VOLineString_50_F832C1A643A20313E3718D9BE0EBF260;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManuallySpecifySpeakingPosition_57_11F1A1184158EE2E632AD79717DEB9C2;// 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SpeakingPosition_53_2F9C3C11489035793813159EE03D8B0F;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRadioFutz_47_10C10E12429DDBABE12DAD9860ABF3C6;         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadioType>                            RadioType_49_009D990D4079748231D43588FFA897A9;            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
