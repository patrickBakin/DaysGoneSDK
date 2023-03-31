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

// UserDefinedEnum AnimNotify_MovementEvent_Enum_BodyPart.AnimNotify_MovementEvent_Enum_BodyPart
enum class EAnimNotify_MovementEvent_Enum_BodyPart : uint8_t
{
	leg                            = 0,
	arm                            = 1,
	back                           = 2,
	hand                           = 3,
	AnimNotify_MovementEvent_Enum_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
