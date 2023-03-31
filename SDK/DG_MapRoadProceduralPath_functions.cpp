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

// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddDots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPathPoint              Start_Point                    (Parm)
// struct FPathPoint              End_Point                      (Parm)

void AMapRoadProceduralPath_C::AddDots(const struct FPathPoint& Start_Point, const struct FPathPoint& End_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddDots");

	AMapRoadProceduralPath_C_AddDots_Params params;
	params.Start_Point = Start_Point;
	params.End_Point = End_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeDot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Steps                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPathPoint              Point                          (Parm)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutVerts                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutTris                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         OutNormals                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       OutUVs                         (Parm, OutParm, ZeroConstructor)

void AMapRoadProceduralPath_C::MakeDot(int Steps, const struct FPathPoint& Point, float Radius, float angle, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeDot");

	AMapRoadProceduralPath_C_MakeDot_Params params;
	params.Steps = Steps;
	params.Point = Point;
	params.Radius = Radius;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVerts != nullptr)
		*OutVerts = params.OutVerts;
	if (OutTris != nullptr)
		*OutTris = params.OutTris;
	if (OutNormals != nullptr)
		*OutNormals = params.OutNormals;
	if (OutUVs != nullptr)
		*OutUVs = params.OutUVs;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.GetSubSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         InVerts                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    InTris                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         InNormals                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       InUVs                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutVerts                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutTris                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         OutNormals                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       OutUVs                         (Parm, OutParm, ZeroConstructor)
// float                          TotalLength                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMapRoadProceduralPath_C::GetSubSection(int StartIndex, int EndIndex, TArray<struct FVector>* InVerts, TArray<int>* InTris, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs, float* TotalLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.GetSubSection");

	AMapRoadProceduralPath_C_GetSubSection_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVerts != nullptr)
		*InVerts = params.InVerts;
	if (InTris != nullptr)
		*InTris = params.InTris;
	if (InNormals != nullptr)
		*InNormals = params.InNormals;
	if (InUVs != nullptr)
		*InUVs = params.InUVs;
	if (OutVerts != nullptr)
		*OutVerts = params.OutVerts;
	if (OutTris != nullptr)
		*OutTris = params.OutTris;
	if (OutNormals != nullptr)
		*OutNormals = params.OutNormals;
	if (OutUVs != nullptr)
		*OutUVs = params.OutUVs;
	if (TotalLength != nullptr)
		*TotalLength = params.TotalLength;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         InVerts                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    InTris                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         InNormals                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       InUVs                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InLength                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMapRoadProceduralPath_C::AddSection(float InLength, const struct FLinearColor& Color, class UMaterialInterface* Material, TArray<struct FVector>* InVerts, TArray<int>* InTris, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, class UMaterialInstanceDynamic** Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.AddSection");

	AMapRoadProceduralPath_C_AddSection_Params params;
	params.InLength = InLength;
	params.Color = Color;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVerts != nullptr)
		*InVerts = params.InVerts;
	if (InTris != nullptr)
		*InTris = params.InTris;
	if (InNormals != nullptr)
		*InNormals = params.InNormals;
	if (InUVs != nullptr)
		*InUVs = params.InUVs;
	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeArcCap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Steps                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPathPoint              WorldPointTip                  (Parm)
// struct FPathPoint              WorldPointNext                 (Parm)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Flip                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutVerts                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutTris                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         OutNormals                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       OutUVs                         (Parm, OutParm, ZeroConstructor)

void AMapRoadProceduralPath_C::MakeArcCap(int Steps, const struct FPathPoint& WorldPointTip, const struct FPathPoint& WorldPointNext, float Radius, bool Flip, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeArcCap");

	AMapRoadProceduralPath_C_MakeArcCap_Params params;
	params.Steps = Steps;
	params.WorldPointTip = WorldPointTip;
	params.WorldPointNext = WorldPointNext;
	params.Radius = Radius;
	params.Flip = Flip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVerts != nullptr)
		*OutVerts = params.OutVerts;
	if (OutTris != nullptr)
		*OutTris = params.OutTris;
	if (OutNormals != nullptr)
		*OutNormals = params.OutNormals;
	if (OutUVs != nullptr)
		*OutUVs = params.OutUVs;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetVars
// (Public, BlueprintCallable, BlueprintEvent)

void AMapRoadProceduralPath_C::ResetVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetVars");

	AMapRoadProceduralPath_C_ResetVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeSection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPathPoint>      SectionWorldPoints             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         OutVerts                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutTris                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         OutNormals                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       OutUVs                         (Parm, OutParm, ZeroConstructor)
// float                          TotalLength                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Segments                       (Parm, OutParm, ZeroConstructor)

void AMapRoadProceduralPath_C::MakeSection(TArray<struct FPathPoint>* SectionWorldPoints, TArray<struct FVector>* OutVerts, TArray<int>* OutTris, TArray<struct FVector>* OutNormals, TArray<struct FVector2D>* OutUVs, float* TotalLength, TArray<struct FVector>* Segments)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.MakeSection");

	AMapRoadProceduralPath_C_MakeSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionWorldPoints != nullptr)
		*SectionWorldPoints = params.SectionWorldPoints;
	if (OutVerts != nullptr)
		*OutVerts = params.OutVerts;
	if (OutTris != nullptr)
		*OutTris = params.OutTris;
	if (OutNormals != nullptr)
		*OutNormals = params.OutNormals;
	if (OutUVs != nullptr)
		*OutUVs = params.OutUVs;
	if (TotalLength != nullptr)
		*TotalLength = params.TotalLength;
	if (Segments != nullptr)
		*Segments = params.Segments;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.AngleBetweenVectors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleDegrees                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMapRoadProceduralPath_C::AngleBetweenVectors(const struct FVector& A, const struct FVector& B, float* AngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.AngleBetweenVectors");

	AMapRoadProceduralPath_C_AngleBetweenVectors_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleDegrees != nullptr)
		*AngleDegrees = params.AngleDegrees;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.SetActiveColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadProceduralPath_C::SetActiveColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.SetActiveColor");

	AMapRoadProceduralPath_C_SetActiveColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetPath
// (Public, BlueprintCallable, BlueprintEvent)

void AMapRoadProceduralPath_C::ResetPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.ResetPath");

	AMapRoadProceduralPath_C_ResetPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.BuildPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPathPoint>      WorldPathPoints                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DashedStart                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DashedEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadProceduralPath_C::BuildPath(int TranslucentSortPriority, float Width, bool DashedStart, bool DashedEnd, TArray<struct FPathPoint>* WorldPathPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.BuildPath");

	AMapRoadProceduralPath_C_BuildPath_Params params;
	params.TranslucentSortPriority = TranslucentSortPriority;
	params.Width = Width;
	params.DashedStart = DashedStart;
	params.DashedEnd = DashedEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldPathPoints != nullptr)
		*WorldPathPoints = params.WorldPathPoints;
}


// Function MapRoadProceduralPath.MapRoadProceduralPath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapRoadProceduralPath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadProceduralPath.MapRoadProceduralPath_C.UserConstructionScript");

	AMapRoadProceduralPath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
