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

// BlueprintGeneratedClass BP_AmbientEventBase.BP_AmbientEventBase_C
// 0x00F4 (0x043C - 0x0348)
class ABP_AmbientEventBase_C : public ABendBlueprintActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        DisableTrackingSphere;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendGameplayDatabase*                       BendGameDatabase;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendAmbientEventMarker*                     EventMarker;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EventComplete;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableItems;                                              // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0372(0x0006) MISSED OFFSET
	class ABP_BendInventoryPickup_GasCan_C*            GasCanItem;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FString                                     AmmoString;                                               // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       AmmoDBName;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     GasCanString;                                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       GasCanDBName;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GasCan;                                                   // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTracking;                                           // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	class ABP_Tracking_InteractZone_C*                 TrackingInteractZone;                                     // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               MoveEventMarkerToTrackingPoints;                          // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RecalculateSuggestedMarkerLocation;                       // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	struct FVector                                     SuggestedMarkerLocation;                                  // 0x03C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuggestedMinMarkerRadius;                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveEventMarkerToActor;                                   // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FString                                     TrackingString;                                           // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TrackingDBName;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackingComplete;                                         // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmbushZoneCamp;                                           // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackingStarted;                                          // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x03F3(0x0005) MISSED OFFSET
	struct FName                                       TrackingSection;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ManuallyDisableTracking;                                  // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FVector                                     DisableTrackingSphereRelativeLocation;                    // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToMoveMarkerTo;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FVector>                             ConstructionWorldLocations;                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Ammo;                                                     // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class ABend_InventoryPickup_UniversalAmmo_C*       AmmoItem;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              GasPercentageThreshold;                                   // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientEventBase.BP_AmbientEventBase_C");
		return ptr;
	}


	bool LowFuelCondition();
	bool LowAmmoCondition();
	void GetActorWorldLocations_AmbientEventBase();
	void CentralWorldLocationAndRadius(TArray<struct FVector>* WorldLocations, struct FVector* WorldLocation, float* Radius);
	void ReturnWorldLocationArrayOfActors(TArray<class AActor*>* Actors, TArray<struct FVector>* WorldLocations);
	void MoveMarkerIconToMarker();
	void MoveMarkerIconToSelf();
	void GetNextTrackingArea(const struct FName& CurrentArea, struct FName* NextSection);
	void MoveMarkerToTrackingArea(const struct FName& InName, bool* MovedMarker);
	void CalculateSuggestedMarkerLocation(TArray<struct FVector>* AdditionalWorldLocations);
	void AverageWorldLocationAndRadius(TArray<struct FVector>* WorldLocations, struct FVector* WorldLocation, float* Radius);
	void AverageWorldLocationOfSpawnsAndPOIs(TArray<class AAmbientSpawnLocation_C*>* AmbientSpawnLocations, TArray<class ABendPOI*>* BendPOIs, struct FVector* WorldLocation, float* Radius);
	void HideItems();
	void DetermineItemType();
	void AddVectorToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, const struct FVector& Value);
	void GetVectorFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* VectorPresent, struct FVector* VectorValue);
	void DeleteVectorFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* VectorPresent, bool* VectorDeleted);
	void AddStringToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, const struct FString& Value);
	void GetStringFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* StringPresent, struct FString* StringValue);
	void DeleteStringFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* StringPresent, bool* StringDeleted);
	void AddFloatToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, float Value);
	void GetFloatFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* FloatPresent, float* FloatValue);
	void DeleteFloatFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* FloatPresent, bool* FloatDeleted);
	void CompleteAmbientEvent(TEnumAsByte<EAmbientEventCompletionStatus> CompletionStatus);
	void AddIntToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, int Value);
	void GetIntFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* IntPresent, int* IntValue);
	void DeleteIntFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* IntPresent, bool* IntDeleted);
	void AddBoolToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool Value);
	void GetBoolFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* BoolPresent, bool* BoolValue);
	void DeleteBoolFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* BoolPresent, bool* BoolDeleted);
	void GenerateGameDatabaseKey(const struct FString& KeySuffix, struct FName* DesignDBKey);
	void UserConstructionScript();
	void OnEventRunning(class ABendAmbientEventMarker* EventMarker);
	void OnEventReRunning(class ABendAmbientEventMarker* EventMarker);
	void OnEventUnloading();
	void OnEventComplete();
	void ReceiveBeginPlay();
	void Running_ItemEvent();
	void ReRunning_ItemEvent();
	void Unloading_ItemEvent();
	void Complete_ItemEvent();
	void OnPlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void SaveGameDatabaseVariables_AmbientEventBase();
	void BindEventsForTracking();
	void TrackingSectionCompleted(const struct FName& SectionID);
	void BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature();
	void InitializeTrackingMarkers();
	void Running_Tracking();
	void ReRunning_Tracking();
	void Complete_Tracking();
	void StartedTracking();
	void FinishedTracking();
	void EndTracking();
	void ExecuteUbergraph_BP_AmbientEventBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
