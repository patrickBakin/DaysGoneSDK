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

// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ReplaceTelemetryAttrData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTelemetryEventAttr> TelemetryAttributes            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 TargetTelemetryAttributeName   (Parm, ZeroConstructor)
// struct FString                 NewData                        (Parm, ZeroConstructor)

void ABP_TelemetryPackageBase_C::ReplaceTelemetryAttrData(const struct FString& TargetTelemetryAttributeName, const struct FString& NewData, TArray<struct FTelemetryEventAttr>* TelemetryAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ReplaceTelemetryAttrData");

	ABP_TelemetryPackageBase_C_ReplaceTelemetryAttrData_Params params;
	params.TargetTelemetryAttributeName = TargetTelemetryAttributeName;
	params.NewData = NewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TelemetryAttributes != nullptr)
		*TelemetryAttributes = params.TelemetryAttributes;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.FindTelemetryAttrIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTelemetryEventAttr> TelemetryAttrArray             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 TelemetryAttrName              (Parm, ZeroConstructor)
// int                            TelemtryAttrIndex              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TelemetryPackageBase_C::FindTelemetryAttrIndex(const struct FString& TelemetryAttrName, TArray<struct FTelemetryEventAttr>* TelemetryAttrArray, int* TelemtryAttrIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.FindTelemetryAttrIndex");

	ABP_TelemetryPackageBase_C_FindTelemetryAttrIndex_Params params;
	params.TelemetryAttrName = TelemetryAttrName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TelemetryAttrArray != nullptr)
		*TelemetryAttrArray = params.TelemetryAttrArray;
	if (TelemtryAttrIndex != nullptr)
		*TelemtryAttrIndex = params.TelemtryAttrIndex;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.InANewEpisode?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            New_Episode                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInNewEpisode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TelemetryPackageBase_C::InANewEpisode_(int New_Episode, bool* IsInNewEpisode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.InANewEpisode?");

	ABP_TelemetryPackageBase_C_InANewEpisode__Params params;
	params.New_Episode = New_Episode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInNewEpisode != nullptr)
		*IsInNewEpisode = params.IsInNewEpisode;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.GetMissionAndJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MissionIdOverride              (Parm, ZeroConstructor)

void ABP_TelemetryPackageBase_C::GetMissionAndJob(const struct FString& MissionIdOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.GetMissionAndJob");

	ABP_TelemetryPackageBase_C_GetMissionAndJob_Params params;
	params.MissionIdOverride = MissionIdOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TelemetryPackageBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.UserConstructionScript");

	ABP_TelemetryPackageBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.MediumTickEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryPackageBase_C::MediumTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.MediumTickEvents");

	ABP_TelemetryPackageBase_C_MediumTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ShortestTickEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryPackageBase_C::ShortestTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ShortestTickEvents");

	ABP_TelemetryPackageBase_C_ShortestTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.LongTickEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryPackageBase_C::LongTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.LongTickEvents");

	ABP_TelemetryPackageBase_C_LongTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ExecuteUbergraph_BP_TelemetryPackageBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TelemetryPackageBase_C::ExecuteUbergraph_BP_TelemetryPackageBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryPackageBase.BP_TelemetryPackageBase_C.ExecuteUbergraph_BP_TelemetryPackageBase");

	ABP_TelemetryPackageBase_C_ExecuteUbergraph_BP_TelemetryPackageBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
