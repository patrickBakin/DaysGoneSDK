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

// UserDefinedEnum SwarmerPawn_States.SwarmerPawn_States
enum class ESwarmerPawn_States : uint8_t
{
	None                           = 0,
	Neutral                        = 1,
	Blinded                        = 2,
	Eating                         = 3,
	Frenzy                         = 4,
	NewEnumerator0                 = 5,
	NewEnumerator1                 = 6,
	NewEnumerator2                 = 7,
	NewEnumerator3                 = 8,
	NewEnumerator4                 = 9,
	NewEnumerator5                 = 10,
	NewEnumerator6                 = 11,
	NewEnumerator7                 = 12,
	SwarmerPawn_MAX                = 13
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
