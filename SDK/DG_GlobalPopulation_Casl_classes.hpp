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

// BlueprintGeneratedClass GlobalPopulation_Casl.GlobalPopulation_Casl_C
// 0x0258 (0x0C28 - 0x09D0)
class AGlobalPopulation_Casl_C : public AAmbientSpawnLocation_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UnHideOnPoiNaveSuccess;                                   // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceHolster;                                             // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09DA(0x0002) MISSED OFFSET
	struct FTimerHandle                                Timer;                                                    // 0x09DC(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABendPawn*                                   AnimatedPawn;                                             // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendAIController*                           AnimatedController;                                       // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendPOI*>                            POIsToUse_;                                               // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<EAIFactionType>                        UnitFactionType;                                          // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A01(0x0003) MISSED OFFSET
	int                                                spawnCount;                                               // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendPawn*>                           MonsterClosetControlledPawns;                             // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                Timer_for_distance_and_sight;                             // 0x0A18(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeUntilLocationIsSetActive;                             // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseDistanceFromPlayerCheck;                               // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	float                                              DistanceFromPlayer;                                       // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePawnCenterScreenCheck;                                 // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A29(0x0003) MISSED OFFSET
	float                                              DistanceFromPlayerCenterScreen;                           // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LeaveOnSighted;                                           // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	int                                                POI_Index;                                                // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendPOI*>                            Bear_POI_Array;                                           // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Breaker_POI_Array;                                        // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Cougar_POI_Array;                                         // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Crow_POI_Array;                                           // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Deer_POI_Array;                                           // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            FreakCougar_POI_Array;                                    // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            FreakCrow_POI_Array;                                      // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            FreakWolf_POI_Array;                                      // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            LootNewt_POI_Array;                                       // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Militia_POI_Array;                                        // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Newt_POI_Array;                                           // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Rager_Bear_POI_Array;                                     // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            RIP_POI_Array;                                            // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Screamer_POI_Array;                                       // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Survivor_POI_Array;                                       // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Swarmer_POI_Array;                                        // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Wolf_POI_Array;                                           // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABendPOI*>                            Marauder_POI_Array;                                       // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    LeftPOI;                                                  // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Spawn_Counts;                                             // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SwarmerSpawnCount;                                        // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewtSpawnCount;                                           // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RagerBearSpawnCount;                                      // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FreakWolfSpawnCount;                                      // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FreakCrowSpawnCount;                                      // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HumanSpawnCount;                                          // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WolfSpawnCount;                                           // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BearSpawnCount;                                           // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CrowSpawnCount;                                           // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CougarSpawnCount;                                         // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeerSpawnCount;                                           // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ScreamerSpawnCount;                                       // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BreakerSpawnCount;                                        // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReacherSpawnCount;                                        // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _SpawnedReacher;                                          // 0x0BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedBreaker;                                          // 0x0BA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedScreamer;                                         // 0x0BA6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedDeer;                                             // 0x0BA7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedCougar;                                           // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedCrow;                                             // 0x0BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedBear;                                             // 0x0BAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedWolf;                                             // 0x0BAB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedHuman;                                            // 0x0BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedFreakCrow;                                        // 0x0BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnedNewts;                                             // 0x0BAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedFreakWolf;                                        // 0x0BAF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedRagerBear;                                        // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _SpawnedSwarmers;                                         // 0x0BB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedSwarmers;                                           // 0x0BB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedNewts;                                              // 0x0BB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedRagerBear;                                          // 0x0BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedFreakerWolf;                                        // 0x0BB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedFreakerCrow;                                        // 0x0BB6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedHuman;                                              // 0x0BB7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedWolf;                                               // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedBear;                                               // 0x0BB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedCrow;                                               // 0x0BBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedCougar;                                             // 0x0BBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedDeer;                                               // 0x0BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedScreamer;                                           // 0x0BBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedBreaker;                                            // 0x0BBE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedReacher;                                            // 0x0BBF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<class AGlobalPopulation_Casl_C*>            ListOfSpawnLocations;                                     // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      Distancetoplayer;                                         // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RanLastLoad;                                              // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0BE1(0x0007) MISSED OFFSET
	TArray<int>                                        UnitTypeArray;                                            // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UnitGameplayCompleted;                                    // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<int>                                        TestVariable;                                             // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EventCounter;                                             // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               RanTest;                                                  // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	struct FTimerHandle                                ReadyToSpawn;                                             // 0x0C20(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LastPOIIndex;                                             // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalPopulation_Casl.GlobalPopulation_Casl_C");
		return ptr;
	}


	void MakeNeverSpawnAgainCounter(TEnumAsByte<EAIFactionType> UnitSpawnedFactionType);
	void PlayedEncounter(TEnumAsByte<EAIFactionType> UnitSpawnedFactionType);
	void Construction_function_call_setup_poi_s(TArray<class ABendPOI*>* Bend_POI);
	void Set_correct_poi_array_to_use(TArray<class ABendPOI*>* NewParam);
	void Find_an_open_poi_force_use();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Play_Anim_On_Spawn(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void UserLeavesSlotDelegate_Event(class ABendPOISlot* Slot, class ABendAIController* User);
	void OnAutoNavSuccess_Event(class ABendPOISlot* Slot, class AController* User);
	void Setup_auto_awarness_changes_based_on_distance_and_camera();
	void Tick_for_distance_and_sight_timer();
	void Unit_become_semi_aware_of_player(class ABendAIController* AI_Controller);
	void unit_become_full_aware_of_player(class ABendAIController* AI_Controller);
	void Timer_update_to_spawn();
	void OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied);
	void ExitAnimStarted_Event_1(class ABendPOISlot* Slot, class AController* User);
	void OnBendPawnTakeAnyDamage_Event_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class ABendPawn* PawnDamaged, bool CriticalHit, bool KillingBlow);
	void ExitAnimComplete_Event_1(class ABendPOISlot* Slot, class AController* User);
	void TestForBetterSpawnLocation();
	void Plusonevent();
	void FailGroupTest();
	void ExecuteUbergraph_GlobalPopulation_Casl(int EntryPoint);
	void LeftPOI__DelegateSignature(class ABendAIController* Controller, class ABendPawn* Pawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
