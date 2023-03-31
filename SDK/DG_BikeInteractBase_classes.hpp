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

// BlueprintGeneratedClass BikeInteractBase.BikeInteractBase_C
// 0x0110 (0x0570 - 0x0460)
class ABikeInteractBase_C : public ABendBikeInteractBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendWidgetComponent*                        AdvertiseBike;                                            // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidgetFuel;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidgetStart;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidgetRepair;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlateInputInteractComponent*                SlateInteract_Start;                                      // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NewRoot;                                                  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlateInputInteractComponent*                SlateInteract_RepairSab;                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractComponentType_C*                    InteractComponentType;                                    // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SabotageOrRepairComplete;                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUI_InputInteract_C*                         InteractRefStart;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_InputInteract_C*                         InteractRefRepair;                                        // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_InputInteract_C*                         InteractRefFuel;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_BikeAdvertise_C*                         BikeAdvertise;                                            // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InSaveLoad;                                               // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDoingHalfNav;                                           // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JustFinishedHalfNav;                                      // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x04DB(0x0005) MISSED OFFSET
	struct FPlayerAINavRequestInfo                     NavSetting;                                               // 0x04E0(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BikeInteractBase.BikeInteractBase_C");
		return ptr;
	}


	bool CanDoSecondaryInteractCode();
	void CheckConditionsForTutorialSave();
	void Tutorial_Save();
	void ValidVaterDepth(bool* Valid);
	void CheckIfSecondaryInteractAnchorIsValid(bool* Valid);
	void CheckBikeAdvertise();
	void ReleaseSecondaryInteract();
	void CalculateEnterVehicleNavPoint(bool* DoNavTo, float* UseDistance, bool* NoNavMove, bool* HalfWayThereNav, bool* CompletelyFailed);
	void GetAmmoWidget(class UBendWidgetComponent** AmmoWidget);
	void ShowRepairProgress(float Progress);
	void GetFuelAndHealth(float* Fuel, float* Health);
	void RefuelingFinished();
	void InBikeInteractRange(bool In);
	void InputStartedPress();
	void CanDoSecondaryInteract(bool* Can);
	void DisplayTheSecondaryInteract();
	void GetCanBeInteracted(bool* Interactable);
	void InputFailed();
	void InputSuccess();
	void UserConstructionScript();
	void InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68(const struct FKey& Key);
	void InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67(const struct FKey& Key);
	void InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66(const struct FKey& Key);
	void UpdateCollision(bool TurnOn);
	void ReceiveBeginPlay();
	void UpdateInteractDetails();
	void InteractOnBegin();
	void InteractOnEnd();
	void InputSlateInteractEnd(class USlateInputInteract* InputInteract);
	void ReceiveTick(float* DeltaSeconds);
	void OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel);
	void OnCinematicEnded_MM_Event_1(const struct FName& CinematicLevel);
	void OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void UnbindMoveComplete();
	void DoAutoNavBike();
	void OnInputEnd_Copy(class USlateInputInteract* InputInteract);
	void StartInteraction(bool PostNav);
	void NeedThisForTimerToActuallyWork();
	void OnDriverEnteredVehiclePawn_Event_1(class AVehiclePawn* VehiclePawn);
	void OnMenuToHideSpecificUIActivated_Event_1(bool Activated);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnPhotoModeStarted();
	void OnPhotoModeEnded();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void UpdateFuelAndHealthStats();
	void SetBikeAdvertiseState(bool* IsAvailable);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void BikeObstructed();
	void Interact2Pressed();
	void Interact2Released();
	void ExecuteUbergraph_BikeInteractBase(int EntryPoint);
	void SabotageOrRepairComplete__DelegateSignature(int ScrapCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
