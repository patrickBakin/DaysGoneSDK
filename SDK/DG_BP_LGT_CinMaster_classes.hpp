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

// BlueprintGeneratedClass BP_LGT_CinMaster.BP_LGT_CinMaster_C
// 0x0159 (0x053D - 0x03E4)
class ABP_LGT_CinMaster_C : public ABP_LGT_rootRig_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSpotLightComponent*                     FillSpot;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     AuxSpot;                                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AuxAimSphere;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AuxRoot;                                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RimAimSphere;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     RimSpot;                                                  // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RimRoot;                                                  // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FillAimSphere;                                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FillRoot;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        KeyAimSphere;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     KeySpot;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             KeyRoot;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          lastFrameTargetTransformation;                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              cachedLightIntensity;                                     // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<struct FStruct_LGT_ShotTimeOfDay>           Moon_Offset;                                              // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FStruct_LGT_UpdateTimeOfDAy                 OverrideTimeOfDay;                                        // 0x0478(0x0008) (Edit, BlueprintVisible)
	struct FName                                       ParentCharBoneName_1;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStruct_LGT_lastFrameParentInfo             lastFrameParentCharInfo;                                  // 0x0488(0x0020) (Edit, BlueprintVisible)
	struct FVector                                     cachedParentCharLocation;                                 // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempVector;                                               // 0x04B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                numLights;                                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<class USceneComponent*>                     lightRootRefs;                                            // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                aimSphereRefs;                                            // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               KeyLightOn;                                               // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FillLightOn;                                              // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RimLightOn;                                               // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AuxLightOn;                                               // 0x04EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class ACameraActor*                                cachedActiveCamera;                                       // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_LGT_CinSlave_C*>                  slaveRigs;                                                // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_LGT_CinSlave_C*>                  cachedSlaveRigs;                                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               AddAllSceneSkeletalMeshes;                                // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AddAllShotsToLinkedCameras;                               // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isMasterRig;                                              // 0x051A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x051B(0x0005) MISSED OFFSET
	TArray<class UBendSpotLightComponent*>             lightRefs;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               KeyAimTargetReset;                                        // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FillAimTargetReset;                                       // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RimAimTargetReset;                                        // 0x0532(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AuxAimTargetReset;                                        // 0x0533(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AddAllShotsToMoonSunOffset;                               // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	float                                              WorldTimeRate;                                            // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetWorldManagerIsCinematicActive;                         // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LGT_CinMaster.BP_LGT_CinMaster_C");
		return ptr;
	}


	void HelperCheckForResettingAimTargets(bool isParented, class ASkeletalMeshActor* SkelMesh, const struct FName& BoneName, class USceneComponent* rootLocation, class UStaticMeshComponent* aimTarget);
	void CheckForResettingAimTargets();
	void CheckUtilites();
	void NonEmptyLength(TArray<class AActor*>* ActorArray, int* Length);
	void CopyAllRigSettings(class ABP_LGT_CinMaster_C* masterRig, class ABP_LGT_CinSlave_C** slaveRig);
	void CheckForLightLinking();
	void UpdateSlaveRigs();
	void ToggleLightVisibility();
	void InitializeAimTargetVars();
	void GetFlickerStruct_NEW();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation);
	void ReceiveTick(float* DeltaSeconds);
	void UpdateTimeOfDay(const struct FName& CinematicLevel);
	void LinkedCameraStateChanged(class ACameraActor** DisabledCamera, class ACameraActor** EnabledCamera);
	void ExecuteUbergraph_BP_LGT_CinMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
