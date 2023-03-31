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

// BlueprintGeneratedClass BTDec_NewtCanPerformAntic.BTDec_NewtCanPerformAntic_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTDec_NewtCanPerformAntic_C : public UBTDecorator_BlueprintBase
{
public:
	class ABendNewtController*                         Controller;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDec_NewtCanPerformAntic.BTDec_NewtCanPerformAntic_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
