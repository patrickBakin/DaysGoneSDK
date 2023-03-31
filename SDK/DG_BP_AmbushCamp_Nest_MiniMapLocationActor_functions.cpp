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

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BikeSpeedCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSuppressVO               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::BikeSpeedCheck(bool* ShouldSuppressVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BikeSpeedCheck");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BikeSpeedCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSuppressVO != nullptr)
		*ShouldSuppressVO = params.ShouldSuppressVO;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UpdateBendSpheres
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::UpdateBendSpheres()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UpdateBendSpheres");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_UpdateBendSpheres_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.CheckNestStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::CheckNestStatus(bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.CheckNestStatus");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_CheckNestStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.HasCollectible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasCollectible                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::HasCollectible(bool* HasCollectible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.HasCollectible");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_HasCollectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCollectible != nullptr)
		*HasCollectible = params.HasCollectible;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.MapIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::MapIconState(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.MapIconState");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_MapIconState_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UserConstructionScript");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNestVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::FirstNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNestVOComplete");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_FirstNestVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::FirstNest(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNest");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_FirstNest_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNestVOComplete_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::LastNestVOComplete_Copy(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNestVOComplete_Copy");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_LastNestVOComplete_Copy_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::LastNest(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNest");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_LastNest_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.NearNestVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::NearNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.NearNestVOComplete");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_NearNestVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Near
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::Near(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Near");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_Near_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.SpottedNestVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::SpottedNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.SpottedNestVOComplete");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_SpottedNestVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Spotted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::Spotted(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Spotted");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_Spotted_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ReceiveBeginPlay");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnMapTaken_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::OnMapTaken_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnMapTaken_Event");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnMapTaken_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnNestDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DestroyedNestID                (Parm, ZeroConstructor)
// class ABendNest*               DestroyedNest                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::OnNestDestroyed_Event_1(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnNestDestroyed_Event_1");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnNestDestroyed_Event_1_Params params;
	params.DestroyedNestID = DestroyedNestID;
	params.DestroyedNest = DestroyedNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnJobResetCalled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>    JobResetType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnJobResetCalled_Event_1");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnJobResetCalled_Event_1_Params params;
	params.JobResetType = JobResetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Nest_MiniMapLocationActor_C::ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor");

	ABP_AmbushCamp_Nest_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
