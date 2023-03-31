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

// BlueprintGeneratedClass MJ2_NotActiveOrMapStillLoaded_Condition.MJ2_NotActiveOrMapStillLoaded_Condition_C
// 0x0008 (0x0040 - 0x0038)
class UMJ2_NotActiveOrMapStillLoaded_Condition_C : public UBendUseCondition
{
public:
	class UJobClassInfo*                               MJ1_JobData;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MJ2_NotActiveOrMapStillLoaded_Condition.MJ2_NotActiveOrMapStillLoaded_Condition_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
