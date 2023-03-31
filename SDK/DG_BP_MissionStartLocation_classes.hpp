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

// BlueprintGeneratedClass BP_MissionStartLocation.BP_MissionStartLocation_C
// 0x0128 (0x0470 - 0x0348)
class ABP_MissionStartLocation_C : public AActor
{
public:
	class USceneComponent*                             BikeSpawnPoint;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BitchRiderSpawnPoint;                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BikeRiderSpawnPoint;                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PawnSpawnPoint;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SpawnActor;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SpawnActorC;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SpawnActorB;                                              // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        CheckpointStage;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CatcherMesh;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MissionStartLocationActorTypes>   LocationActorType;                                        // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                CheckpointNumber;                                         // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Pawn_Index;                                               // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExtraPawnIndex;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Vehicle_Index;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UClass*                                      Pawn_Class;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Bike_Class;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BitchRiderClass;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MissionStartLocationActorTypes>   PreviousLocationActorType;                                // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EInventoryWeaponID>>            NPC_Weapons;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EInventoryWeaponID>>            Bitch_NPC_Weapons;                                        // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSTRUC_BikeSettings>                 VehicleStartSettings;                                     // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsEndingPoint;                                            // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerForceCrouch;                                        // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0402(0x0006) MISSED OFFSET
	class UBendPawnClassRef*                           BuddyPawnClassRef;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendVehicleClassRef*                        BillsBikeClassRef;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendVehicleClassRef*                        Bike03ClassRef;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendPOI*                                    NPC_Force_Use_Poi;                                        // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPawnSpawnedFromLoc;                                     // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleSpawnedFromLoc;                                  // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnEnterVehicleFromLoc;                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBendHumanArchetypeData*                     BuddyArchetypeSetting;                                    // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSkeletalMeshArrayData*                  HardReffedSkeletalMeshData;                               // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSkeletalMeshArrayData*                  HardReffedSkeletalMeshData_Bitch;                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionStartLocation.BP_MissionStartLocation_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPawnEnterVehicleFromLoc__DelegateSignature(class ABendPawn* Pawn, class AVehiclePawn* Vehicle, class ABP_MissionStartLocation_C* Location);
	void OnVehicleSpawnedFromLoc__DelegateSignature(class AVehiclePawn* Vehicle, int VehicleIndex, class ABP_MissionStartLocation_C* StartLocation);
	void OnPawnSpawnedFromLoc__DelegateSignature(class ABendPawn* Pawn, class ABendAIController* Controller, int PawnIndex, class ABP_MissionStartLocation_C* StartLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
