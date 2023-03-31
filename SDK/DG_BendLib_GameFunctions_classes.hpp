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

// BlueprintGeneratedClass BendLib_GameFunctions.BendLib_GameFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_GameFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_GameFunctions.BendLib_GameFunctions_C");
		return ptr;
	}


	void STATIC_Game_MiniMapRouteVisibleToggle(bool Visible, class UObject* __WorldContext);
	void STATIC_Game_MiniMapListRouteEnable(class UObject* __WorldContext, TArray<class AActor*>* DestinationsList);
	void STATIC_SetupPOI(class ABendPOI* POI, float NearDistance, float FarDistance, float MaxPriority, const struct FString& POIType, bool LimitToDefendZone, bool LimitToPOIType, bool CanUseUnaware, bool CanUseSemiAware, bool CanUseAware, class UObject* __WorldContext, TArray<class ABendPOISlot*>* Slots, bool* Failure);
	void STATIC_Game_MissionCinTelePlayerBegin(class AActor* Destination, class UObject* __WorldContext, bool* Success);
	void STATIC_Game_WeatherUpdateAudioComponent(class UAudioComponent* AudioComponent, const struct FName& CC_Tag, bool StopSound, TEnumAsByte<Enum_Weather_Intensity> intensity, class UObject* __WorldContext);
	void STATIC_Game_SetAnchorTransform_Controller(class AController* Controller, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext);
	void STATIC_Game_SetAnchorTransform_Character(class ACharacter* Character, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext);
	void STATIC_Game_SetAnchorTransform_SkelMesh(class USkeletalMeshComponent* SkeletalMeshComponent, class AActor* SnapToObject, const struct FName& AnchorName, class UObject* __WorldContext);
	void STATIC_Game_TeleportPlayerToLocation(const struct FVector& Location, const struct FRotator& Rotation, bool ForceCameraUpdate, bool AutoAddCapsuleOffset, bool MoveBikeIfInTheWay, class UObject* __WorldContext, bool* Result);
	void STATIC_SetupAmbientSpawnLocation(class AAmbientSpawnLocation_C* SpawnLocation, class ABendAmbientSpawnArea* SpawnArea, const struct FVector& SpawnBoxExtent, int MaxSpawns, bool IgnoreInnerRadius, bool Important, const struct FString& POIType, class ABendPOI* OverridePOIToUse, bool CanSpawnDay, bool CanSpawnNight, bool activeLocation, bool DebugIgnoreLosCheck, const struct FDefendZoneInfo& DefendZoneInfo, bool ScreamOnAware, bool CanGrapple, class UObject* __WorldContext, TArray<struct FBendAmbientSpawnType>* ForceSpawnTypes, bool* Failure);
	void STATIC_Game_MiniMapRouteDisabled(class UObject* __WorldContext);
	void STATIC_Game_MiniMapRouteEnable(class AActor* StartDestination, class AActor* EndDestination, class UObject* __WorldContext);
	void STATIC_Game_TeleportPlayer(class AActor* Destination, class UObject* __WorldContext, bool* Result);
	void STATIC_Game_Setup(class ABendWorldManager* WorldManager, class ABendWorldSpec* StartWorldSpec, class UObject* __WorldContext);
	void STATIC_Game_EnablePlayerMovement(class UObject* __WorldContext);
	void STATIC_Game_DisablePlayerMovement(class UObject* __WorldContext);
	void STATIC_Game_PlayerBikeSetup(bool UsePreviousPosition, class UObject* __WorldContext);
	void STATIC_DisableActorNoCollision(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_EnableActorNoCollision(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_DisableActor(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_EnableActor(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_Game_TeleportBikeToPlayer(class UObject* __WorldContext, bool* Success);
	void STATIC_Game_GetBikeOffset(class AActor* Actor, class UObject* __WorldContext, struct FVector* Location, struct FRotator* Rotation);
	void STATIC_Game_TeleportPlayerAndBike(class AActor* Destination, class UObject* __WorldContext, bool* Result);
	void STATIC_DisableHUD(class UObject* __WorldContext);
	void STATIC_EnableHUD(class UObject* __WorldContext);
	void STATIC_HideActor(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_ShowActor(class AActor* Actor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
