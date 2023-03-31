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

// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.CalculateFrozenStreaming
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Frozen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::CalculateFrozenStreaming(bool* Frozen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.CalculateFrozenStreaming");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_CalculateFrozenStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Frozen != nullptr)
		*Frozen = params.Frozen;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.UserConstructionScript");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceiveBeginPlay");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_1");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceiveEndPlay");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_1");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_2(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_2");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_2_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_3(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_3");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_3_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_4(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_4");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_4_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_2(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_2");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_2_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_3(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_3");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_3_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_4(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_4");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_4_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_5(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_5");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_5_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeOverlap_6(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeOverlap_6");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeOverlap_6_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_5(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_5");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_5_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::VolumeEndOverlap_6(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.VolumeEndOverlap_6");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_VolumeEndOverlap_6_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnPerformActionOnStreamingLevelsUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::OnPerformActionOnStreamingLevelsUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnPerformActionOnStreamingLevelsUpdated_Event_1");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_OnPerformActionOnStreamingLevelsUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.FlashbackCinematicToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::FlashbackCinematicToggled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.FlashbackCinematicToggled");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_FlashbackCinematicToggled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ReceivePreSaveGameLoaded");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnPostSaveGameLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::OnPostSaveGameLoaded(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnPostSaveGameLoaded");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_OnPostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnFinishedLoading
// (BlueprintCallable, BlueprintEvent)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::OnFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.OnFinishedLoading");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_OnFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ExecuteUbergraph_BP_FreezeStreamingAroundPoints_WithMultiVolumes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C::ExecuteUbergraph_BP_FreezeStreamingAroundPoints_WithMultiVolumes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeStreamingAroundPoints_WithMultiVolumes.BP_FreezeStreamingAroundPoints_WithMultiVolumes_C.ExecuteUbergraph_BP_FreezeStreamingAroundPoints_WithMultiVolumes");

	ABP_FreezeStreamingAroundPoints_WithMultiVolumes_C_ExecuteUbergraph_BP_FreezeStreamingAroundPoints_WithMultiVolumes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
