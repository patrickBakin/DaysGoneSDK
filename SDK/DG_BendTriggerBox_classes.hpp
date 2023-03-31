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

// BlueprintGeneratedClass BendTriggerBox.BendTriggerBox_C
// 0x0010 (0x0378 - 0x0368)
class ABendTriggerBox_C : public ABendTriggerBox
{
public:
	struct FScriptMulticastDelegate                    OnOverlapWithReturnSelf;                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendTriggerBox.BendTriggerBox_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnOverlapWithReturnSelf__DelegateSignature(class AActor* Actor, class AActor* TriggerBox);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
