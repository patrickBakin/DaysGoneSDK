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

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddDots
struct AMapRoadProceduralPath_C_AddDots_Params
{
	struct FPathPoint                                  Start_Point;                                              // (Parm)
	struct FPathPoint                                  End_Point;                                                // (Parm)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeDot
struct AMapRoadProceduralPath_C_MakeDot_Params
{
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPathPoint                                  Point;                                                    // (Parm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutVerts;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutTris;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OutNormals;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           OutUVs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.GetSubSection
struct AMapRoadProceduralPath_C_GetSubSection_Params
{
	TArray<struct FVector>                             InVerts;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        InTris;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             InNormals;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           InUVs;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutVerts;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutTris;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OutNormals;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           OutUVs;                                                   // (Parm, OutParm, ZeroConstructor)
	float                                              TotalLength;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddSection
struct AMapRoadProceduralPath_C_AddSection_Params
{
	TArray<struct FVector>                             InVerts;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        InTris;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             InNormals;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           InUVs;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeArcCap
struct AMapRoadProceduralPath_C_MakeArcCap_Params
{
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPathPoint                                  WorldPointTip;                                            // (Parm)
	struct FPathPoint                                  WorldPointNext;                                           // (Parm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Flip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutVerts;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutTris;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OutNormals;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           OutUVs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetVars
struct AMapRoadProceduralPath_C_ResetVars_Params
{
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeSection
struct AMapRoadProceduralPath_C_MakeSection_Params
{
	TArray<struct FPathPoint>                          SectionWorldPoints;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             OutVerts;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutTris;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OutNormals;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           OutUVs;                                                   // (Parm, OutParm, ZeroConstructor)
	float                                              TotalLength;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Segments;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AngleBetweenVectors
struct AMapRoadProceduralPath_C_AngleBetweenVectors_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDegrees;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.SetActiveColor
struct AMapRoadProceduralPath_C_SetActiveColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetPath
struct AMapRoadProceduralPath_C_ResetPath_Params
{
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.BuildPath
struct AMapRoadProceduralPath_C_BuildPath_Params
{
	TArray<struct FPathPoint>                          WorldPathPoints;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DashedStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DashedEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.UserConstructionScript
struct AMapRoadProceduralPath_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
