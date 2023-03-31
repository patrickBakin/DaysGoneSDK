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

// Function BendLib_DesignMath.BendLib_DesignMath_C.getRegionLevelPaths
struct UBendLib_DesignMath_C_getRegionLevelPaths_Params
{
	TEnumAsByte<EWorldRegions>                         Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnAllRegions;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_RegionLevels>                levelList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.getPowerGridRegionFromVector
struct UBendLib_DesignMath_C_getPowerGridRegionFromVector_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPowerGrid_Enum>                       powerGridRegion;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.getSectorlistFromPowerGridRegion
struct UBendLib_DesignMath_C_getSectorlistFromPowerGridRegion_Params
{
	TEnumAsByte<EPowerGrid_Enum>                       Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnAllRegions;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Sectors;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetRegionFromVector
struct UBendLib_DesignMath_C_GetRegionFromVector_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         Region;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorlistFromRegion
struct UBendLib_DesignMath_C_GetSectorlistFromRegion_Params
{
	TEnumAsByte<EWorldRegions>                         Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnAllRegions;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Sectors;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorFromVector
struct UBendLib_DesignMath_C_GetSectorFromVector_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstPart;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SecondPart;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Formatted;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.ClosestToActorA
struct UBendLib_DesignMath_C_ClosestToActorA_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OtherActors;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClosestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetAnchorAroundPoint
struct UBendLib_DesignMath_C_GetAnchorAroundPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetDistanceFromObject;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoredActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Anchor;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ValidAnchor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.IsIntInRangeInclusive
struct UBendLib_DesignMath_C_IsIntInRangeInclusive_Params
{
	int                                                IntToCheck;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntMin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIntInRange;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                IntMinOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                IntMaxOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.IsRightOrLeftFromActor
struct UBendLib_DesignMath_C_IsRightOrLeftFromActor_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Direction>                        Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustumWithLOS
struct UBendLib_DesignMath_C_IsInCameraViewFrustumWithLOS_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInCameraView;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustum
struct UBendLib_DesignMath_C_IsInCameraViewFrustum_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInCameraView;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.RelativeDirectionFromActor
struct UBendLib_DesignMath_C_RelativeDirectionFromActor_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Direction>                        Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.DoesActorA HaveLOS ToActorB
struct UBendLib_DesignMath_C_DoesActorA_HaveLOS_ToActorB_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Actor_A_Offset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasLOS;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.CalculateVerticalFOV
struct UBendLib_DesignMath_C_CalculateVerticalFOV_Params
{
	float                                              HorizontalFOV;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalResolution;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalResolution;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFOV;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetPitchAngleFromActorAForward
struct UBendLib_DesignMath_C_GetPitchAngleFromActorAForward_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetDeltaAngle
struct UBendLib_DesignMath_C_GetDeltaAngle_Params
{
	float                                              AngleA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShortestAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignMath.BendLib_DesignMath_C.GetYawAngleFromActorAForward
struct UBendLib_DesignMath_C_GetYawAngleFromActorAForward_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
