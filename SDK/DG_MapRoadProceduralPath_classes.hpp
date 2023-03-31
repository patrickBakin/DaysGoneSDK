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

// BlueprintGeneratedClass MapRoadProceduralPath.MapRoadProceduralPath_C
// 0x00BC (0x0404 - 0x0348)
class AMapRoadProceduralPath_C : public AActor
{
public:
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ActiveColor;                                              // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Verts;                                                    // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Tris;                                                     // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector2D>                           UV;                                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      SegmentLength;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              LastLength;                                               // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Segments;                                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPathPoint>                          TestPoints;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Normals;                                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NextSectionIndex;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BlockedColor;                                             // 0x03E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TranslucentSortPriority;                                  // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RadialSteps;                                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MapRoadProceduralPath.MapRoadProceduralPath_C");
		return ptr;
	}


	void AddDots(const struct FPathPoint& Start_Point, const struct FPathPoint& End_Point);
	void MakeDot(int Steps, const struct FPathPoint& Point, float Radius, float angle, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs);
	void GetSubSection(int StartIndex, int EndIndex, TArray<struct FVector>* InVerts, TArray<int>* InTris, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs, float* TotalLength);
	void AddSection(float InLength, const struct FLinearColor& Color, class UMaterialInterface* Material, TArray<struct FVector>* InVerts, TArray<int>* InTris, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, class UMaterialInstanceDynamic** Mid);
	void MakeArcCap(int Steps, const struct FPathPoint& WorldPointTip, const struct FPathPoint& WorldPointNext, float Radius, bool Flip, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs);
	void ResetVars();
	void MakeSection(TArray<struct FPathPoint>* SectionWorldPoints, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs, float* TotalLength, TArray<struct FVector>* Segments);
	void AngleBetweenVectors(const struct FVector& A, const struct FVector& B, float* AngleDegrees);
	void SetActiveColor(const struct FLinearColor& Color);
	void ResetPath();
	void BuildPath(int TranslucentSortPriority, float Width, bool DashedStart, bool DashedEnd, TArray<struct FPathPoint>* WorldPathPoints);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
