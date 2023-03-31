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

// BlueprintGeneratedClass AE_HordeJobComplete_Condition_Base.AE_HordeJobComplete_Condition_Base_C
// 0x0008 (0x0040 - 0x0038)
class UAE_HordeJobComplete_Condition_Base_C : public UBendUseCondition
{
public:
	struct FName                                       HordeName_Complete;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AE_HordeJobComplete_Condition_Base.AE_HordeJobComplete_Condition_Base_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
