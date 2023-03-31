// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetAllShotCameras
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ACameraActor*>    shotCameras                    (Parm, OutParm, ZeroConstructor)

void UBP_LGT_FunctionLibrary_C::STATIC_GetAllShotCameras(class UObject* __WorldContext, TArray<class ACameraActor*>* shotCameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetAllShotCameras");

	UBP_LGT_FunctionLibrary_C_GetAllShotCameras_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shotCameras != nullptr)
		*shotCameras = params.shotCameras;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateFlickerIntensity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpotLightComponent*     SpotLightRef                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FStruct_LGT_Flicker     FlickerStruct                  (Parm, OutParm, ReferenceParm)
// float                          LowFreq                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HighFreq                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PositionOffset                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_LGT_Flicker     UpdatedFlickerStruct           (Parm, OutParm)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateFlickerIntensity(class UObject* __WorldContext, class USpotLightComponent** SpotLightRef, struct FStruct_LGT_Flicker* FlickerStruct, float* LowFreq, float* HighFreq, struct FVector* PositionOffset, struct FStruct_LGT_Flicker* UpdatedFlickerStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateFlickerIntensity");

	UBP_LGT_FunctionLibrary_C_UpdateFlickerIntensity_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpotLightRef != nullptr)
		*SpotLightRef = params.SpotLightRef;
	if (FlickerStruct != nullptr)
		*FlickerStruct = params.FlickerStruct;
	if (LowFreq != nullptr)
		*LowFreq = params.LowFreq;
	if (HighFreq != nullptr)
		*HighFreq = params.HighFreq;
	if (PositionOffset != nullptr)
		*PositionOffset = params.PositionOffset;
	if (UpdatedFlickerStruct != nullptr)
		*UpdatedFlickerStruct = params.UpdatedFlickerStruct;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetFlickerTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GameTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerRateMultiplier          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerOffset                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimelineLength                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_GetFlickerTime(float GameTime, float FlickerRateMultiplier, float FlickerOffset, float TimelineLength, class UObject* __WorldContext, float* FlickerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetFlickerTime");

	UBP_LGT_FunctionLibrary_C_GetFlickerTime_Params params;
	params.GameTime = GameTime;
	params.FlickerRateMultiplier = FlickerRateMultiplier;
	params.FlickerOffset = FlickerOffset;
	params.TimelineLength = TimelineLength;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlickerTime != nullptr)
		*FlickerTime = params.FlickerTime;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ToggleVisibilityDuringCinematics
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinName                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FStruct_LGT_CinMeshToggle> CinMeshStructs                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           SetHiddenInGame                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_ToggleVisibilityDuringCinematics(const struct FName& CinName, bool SetHiddenInGame, class UObject* __WorldContext, TArray<struct FStruct_LGT_CinMeshToggle>* CinMeshStructs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ToggleVisibilityDuringCinematics");

	UBP_LGT_FunctionLibrary_C_ToggleVisibilityDuringCinematics_Params params;
	params.CinName = CinName;
	params.SetHiddenInGame = SetHiddenInGame;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CinMeshStructs != nullptr)
		*CinMeshStructs = params.CinMeshStructs;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CheckLightLinking
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorRefs                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ULightComponent*         SpotLightRef                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_CheckLightLinking(class ULightComponent* SpotLightRef, class UObject* __WorldContext, TArray<class AActor*>* ActorRefs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CheckLightLinking");

	UBP_LGT_FunctionLibrary_C_CheckLightLinking_Params params;
	params.SpotLightRef = SpotLightRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorRefs != nullptr)
		*ActorRefs = params.ActorRefs;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.OverrideTimeOfDay
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_LGT_UpdateTimeOfDAy TimeOfDayObj                   (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_OverrideTimeOfDay(const struct FStruct_LGT_UpdateTimeOfDAy& TimeOfDayObj, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.OverrideTimeOfDay");

	UBP_LGT_FunctionLibrary_C_OverrideTimeOfDay_Params params;
	params.TimeOfDayObj = TimeOfDayObj;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ModifySunMoonPosition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_LGT_ShotTimeOfDay> PerShotTimeOfDay               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ACameraActor*            ActiveCamera                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMasterRig                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_ModifySunMoonPosition(class ACameraActor* ActiveCamera, bool isMasterRig, class AActor* ActorRef, class UObject* __WorldContext, TArray<struct FStruct_LGT_ShotTimeOfDay>* PerShotTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ModifySunMoonPosition");

	UBP_LGT_FunctionLibrary_C_ModifySunMoonPosition_Params params;
	params.ActiveCamera = ActiveCamera;
	params.isMasterRig = isMasterRig;
	params.ActorRef = ActorRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerShotTimeOfDay != nullptr)
		*PerShotTimeOfDay = params.PerShotTimeOfDay;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateCharacterParenting
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ParentChar                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParentCharBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_LGT_lastFrameParentInfo lastFrameParentCharInfo        (Parm)
// class USceneComponent*         lightRigRoot                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UStaticMeshComponent*    aimSphere                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           useAimSphere                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_LGT_lastFrameParentInfo newLastFrameParentCharInfo     (Parm, OutParm)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateCharacterParenting(class AActor* ParentChar, const struct FName& ParentCharBoneName, const struct FStruct_LGT_lastFrameParentInfo& lastFrameParentCharInfo, bool useAimSphere, class UObject* __WorldContext, class USceneComponent** lightRigRoot, class UStaticMeshComponent** aimSphere, struct FStruct_LGT_lastFrameParentInfo* newLastFrameParentCharInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateCharacterParenting");

	UBP_LGT_FunctionLibrary_C_UpdateCharacterParenting_Params params;
	params.ParentChar = ParentChar;
	params.ParentCharBoneName = ParentCharBoneName;
	params.lastFrameParentCharInfo = lastFrameParentCharInfo;
	params.useAimSphere = useAimSphere;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightRigRoot != nullptr)
		*lightRigRoot = params.lightRigRoot;
	if (aimSphere != nullptr)
		*aimSphere = params.aimSphere;
	if (newLastFrameParentCharInfo != nullptr)
		*newLastFrameParentCharInfo = params.newLastFrameParentCharInfo;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightTargetTransformations
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              lastFrameTargetTransformation  (Parm, OutParm, ReferenceParm, IsPlainOldData)
// class USceneComponent*         rootReference                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         targetReference                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         lightReference                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              newLastFrameTargetTransformation (Parm, OutParm, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateLightTargetTransformations(class USceneComponent* lightReference, class UObject* __WorldContext, struct FTransform* lastFrameTargetTransformation, class USceneComponent** rootReference, class USceneComponent** targetReference, struct FTransform* newLastFrameTargetTransformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightTargetTransformations");

	UBP_LGT_FunctionLibrary_C_UpdateLightTargetTransformations_Params params;
	params.lightReference = lightReference;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lastFrameTargetTransformation != nullptr)
		*lastFrameTargetTransformation = params.lastFrameTargetTransformation;
	if (rootReference != nullptr)
		*rootReference = params.rootReference;
	if (targetReference != nullptr)
		*targetReference = params.targetReference;
	if (newLastFrameTargetTransformation != nullptr)
		*newLastFrameTargetTransformation = params.newLastFrameTargetTransformation;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateEyeReflectionLightIntensity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBendEyeReflectionLightComponent* lightReference                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewColorIntensity              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            resultColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateEyeReflectionLightIntensity(class UBendEyeReflectionLightComponent* lightReference, class UObject* __WorldContext, float* NewColorIntensity, struct FLinearColor* resultColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateEyeReflectionLightIntensity");

	UBP_LGT_FunctionLibrary_C_UpdateEyeReflectionLightIntensity_Params params;
	params.lightReference = lightReference;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewColorIntensity != nullptr)
		*NewColorIntensity = params.NewColorIntensity;
	if (resultColor != nullptr)
		*resultColor = params.resultColor;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.MultiplyLightIntensity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*         lightReference                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NewColorIntensity              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_MultiplyLightIntensity(class UObject* __WorldContext, class ULightComponent** lightReference, float* NewColorIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.MultiplyLightIntensity");

	UBP_LGT_FunctionLibrary_C_MultiplyLightIntensity_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightReference != nullptr)
		*lightReference = params.lightReference;
	if (NewColorIntensity != nullptr)
		*NewColorIntensity = params.NewColorIntensity;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightIntensity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*         lightReference                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NewColorIntensity              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateLightIntensity(class UObject* __WorldContext, class ULightComponent** lightReference, float* NewColorIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightIntensity");

	UBP_LGT_FunctionLibrary_C_UpdateLightIntensity_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightReference != nullptr)
		*lightReference = params.lightReference;
	if (NewColorIntensity != nullptr)
		*NewColorIntensity = params.NewColorIntensity;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.HelperSmoothFade
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LowerBound                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperBound                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          transitionPeriod               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_HelperSmoothFade(float CurrentValue, float LowerBound, float UpperBound, float transitionPeriod, class UObject* __WorldContext, float* FadeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.HelperSmoothFade");

	UBP_LGT_FunctionLibrary_C_HelperSmoothFade_Params params;
	params.CurrentValue = CurrentValue;
	params.LowerBound = LowerBound;
	params.UpperBound = UpperBound;
	params.transitionPeriod = transitionPeriod;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FadeValue != nullptr)
		*FadeValue = params.FadeValue;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateTimeOfDayStatus
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  rigEnumSetting                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         LightRigBase                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurHour                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          morningChangeTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          eveningChangeTime              (Parm, ZeroConstructor, IsPlainOldData)
// int                            numHoursTransition             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          LightIntensity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           updateIntensity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_UpdateTimeOfDayStatus(unsigned char rigEnumSetting, class USceneComponent* LightRigBase, float CurHour, float morningChangeTime, float eveningChangeTime, int numHoursTransition, class UObject* __WorldContext, float* LightIntensity, bool* updateIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateTimeOfDayStatus");

	UBP_LGT_FunctionLibrary_C_UpdateTimeOfDayStatus_Params params;
	params.rigEnumSetting = rigEnumSetting;
	params.LightRigBase = LightRigBase;
	params.CurHour = CurHour;
	params.morningChangeTime = morningChangeTime;
	params.eveningChangeTime = eveningChangeTime;
	params.numHoursTransition = numHoursTransition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightIntensity != nullptr)
		*LightIntensity = params.LightIntensity;
	if (updateIntensity != nullptr)
		*updateIntensity = params.updateIntensity;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetActiveCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInLevelRef                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CurrentCamLocation             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            CameraRef                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_GetActiveCamera(class AActor* ActorInLevelRef, const struct FVector& CurrentCamLocation, class UObject* __WorldContext, class ACameraActor** CameraRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetActiveCamera");

	UBP_LGT_FunctionLibrary_C_GetActiveCamera_Params params;
	params.ActorInLevelRef = ActorInLevelRef;
	params.CurrentCamLocation = CurrentCamLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraRef != nullptr)
		*CameraRef = params.CameraRef;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ActiveCameraCheck
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACameraActor*>    ActiveCameraList               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ACameraActor*            ActiveCameraRef                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_ActiveCameraCheck(class ACameraActor* ActiveCameraRef, class UObject* __WorldContext, TArray<class ACameraActor*>* ActiveCameraList, bool* EnableCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ActiveCameraCheck");

	UBP_LGT_FunctionLibrary_C_ActiveCameraCheck_Params params;
	params.ActiveCameraRef = ActiveCameraRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveCameraList != nullptr)
		*ActiveCameraList = params.ActiveCameraList;
	if (EnableCamera != nullptr)
		*EnableCamera = params.EnableCamera;
}


// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CreateDynamicMaterialInstances
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*        StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> dynMatArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_LGT_FunctionLibrary_C::STATIC_CreateDynamicMaterialInstances(class AStaticMeshActor* StaticMesh, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* dynMatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CreateDynamicMaterialInstances");

	UBP_LGT_FunctionLibrary_C_CreateDynamicMaterialInstances_Params params;
	params.StaticMesh = StaticMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dynMatArray != nullptr)
		*dynMatArray = params.dynMatArray;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
