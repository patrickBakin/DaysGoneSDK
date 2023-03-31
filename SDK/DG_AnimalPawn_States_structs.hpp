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

// UserDefinedEnum AnimalPawn_States.AnimalPawn_States
enum class EAnimalPawn_States : uint8_t
{
	None                           = 0,
	Neutral                        = 1,
	Blinded                        = 2,
	Eating                         = 3,
	Frenzy                         = 4,
	NewEnumerator0                 = 5,
	NewEnumerator1                 = 6,
	NewEnumerator2                 = 7,
	NewEnumerator8                 = 8,
	AnimalPawn_MAX                 = 9
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
