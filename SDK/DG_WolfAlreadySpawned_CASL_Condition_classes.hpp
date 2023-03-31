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

// BlueprintGeneratedClass WolfAlreadySpawned_CASL_Condition.WolfAlreadySpawned_CASL_Condition_C
// 0x0000 (0x0038 - 0x0038)
class UWolfAlreadySpawned_CASL_Condition_C : public UBendUseCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WolfAlreadySpawned_CASL_Condition.WolfAlreadySpawned_CASL_Condition_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
