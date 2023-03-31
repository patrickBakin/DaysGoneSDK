#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Conversation.BP_Conversation_C.UserConstructionScript
struct ABP_Conversation_C_UserConstructionScript_Params
{
};

// Function BP_Conversation.BP_Conversation_C.PlayConversationAtIndex
struct ABP_Conversation_C_PlayConversationAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABendPawn*>                           Speakers;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              MaxPauseBetweenLines;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinPauseBetweenLines;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSecondsAllowRepeat;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopPreviousConversation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoopConversation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDuckSounds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldUnduckSounds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseInterruptSystem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckThreatsBeforePlaying;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckThreatsBeforeResuming;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InterruptWhenShooting;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InterruptWhenMeleeing;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayResumeVO;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopIfInterrupted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Conversation.BP_Conversation_C.PauseCurrentConversation
struct ABP_Conversation_C_PauseCurrentConversation_Params
{
	int                                                ConversationUID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Conversation.BP_Conversation_C.StopCurrentConversation
struct ABP_Conversation_C_StopCurrentConversation_Params
{
	int                                                ConversationUID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Conversation.BP_Conversation_C.ResumeCurrentConversation
struct ABP_Conversation_C_ResumeCurrentConversation_Params
{
	int                                                ConversationUID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Conversation.BP_Conversation_C.ReceiveBeginPlay
struct ABP_Conversation_C_ReceiveBeginPlay_Params
{
};

// Function BP_Conversation.BP_Conversation_C.BendConversationComplete
struct ABP_Conversation_C_BendConversationComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Conversation.BP_Conversation_C.ExecuteUbergraph_BP_Conversation
struct ABP_Conversation_C_ExecuteUbergraph_BP_Conversation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
