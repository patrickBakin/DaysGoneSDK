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

// BlueprintGeneratedClass BendLib_DesignMath.BendLib_DesignMath_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_DesignMath_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_DesignMath.BendLib_DesignMath_C");
		return ptr;
	}


	void STATIC_getRegionLevelPaths(TEnumAsByte<EWorldRegions> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FStruct_RegionLevels>* levelList);
	void STATIC_getPowerGridRegionFromVector(const struct FVector& Location, class UObject* __WorldContext, TEnumAsByte<EPowerGrid_Enum>* powerGridRegion, struct FName* Sector);
	void STATIC_getSectorlistFromPowerGridRegion(TEnumAsByte<EPowerGrid_Enum> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FName>* Sectors);
	void STATIC_GetRegionFromVector(const struct FVector& Location, class UObject* __WorldContext, TEnumAsByte<EWorldRegions>* Region, struct FName* Sector);
	void STATIC_GetSectorlistFromRegion(TEnumAsByte<EWorldRegions> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FName>* Sectors);
	void STATIC_GetSectorFromVector(const struct FVector& Location, class UObject* __WorldContext, int* FirstPart, int* SecondPart, struct FString* Formatted);
	void STATIC_ClosestToActorA(class AActor* ActorA, class UObject* __WorldContext, TArray<class AActor*>* OtherActors, class AActor** ClosestActor, float* Distance);
	void STATIC_GetAnchorAroundPoint(const struct FVector& Location, float OffsetDistanceFromObject, class AActor* IgnoredActor, class UObject* __WorldContext, struct FTransform* Anchor, bool* ValidAnchor);
	void STATIC_IsIntInRangeInclusive(int IntToCheck, int IntMin, int IntMax, class UObject* __WorldContext, bool* IsIntInRange, int* IntMinOut, int* IntMaxOut);
	void STATIC_IsRightOrLeftFromActor(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, TEnumAsByte<Enum_Direction>* Direction);
	void STATIC_IsInCameraViewFrustumWithLOS(class AActor* Target, class UObject* __WorldContext, bool* IsInCameraView);
	void STATIC_IsInCameraViewFrustum(class AActor* Target, class UObject* __WorldContext, bool* IsInCameraView);
	void STATIC_RelativeDirectionFromActor(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, TEnumAsByte<Enum_Direction>* Direction);
	void STATIC_DoesActorA_HaveLOS_ToActorB(class AActor* ActorA, class AActor* ActorB, const struct FVector& Actor_A_Offset, class UObject* __WorldContext, bool* HasLOS);
	void STATIC_CalculateVerticalFOV(float HorizontalFOV, float HorizontalResolution, float VerticalResolution, class UObject* __WorldContext, float* VerticalFOV);
	void STATIC_GetPitchAngleFromActorAForward(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* angle);
	void STATIC_GetDeltaAngle(float AngleA, float AngleB, class UObject* __WorldContext, float* ShortestAngle);
	void STATIC_GetYawAngleFromActorAForward(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* angle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
