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

// Function HordeLoader.HordeLoader_C.CheckHordeCompletion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsComplete                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::CheckHordeCompletion(bool* IsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.CheckHordeCompletion");

	AHordeLoader_C_CheckHordeCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsComplete != nullptr)
		*IsComplete = params.IsComplete;
}


// Function HordeLoader.HordeLoader_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHordeLoader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.UserConstructionScript");

	AHordeLoader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHordeLoader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.ReceiveBeginPlay");

	AHordeLoader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.MarkForReload
// (BlueprintCallable, BlueprintEvent)

void AHordeLoader_C::MarkForReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.MarkForReload");

	AHordeLoader_C_MarkForReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevel*                  Level                          (Parm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::CustomEvent_1(class ULevel* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.CustomEvent_1");

	AHordeLoader_C_CustomEvent_1_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.ReloadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevel*                  Level                          (Parm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::ReloadLevel(class ULevel* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.ReloadLevel");

	AHordeLoader_C_ReloadLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.MissionOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData*        LastMissionData                (Parm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::MissionOver(class UBendMissionData* LastMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.MissionOver");

	AHordeLoader_C_MissionOver_Params params;
	params.LastMissionData = LastMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.ReceivePostSaveGameLoaded");

	AHordeLoader_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeLoader.HordeLoader_C.ExecuteUbergraph_HordeLoader
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeLoader_C::ExecuteUbergraph_HordeLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeLoader.HordeLoader_C.ExecuteUbergraph_HordeLoader");

	AHordeLoader_C_ExecuteUbergraph_HordeLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
