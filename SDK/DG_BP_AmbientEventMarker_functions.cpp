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

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DefineCalloutInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::DefineCalloutInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DefineCalloutInfo");

	ABP_AmbientEventMarker_C_DefineCalloutInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayDebug
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayDebug");

	ABP_AmbientEventMarker_C_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDisplayTextColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::SetDisplayTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDisplayTextColor");

	ABP_AmbientEventMarker_C_SetDisplayTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetEventName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::SetEventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetEventName");

	ABP_AmbientEventMarker_C_SetEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.TextFaceCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::TextFaceCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.TextFaceCamera");

	ABP_AmbientEventMarker_C_TextFaceCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DoIStartInDebugMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::DoIStartInDebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DoIStartInDebugMode");

	ABP_AmbientEventMarker_C_DoIStartInDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor)

void ABP_AmbientEventMarker_C::DisplayError(const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayError");

	ABP_AmbientEventMarker_C_DisplayError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.FindAmbientEventManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::FindAmbientEventManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.FindAmbientEventManager");

	ABP_AmbientEventMarker_C_FindAmbientEventManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisableCollisionForSeconds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::DisableCollisionForSeconds(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisableCollisionForSeconds");

	ABP_AmbientEventMarker_C_DisableCollisionForSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::SetCollision(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetCollision");

	ABP_AmbientEventMarker_C_SetCollision_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDebugTimeBeingSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSelected                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ScaleUp                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::SetDebugTimeBeingSelected(float TimeSelected, bool ScaleUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDebugTimeBeingSelected");

	ABP_AmbientEventMarker_C_SetDebugTimeBeingSelected_Params params;
	params.TimeSelected = TimeSelected;
	params.ScaleUp = ScaleUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.UserConstructionScript");

	ABP_AmbientEventMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveBeginPlay");

	ABP_AmbientEventMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.EventDisableCollisionTemporarily
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::EventDisableCollisionTemporarily(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.EventDisableCollisionTemporarily");

	ABP_AmbientEventMarker_C_EventDisableCollisionTemporarily_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnRemoveFromWorld
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::OnRemoveFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnRemoveFromWorld");

	ABP_AmbientEventMarker_C_OnRemoveFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.Debug Tick From Master
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::Debug_Tick_From_Master()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.Debug Tick From Master");

	ABP_AmbientEventMarker_C_Debug_Tick_From_Master_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoad
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::OnUMapLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoad");

	ABP_AmbientEventMarker_C_OnUMapLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoaded
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::OnUMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoaded");

	ABP_AmbientEventMarker_C_OnUMapLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventUnloaded
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::OnEventUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventUnloaded");

	ABP_AmbientEventMarker_C_OnEventUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          PreviouslyLoaded               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::OnEventLoaded(bool* PreviouslyLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventLoaded");

	ABP_AmbientEventMarker_C_OnEventLoaded_Params params;
	params.PreviouslyLoaded = PreviouslyLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventComplete
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventMarker_C::OnEventComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventComplete");

	ABP_AmbientEventMarker_C_OnEventComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckIfDeaconCanSpeak
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::CheckIfDeaconCanSpeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckIfDeaconCanSpeak");

	ABP_AmbientEventMarker_C_CheckIfDeaconCanSpeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StartPing
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::StartPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StartPing");

	ABP_AmbientEventMarker_C_StartPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::CustomEvent_1(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CustomEvent_1");

	ABP_AmbientEventMarker_C_CustomEvent_1_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StopPing
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::StopPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StopPing");

	ABP_AmbientEventMarker_C_StopPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckDistance
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventMarker_C::CheckDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckDistance");

	ABP_AmbientEventMarker_C_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveEndPlay");

	ABP_AmbientEventMarker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ExecuteUbergraph_BP_AmbientEventMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventMarker_C::ExecuteUbergraph_BP_AmbientEventMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ExecuteUbergraph_BP_AmbientEventMarker");

	ABP_AmbientEventMarker_C_ExecuteUbergraph_BP_AmbientEventMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
