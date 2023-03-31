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

// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.HelperCheckForResettingAimTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isParented                     (Parm, ZeroConstructor, IsPlainOldData)
// class ASkeletalMeshActor*      SkelMesh                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         rootLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    aimTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::HelperCheckForResettingAimTargets(bool isParented, class ASkeletalMeshActor* SkelMesh, const struct FName& BoneName, class USceneComponent* rootLocation, class UStaticMeshComponent* aimTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.HelperCheckForResettingAimTargets");

	ABP_LGT_CinMaster_C_HelperCheckForResettingAimTargets_Params params;
	params.isParented = isParented;
	params.SkelMesh = SkelMesh;
	params.BoneName = BoneName;
	params.rootLocation = rootLocation;
	params.aimTarget = aimTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForResettingAimTargets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::CheckForResettingAimTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForResettingAimTargets");

	ABP_LGT_CinMaster_C_CheckForResettingAimTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckUtilites
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::CheckUtilites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckUtilites");

	ABP_LGT_CinMaster_C_CheckUtilites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.NonEmptyLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorArray                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::NonEmptyLength(TArray<class AActor*>* ActorArray, int* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.NonEmptyLength");

	ABP_LGT_CinMaster_C_NonEmptyLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorArray != nullptr)
		*ActorArray = params.ActorArray;
	if (Length != nullptr)
		*Length = params.Length;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CopyAllRigSettings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LGT_CinMaster_C*     masterRig                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_LGT_CinSlave_C*      slaveRig                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LGT_CinMaster_C::CopyAllRigSettings(class ABP_LGT_CinMaster_C* masterRig, class ABP_LGT_CinSlave_C** slaveRig)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CopyAllRigSettings");

	ABP_LGT_CinMaster_C_CopyAllRigSettings_Params params;
	params.masterRig = masterRig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (slaveRig != nullptr)
		*slaveRig = params.slaveRig;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForLightLinking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::CheckForLightLinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.CheckForLightLinking");

	ABP_LGT_CinMaster_C_CheckForLightLinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateSlaveRigs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::UpdateSlaveRigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateSlaveRigs");

	ABP_LGT_CinMaster_C_UpdateSlaveRigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ToggleLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::ToggleLightVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ToggleLightVisibility");

	ABP_LGT_CinMaster_C_ToggleLightVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.InitializeAimTargetVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::InitializeAimTargetVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.InitializeAimTargetVars");

	ABP_LGT_CinMaster_C_InitializeAimTargetVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.GetFlickerStruct_NEW
// (BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_LGT_CinMaster_C::GetFlickerStruct_NEW()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.GetFlickerStruct_NEW");

	ABP_LGT_CinMaster_C_GetFlickerStruct_NEW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinMaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UserConstructionScript");

	ABP_LGT_CinMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LGT_CinMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveBeginPlay");

	ABP_LGT_CinMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.EditorTicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.EditorTicker");

	ABP_LGT_CinMaster_C_EditorTicker_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ReceiveTick");

	ABP_LGT_CinMaster_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateTimeOfDay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LGT_CinMaster_C::UpdateTimeOfDay(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.UpdateTimeOfDay");

	ABP_LGT_CinMaster_C_UpdateTimeOfDay_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.LinkedCameraStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACameraActor**           DisabledCamera                 (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor**           EnabledCamera                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::LinkedCameraStateChanged(class ACameraActor** DisabledCamera, class ACameraActor** EnabledCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.LinkedCameraStateChanged");

	ABP_LGT_CinMaster_C_LinkedCameraStateChanged_Params params;
	params.DisabledCamera = DisabledCamera;
	params.EnabledCamera = EnabledCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ExecuteUbergraph_BP_LGT_CinMaster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinMaster_C::ExecuteUbergraph_BP_LGT_CinMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinMaster.BP_LGT_CinMaster_C.ExecuteUbergraph_BP_LGT_CinMaster");

	ABP_LGT_CinMaster_C_ExecuteUbergraph_BP_LGT_CinMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
