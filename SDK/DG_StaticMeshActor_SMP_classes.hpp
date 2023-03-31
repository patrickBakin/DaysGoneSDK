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

// BlueprintGeneratedClass StaticMeshActor_SMP.StaticMeshActor_SMP_C
// 0x02B3 (0x060B - 0x0358)
class AStaticMeshActor_SMP_C : public AStaticMeshActorSMP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               componentSnap;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               actorSnap;                                                // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableStaticMeshEdges;                                   // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0363(0x0005) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                MeshComponents;                                           // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          meshTransforms;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               resetTransforms;                                          // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               assetLockOld;                                             // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               assetLockNew;                                             // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x038B(0x0005) MISSED OFFSET
	struct FTransform                                  actorNewTrans;                                            // 0x0390(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  actorOldTrans;                                            // 0x03C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FRotator>                            initialCompRot;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              actorStartYaw;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 primitiveCompArray;                                       // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                componentCounter;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                staticAssets;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     staticParentName;                                         // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     componentLockStr;                                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 staticMeshReference;                                      // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     positiveBounds;                                           // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     negativeBounds;                                           // 0x0454(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BendCoverChildTransforms;                                 // 0x0460(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               disableCover;                                             // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0491(0x000F) MISSED OFFSET
	struct FTransform                                  coverVolumeOffset;                                        // 0x04A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     coverSlotsOffset;                                         // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    initialRotation;                                          // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              coverXHeightCull;                                         // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	struct FString                                     coverIgnoreStr;                                           // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         CollisionComponents;                                      // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               colProfileNameInclude;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                allMeshes;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                numAssetsAdded;                                           // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                skipCount;                                                // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              compSnapVerticalCutoff;                                   // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              compSnapHeightCutoff;                                     // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasRegionalVariant;                                       // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasMaterialVariant;                                       // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useBaseComponent;                                         // 0x0542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               overrideVariant;                                          // 0x0543(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	struct FString                                     overrideRegionNumber;                                     // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         regionalVariantMeshes;                                    // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstance*>                   regionalVariantMats;                                      // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RegionName;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     regionNumber;                                             // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Sector;                                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               randomNameStream;                                         // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                renameCount;                                              // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               spawnDestructibleMesh;                                    // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class UClass*                                      destMeshToSpawn;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasDestructionSockets;                                    // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	TArray<struct FTransform>                          socketTransforms;                                         // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              destActorReferences;                                      // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                destMeshCount;                                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               paintedWetnessOverride;                                   // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePaintedWetness;                                        // 0x05E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x05E6(0x0002) MISSED OFFSET
	float                                              raycastOffset;                                            // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               allErrorsAcceptable;                                      // 0x05EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               foundError;                                               // 0x05ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               don_tRecieveDecals;                                       // 0x05EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               neverUseWetnessOverride;                                  // 0x05EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               neverUseWetness;                                          // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableInteriorEdgeDetection;                             // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useAllMeshesForInteriorTests;                             // 0x05F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x05F3(0x0005) MISSED OFFSET
	TArray<class UStaticMesh*>                         interiorClimbMeshes;                                      // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EDrawDebugTrace>                       InteriorEdgeDetectionRayCastVisability;                   // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInside;                                                 // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasInteriorEdge;                                          // 0x060A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StaticMeshActor_SMP.StaticMeshActor_SMP_C");
		return ptr;
	}


	void switchToInteriorEdges();
	void respawnSelf();
	void levelValidityTest(bool* currentLevelValid, struct FString* outputLevel);
	void fullReconstruction();
	void constructOuterLevelString(struct FString* containingLevel);
	void checkForErrors();
	void controlDestMeshes();
	void UserConstructionScript();
	void Respawn_();
	void ExecuteUbergraph_StaticMeshActor_SMP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
