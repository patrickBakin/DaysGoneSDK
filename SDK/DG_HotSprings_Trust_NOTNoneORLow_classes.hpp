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

// BlueprintGeneratedClass HotSprings_Trust_NOTNoneORLow.HotSprings_Trust_NOTNoneORLow_C
// 0x0000 (0x0038 - 0x0038)
class UHotSprings_Trust_NOTNoneORLow_C : public UBendUseCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HotSprings_Trust_NOTNoneORLow.HotSprings_Trust_NOTNoneORLow_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
