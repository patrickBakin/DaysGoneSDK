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

// BlueprintGeneratedClass MeleeDurabilityHigh_Condition.MeleeDurabilityHigh_Condition_C
// 0x0004 (0x003C - 0x0038)
class UMeleeDurabilityHigh_Condition_C : public UBendUseCondition
{
public:
	int                                                melee_weapon_max_health;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeDurabilityHigh_Condition.MeleeDurabilityHigh_Condition_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
