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

// BlueprintGeneratedClass TLL_Not_Complete_OR_COB1_Complete.TLL_Not_Complete_OR_COB1_Complete_C
// 0x0000 (0x0038 - 0x0038)
class UTLL_Not_Complete_OR_COB1_Complete_C : public UBendUseCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TLL_Not_Complete_OR_COB1_Complete.TLL_Not_Complete_OR_COB1_Complete_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
