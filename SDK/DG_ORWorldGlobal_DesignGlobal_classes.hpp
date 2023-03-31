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

// BlueprintGeneratedClass ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C
// 0x00F0 (0x0448 - 0x0358)
class AORWorldGlobal_DesignGlobal_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UBendBunkerData*>                     AmbushCamps;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BunkerCount;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmbushCount;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             CopelandCommands;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJobClassInfo*                               IMG_JobClassInfo;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendEncampmentActor*>                NorthernEncampments;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*> NorthernAmbushCamps;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*> NorthernNEROCheckpoints;                                  // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABendEncampmentActor*>                SouthernEncampments;                                      // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*> SouthernAmbushCamps;                                      // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*> SouthernNEROCheckpoints;                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               BikeChasePlayFailureTutorial;                             // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                IronMikeOverlapCount;                                     // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InIronMikes;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_CL_AZ_01;                                        // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_CL_AZ_02;                                        // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_HW_AZ_01;                                        // 0x03FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_HW_AZ_02;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class ABendTriggerVolume*                          WI_streaming_volume_large_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABendTriggerVolume*                          WI_streaming_volume_small_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_StreamingOverride_C*                     BP_WI_StreamingOverride_Large_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_StreamingOverride_C*                     BP_WI_StreamingOverride_Small_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_StreamingOverride_C*                     BP_StreamingOverride_Copelands_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABendSpherePlayerDetector_C*                 SouthernRegionSpawnControl_CL_AZ_01_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABendSpherePlayerDetector_C*                 SouthernRegionSpawnControl_CL_AZ_02_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABendSpherePlayerDetector_C*                 SouthernRegionSpawnControl_HW_AZ_01_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABendSpherePlayerDetector_C*                 SouthernRegionSpawnControl_HW_AZ_02_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_RefProperty;// 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C");
		return ptr;
	}


	void ToggleNEROCheckpointFastTravel(bool NewActive, TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*>* NEROCheckpointMiniMapLocations);
	void ToggleAmbushCampFastTravel(bool NewActive, TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*>* AmbushCampMiniMapLocations);
	void ToggleEncampmentFastTravel(bool NewActive, TArray<class ABendEncampmentActor*>* BendEncampmentActors);
	void UnSlowBikeOnExit(class AActor* OverlappingActor);
	void SlowBikeOnEnter(class AActor* OverlappingActor);
	void BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void PlayerRespawnBikeCheck(class ABendPlayerController* PlayerController);
	void BikeValidCheck();
	void BikeValidCheck2();
	void RFO_EarthBinds();
	void RFO_EarthUnbinds();
	void ReceiveBeginPlay();
	void OnBikePartPurchased(class UInventoryItemMotorcyclePart* Part, int Cost);
	void RFO_Gun_Control_Binds();
	void RecheckGM1();
	void GameEvent(const struct FBendGameEventBase& Event);
	void RFO_Gun_Control_Unbinds();
	void RecheckGM2();
	void RFO_Commercialism_Binds();
	void RecheckGM3();
	void RFO_Commercialism_Unbinds();
	void RecheckGM4();
	void RFO_Bunkers_Property_Binds();
	void BunkerDiscovered();
	void AmbushCleared();
	void RFO_Bunkers_Unbind();
	void RFO_Property_Unbind();
	void FuelEmpty();
	void OnMissionComplete_TCA(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_LRH(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_AWI(TEnumAsByte<EMissionIDs> MissionID);
	void CheckFastTravel();
	void BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void TrustBinds();
	void TrustTierChanged(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier);
	void CopelandEntered();
	void CopelandExited();
	void DesignGlobal_LevelLoaded();
	void AWI2_EnableWIStreamingOverrides();
	void AWI2_DisableWIStreamingOverrides();
	void ToggleFastTravelLocations(bool NorthernActive, bool SouthernActive);
	void MeleeCamFollow();
	void OnMissionComplete_TCA_Copy(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_TCA_Copy_Copy(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_TCA_Copy_Copy_Copy(TEnumAsByte<EMissionIDs> MissionID);
	void BikeChaseSetFail();
	void BikeChaseDidItFail();
	void BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature();
	void BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature();
	void BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature();
	void BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature();
	void UpdateSpawnControl();
	void TurnOffSpawnControl();
	void ExecuteUbergraph_ORWorldGlobal_DesignGlobal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
