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

// Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowFuelCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmbientEventBase_C::LowFuelCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowFuelCondition");

	ABP_AmbientEventBase_C_LowFuelCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowAmmoCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmbientEventBase_C::LowAmmoCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.LowAmmoCondition");

	ABP_AmbientEventBase_C_LowAmmoCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetActorWorldLocations_AmbientEventBase
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::GetActorWorldLocations_AmbientEventBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetActorWorldLocations_AmbientEventBase");

	ABP_AmbientEventBase_C_GetActorWorldLocations_AmbientEventBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CentralWorldLocationAndRadius
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         WorldLocations                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::CentralWorldLocationAndRadius(TArray<struct FVector>* WorldLocations, struct FVector* WorldLocation, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.CentralWorldLocationAndRadius");

	ABP_AmbientEventBase_C_CentralWorldLocationAndRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocations != nullptr)
		*WorldLocations = params.WorldLocations;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReturnWorldLocationArrayOfActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         WorldLocations                 (Parm, OutParm, ZeroConstructor)

void ABP_AmbientEventBase_C::ReturnWorldLocationArrayOfActors(TArray<class AActor*>* Actors, TArray<struct FVector>* WorldLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReturnWorldLocationArrayOfActors");

	ABP_AmbientEventBase_C_ReturnWorldLocationArrayOfActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (WorldLocations != nullptr)
		*WorldLocations = params.WorldLocations;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToMarker
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::MoveMarkerIconToMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToMarker");

	ABP_AmbientEventBase_C_MoveMarkerIconToMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToSelf
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::MoveMarkerIconToSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerIconToSelf");

	ABP_AmbientEventBase_C_MoveMarkerIconToSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetNextTrackingArea
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CurrentArea                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextSection                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GetNextTrackingArea(const struct FName& CurrentArea, struct FName* NextSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetNextTrackingArea");

	ABP_AmbientEventBase_C_GetNextTrackingArea_Params params;
	params.CurrentArea = CurrentArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSection != nullptr)
		*NextSection = params.NextSection;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerToTrackingArea
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MovedMarker                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::MoveMarkerToTrackingArea(const struct FName& InName, bool* MovedMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.MoveMarkerToTrackingArea");

	ABP_AmbientEventBase_C_MoveMarkerToTrackingArea_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovedMarker != nullptr)
		*MovedMarker = params.MovedMarker;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CalculateSuggestedMarkerLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         AdditionalWorldLocations       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AmbientEventBase_C::CalculateSuggestedMarkerLocation(TArray<struct FVector>* AdditionalWorldLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.CalculateSuggestedMarkerLocation");

	ABP_AmbientEventBase_C_CalculateSuggestedMarkerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdditionalWorldLocations != nullptr)
		*AdditionalWorldLocations = params.AdditionalWorldLocations;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationAndRadius
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         WorldLocations                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AverageWorldLocationAndRadius(TArray<struct FVector>* WorldLocations, struct FVector* WorldLocation, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationAndRadius");

	ABP_AmbientEventBase_C_AverageWorldLocationAndRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocations != nullptr)
		*WorldLocations = params.WorldLocations;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationOfSpawnsAndPOIs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AAmbientSpawnLocation_C*> AmbientSpawnLocations          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ABendPOI*>        BendPOIs                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AverageWorldLocationOfSpawnsAndPOIs(TArray<class AAmbientSpawnLocation_C*>* AmbientSpawnLocations, TArray<class ABendPOI*>* BendPOIs, struct FVector* WorldLocation, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AverageWorldLocationOfSpawnsAndPOIs");

	ABP_AmbientEventBase_C_AverageWorldLocationOfSpawnsAndPOIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmbientSpawnLocations != nullptr)
		*AmbientSpawnLocations = params.AmbientSpawnLocations;
	if (BendPOIs != nullptr)
		*BendPOIs = params.BendPOIs;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.HideItems
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::HideItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.HideItems");

	ABP_AmbientEventBase_C_HideItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DetermineItemType
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::DetermineItemType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DetermineItemType");

	ABP_AmbientEventBase_C_DetermineItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddVectorToGameDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AddVectorToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddVectorToGameDatabase");

	ABP_AmbientEventBase_C_AddVectorToGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetVectorFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           VectorPresent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GetVectorFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* VectorPresent, struct FVector* VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetVectorFromGameDatabase");

	ABP_AmbientEventBase_C_GetVectorFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorPresent != nullptr)
		*VectorPresent = params.VectorPresent;
	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteVectorFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           VectorPresent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           VectorDeleted                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::DeleteVectorFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* VectorPresent, bool* VectorDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteVectorFromGameDatabase");

	ABP_AmbientEventBase_C_DeleteVectorFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorPresent != nullptr)
		*VectorPresent = params.VectorPresent;
	if (VectorDeleted != nullptr)
		*VectorDeleted = params.VectorDeleted;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddStringToGameDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void ABP_AmbientEventBase_C::AddStringToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddStringToGameDatabase");

	ABP_AmbientEventBase_C_AddStringToGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetStringFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StringPresent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 StringValue                    (Parm, OutParm, ZeroConstructor)

void ABP_AmbientEventBase_C::GetStringFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* StringPresent, struct FString* StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetStringFromGameDatabase");

	ABP_AmbientEventBase_C_GetStringFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringPresent != nullptr)
		*StringPresent = params.StringPresent;
	if (StringValue != nullptr)
		*StringValue = params.StringValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteStringFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StringPresent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           StringDeleted                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::DeleteStringFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* StringPresent, bool* StringDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteStringFromGameDatabase");

	ABP_AmbientEventBase_C_DeleteStringFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringPresent != nullptr)
		*StringPresent = params.StringPresent;
	if (StringDeleted != nullptr)
		*StringDeleted = params.StringDeleted;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddFloatToGameDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AddFloatToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddFloatToGameDatabase");

	ABP_AmbientEventBase_C_AddFloatToGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetFloatFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FloatPresent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FloatValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GetFloatFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* FloatPresent, float* FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetFloatFromGameDatabase");

	ABP_AmbientEventBase_C_GetFloatFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatPresent != nullptr)
		*FloatPresent = params.FloatPresent;
	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteFloatFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FloatPresent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FloatDeleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::DeleteFloatFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* FloatPresent, bool* FloatDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteFloatFromGameDatabase");

	ABP_AmbientEventBase_C_DeleteFloatFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatPresent != nullptr)
		*FloatPresent = params.FloatPresent;
	if (FloatDeleted != nullptr)
		*FloatDeleted = params.FloatDeleted;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.CompleteAmbientEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAmbientEventCompletionStatus> CompletionStatus               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::CompleteAmbientEvent(TEnumAsByte<EAmbientEventCompletionStatus> CompletionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.CompleteAmbientEvent");

	ABP_AmbientEventBase_C_CompleteAmbientEvent_Params params;
	params.CompletionStatus = CompletionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddIntToGameDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AddIntToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddIntToGameDatabase");

	ABP_AmbientEventBase_C_AddIntToGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetIntFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IntPresent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            IntValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GetIntFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* IntPresent, int* IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetIntFromGameDatabase");

	ABP_AmbientEventBase_C_GetIntFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntPresent != nullptr)
		*IntPresent = params.IntPresent;
	if (IntValue != nullptr)
		*IntValue = params.IntValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteIntFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IntPresent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IntDeleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::DeleteIntFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* IntPresent, bool* IntDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteIntFromGameDatabase");

	ABP_AmbientEventBase_C_DeleteIntFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntPresent != nullptr)
		*IntPresent = params.IntPresent;
	if (IntDeleted != nullptr)
		*IntDeleted = params.IntDeleted;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddBoolToGameDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::AddBoolToGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.AddBoolToGameDatabase");

	ABP_AmbientEventBase_C_AddBoolToGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetBoolFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolPresent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           BoolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GetBoolFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* BoolPresent, bool* BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GetBoolFromGameDatabase");

	ABP_AmbientEventBase_C_GetBoolFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoolPresent != nullptr)
		*BoolPresent = params.BoolPresent;
	if (BoolValue != nullptr)
		*BoolValue = params.BoolValue;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteBoolFromGameDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameDatabaseCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolPresent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           BoolDeleted                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::DeleteBoolFromGameDatabase(const struct FName& Key, TEnumAsByte<EGameDatabaseCategory> Category, bool* BoolPresent, bool* BoolDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.DeleteBoolFromGameDatabase");

	ABP_AmbientEventBase_C_DeleteBoolFromGameDatabase_Params params;
	params.Key = Key;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoolPresent != nullptr)
		*BoolPresent = params.BoolPresent;
	if (BoolDeleted != nullptr)
		*BoolDeleted = params.BoolDeleted;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.GenerateGameDatabaseKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 KeySuffix                      (Parm, ZeroConstructor)
// struct FName                   DesignDBKey                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::GenerateGameDatabaseKey(const struct FString& KeySuffix, struct FName* DesignDBKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.GenerateGameDatabaseKey");

	ABP_AmbientEventBase_C_GenerateGameDatabaseKey_Params params;
	params.KeySuffix = KeySuffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesignDBKey != nullptr)
		*DesignDBKey = params.DesignDBKey;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.UserConstructionScript");

	ABP_AmbientEventBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventRunning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker* EventMarker                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::OnEventRunning(class ABendAmbientEventMarker* EventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventRunning");

	ABP_AmbientEventBase_C_OnEventRunning_Params params;
	params.EventMarker = EventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventReRunning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker* EventMarker                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::OnEventReRunning(class ABendAmbientEventMarker* EventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventReRunning");

	ABP_AmbientEventBase_C_OnEventReRunning_Params params;
	params.EventMarker = EventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventUnloading
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::OnEventUnloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventUnloading");

	ABP_AmbientEventBase_C_OnEventUnloading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::OnEventComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnEventComplete");

	ABP_AmbientEventBase_C_OnEventComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReceiveBeginPlay");

	ABP_AmbientEventBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_ItemEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::Running_ItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_ItemEvent");

	ABP_AmbientEventBase_C_Running_ItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_ItemEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::ReRunning_ItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_ItemEvent");

	ABP_AmbientEventBase_C_ReRunning_ItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Unloading_ItemEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::Unloading_ItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.Unloading_ItemEvent");

	ABP_AmbientEventBase_C_Unloading_ItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_ItemEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::Complete_ItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_ItemEvent");

	ABP_AmbientEventBase_C_Complete_ItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::OnPlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.OnPlayerDied");

	ABP_AmbientEventBase_C_OnPlayerDied_Params params;
	params.ActualDamage = ActualDamage;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.SaveGameDatabaseVariables_AmbientEventBase
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::SaveGameDatabaseVariables_AmbientEventBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.SaveGameDatabaseVariables_AmbientEventBase");

	ABP_AmbientEventBase_C_SaveGameDatabaseVariables_AmbientEventBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.BindEventsForTracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::BindEventsForTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.BindEventsForTracking");

	ABP_AmbientEventBase_C_BindEventsForTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.TrackingSectionCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::TrackingSectionCompleted(const struct FName& SectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.TrackingSectionCompleted");

	ABP_AmbientEventBase_C_TrackingSectionCompleted_Params params;
	params.SectionID = SectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbientEventBase_C::BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature");

	ABP_AmbientEventBase_C_BndEvt__DisableTrackingSphere_K2Node_ComponentBoundEvent_321_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.InitializeTrackingMarkers
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::InitializeTrackingMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.InitializeTrackingMarkers");

	ABP_AmbientEventBase_C_InitializeTrackingMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_Tracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::Running_Tracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.Running_Tracking");

	ABP_AmbientEventBase_C_Running_Tracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_Tracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::ReRunning_Tracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.ReRunning_Tracking");

	ABP_AmbientEventBase_C_ReRunning_Tracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_Tracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::Complete_Tracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.Complete_Tracking");

	ABP_AmbientEventBase_C_Complete_Tracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.StartedTracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::StartedTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.StartedTracking");

	ABP_AmbientEventBase_C_StartedTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.FinishedTracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::FinishedTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.FinishedTracking");

	ABP_AmbientEventBase_C_FinishedTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.EndTracking
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventBase_C::EndTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.EndTracking");

	ABP_AmbientEventBase_C_EndTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventBase.BP_AmbientEventBase_C.ExecuteUbergraph_BP_AmbientEventBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventBase_C::ExecuteUbergraph_BP_AmbientEventBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventBase.BP_AmbientEventBase_C.ExecuteUbergraph_BP_AmbientEventBase");

	ABP_AmbientEventBase_C_ExecuteUbergraph_BP_AmbientEventBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
