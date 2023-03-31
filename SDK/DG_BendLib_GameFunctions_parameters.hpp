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

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteVisibleToggle
struct UBendLib_GameFunctions_C_Game_MiniMapRouteVisibleToggle_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapListRouteEnable
struct UBendLib_GameFunctions_C_Game_MiniMapListRouteEnable_Params
{
	TArray<class AActor*>                              DestinationsList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupPOI
struct UBendLib_GameFunctions_C_SetupPOI_Params
{
	class ABendPOI*                                    POI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABendPOISlot*>                        Slots;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              NearDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FarDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     POIType;                                                  // (Parm, ZeroConstructor)
	bool                                               LimitToDefendZone;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LimitToPOIType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseUnaware;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseSemiAware;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseAware;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failure;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MissionCinTelePlayerBegin
struct UBendLib_GameFunctions_C_Game_MissionCinTelePlayerBegin_Params
{
	class AActor*                                      Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-WeatherUpdateAudioComponent
struct UBendLib_GameFunctions_C_Game_WeatherUpdateAudioComponent_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CC_Tag;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Weather_Intensity>                intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Controller
struct UBendLib_GameFunctions_C_Game_SetAnchorTransform_Controller_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SnapToObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnchorName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Character
struct UBendLib_GameFunctions_C_Game_SetAnchorTransform_Character_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SnapToObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnchorName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-SkelMesh
struct UBendLib_GameFunctions_C_Game_SetAnchorTransform_SkelMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SnapToObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnchorName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerToLocation
struct UBendLib_GameFunctions_C_Game_TeleportPlayerToLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceCameraUpdate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoAddCapsuleOffset;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MoveBikeIfInTheWay;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupAmbientSpawnLocation
struct UBendLib_GameFunctions_C_SetupAmbientSpawnLocation_Params
{
	class AAmbientSpawnLocation_C*                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendAmbientSpawnArea*                       SpawnArea;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnBoxExtent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawns;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBendAmbientSpawnType>               ForceSpawnTypes;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IgnoreInnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Important;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     POIType;                                                  // (Parm, ZeroConstructor)
	class ABendPOI*                                    OverridePOIToUse;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawnDay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawnNight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               activeLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugIgnoreLosCheck;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDefendZoneInfo                             DefendZoneInfo;                                           // (Parm)
	bool                                               ScreamOnAware;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanGrapple;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failure;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteDisabled
struct UBendLib_GameFunctions_C_Game_MiniMapRouteDisabled_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteEnable
struct UBendLib_GameFunctions_C_Game_MiniMapRouteEnable_Params
{
	class AActor*                                      StartDestination;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EndDestination;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayer
struct UBendLib_GameFunctions_C_Game_TeleportPlayer_Params
{
	class AActor*                                      Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-Setup
struct UBendLib_GameFunctions_C_Game_Setup_Params
{
	class ABendWorldManager*                           WorldManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWorldSpec*                              StartWorldSpec;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-EnablePlayerMovement
struct UBendLib_GameFunctions_C_Game_EnablePlayerMovement_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-DisablePlayerMovement
struct UBendLib_GameFunctions_C_Game_DisablePlayerMovement_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-PlayerBikeSetup
struct UBendLib_GameFunctions_C_Game_PlayerBikeSetup_Params
{
	bool                                               UsePreviousPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActorNoCollision
struct UBendLib_GameFunctions_C_DisableActorNoCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActorNoCollision
struct UBendLib_GameFunctions_C_EnableActorNoCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActor
struct UBendLib_GameFunctions_C_DisableActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActor
struct UBendLib_GameFunctions_C_EnableActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportBikeToPlayer
struct UBendLib_GameFunctions_C_Game_TeleportBikeToPlayer_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-GetBikeOffset
struct UBendLib_GameFunctions_C_Game_GetBikeOffset_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerAndBike
struct UBendLib_GameFunctions_C_Game_TeleportPlayerAndBike_Params
{
	class AActor*                                      Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableHUD
struct UBendLib_GameFunctions_C_DisableHUD_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableHUD
struct UBendLib_GameFunctions_C_EnableHUD_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.HideActor
struct UBendLib_GameFunctions_C_HideActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.ShowActor
struct UBendLib_GameFunctions_C_ShowActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
