#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Conversation.BP_Conversation_C
// 0x00E0 (0x0558 - 0x0478)
class ABP_Conversation_C : public ABendConversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_ConvLineData>                Conversations;                                            // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVocalConversationData>              ConversationToPlay;                                       // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_ConvLineIDAndIndex>          ConversationData;                                         // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABendPawn*                                   Speaker;                                                  // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ConversationID;                                           // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                conversationIndex;                                        // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TmpConversationIndex;                                     // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StringLength;                                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendPawn*>                           Speakers;                                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FString>                             SpeakerNames;                                             // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CurrentConversationIDs;                                   // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundClass*                                 SoundClass;                                               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVocalConversationData                      TempConvoData;                                            // 0x0508(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Conversation.BP_Conversation_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayConversationAtIndex(int Index, class USoundClass* SoundClass, TArray<class ABendPawn*> Speakers, float MaxPauseBetweenLines, float MinPauseBetweenLines, int NumSecondsAllowRepeat, bool StopPreviousConversation, bool LoopConversation, bool ShouldDuckSounds, bool ShouldUnduckSounds, float Priority, float MaxWaitTimeInQueue, bool UseInterruptSystem, bool CheckThreatsBeforePlaying, bool CheckThreatsBeforeResuming, bool InterruptWhenShooting, bool InterruptWhenMeleeing, bool PlayResumeVO, bool StopIfInterrupted);
	void PauseCurrentConversation(int ConversationUID);
	void StopCurrentConversation(int ConversationUID);
	void ResumeCurrentConversation(int ConversationUID);
	void ReceiveBeginPlay();
	void BendConversationComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void ExecuteUbergraph_BP_Conversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
