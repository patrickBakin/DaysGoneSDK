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

// BlueprintGeneratedClass PlayerLevelAtleast10_Condition.PlayerLevelAtleast10_Condition_C
// 0x0000 (0x0038 - 0x0038)
class UPlayerLevelAtleast10_Condition_C : public UBendUseCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerLevelAtleast10_Condition.PlayerLevelAtleast10_Condition_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
