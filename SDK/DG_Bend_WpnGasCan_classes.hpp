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

// BlueprintGeneratedClass Bend_WpnGasCan.Bend_WpnGasCan_C
// 0x048C (0x2F40 - 0x2AB4)
class ABend_WpnGasCan_C : public ABend_Wpn_CarryThrowBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2AB4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             RefuelingSound;                                           // 0x2AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidget;                                               // 0x2AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractComponentType_C*                    InteractComponentType;                                    // 0x2AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlateInputInteractComponent*                SlateInputInteract;                                       // 0x2AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelTransferRatePerSecondActive;                          // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelTransferRatePerSecondDefault;                         // 0x2AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToFill;                                               // 0x2AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             RefuelSound;                                              // 0x2AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x2AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCur;                                                  // 0x2AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFuelDeficit;                                           // 0x2B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x2B01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x2B02(0x000E) MISSED OFFSET
	struct FTransform                                  AnchorTransform;                                          // 0x2B10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ObjectToFuel;                                             // 0x2B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    RefuelingStarted;                                         // 0x2B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RefuelingFinished;                                        // 0x2B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Interacting;                                              // 0x2B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2B69(0x0007) MISSED OFFSET
	struct FTransform                                  WidgetTransform;                                          // 0x2B70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FBendActionData                             EnterAnim;                                                // 0x2BA0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             LoopAnim;                                                 // 0x2C40(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             ExitAnim;                                                 // 0x2CE0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             DropAnimStanding;                                         // 0x2D80(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InRange;                                                  // 0x2E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InLoop;                                                   // 0x2E21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2E22(0x0002) MISSED OFFSET
	float                                              MinTimeToFuelClamp;                                       // 0x2E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdateWidgetPositionOnTick;                               // 0x2E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ManuallyCancelled;                                        // 0x2E29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x2E2A(0x0006) MISSED OFFSET
	class UUI_InputInteract_C*                         InteractRefFuel;                                          // 0x2E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2E38(0x0008) MISSED OFFSET
	struct FTransform                                  LastUsedAnchor;                                           // 0x2E40(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastUsedAnchorWasDynamic;                                 // 0x2E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SideonWhenStart;                                          // 0x2E71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x2E72(0x0006) MISSED OFFSET
	struct FName                                       TutorialKey;                                              // 0x2E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         TutorialRef;                                              // 0x2E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dropped;                                                  // 0x2E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InEnterAnim;                                              // 0x2E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x2E8A(0x0006) MISSED OFFSET
	struct FBendActionData                             DropAnimCrouched;                                         // 0x2E90(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxAllowedTimeToFill;                                     // 0x2F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2F34(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FuelingSpeedCurve;                                        // 0x2F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnGasCan.Bend_WpnGasCan_C");
		return ptr;
	}


	void I_DisplayFuelInteract(bool DisplayInteract, class AActor* ActorToFuel, const struct FTransform& ObjectAnimAnchorRef, const struct FTransform& WidgetTransform, bool* NeedsRefilling);
	void ShowTutorial();
	void GetAnchorForAnimations(int AnimIndex, struct FTransform* Transform);
	void PlayRunSloshSound();
	void PlayThrowSound();
	void GetFuelStatus();
	void AddFuel();
	void UserConstructionScript();
	void InpActEvt_Interact2_UniqueObjectNameForCooking_502(const struct FKey& Key);
	void InpActEvt_Interact2_UniqueObjectNameForCooking_501(const struct FKey& Key);
	void BeginFillingVO();
	void EndFillingVO();
	void ResetVO();
	void ReceiveTick(float* DeltaSeconds);
	void Failed_LoopRefueling(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void BeginRefueling();
	void OnInputEnd(class USlateInputInteract* InputInteract);
	void OnThrowWeapon();
	void TurnOffInteract();
	void EnterComplete();
	void EnterFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void ExitAnimComplete();
	void ExitAnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void WeaponRelease();
	void ReceiveBeginPlay();
	void InteractOnBegin();
	void InteractOnEnd();
	void DisplaySlateInteract();
	void ReleaseTheInteract();
	void OnDrawFinished();
	void OnHolsterStarted();
	void GasCanCloseTutorial();
	void ReadyToDrop();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Bend_WpnGasCan(int EntryPoint);
	void RefuelingFinished__DelegateSignature();
	void RefuelingStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
