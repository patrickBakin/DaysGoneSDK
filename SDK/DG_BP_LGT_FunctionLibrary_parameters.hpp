#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetAllShotCameras
struct UBP_LGT_FunctionLibrary_C_GetAllShotCameras_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ACameraActor*>                        shotCameras;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateFlickerIntensity
struct UBP_LGT_FunctionLibrary_C_UpdateFlickerIntensity_Params
{
	class USpotLightComponent*                         SpotLightRef;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FStruct_LGT_Flicker                         FlickerStruct;                                            // (Parm, OutParm, ReferenceParm)
	float                                              LowFreq;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HighFreq;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_LGT_Flicker                         UpdatedFlickerStruct;                                     // (Parm, OutParm)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetFlickerTime
struct UBP_LGT_FunctionLibrary_C_GetFlickerTime_Params
{
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerRateMultiplier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimelineLength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ToggleVisibilityDuringCinematics
struct UBP_LGT_FunctionLibrary_C_ToggleVisibilityDuringCinematics_Params
{
	struct FName                                       CinName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_LGT_CinMeshToggle>           CinMeshStructs;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               SetHiddenInGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CheckLightLinking
struct UBP_LGT_FunctionLibrary_C_CheckLightLinking_Params
{
	TArray<class AActor*>                              ActorRefs;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULightComponent*                             SpotLightRef;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.OverrideTimeOfDay
struct UBP_LGT_FunctionLibrary_C_OverrideTimeOfDay_Params
{
	struct FStruct_LGT_UpdateTimeOfDAy                 TimeOfDayObj;                                             // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ModifySunMoonPosition
struct UBP_LGT_FunctionLibrary_C_ModifySunMoonPosition_Params
{
	TArray<struct FStruct_LGT_ShotTimeOfDay>           PerShotTimeOfDay;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ACameraActor*                                ActiveCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMasterRig;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateCharacterParenting
struct UBP_LGT_FunctionLibrary_C_UpdateCharacterParenting_Params
{
	class AActor*                                      ParentChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentCharBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_LGT_lastFrameParentInfo             lastFrameParentCharInfo;                                  // (Parm)
	class USceneComponent*                             lightRigRoot;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UStaticMeshComponent*                        aimSphere;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               useAimSphere;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_LGT_lastFrameParentInfo             newLastFrameParentCharInfo;                               // (Parm, OutParm)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightTargetTransformations
struct UBP_LGT_FunctionLibrary_C_UpdateLightTargetTransformations_Params
{
	struct FTransform                                  lastFrameTargetTransformation;                            // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             rootReference;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             targetReference;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             lightReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  newLastFrameTargetTransformation;                         // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateEyeReflectionLightIntensity
struct UBP_LGT_FunctionLibrary_C_UpdateEyeReflectionLightIntensity_Params
{
	class UBendEyeReflectionLightComponent*            lightReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewColorIntensity;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                resultColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.MultiplyLightIntensity
struct UBP_LGT_FunctionLibrary_C_MultiplyLightIntensity_Params
{
	class ULightComponent*                             lightReference;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NewColorIntensity;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateLightIntensity
struct UBP_LGT_FunctionLibrary_C_UpdateLightIntensity_Params
{
	class ULightComponent*                             lightReference;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NewColorIntensity;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.HelperSmoothFade
struct UBP_LGT_FunctionLibrary_C_HelperSmoothFade_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LowerBound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpperBound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              transitionPeriod;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.UpdateTimeOfDayStatus
struct UBP_LGT_FunctionLibrary_C_UpdateTimeOfDayStatus_Params
{
	unsigned char                                      rigEnumSetting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LightRigBase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              morningChangeTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              eveningChangeTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numHoursTransition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               updateIntensity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.GetActiveCamera
struct UBP_LGT_FunctionLibrary_C_GetActiveCamera_Params
{
	class AActor*                                      ActorInLevelRef;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentCamLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                CameraRef;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.ActiveCameraCheck
struct UBP_LGT_FunctionLibrary_C_ActiveCameraCheck_Params
{
	TArray<class ACameraActor*>                        ActiveCameraList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ACameraActor*                                ActiveCameraRef;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LGT_FunctionLibrary.BP_LGT_FunctionLibrary_C.CreateDynamicMaterialInstances
struct UBP_LGT_FunctionLibrary_C_CreateDynamicMaterialInstances_Params
{
	class AStaticMeshActor*                            StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            dynMatArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
