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

// BlueprintGeneratedClass Cond_NERO_Belknap_SouthBorder_Locked.Cond_NERO_Belknap_SouthBorder_Locked_C
// 0x0008 (0x0040 - 0x0038)
class UCond_NERO_Belknap_SouthBorder_Locked_C : public UBendUseCondition
{
public:
	class UBendNeroCheckpointData*                     NeroCheckpointData;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cond_NERO_Belknap_SouthBorder_Locked.Cond_NERO_Belknap_SouthBorder_Locked_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
