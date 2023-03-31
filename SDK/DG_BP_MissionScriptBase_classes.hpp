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

// BlueprintGeneratedClass BP_MissionScriptBase.BP_MissionScriptBase_C
// 0x0090 (0x0620 - 0x0590)
class ABP_MissionScriptBase_C : public ABendGameScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             MissionTransform;                                         // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MissionFailureOptions>            StartWithMissionFailureType;                              // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFailingMission;                                         // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FSTRUC_BikeSettings>                 BikeSettingsStored;                                       // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_MissionStartLocation_C*>          StartLocationsPlayer;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_MissionStartLocation_C*>          StartLocationsPawns;                                      // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPawnSpawned;                                            // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleSpawned;                                         // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class ABP_MissionStartLocation_C*>          AllRiderCandidates_LocRef;                                // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AVehiclePawn*                                PlayerVehicle;                                            // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionScriptBase.BP_MissionScriptBase_C");
		return ptr;
	}


	void I_GetCurrentCheckpointCount(int* Count, int* MaxCount);
	void I_GetDoonceVariable(TArray<bool>* init_d, TArray<bool>* Closed, int* highest_index_used);
	struct FText GenerateFailingLocalizedText(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason);
	bool UpdateHealthBar(bool* RemoveBar, float* NewHealth, float* MaxHealth, bool* inverseBar);
	void CollectMissionStarts();
	void Pre_InitializeBuddiesForIntroCins();
	void DoesProperPawnExistInSlot(class ABP_MissionStartLocation_C* MissionStartLocation, bool IsExtraPawn, bool* PawnExists, class ABendPawn** PawnRef);
	void SaveInAFrame();
	void GetMissionEndingPositions(struct FTransform* PlayerPosition, struct FTransform* BikePosition, bool* OnBike);
	TArray<class ABendObjective*> GetAllObjectives();
	TArray<class ABendObjective*> GetMainObjectives();
	TArray<class ABendObjective*> GetSideObjectives();
	void GetCurrentScoringVariables(float* Time, int* Deaths, int* kills);
	bool UpdateObjectiveProgression();
	void DebugForceObjectiveStage(int ObjectiveStage, bool CallOnCheckpointLoaded, int OverrideCheckpointLoadedIndex, int SaveAtThisIndex);
	void SaveCheckpointByIndex(int Checkpoint_Index);
	void ResetObjectivesToCheckpoint();
	void StoreVehicles(class AVehiclePawn* The_Vehicle, class ABP_MissionStartLocation_C* StartLocation);
	void Should_remove_Any_from_bike(int Checkpoint__);
	void SetupAllStartLocationsAtIndex(int Checkpoint_Number, bool StreamEverythingAround, bool ForceUpdateCamera, const struct FVector& CameraPointLocation, bool DontDoPlayerTeleport, bool TeleportBuddy, bool DontTeleportPlayerBike, bool DontTeleportBuddyBike, TArray<class ABendPawn*>* pawns, TArray<class AVehiclePawn*>* Vehicles);
	void StartWithMissionFailure();
	void StorePawn(class ABendPawn* ThePawn, class ABP_MissionStartLocation_C* MissionStart, bool ExtraPawn_, bool DontDestroyPawn);
	void Set_Ai_Settings(class ABP_MissionStartLocation_C* Location, class ABendPawn* Pawn, class AVehiclePawn* Vehicle, bool Bitch_, bool IsNotNewSpawn);
	void EndingDeactivateAIAndBikes();
	void SetUpBuddyLocationsAtIndex(int Checkpoint, bool DontRespawnBuddy, bool Don_tDoBuddyBikeTeleport);
	void Collect_Mission_Variables();
	void Start_Ending_Mission();
	void Init_Mission_Objectives();
	void SetUpPlayerLocationsAtIndex(int Checkpoint, bool DontDoPlayerTeleport, bool DontDoPlayerBikeTeleport, bool DontRespawnBuddy);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MissionScript_Initialize(bool DontDoPlayerTeleport, bool RespawnBuddy, bool Don_tTeleportPlayerBike, bool Don_tTeleportBuddyBike);
	void EnableVolumeFailure(int VolumeNumber, float OverrideFailureBuffer);
	void DisableVolumeFailure();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void RideAssistOnSeated();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void EnableDistanceFailure(class AActor* DistanceCheckedActor, float FailureDistance, bool Ignore_Z_axis, bool UseBuddy, float OverrideFailureBuffer);
	void DisableDistanceFailure();
	void SynchStreamingOnPlayer();
	void OnDriverEnteredVehicle(class AVehiclePawn* VehiclePawn);
	void OnTeleportToCheckpoint_MM_Event_1(int Checkpoint);
	void RiderEnterVehicleEvents();
	void OnRiderFinishedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle);
	void LoadThePreviousCheckpoint(struct FString* MessageToDisplay);
	void TrackMissionStates();
	void EnemyKilled(class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnPlayerRespawned_Event_1(class ABendPlayerController* PlayerController);
	void I_SetDoOnceVariables(int HighestIndex, TArray<bool>* init_d, TArray<bool>* Closed);
	void LoadPreviousCheckpointWithMessage(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason);
	void OnFadedToBlack_MM_Event_1(const struct FString& Message);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void AsynchLoadImage();
	void AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr);
	void BeginTheMissionFailing(TEnumAsByte<EMissionFailureOptions>* FailureType);
	void ClearTheMissionFailing(TEnumAsByte<EMissionFailureOptions>* FailureType);
	void ExecuteUbergraph_BP_MissionScriptBase(int EntryPoint);
	void OnVehicleSpawned__DelegateSignature(class AVehiclePawn* Vehicle, int Vehicle_Index, class ABP_MissionStartLocation_C* StartLocation);
	void OnPawnSpawned__DelegateSignature(class ABendPawn* Pawn, class ABendAIController* Controller, int PawnIndex, class ABP_MissionStartLocation_C* StartLocation);
	void OnFailingMission__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
