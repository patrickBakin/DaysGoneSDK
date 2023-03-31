#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimState_PlayerMeleeAttack.AnimState_PlayerMeleeAttack_C
// 0x0000 (0x0230 - 0x0230)
class UAnimState_PlayerMeleeAttack_C : public UBendAnimState_MeleeAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimState_PlayerMeleeAttack.AnimState_PlayerMeleeAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
