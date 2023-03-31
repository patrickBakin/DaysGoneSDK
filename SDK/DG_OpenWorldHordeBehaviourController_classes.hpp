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

// BlueprintGeneratedClass OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C
// 0x015A (0x04A2 - 0x0348)
class AOpenWorldHordeBehaviourController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendCrowdPOI*                               EatPOI;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendCrowdPOI*                               SleepPOI;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendCrowdPOI*                               DrinkPOI;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              AtPOIDistance;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckDistanceTime;                                        // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxEatTime;                                               // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinEatTime;                                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDrinkTime;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDrinkTime;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AtPOI;                                                    // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class ABendCrowdGroup*                             HordeGroup;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Sunrise;                                                  // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sunset;                                                   // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendWorldManager*                           WorldManagerRef;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePaths;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class ABendCrowdPatrolPath_C*                      EatDrinkPath;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendCrowdPatrolPath_C*                      SleepEatPath;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABendCrowdPatrolPath_C*                      SleepDrinkPaths;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               On;                                                       // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	class ABendCrowdGenerator*                         Hibernate_Generator;                                      // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendCrowdGenerator*                         Eat_Generator;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendCrowdGenerator*                         Drink_Generator;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideGenerator;                                        // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_HordeActivities>                  GeneratorOverride;                                        // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverridePOI;                                              // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_HordeActivities>                  POIOverride;                                              // 0x03EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             SleepEatNavPath;                                          // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             EatSleepNavPath;                                          // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             SleepDrinkNavPath;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             DrinkSleepNavPath;                                        // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             EatDrinkNavPath;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             DrinkEatNavPath;                                          // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABendCrowdGenerator*                         RoamingGenerator;                                         // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FVector>                             CurrentNavPath;                                           // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldBeMoving;                                           // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextIndex;                                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveGeneratorLerpTimer;                                   // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GeneratorMovementSpeed;                                   // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GeneratorWaitTimer;                                       // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AHordeGeneratorWaypoint_C*                   GeneratorPath_EatDrink;                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AHordeGeneratorWaypoint_C*                   GeneratorPath_SleepDrink;                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AHordeGeneratorWaypoint_C*                   GeneratorPath_SleepEat;                                   // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Enum_HordeActivities>                  CurrentPOI;                                               // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	struct FTimerHandle                                HordeSpawnTimer;                                          // 0x049C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugGeneratorMovement;                                   // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForSaving;                                                // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C");
		return ptr;
	}


	void SanitizeByNameGetAttachedActors(TArray<class AActor*>* In, TArray<class AActor*>* Out);
	void SetupPathArray(class ABendCrowdPOI* StartPOI, class ABendCrowdPOI* EndPOI, class AActor* PathActor, TArray<struct FVector>* PathArray);
	void ReverseArray(TArray<struct FVector>* ReverseArray, TArray<struct FVector>* ArrayToSet);
	void DrawNavPaths(float TickTime);
	void SetupGeneratorPaths();
	void OverrideSettings(bool Sunset, float Sunrise, float Sunset02, bool ForceUseGenerator, TEnumAsByte<Enum_HordeActivities> Generator, bool ForceUsePOI, TEnumAsByte<Enum_HordeActivities> POI, bool OverrideActivityTime, float MinEat, float MaxEat, float MinDrink, float MaxDrink);
	void TurnGeneratorsOff();
	void DebugPrint(const struct FString& PrintString);
	void POIsqDistanceFromClosestHordeMember(float* sqDistance);
	void RegisterPOIsWithHordeQuery();
	void SetPath(class ABendCrowdPatrolPath_C* Path);
	void CheckNight(bool* isNight);
	void FindNewPOI();
	void SetNewPOI();
	void POIDistanceFromHorde(float* Distance);
	void VectorVectorDistance(const struct FVector& FromVector, const struct FVector& ToVector, float* Distance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void timerdone();
	void timerdone_3();
	void CheckPOIs();
	void timerdone_4();
	void CustomEvent_1();
	void Initialize_Horde();
	void CustomEvent_2();
	void CustomEvent_1_Copy();
	void CustomEvent_1_Copy_2();
	void Call_BeginPlay();
	void CustomEvent_1_Copy_3();
	void CustomEvent_1_Copy_Copy();
	void CustomEvent_1_Copy_1_Copy();
	void CustomEvent_1_Copy_4();
	void CustomEvent_1_Copy_Copy_2();
	void CustomEvent_1_Copy_1_Copy_2();
	void MoveGenerator(float TickTime);
	void GeneratorFinishedPath();
	void ReceiveTick(float* DeltaSeconds);
	void SetNewGeneratorPath(TArray<struct FVector> NewPath, TEnumAsByte<Enum_HordeActivities> NewActivity);
	void InitializeGeneratorMovement();
	void RestartGeneratorMovement();
	void ResumeMoving();
	void HordeMemberSpawned(class USkeletalMeshComponent* SkeletalMesh);
	void HordeDoneSpawning();
	void CustomEvent_3();
	void CustomEvent_2_Copy();
	void PostSaveGameLoaded(bool bIsCheckpoint);
	void ExecuteUbergraph_OpenWorldHordeBehaviourController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
