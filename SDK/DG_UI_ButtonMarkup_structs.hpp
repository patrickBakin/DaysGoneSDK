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

// UserDefinedStruct UI_ButtonMarkup.UI_ButtonMarkup
// 0x0020
struct FUI_ButtonMarkup
{
	class UTexture2D*                                  ButtonTexture_8_40EA7D3841D54B5087D763A7E20270DF;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                ButtonEnum_12_7ECF7D7347B6E62DAE5B80AF1390DD25;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     ButtonString_15_7805DE674DA3CB32B1EFFF9029EEBF43;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
