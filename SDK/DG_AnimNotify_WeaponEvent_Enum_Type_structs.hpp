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

// UserDefinedEnum AnimNotify_WeaponEvent_Enum_Type.AnimNotify_WeaponEvent_Enum_Type
enum class EAnimNotify_WeaponEvent_Enum_Type : uint8_t
{
	Shell_Loaded                   = 0,
	Clip_Loaded                    = 1,
	Reload_Complete                = 2,
	Holster_Complete               = 3,
	Draw_Complete                  = 4,
	Throw_Weapon                   = 5,
	NewEnumerator0                 = 6,
	NewEnumerator1                 = 7,
	NewEnumerator2                 = 8,
	NewEnumerator3                 = 9,
	NewEnumerator4                 = 10,
	NewEnumerator5                 = 11,
	NewEnumerator6                 = 12,
	NewEnumerator7                 = 13,
	NewEnumerator8                 = 14,
	AnimNotify_WeaponEvent_Enum_MAX = 15
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
