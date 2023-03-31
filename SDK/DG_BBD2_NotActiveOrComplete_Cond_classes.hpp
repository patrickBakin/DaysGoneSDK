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

// BlueprintGeneratedClass BBD2_NotActiveOrComplete_Cond.BBD2_NotActiveOrComplete_Cond_C
// 0x0008 (0x0040 - 0x0038)
class UBBD2_NotActiveOrComplete_Cond_C : public UBendUseCondition
{
public:
	class UJobClassInfo*                               BBD2JobClassInfo;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BBD2_NotActiveOrComplete_Cond.BBD2_NotActiveOrComplete_Cond_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
