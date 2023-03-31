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

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ShouldReEnableSaving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReEnableSaving                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BlockOpenWorldSaving_C::ShouldReEnableSaving(bool* ReEnableSaving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ShouldReEnableSaving");

	ABP_BlockOpenWorldSaving_C_ShouldReEnableSaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReEnableSaving != nullptr)
		*ReEnableSaving = params.ReEnableSaving;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BlockOpenWorldSaving_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.UserConstructionScript");

	ABP_BlockOpenWorldSaving_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BlockOpenWorldSaving_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveBeginPlay");

	ABP_BlockOpenWorldSaving_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerEnteredSaveBlockVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlockOpenWorldSaving_C::PlayerEnteredSaveBlockVolume(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerEnteredSaveBlockVolume");

	ABP_BlockOpenWorldSaving_C_PlayerEnteredSaveBlockVolume_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerExitedSaveBlockVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlockOpenWorldSaving_C::PlayerExitedSaveBlockVolume(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerExitedSaveBlockVolume");

	ABP_BlockOpenWorldSaving_C_PlayerExitedSaveBlockVolume_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlockOpenWorldSaving_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveTick");

	ABP_BlockOpenWorldSaving_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReEnableSaving
// (BlueprintCallable, BlueprintEvent)

void ABP_BlockOpenWorldSaving_C::ReEnableSaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReEnableSaving");

	ABP_BlockOpenWorldSaving_C_ReEnableSaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ExecuteUbergraph_BP_BlockOpenWorldSaving
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlockOpenWorldSaving_C::ExecuteUbergraph_BP_BlockOpenWorldSaving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ExecuteUbergraph_BP_BlockOpenWorldSaving");

	ABP_BlockOpenWorldSaving_C_ExecuteUbergraph_BP_BlockOpenWorldSaving_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
