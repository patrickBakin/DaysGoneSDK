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

// Function BP_Spotlight.BP_Spotlight_C.UpdateNightimeTOD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::UpdateNightimeTOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.UpdateNightimeTOD");

	ABP_Spotlight_C_UpdateNightimeTOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.UpdateDaytimeTOD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::UpdateDaytimeTOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.UpdateDaytimeTOD");

	ABP_Spotlight_C_UpdateDaytimeTOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.InitializeRig
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::InitializeRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.InitializeRig");

	ABP_Spotlight_C_InitializeRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.GetMaterialReferences
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::GetMaterialReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.GetMaterialReferences");

	ABP_Spotlight_C_GetMaterialReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.CheckRigState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::CheckRigState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.CheckRigState");

	ABP_Spotlight_C_CheckRigState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.HandleMidMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CustomMessage                  (Parm, ZeroConstructor)
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::HandleMidMission(const struct FString& CustomMessage, TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.HandleMidMission");

	ABP_Spotlight_C_HandleMidMission_Params params;
	params.CustomMessage = CustomMessage;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.CheckWorldState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PowerOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::CheckWorldState(bool* PowerOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.CheckWorldState");

	ABP_Spotlight_C_CheckWorldState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PowerOn != nullptr)
		*PowerOn = params.PowerOn;
}


// Function BP_Spotlight.BP_Spotlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.UserConstructionScript");

	ABP_Spotlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Spotlight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.ReceiveBeginPlay");

	ABP_Spotlight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOnPower_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOnPower_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOnPower_Event");

	ABP_Spotlight_C_TurnOnPower_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOffPower_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOffPower_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOffPower_Event");

	ABP_Spotlight_C_TurnOffPower_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.OnMissionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.OnMissionComplete");

	ABP_Spotlight_C_OnMissionComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.MissionSpecial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CustomMessage                  (Parm, ZeroConstructor)
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::MissionSpecial(const struct FString& CustomMessage, TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.MissionSpecial");

	ABP_Spotlight_C_MissionSpecial_Params params;
	params.CustomMessage = CustomMessage;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOnRig
// (BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOnRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOnRig");

	ABP_Spotlight_C_TurnOnRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOffRig
// (BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOffRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOffRig");

	ABP_Spotlight_C_TurnOffRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.CinematicStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Spotlight_C::CinematicStart(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.CinematicStart");

	ABP_Spotlight_C_CinematicStart_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.CinematicEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Spotlight_C::CinematicEnd(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.CinematicEnd");

	ABP_Spotlight_C_CinematicEnd_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.EditorTicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.EditorTicker");

	ABP_Spotlight_C_EditorTicker_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.CheckWorldPowerSettings
// (Event, Public, BlueprintEvent)

void ABP_Spotlight_C::CheckWorldPowerSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.CheckWorldPowerSettings");

	ABP_Spotlight_C_CheckWorldPowerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.ExecuteUbergraph_BP_Spotlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spotlight_C::ExecuteUbergraph_BP_Spotlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.ExecuteUbergraph_BP_Spotlight");

	ABP_Spotlight_C_ExecuteUbergraph_BP_Spotlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOffPower__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOffPower__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOffPower__DelegateSignature");

	ABP_Spotlight_C_TurnOffPower__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spotlight.BP_Spotlight_C.TurnOnPower__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Spotlight_C::TurnOnPower__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spotlight.BP_Spotlight_C.TurnOnPower__DelegateSignature");

	ABP_Spotlight_C_TurnOnPower__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
