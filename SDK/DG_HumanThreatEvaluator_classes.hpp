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

// BlueprintGeneratedClass HumanThreatEvaluator.HumanThreatEvaluator_C
// 0x0000 (0x0048 - 0x0048)
class UHumanThreatEvaluator_C : public UBendAIThreatEvaluatorDefault
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HumanThreatEvaluator.HumanThreatEvaluator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
