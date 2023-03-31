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

// UserDefinedStruct STRUC_BikeSettings.STRUC_BikeSettings
// 0x0019
struct FSTRUC_BikeSettings
{
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightness_5_8A7AEF5341688001A88D2492B652F7A0;   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AVehicleWaypoint_C*                          VehicleStartWaypoint_11_8773710D47A382CE5690348D518A944D; // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AVehicleWaypoint_C*                          VehicleEndWaypoint_14_7F9E473848025C80A3316ABBD7C80655;   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRideAssist_16_A1D1FE684E8C4D194EB566B5D6195623;     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
