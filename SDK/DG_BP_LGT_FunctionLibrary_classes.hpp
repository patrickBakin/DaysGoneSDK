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

// BlueprintGeneratedClass BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LGT_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetAllShotCameras(class UObject* __WorldContext, TArray<class ACameraActor*>* shotCameras);
	void STATIC_UpdateFlickerIntensity(class UObject* __WorldContext, class USpotLightComponent** SpotLightRef, struct FStruct_LGT_Flicker* FlickerStruct, float* LowFreq, float* HighFreq, struct FVector* PositionOffset, struct FStruct_LGT_Flicker* UpdatedFlickerStruct);
	void STATIC_GetFlickerTime(float GameTime, float FlickerRateMultiplier, float FlickerOffset, float TimelineLength, class UObject* __WorldContext, float* FlickerTime);
	void STATIC_ToggleVisibilityDuringCinematics(const struct FName& CinName, bool SetHiddenInGame, class UObject* __WorldContext, TArray<struct FStruct_LGT_CinMeshToggle>* CinMeshStructs);
	void STATIC_CheckLightLinking(class ULightComponent* SpotLightRef, class UObject* __WorldContext, TArray<class AActor*>* ActorRefs);
	void STATIC_OverrideTimeOfDay(const struct FStruct_LGT_UpdateTimeOfDAy& TimeOfDayObj, class UObject* __WorldContext);
	void STATIC_ModifySunMoonPosition(class ACameraActor* ActiveCamera, bool isMasterRig, class AActor* ActorRef, class UObject* __WorldContext, TArray<struct FStruct_LGT_ShotTimeOfDay>* PerShotTimeOfDay);
	void STATIC_UpdateCharacterParenting(class AActor* ParentChar, const struct FName& ParentCharBoneName, const struct FStruct_LGT_lastFrameParentInfo& lastFrameParentCharInfo, bool useAimSphere, class UObject* __WorldContext, class USceneComponent** lightRigRoot, class UStaticMeshComponent** aimSphere, struct FStruct_LGT_lastFrameParentInfo* newLastFrameParentCharInfo);
	void STATIC_UpdateLightTargetTransformations(class USceneComponent* lightReference, class UObject* __WorldContext, struct FTransform* lastFrameTargetTransformation, class USceneComponent** rootReference, class USceneComponent** targetReference, struct FTransform* newLastFrameTargetTransformation);
	void STATIC_UpdateEyeReflectionLightIntensity(class UBendEyeReflectionLightComponent* lightReference, class UObject* __WorldContext, float* NewColorIntensity, struct FLinearColor* resultColor);
	void STATIC_MultiplyLightIntensity(class UObject* __WorldContext, class ULightComponent** lightReference, float* NewColorIntensity);
	void STATIC_UpdateLightIntensity(class UObject* __WorldContext, class ULightComponent** lightReference, float* NewColorIntensity);
	void STATIC_HelperSmoothFade(float CurrentValue, float LowerBound, float UpperBound, float transitionPeriod, class UObject* __WorldContext, float* FadeValue);
	void STATIC_UpdateTimeOfDayStatus(unsigned char rigEnumSetting, class USceneComponent* LightRigBase, float CurHour, float morningChangeTime, float eveningChangeTime, int numHoursTransition, class UObject* __WorldContext, float* LightIntensity, bool* updateIntensity);
	void STATIC_GetActiveCamera(class AActor* ActorInLevelRef, const struct FVector& CurrentCamLocation, class UObject* __WorldContext, class ACameraActor** CameraRef);
	void STATIC_ActiveCameraCheck(class ACameraActor* ActiveCameraRef, class UObject* __WorldContext, TArray<class ACameraActor*>* ActiveCameraList, bool* EnableCamera);
	void STATIC_CreateDynamicMaterialInstances(class AStaticMeshActor* StaticMesh, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* dynMatArray);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
