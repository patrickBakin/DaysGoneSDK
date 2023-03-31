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

// Function MapRoadSpline.MapRoadSpline_C.SetActiveColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadSpline_C::SetActiveColor(const struct FLinearColor& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.SetActiveColor");

	AMapRoadSpline_C_SetActiveColor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadSpline.MapRoadSpline_C.BuildSplineLinear
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         WorldPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Meta                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadSpline_C::BuildSplineLinear(float Scale, const struct FLinearColor& Color, int TranslucentSortPriority, TArray<struct FVector>* WorldPoints, TArray<struct FVector>* Meta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.BuildSplineLinear");

	AMapRoadSpline_C_BuildSplineLinear_Params params;
	params.Scale = Scale;
	params.Color = Color;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldPoints != nullptr)
		*WorldPoints = params.WorldPoints;
	if (Meta != nullptr)
		*Meta = params.Meta;
}


// Function MapRoadSpline.MapRoadSpline_C.BuildSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         WorldPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadSpline_C::BuildSpline(float Scale, TArray<struct FVector>* WorldPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.BuildSpline");

	AMapRoadSpline_C_BuildSpline_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldPoints != nullptr)
		*WorldPoints = params.WorldPoints;
}


// Function MapRoadSpline.MapRoadSpline_C.ResetSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMapRoadSpline_C::ResetSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.ResetSpline");

	AMapRoadSpline_C_ResetSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadSpline.MapRoadSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapRoadSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.UserConstructionScript");

	AMapRoadSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadSpline.MapRoadSpline_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMapRoadSpline_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.ReceiveBeginPlay");

	AMapRoadSpline_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadSpline.MapRoadSpline_C.UpdateSpline
// (BlueprintCallable, BlueprintEvent)

void AMapRoadSpline_C::UpdateSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.UpdateSpline");

	AMapRoadSpline_C_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapRoadSpline.MapRoadSpline_C.ExecuteUbergraph_MapRoadSpline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapRoadSpline_C::ExecuteUbergraph_MapRoadSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapRoadSpline.MapRoadSpline_C.ExecuteUbergraph_MapRoadSpline");

	AMapRoadSpline_C_ExecuteUbergraph_MapRoadSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
