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

// BlueprintGeneratedClass BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C
// 0x0164 (0x05A0 - 0x043C)
class ABP_AmbientEvent_Horde_C : public ABP_AmbientEventBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AOpenWorldHordeBehaviourController_C*        HordeOWController;                                        // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         Location;                                                 // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class ABendCrowdGroup*                             HordeGroup;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     HordeName;                                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HordeSize;                                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HordeStartingSize;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HordeMaxSize;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FName                                       nameHordeSize;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       nameLastRunTIme;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendWorldManager*                           WorldManager;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HordeRegenPerDay;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegenModifier;                                            // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               engaged;                                                  // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class ABendAmbientEventMarker*                     Marker;                                                   // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UJobClassInfo*                               JobID;                                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UBendMissionData*>                    MissionBlacklist;                                         // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       HordeObjID;                                               // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBendMissionData*>                    MissionPreqs;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UJobClassInfo*>                       JobPreqs;                                                 // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UJobClassInfo*>                       JobsAreActive;                                            // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UJobClassInfo*>                       JobsWithMapsLoaded;                                       // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HealthBarActive;                                          // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FName                                       levelName;                                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnloadDistance;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MarkedForUnload;                                          // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	int                                                DesiredHordeSpawnsThisLoad;                               // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	struct FName                                       Approach;                                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Find;                                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Kill;                                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DaysSinceLastRun;                                         // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	TArray<class UBendMissionData*>                    MissionUnlocked;                                          // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                KillsThisSpawn;                                           // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JobIsTracked;                                             // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	int                                                MembersCurrentlyDespawned;                                // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	TArray<class UBendMissionData*>                    RelockOnMissionComplete;                                  // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UJobClassInfo*>                       ReUnlockOnJobComplete;                                    // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimerHandle                                HordeTimer;                                               // 0x0590(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FTimespan                                   LastResetTimeForJobReset;                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C");
		return ptr;
	}


	void ForceHordeOff();
	void ShowTutorial(class UUI_TutorialPanel_C** Widget);
	void SetJobObjective(int ObjectiveNumber);
	void CheckForCompletion(bool* IsCompleted);
	void CompleteHorde();
	void sqDistanceToClosestPOI(float* DistToGen);
	void SetupReload();
	void CheckPrequisites(bool* CanSpawn, int* FailReason);
	void RenameActors();
	void NestsClearedinRegion(TArray<class UBendNestingZone*>* Zone, float* ProportionRemaining);
	void SetRegenModifierByInfestationZones();
	void TimespanToDays(const struct FTimespan& TimespanIn, float* DaysOut);
	void ActivateHorde();
	void GetLastRunTimeFromDatabase(float* LastRunTime);
	void GetSizeFromDatabase(int* Size);
	void SaveDatabase();
	void SetSize(int NewMembers);
	void AddHordeMembers(float TimeElapsedDays, int* GeneratedMembers);
	void CalculateTimeSinceLastRun(float* TimeElapsed);
	void UserConstructionScript();
	void OnEventReRunning(class ABendAmbientEventMarker** EventMarker);
	void ReceiveBeginPlay();
	void HordeMemberDeath(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void TimerEvent1();
	void CheckUnloadConditions();
	void ForceDestroyHorde();
	void ReloadHorde();
	void JobStarted(class UJobClassInfo* JobID);
	void CreateObjectiveMeter();
	void PlayTutorial(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OtherJobEnded(class UJobClassInfo* JobID, bool Failed);
	void RecheckConditions();
	void OnPlayerDied(float* ActualDamage, class AController** Killer, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum, class UDamageType** DamageType, class AActor** DamageCauser);
	void CustomEvent_2();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void TrackedJobChanged(class UObject* JobOrMissionData);
	void HordeDespawn();
	void HordeSpawned(class USkeletalMeshComponent* SkeletalMesh);
	void CustomEvent_1();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbientEvent_Horde(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
