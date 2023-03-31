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

// BlueprintGeneratedClass GenericPOISlot.GenericPOISlot_C
// 0x0060 (0x0960 - 0x0900)
class AGenericPOISlot_C : public ABendPOIAnimSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               LeaveWhenAware;                                           // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABendAIController*                           CurrentSlotUser;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    AnimationFailed;                                          // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AtLocation;                                               // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LeaveWhenSemiAware;                                       // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Leave_POISlot;                                         // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericPOISlot.GenericPOISlot_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result);
	void OnBecomeAware(TEnumAsByte<EAIAwareState>* prevAwareness);
	void OnBecomeSemiAware(TEnumAsByte<EAIAwareState>* prevAwareness);
	void OnUserLeavesSlot();
	void OnUserTakesSlot();
	void OnEnterComplete();
	void OnEnterFail(TEnumAsByte<EPeformActionFailedReason>* eReason);
	void OnLoopFail(TEnumAsByte<EPeformActionFailedReason>* eReason);
	void ExecuteUbergraph_GenericPOISlot(int EntryPoint);
	void On_Leave_POISlot__DelegateSignature(class ABendAIController* AI_Controller);
	void AtLocation__DelegateSignature(class ABendAIController* Controller);
	void AnimationFailed__DelegateSignature(class AGenericPOISlot_C* FromSlot, const struct FBendActionData& ActionData, class ABendAIController* SlotUser);
	void AnimationComplete__DelegateSignature(class AGenericPOISlot_C* FromSlot, const struct FBendActionData& ActionData, class ABendAIController* SlotUser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
