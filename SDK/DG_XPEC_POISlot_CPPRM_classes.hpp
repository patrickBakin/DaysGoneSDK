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

// BlueprintGeneratedClass XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C
// 0x001C (0x099C - 0x0980)
class AXPEC_POISlot_CPPRM_C : public AXpecPOISlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                m_LookAtTimer;                                            // 0x0988(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                m_TurnInPlaceTimer;                                       // 0x098C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TurnHeadMaxYaw;                                           // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnHeadMaxPitch;                                         // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBendCharacterLookRequestId                 m_LookRequest;                                            // 0x0998(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C");
		return ptr;
	}


	bool IOnPostEditChangeProperty();
	bool ILookAt(struct FXpecLookAtData* Data);
	bool IEnableMoveToIdle(bool* bEnable);
	bool IEnableFootLocking(bool* bEnable);
	bool IEnableMoveToIdleAnchor(bool* bEnable);
	bool IEnableTurnToIdleInMovement(bool* bEnable);
	bool ITurnInPlaceByAngle(float* fAngle);
	void UserConstructionScript();
	void OnUserTakesSlot();
	void OnUserLeavesSlot();
	void OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result);
	void OnBecomeSemiAware(TEnumAsByte<EAIAwareState>* prevAwareness);
	void OnBecomeAware(TEnumAsByte<EAIAwareState>* prevAwareness);
	void OnRequestLeaveSlot();
	void CE_TickTurnInPlace();
	void ExecuteUbergraph_XPEC_POISlot_CPPRM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
