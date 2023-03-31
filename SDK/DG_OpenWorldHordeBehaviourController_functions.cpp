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

// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SanitizeByNameGetAttachedActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          In                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Out                            (Parm, OutParm, ZeroConstructor)

void AOpenWorldHordeBehaviourController_C::SanitizeByNameGetAttachedActors(TArray<class AActor*>* In, TArray<class AActor*>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SanitizeByNameGetAttachedActors");

	AOpenWorldHordeBehaviourController_C_SanitizeByNameGetAttachedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupPathArray
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendCrowdPOI*           StartPOI                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendCrowdPOI*           EndPOI                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         PathArray                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  PathActor                      (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::SetupPathArray(class ABendCrowdPOI* StartPOI, class ABendCrowdPOI* EndPOI, class AActor* PathActor, TArray<struct FVector>* PathArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupPathArray");

	AOpenWorldHordeBehaviourController_C_SetupPathArray_Params params;
	params.StartPOI = StartPOI;
	params.EndPOI = EndPOI;
	params.PathActor = PathActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathArray != nullptr)
		*PathArray = params.PathArray;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReverseArray
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ReverseArray                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         ArrayToSet                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AOpenWorldHordeBehaviourController_C::ReverseArray(TArray<struct FVector>* ReverseArray, TArray<struct FVector>* ArrayToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReverseArray");

	AOpenWorldHordeBehaviourController_C_ReverseArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReverseArray != nullptr)
		*ReverseArray = params.ReverseArray;
	if (ArrayToSet != nullptr)
		*ArrayToSet = params.ArrayToSet;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DrawNavPaths
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::DrawNavPaths(float TickTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DrawNavPaths");

	AOpenWorldHordeBehaviourController_C_DrawNavPaths_Params params;
	params.TickTime = TickTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupGeneratorPaths
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::SetupGeneratorPaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetupGeneratorPaths");

	AOpenWorldHordeBehaviourController_C_SetupGeneratorPaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.OverrideSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sunset                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Sunrise                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Sunset02                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUseGenerator              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_HordeActivities> Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUsePOI                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_HordeActivities> POI                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrideActivityTime           (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinEat                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxEat                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinDrink                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDrink                       (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::OverrideSettings(bool Sunset, float Sunrise, float Sunset02, bool ForceUseGenerator, TEnumAsByte<Enum_HordeActivities> Generator, bool ForceUsePOI, TEnumAsByte<Enum_HordeActivities> POI, bool OverrideActivityTime, float MinEat, float MaxEat, float MinDrink, float MaxDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.OverrideSettings");

	AOpenWorldHordeBehaviourController_C_OverrideSettings_Params params;
	params.Sunset = Sunset;
	params.Sunrise = Sunrise;
	params.Sunset02 = Sunset02;
	params.ForceUseGenerator = ForceUseGenerator;
	params.Generator = Generator;
	params.ForceUsePOI = ForceUsePOI;
	params.POI = POI;
	params.OverrideActivityTime = OverrideActivityTime;
	params.MinEat = MinEat;
	params.MaxEat = MaxEat;
	params.MinDrink = MinDrink;
	params.MaxDrink = MaxDrink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.TurnGeneratorsOff
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::TurnGeneratorsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.TurnGeneratorsOff");

	AOpenWorldHordeBehaviourController_C_TurnGeneratorsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PrintString                    (Parm, ZeroConstructor)

void AOpenWorldHordeBehaviourController_C::DebugPrint(const struct FString& PrintString)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.DebugPrint");

	AOpenWorldHordeBehaviourController_C_DebugPrint_Params params;
	params.PrintString = PrintString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIsqDistanceFromClosestHordeMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          sqDistance                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::POIsqDistanceFromClosestHordeMember(float* sqDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIsqDistanceFromClosestHordeMember");

	AOpenWorldHordeBehaviourController_C_POIsqDistanceFromClosestHordeMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sqDistance != nullptr)
		*sqDistance = params.sqDistance;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RegisterPOIsWithHordeQuery
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::RegisterPOIsWithHordeQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RegisterPOIsWithHordeQuery");

	AOpenWorldHordeBehaviourController_C_RegisterPOIsWithHordeQuery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendCrowdPatrolPath_C*  Path                           (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::SetPath(class ABendCrowdPatrolPath_C* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetPath");

	AOpenWorldHordeBehaviourController_C_SetPath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckNight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isNight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::CheckNight(bool* isNight)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckNight");

	AOpenWorldHordeBehaviourController_C_CheckNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isNight != nullptr)
		*isNight = params.isNight;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.FindNewPOI
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::FindNewPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.FindNewPOI");

	AOpenWorldHordeBehaviourController_C_FindNewPOI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewPOI
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::SetNewPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewPOI");

	AOpenWorldHordeBehaviourController_C_SetNewPOI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIDistanceFromHorde
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::POIDistanceFromHorde(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.POIDistanceFromHorde");

	AOpenWorldHordeBehaviourController_C_POIDistanceFromHorde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.VectorVectorDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FromVector                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ToVector                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::VectorVectorDistance(const struct FVector& FromVector, const struct FVector& ToVector, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.VectorVectorDistance");

	AOpenWorldHordeBehaviourController_C_VectorVectorDistance_Params params;
	params.FromVector = FromVector;
	params.ToVector = ToVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.UserConstructionScript");

	AOpenWorldHordeBehaviourController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveBeginPlay");

	AOpenWorldHordeBehaviourController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::timerdone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone");

	AOpenWorldHordeBehaviourController_C_timerdone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_3
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::timerdone_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_3");

	AOpenWorldHordeBehaviourController_C_timerdone_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckPOIs
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CheckPOIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CheckPOIs");

	AOpenWorldHordeBehaviourController_C_CheckPOIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_4
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::timerdone_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.timerdone_4");

	AOpenWorldHordeBehaviourController_C_timerdone_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Initialize Horde
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::Initialize_Horde()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Initialize Horde");

	AOpenWorldHordeBehaviourController_C_Initialize_Horde_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2");

	AOpenWorldHordeBehaviourController_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_2
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_2");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Call BeginPlay
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::Call_BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.Call BeginPlay");

	AOpenWorldHordeBehaviourController_C_Call_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_3
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_3");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_1_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_1_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_4
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_4");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy_2
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_Copy_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_Copy_2");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_Copy_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy_2
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_1_Copy_1_Copy_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_1_Copy_1_Copy_2");

	AOpenWorldHordeBehaviourController_C_CustomEvent_1_Copy_1_Copy_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.MoveGenerator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::MoveGenerator(float TickTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.MoveGenerator");

	AOpenWorldHordeBehaviourController_C_MoveGenerator_Params params;
	params.TickTime = TickTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.GeneratorFinishedPath
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::GeneratorFinishedPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.GeneratorFinishedPath");

	AOpenWorldHordeBehaviourController_C_GeneratorFinishedPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ReceiveTick");

	AOpenWorldHordeBehaviourController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewGeneratorPath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         NewPath                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Enum_HordeActivities> NewActivity                    (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::SetNewGeneratorPath(TArray<struct FVector> NewPath, TEnumAsByte<Enum_HordeActivities> NewActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.SetNewGeneratorPath");

	AOpenWorldHordeBehaviourController_C_SetNewGeneratorPath_Params params;
	params.NewPath = NewPath;
	params.NewActivity = NewActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.InitializeGeneratorMovement
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::InitializeGeneratorMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.InitializeGeneratorMovement");

	AOpenWorldHordeBehaviourController_C_InitializeGeneratorMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RestartGeneratorMovement
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::RestartGeneratorMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.RestartGeneratorMovement");

	AOpenWorldHordeBehaviourController_C_RestartGeneratorMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ResumeMoving
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::ResumeMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ResumeMoving");

	AOpenWorldHordeBehaviourController_C_ResumeMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeMemberSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::HordeMemberSpawned(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeMemberSpawned");

	AOpenWorldHordeBehaviourController_C_HordeMemberSpawned_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeDoneSpawning
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::HordeDoneSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.HordeDoneSpawning");

	AOpenWorldHordeBehaviourController_C_HordeDoneSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_3");

	AOpenWorldHordeBehaviourController_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2_Copy
// (BlueprintCallable, BlueprintEvent)

void AOpenWorldHordeBehaviourController_C::CustomEvent_2_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.CustomEvent_2_Copy");

	AOpenWorldHordeBehaviourController_C_CustomEvent_2_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.PostSaveGameLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::PostSaveGameLoaded(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.PostSaveGameLoaded");

	AOpenWorldHordeBehaviourController_C_PostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ExecuteUbergraph_OpenWorldHordeBehaviourController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldHordeBehaviourController_C::ExecuteUbergraph_OpenWorldHordeBehaviourController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldHordeBehaviourController.OpenWorldHordeBehaviourController_C.ExecuteUbergraph_OpenWorldHordeBehaviourController");

	AOpenWorldHordeBehaviourController_C_ExecuteUbergraph_OpenWorldHordeBehaviourController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
