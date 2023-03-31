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

// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteVisibleToggle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_MiniMapRouteVisibleToggle(bool Visible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteVisibleToggle");

	UBendLib_GameFunctions_C_Game_MiniMapRouteVisibleToggle_Params params;
	params.Visible = Visible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapListRouteEnable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          DestinationsList               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_MiniMapListRouteEnable(class UObject* __WorldContext, TArray<class AActor*>* DestinationsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapListRouteEnable");

	UBendLib_GameFunctions_C_Game_MiniMapListRouteEnable_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestinationsList != nullptr)
		*DestinationsList = params.DestinationsList;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupPOI
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOI*                POI                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABendPOISlot*>    Slots                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          NearDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FarDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPriority                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 POIType                        (Parm, ZeroConstructor)
// bool                           LimitToDefendZone              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LimitToPOIType                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUseUnaware                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUseSemiAware                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUseAware                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failure                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_SetupPOI(class ABendPOI* POI, float NearDistance, float FarDistance, float MaxPriority, const struct FString& POIType, bool LimitToDefendZone, bool LimitToPOIType, bool CanUseUnaware, bool CanUseSemiAware, bool CanUseAware, class UObject* __WorldContext, TArray<class ABendPOISlot*>* Slots, bool* Failure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupPOI");

	UBendLib_GameFunctions_C_SetupPOI_Params params;
	params.POI = POI;
	params.NearDistance = NearDistance;
	params.FarDistance = FarDistance;
	params.MaxPriority = MaxPriority;
	params.POIType = POIType;
	params.LimitToDefendZone = LimitToDefendZone;
	params.LimitToPOIType = LimitToPOIType;
	params.CanUseUnaware = CanUseUnaware;
	params.CanUseSemiAware = CanUseSemiAware;
	params.CanUseAware = CanUseAware;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;
	if (Failure != nullptr)
		*Failure = params.Failure;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MissionCinTelePlayerBegin
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_MissionCinTelePlayerBegin(class AActor* Destination, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MissionCinTelePlayerBegin");

	UBendLib_GameFunctions_C_Game_MissionCinTelePlayerBegin_Params params;
	params.Destination = Destination;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-WeatherUpdateAudioComponent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CC_Tag                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopSound                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Weather_Intensity> intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_WeatherUpdateAudioComponent(class UAudioComponent* AudioComponent, const struct FName& CC_Tag, bool StopSound, TEnumAsByte<Enum_Weather_Intensity> intensity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-WeatherUpdateAudioComponent");

	UBendLib_GameFunctions_C_Game_WeatherUpdateAudioComponent_Params params;
	params.AudioComponent = AudioComponent;
	params.CC_Tag = CC_Tag;
	params.StopSound = StopSound;
	params.intensity = intensity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Controller
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SnapToObject                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AnchorName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_SetAnchorTransform_Controller(class AController* Controller, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Controller");

	UBendLib_GameFunctions_C_Game_SetAnchorTransform_Controller_Params params;
	params.Controller = Controller;
	params.SnapToObject = SnapToObject;
	params.AnchorName = AnchorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Character
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SnapToObject                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AnchorName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_SetAnchorTransform_Character(class ACharacter* Character, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-Character");

	UBendLib_GameFunctions_C_Game_SetAnchorTransform_Character_Params params;
	params.Character = Character;
	params.SnapToObject = SnapToObject;
	params.AnchorName = AnchorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-SkelMesh
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SnapToObject                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AnchorName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_SetAnchorTransform_SkelMesh(class USkeletalMeshComponent* SkeletalMeshComponent, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-SetAnchorTransform-SkelMesh");

	UBendLib_GameFunctions_C_Game_SetAnchorTransform_SkelMesh_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.SnapToObject = SnapToObject;
	params.AnchorName = AnchorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerToLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceCameraUpdate              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoAddCapsuleOffset           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MoveBikeIfInTheWay             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_TeleportPlayerToLocation(const struct FVector& Location, const struct FRotator& Rotation, bool ForceCameraUpdate, bool AutoAddCapsuleOffset, bool MoveBikeIfInTheWay, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerToLocation");

	UBendLib_GameFunctions_C_Game_TeleportPlayerToLocation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ForceCameraUpdate = ForceCameraUpdate;
	params.AutoAddCapsuleOffset = AutoAddCapsuleOffset;
	params.MoveBikeIfInTheWay = MoveBikeIfInTheWay;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupAmbientSpawnLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSpawnLocation_C* SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABendAmbientSpawnArea*   SpawnArea                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnBoxExtent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxSpawns                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBendAmbientSpawnType> ForceSpawnTypes                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IgnoreInnerRadius              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Important                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 POIType                        (Parm, ZeroConstructor)
// class ABendPOI*                OverridePOIToUse               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawnDay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawnNight                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           activeLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugIgnoreLosCheck            (Parm, ZeroConstructor, IsPlainOldData)
// struct FDefendZoneInfo         DefendZoneInfo                 (Parm)
// bool                           ScreamOnAware                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanGrapple                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failure                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_SetupAmbientSpawnLocation(class AAmbientSpawnLocation_C* SpawnLocation, class ABendAmbientSpawnArea* SpawnArea, const struct FVector& SpawnBoxExtent, int MaxSpawns, bool IgnoreInnerRadius, bool Important, const struct FString& POIType, class ABendPOI* OverridePOIToUse, bool CanSpawnDay, bool CanSpawnNight, bool activeLocation, bool DebugIgnoreLosCheck, const struct FDefendZoneInfo& DefendZoneInfo, bool ScreamOnAware, bool CanGrapple, class UObject* __WorldContext, TArray<struct FBendAmbientSpawnType>* ForceSpawnTypes, bool* Failure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.SetupAmbientSpawnLocation");

	UBendLib_GameFunctions_C_SetupAmbientSpawnLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnArea = SpawnArea;
	params.SpawnBoxExtent = SpawnBoxExtent;
	params.MaxSpawns = MaxSpawns;
	params.IgnoreInnerRadius = IgnoreInnerRadius;
	params.Important = Important;
	params.POIType = POIType;
	params.OverridePOIToUse = OverridePOIToUse;
	params.CanSpawnDay = CanSpawnDay;
	params.CanSpawnNight = CanSpawnNight;
	params.activeLocation = activeLocation;
	params.DebugIgnoreLosCheck = DebugIgnoreLosCheck;
	params.DefendZoneInfo = DefendZoneInfo;
	params.ScreamOnAware = ScreamOnAware;
	params.CanGrapple = CanGrapple;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForceSpawnTypes != nullptr)
		*ForceSpawnTypes = params.ForceSpawnTypes;
	if (Failure != nullptr)
		*Failure = params.Failure;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteDisabled
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_MiniMapRouteDisabled(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteDisabled");

	UBendLib_GameFunctions_C_Game_MiniMapRouteDisabled_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteEnable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  StartDestination               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EndDestination                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_MiniMapRouteEnable(class AActor* StartDestination, class AActor* EndDestination, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-MiniMapRouteEnable");

	UBendLib_GameFunctions_C_Game_MiniMapRouteEnable_Params params;
	params.StartDestination = StartDestination;
	params.EndDestination = EndDestination;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_TeleportPlayer(class AActor* Destination, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayer");

	UBendLib_GameFunctions_C_Game_TeleportPlayer_Params params;
	params.Destination = Destination;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-Setup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWorldManager*       WorldManager                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWorldSpec*          StartWorldSpec                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_Setup(class ABendWorldManager* WorldManager, class ABendWorldSpec* StartWorldSpec, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-Setup");

	UBendLib_GameFunctions_C_Game_Setup_Params params;
	params.WorldManager = WorldManager;
	params.StartWorldSpec = StartWorldSpec;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-EnablePlayerMovement
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_EnablePlayerMovement(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-EnablePlayerMovement");

	UBendLib_GameFunctions_C_Game_EnablePlayerMovement_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-DisablePlayerMovement
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_DisablePlayerMovement(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-DisablePlayerMovement");

	UBendLib_GameFunctions_C_Game_DisablePlayerMovement_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-PlayerBikeSetup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsePreviousPosition            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_PlayerBikeSetup(bool UsePreviousPosition, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-PlayerBikeSetup");

	UBendLib_GameFunctions_C_Game_PlayerBikeSetup_Params params;
	params.UsePreviousPosition = UsePreviousPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActorNoCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_DisableActorNoCollision(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActorNoCollision");

	UBendLib_GameFunctions_C_DisableActorNoCollision_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActorNoCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_EnableActorNoCollision(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActorNoCollision");

	UBendLib_GameFunctions_C_EnableActorNoCollision_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_DisableActor(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableActor");

	UBendLib_GameFunctions_C_DisableActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_EnableActor(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableActor");

	UBendLib_GameFunctions_C_EnableActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportBikeToPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_TeleportBikeToPlayer(class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportBikeToPlayer");

	UBendLib_GameFunctions_C_Game_TeleportBikeToPlayer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-GetBikeOffset
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_GetBikeOffset(class AActor* Actor, class UObject* __WorldContext, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-GetBikeOffset");

	UBendLib_GameFunctions_C_Game_GetBikeOffset_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerAndBike
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_Game_TeleportPlayerAndBike(class AActor* Destination, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.Game-TeleportPlayerAndBike");

	UBendLib_GameFunctions_C_Game_TeleportPlayerAndBike_Params params;
	params.Destination = Destination;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableHUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_DisableHUD(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.DisableHUD");

	UBendLib_GameFunctions_C_DisableHUD_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableHUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_EnableHUD(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.EnableHUD");

	UBendLib_GameFunctions_C_EnableHUD_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.HideActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_HideActor(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.HideActor");

	UBendLib_GameFunctions_C_HideActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameFunctions.BendLib_GameFunctions_C.ShowActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameFunctions_C::STATIC_ShowActor(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameFunctions.BendLib_GameFunctions_C.ShowActor");

	UBendLib_GameFunctions_C_ShowActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
