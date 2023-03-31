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

// Function BendLib_DesignMath.BendLib_DesignMath_C.getRegionLevelPaths
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWorldRegions>     Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnAllRegions               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FStruct_RegionLevels> levelList                      (Parm, OutParm, ZeroConstructor)

void UBendLib_DesignMath_C::STATIC_getRegionLevelPaths(TEnumAsByte<EWorldRegions> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FStruct_RegionLevels>* levelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.getRegionLevelPaths");

	UBendLib_DesignMath_C_getRegionLevelPaths_Params params;
	params.Region = Region;
	params.ReturnAllRegions = ReturnAllRegions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (levelList != nullptr)
		*levelList = params.levelList;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.getPowerGridRegionFromVector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPowerGrid_Enum>   powerGridRegion                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Sector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_getPowerGridRegionFromVector(const struct FVector& Location, class UObject* __WorldContext, TEnumAsByte<EPowerGrid_Enum>* powerGridRegion, struct FName* Sector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.getPowerGridRegionFromVector");

	UBendLib_DesignMath_C_getPowerGridRegionFromVector_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (powerGridRegion != nullptr)
		*powerGridRegion = params.powerGridRegion;
	if (Sector != nullptr)
		*Sector = params.Sector;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.getSectorlistFromPowerGridRegion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPowerGrid_Enum>   Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnAllRegions               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Sectors                        (Parm, OutParm, ZeroConstructor)

void UBendLib_DesignMath_C::STATIC_getSectorlistFromPowerGridRegion(TEnumAsByte<EPowerGrid_Enum> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FName>* Sectors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.getSectorlistFromPowerGridRegion");

	UBendLib_DesignMath_C_getSectorlistFromPowerGridRegion_Params params;
	params.Region = Region;
	params.ReturnAllRegions = ReturnAllRegions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sectors != nullptr)
		*Sectors = params.Sectors;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetRegionFromVector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWorldRegions>     Region                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Sector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_GetRegionFromVector(const struct FVector& Location, class UObject* __WorldContext, TEnumAsByte<EWorldRegions>* Region, struct FName* Sector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetRegionFromVector");

	UBendLib_DesignMath_C_GetRegionFromVector_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;
	if (Sector != nullptr)
		*Sector = params.Sector;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorlistFromRegion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWorldRegions>     Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnAllRegions               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Sectors                        (Parm, OutParm, ZeroConstructor)

void UBendLib_DesignMath_C::STATIC_GetSectorlistFromRegion(TEnumAsByte<EWorldRegions> Region, bool ReturnAllRegions, class UObject* __WorldContext, TArray<struct FName>* Sectors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorlistFromRegion");

	UBendLib_DesignMath_C_GetSectorlistFromRegion_Params params;
	params.Region = Region;
	params.ReturnAllRegions = ReturnAllRegions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sectors != nullptr)
		*Sectors = params.Sectors;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorFromVector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstPart                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SecondPart                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Formatted                      (Parm, OutParm, ZeroConstructor)

void UBendLib_DesignMath_C::STATIC_GetSectorFromVector(const struct FVector& Location, class UObject* __WorldContext, int* FirstPart, int* SecondPart, struct FString* Formatted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetSectorFromVector");

	UBendLib_DesignMath_C_GetSectorFromVector_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstPart != nullptr)
		*FirstPart = params.FirstPart;
	if (SecondPart != nullptr)
		*SecondPart = params.SecondPart;
	if (Formatted != nullptr)
		*Formatted = params.Formatted;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.ClosestToActorA
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OtherActors                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ClosestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_ClosestToActorA(class AActor* ActorA, class UObject* __WorldContext, TArray<class AActor*>* OtherActors, class AActor** ClosestActor, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.ClosestToActorA");

	UBendLib_DesignMath_C_ClosestToActorA_Params params;
	params.ActorA = ActorA;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherActors != nullptr)
		*OtherActors = params.OtherActors;
	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;
	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetAnchorAroundPoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetDistanceFromObject       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoredActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Anchor                         (Parm, OutParm, IsPlainOldData)
// bool                           ValidAnchor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_GetAnchorAroundPoint(const struct FVector& Location, float OffsetDistanceFromObject, class AActor* IgnoredActor, class UObject* __WorldContext, struct FTransform* Anchor, bool* ValidAnchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetAnchorAroundPoint");

	UBendLib_DesignMath_C_GetAnchorAroundPoint_Params params;
	params.Location = Location;
	params.OffsetDistanceFromObject = OffsetDistanceFromObject;
	params.IgnoredActor = IgnoredActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anchor != nullptr)
		*Anchor = params.Anchor;
	if (ValidAnchor != nullptr)
		*ValidAnchor = params.ValidAnchor;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.IsIntInRangeInclusive
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntToCheck                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntMin                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntMax                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsIntInRange                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            IntMinOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            IntMaxOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_IsIntInRangeInclusive(int IntToCheck, int IntMin, int IntMax, class UObject* __WorldContext, bool* IsIntInRange, int* IntMinOut, int* IntMaxOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.IsIntInRangeInclusive");

	UBendLib_DesignMath_C_IsIntInRangeInclusive_Params params;
	params.IntToCheck = IntToCheck;
	params.IntMin = IntMin;
	params.IntMax = IntMax;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIntInRange != nullptr)
		*IsIntInRange = params.IsIntInRange;
	if (IntMinOut != nullptr)
		*IntMinOut = params.IntMinOut;
	if (IntMaxOut != nullptr)
		*IntMaxOut = params.IntMaxOut;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.IsRightOrLeftFromActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Direction>    Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_IsRightOrLeftFromActor(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, TEnumAsByte<Enum_Direction>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.IsRightOrLeftFromActor");

	UBendLib_DesignMath_C_IsRightOrLeftFromActor_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustumWithLOS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInCameraView                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_IsInCameraViewFrustumWithLOS(class AActor* Target, class UObject* __WorldContext, bool* IsInCameraView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustumWithLOS");

	UBendLib_DesignMath_C_IsInCameraViewFrustumWithLOS_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInCameraView != nullptr)
		*IsInCameraView = params.IsInCameraView;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInCameraView                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_IsInCameraViewFrustum(class AActor* Target, class UObject* __WorldContext, bool* IsInCameraView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.IsInCameraViewFrustum");

	UBendLib_DesignMath_C_IsInCameraViewFrustum_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInCameraView != nullptr)
		*IsInCameraView = params.IsInCameraView;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.RelativeDirectionFromActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Direction>    Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_RelativeDirectionFromActor(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, TEnumAsByte<Enum_Direction>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.RelativeDirectionFromActor");

	UBendLib_DesignMath_C_RelativeDirectionFromActor_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.DoesActorA HaveLOS ToActorB
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Actor_A_Offset                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasLOS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_DoesActorA_HaveLOS_ToActorB(class AActor* ActorA, class AActor* ActorB, const struct FVector& Actor_A_Offset, class UObject* __WorldContext, bool* HasLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.DoesActorA HaveLOS ToActorB");

	UBendLib_DesignMath_C_DoesActorA_HaveLOS_ToActorB_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.Actor_A_Offset = Actor_A_Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasLOS != nullptr)
		*HasLOS = params.HasLOS;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.CalculateVerticalFOV
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HorizontalFOV                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          HorizontalResolution           (Parm, ZeroConstructor, IsPlainOldData)
// float                          VerticalResolution             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          VerticalFOV                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_CalculateVerticalFOV(float HorizontalFOV, float HorizontalResolution, float VerticalResolution, class UObject* __WorldContext, float* VerticalFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.CalculateVerticalFOV");

	UBendLib_DesignMath_C_CalculateVerticalFOV_Params params;
	params.HorizontalFOV = HorizontalFOV;
	params.HorizontalResolution = HorizontalResolution;
	params.VerticalResolution = VerticalResolution;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VerticalFOV != nullptr)
		*VerticalFOV = params.VerticalFOV;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetPitchAngleFromActorAForward
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_GetPitchAngleFromActorAForward(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetPitchAngleFromActorAForward");

	UBendLib_DesignMath_C_GetPitchAngleFromActorAForward_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (angle != nullptr)
		*angle = params.angle;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetDeltaAngle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AngleA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShortestAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_GetDeltaAngle(float AngleA, float AngleB, class UObject* __WorldContext, float* ShortestAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetDeltaAngle");

	UBendLib_DesignMath_C_GetDeltaAngle_Params params;
	params.AngleA = AngleA;
	params.AngleB = AngleB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShortestAngle != nullptr)
		*ShortestAngle = params.ShortestAngle;
}


// Function BendLib_DesignMath.BendLib_DesignMath_C.GetYawAngleFromActorAForward
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignMath_C::STATIC_GetYawAngleFromActorAForward(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignMath.BendLib_DesignMath_C.GetYawAngleFromActorAForward");

	UBendLib_DesignMath_C_GetYawAngleFromActorAForward_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (angle != nullptr)
		*angle = params.angle;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
