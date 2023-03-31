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

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTimelineComponent*> Timelines                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_WorldSpec_Base_C::StopTimelines(TArray<class UTimelineComponent*>* Timelines)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines");

	ABP_WorldSpec_Base_C_StopTimelines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timelines != nullptr)
		*Timelines = params.Timelines;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTimelineComponent*> Timelines                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_WorldSpec_Base_C::SyncTimelines(float TimeOfDay, float Rate, TArray<class UTimelineComponent*>* Timelines)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines");

	ABP_WorldSpec_Base_C_SyncTimelines_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timelines != nullptr)
		*Timelines = params.Timelines;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::SyncBaseTimelines(float TimeOfDay, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines");

	ABP_WorldSpec_Base_C_SyncBaseTimelines_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript");

	ABP_WorldSpec_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseLightingVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseLightingVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseLightingVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseLightingVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseDepthFogVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseDepthFogVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseDepthFogVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseDepthFogVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseVolFogVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseVolFogVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseVolFogVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseVolFogVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseTonemapVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseTonemapVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseTonemapVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseTonemapVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseColorCorrectVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseColorCorrectVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseColorCorrectVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseColorCorrectVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseForeCloudVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseForeCloudVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseForeCloudVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseForeCloudVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseBackCloudVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseBackCloudVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseBackCloudVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseBackCloudVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseWeatherVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseWeatherVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseWeatherVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseWeatherVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseAtmosphericFogVals~TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseAtmosphericFogVals~TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseAtmosphericFogVals~TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals~TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseAtmosphericFogVals~TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::ReceiveSync(float* TimeOfDay, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync");

	ABP_WorldSpec_Base_C_ReceiveSync_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::ReceiveStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop");

	ABP_WorldSpec_Base_C_ReceiveStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::OnLerpComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete");

	ABP_WorldSpec_Base_C_OnLerpComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::ExecuteUbergraph_BP_WorldSpec_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base");

	ABP_WorldSpec_Base_C_ExecuteUbergraph_BP_WorldSpec_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
