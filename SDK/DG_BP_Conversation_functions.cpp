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

// Function BP_Conversation.BP_Conversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Conversation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.UserConstructionScript");

	ABP_Conversation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.PlayConversationAtIndex
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USoundClass*             SoundClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABendPawn*>       Speakers                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          MaxPauseBetweenLines           (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinPauseBetweenLines           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSecondsAllowRepeat          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopPreviousConversation       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoopConversation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldDuckSounds               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldUnduckSounds             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseInterruptSystem             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckThreatsBeforePlaying      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckThreatsBeforeResuming     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InterruptWhenShooting          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InterruptWhenMeleeing          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayResumeVO                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopIfInterrupted              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::PlayConversationAtIndex(int Index, class USoundClass* SoundClass, TArray<class ABendPawn*> Speakers, float MaxPauseBetweenLines, float MinPauseBetweenLines, int NumSecondsAllowRepeat, bool StopPreviousConversation, bool LoopConversation, bool ShouldDuckSounds, bool ShouldUnduckSounds, float Priority, float MaxWaitTimeInQueue, bool UseInterruptSystem, bool CheckThreatsBeforePlaying, bool CheckThreatsBeforeResuming, bool InterruptWhenShooting, bool InterruptWhenMeleeing, bool PlayResumeVO, bool StopIfInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.PlayConversationAtIndex");

	ABP_Conversation_C_PlayConversationAtIndex_Params params;
	params.Index = Index;
	params.SoundClass = SoundClass;
	params.Speakers = Speakers;
	params.MaxPauseBetweenLines = MaxPauseBetweenLines;
	params.MinPauseBetweenLines = MinPauseBetweenLines;
	params.NumSecondsAllowRepeat = NumSecondsAllowRepeat;
	params.StopPreviousConversation = StopPreviousConversation;
	params.LoopConversation = LoopConversation;
	params.ShouldDuckSounds = ShouldDuckSounds;
	params.ShouldUnduckSounds = ShouldUnduckSounds;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.UseInterruptSystem = UseInterruptSystem;
	params.CheckThreatsBeforePlaying = CheckThreatsBeforePlaying;
	params.CheckThreatsBeforeResuming = CheckThreatsBeforeResuming;
	params.InterruptWhenShooting = InterruptWhenShooting;
	params.InterruptWhenMeleeing = InterruptWhenMeleeing;
	params.PlayResumeVO = PlayResumeVO;
	params.StopIfInterrupted = StopIfInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.PauseCurrentConversation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConversationUID                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::PauseCurrentConversation(int ConversationUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.PauseCurrentConversation");

	ABP_Conversation_C_PauseCurrentConversation_Params params;
	params.ConversationUID = ConversationUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.StopCurrentConversation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConversationUID                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::StopCurrentConversation(int ConversationUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.StopCurrentConversation");

	ABP_Conversation_C_StopCurrentConversation_Params params;
	params.ConversationUID = ConversationUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.ResumeCurrentConversation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConversationUID                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::ResumeCurrentConversation(int ConversationUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.ResumeCurrentConversation");

	ABP_Conversation_C_ResumeCurrentConversation_Params params;
	params.ConversationUID = ConversationUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Conversation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.ReceiveBeginPlay");

	ABP_Conversation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.BendConversationComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::BendConversationComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.BendConversationComplete");

	ABP_Conversation_C_BendConversationComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Conversation.BP_Conversation_C.ExecuteUbergraph_BP_Conversation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Conversation_C::ExecuteUbergraph_BP_Conversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Conversation.BP_Conversation_C.ExecuteUbergraph_BP_Conversation");

	ABP_Conversation_C_ExecuteUbergraph_BP_Conversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
