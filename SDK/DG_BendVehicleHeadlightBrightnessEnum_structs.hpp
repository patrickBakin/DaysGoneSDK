#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum BendVehicleHeadlightBrightnessEnum.BendVehicleHeadlightBrightnessEnum
enum class EBendVehicleHeadlightBrightnessEnum : uint8_t
{
	BendVehicleHeadlightBrightnessEnum_Off = 0,
	BendVehicleHeadlightBrightnessEnum_Medium = 1,
	BendVehicleHeadlightBrightnessEnum_Full = 2,
	BendVehicleHeadlightBrightnessEnum_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
