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

// BlueprintGeneratedClass BP_bike04Drifter.BP_bike04Drifter_C
// 0x00F0 (0x0D08 - 0x0C18)
class ABP_bike04Drifter_C : public ABP_BikeBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            BackInteractDetector;                                     // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             RefuelAnchor_LeftSide;                                    // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             RefuelAnchor_RightSide;                                   // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PlayerRefuel_RightSide;                                   // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PlayerRefuel_LeftSide;                                    // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      DrifterBike_Forks_CBRadio_ub;                             // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation1;                                         // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DSTankLight_SecondaryTrack_DEAACE1B4F5DF96709FCEFB7F38A5835;// 0x0C58(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DSTankLight_PrimaryTrack_DEAACE1B4F5DF96709FCEFB7F38A5835;// 0x0C5C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DSTankLight__Direction_DEAACE1B4F5DF96709FCEFB7F38A5835;  // 0x0C60(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DSTankLight;                                              // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAB_bike_size>                         BikeSize;                                                 // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C71(0x0007) MISSED OFFSET
	struct FName                                       Emissive_Scale__Headlight_;                               // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightness;                                      // 0x0C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0C81(0x0007) MISSED OFFSET
	struct FName                                       Emissive_Scale__Brakelight_;                              // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BrakelightMaterial_1;                                     // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadlightMainMaterial;                                    // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadlightSideMaterial;                                    // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TelemetryEvent_BS_Refueled;                               // 0x0CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_BS_Damaged;                                // 0x0CB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FirstTimeReaching50PercentHealth;                         // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               FirstTimeReaching0PercentHealth;                          // 0x0CC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0CCA(0x0002) MISSED OFFSET
	float                                              TutorialCloseTime;                                        // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstTimeReaching50PercentFuel;                           // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               FirstTimeReaching0PercentFuel;                            // 0x0CD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0CD2(0x0006) MISSED OFFSET
	class UUI_TutorialPanel_C*                         Tutorial;                                                 // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TutTimer;                                                 // 0x0CE0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FirstTimeLandingDamage;                                   // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DSBabyTank;                                               // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DSTank;                                                   // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           DSBabyTankMaterialRef;                                    // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           DSTankMaterialRef;                                        // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_bike04Drifter.BP_bike04Drifter_C");
		return ptr;
	}


	void WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType);
	void I_GetGasInfo();
	void UserConstructionScript();
	void DSTankLight__FinishedFunc();
	void DSTankLight__UpdateFunc();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void I_RefuelingFinished();
	void OnReceivedDamage(TEnumAsByte<EBendVehicleDamageType>* DamageType, float* damageTaken);
	void OnDriverFinishedEnteringVehicle();
	void OnDriverFinishedExitingVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason);
	void ReceiveBeginPlay();
	void OnFuelReached0Percent();
	void CheckIfAtZeroHealth();
	void OnFuelReached50Percent_Event_1();
	void BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void I_InteractRangeUpdate(bool InRange);
	void LeftEnc(class UBendEncampmentData* Encampment);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void EnableBikeDetection();
	void DisableBikeDetection();
	void I_SetGasCanHasControl(bool* HasControl);
	void OnTutorialClosed_2();
	void OnTutorialClosed_4();
	void OnTutorialClosed_5();
	void OnTutorialClosed_6();
	void DistanceTutorial();
	void DSTankOn();
	void DSTankOff();
	void OnStartEngine();
	void OnStopEngine();
	void DSTankSetState(bool StateOn, class UMaterialInstanceDynamic* Material1, class UMaterialInstanceDynamic* Material2, const struct FName& ParameterName1, const struct FName& ParameterName2);
	void BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void I_DeathStrandingForceUpdate(bool forcereset);
	void BabyTankOn();
	void BabyTankOff();
	void ExecuteUbergraph_BP_bike04Drifter(int EntryPoint);
	void TelemetryEvent_BS_Damaged__DelegateSignature(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken);
	void TelemetryEvent_BS_Refueled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
