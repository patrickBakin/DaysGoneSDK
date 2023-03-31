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

// BlueprintGeneratedClass BP_ControlOutOfBounds.BP_ControlOutOfBounds_C
// 0x0028 (0x0370 - 0x0348)
class ABP_ControlOutOfBounds_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendBoundaryFailureComponent*               BendBoundaryFailure;                                      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATriggerVolume*                              Boundary;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerVolume*                              TriggerToStartChecking;                                   // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControlOutOfBounds.BP_ControlOutOfBounds_C");
		return ptr;
	}


	void AreAllCompleted(TArray<class UBendMissionData*>* Missions, TArray<class UJobClassInfo*>* Jobs, bool* AllCompleted);
	void UserConstructionScript();
	void OnActorBeginOverlap_Event_1(class AActor* OtherActor);
	void OnFadedToBlack_MM_Event_1(const struct FString& Message);
	void ReceiveBeginPlay();
	void BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature();
	void BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature();
	void OnActorBeginOverlap_Event_2(class AActor* OtherActor);
	void OnActorEndOverlap_Event_1(class AActor* OtherActor);
	void ExecuteUbergraph_BP_ControlOutOfBounds(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
