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

// BlueprintGeneratedClass BP_TraversalInteract.BP_TraversalInteract_C
// 0x0050 (0x0760 - 0x0710)
class ABP_TraversalInteract_C : public ABendTraversalInteract
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        POI;                                                      // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Anchor;                                                   // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APOISlot_BuddyPaired_C*                      Buddys_POISlot;                                           // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    BuddyActionComplete_Event;                                // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BuddyActionFail_Event;                                    // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               shouldLowerGun;                                           // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	struct FTimerHandle                                PickupMovingTimer;                                        // 0x075C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TraversalInteract.BP_TraversalInteract_C");
		return ptr;
	}


	void TryFindItemInWorld(bool* Found);
	void UserConstructionScript();
	void CompleteTraversal();
	void FailTraversal(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void OnAutoNavSuccess(class ABendPOISlot* Slot, class AController* User);
	void BuddyDone();
	void BuddyAnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void OnInputSucceeded();
	void InitInteract();
	void MovePickupsFromArea();
	void ExecuteUbergraph_BP_TraversalInteract(int EntryPoint);
	void BuddyActionFail_Event__DelegateSignature(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void BuddyActionComplete_Event__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
