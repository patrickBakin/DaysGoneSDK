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

// Function StealthMission_Objective.StealthMission_Objective_C.CheckVert
struct AStealthMission_Objective_C_CheckVert_Params
{
	bool                                               OnLevel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.GiveCollectible
struct AStealthMission_Objective_C_GiveCollectible_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.SetUpConversation
struct AStealthMission_Objective_C_SetUpConversation_Params
{
	TEnumAsByte<Evo_nero_intel>                        SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.FailedTheSequence
struct AStealthMission_Objective_C_FailedTheSequence_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ListeningSequenceUpdate
struct AStealthMission_Objective_C_ListeningSequenceUpdate_Params
{
	bool                                               Failing_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.DeactivateStealthObjective
struct AStealthMission_Objective_C_DeactivateStealthObjective_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ActivateStealthObjective
struct AStealthMission_Objective_C_ActivateStealthObjective_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.UserConstructionScript
struct AStealthMission_Objective_C_UserConstructionScript_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ReceiveBeginPlay
struct AStealthMission_Objective_C_ReceiveBeginPlay_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.OnDied
struct AStealthMission_Objective_C_OnDied_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.StartDelayComplete
struct AStealthMission_Objective_C_StartDelayComplete_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeUnawareEvent
struct AStealthMission_Objective_C_OnBecomeUnawareEvent_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeSemiAwareEvent
struct AStealthMission_Objective_C_OnBecomeSemiAwareEvent_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.OnBecomeAwareEvent
struct AStealthMission_Objective_C_OnBecomeAwareEvent_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.StartConversation
struct AStealthMission_Objective_C_StartConversation_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ConversationFinished
struct AStealthMission_Objective_C_ConversationFinished_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.ReceivePostSaveGameLoaded
struct AStealthMission_Objective_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.TimerExpire
struct AStealthMission_Objective_C_TimerExpire_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.FirstActorSpawned
struct AStealthMission_Objective_C_FirstActorSpawned_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.SecondActorSpawned
struct AStealthMission_Objective_C_SecondActorSpawned_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.RecheckSecondPawn
struct AStealthMission_Objective_C_RecheckSecondPawn_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ResetEndDoOnce
struct AStealthMission_Objective_C_ResetEndDoOnce_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.PauseEverything
struct AStealthMission_Objective_C_PauseEverything_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.ContinueEverything
struct AStealthMission_Objective_C_ContinueEverything_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.UpdateRadius
struct AStealthMission_Objective_C_UpdateRadius_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo2
struct AStealthMission_Objective_C_PlayConvo2_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.PlayConvo3
struct AStealthMission_Objective_C_PlayConvo3_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.PlayerDied
struct AStealthMission_Objective_C_PlayerDied_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.RecheckVert
struct AStealthMission_Objective_C_RecheckVert_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.CustomEvent_1
struct AStealthMission_Objective_C_CustomEvent_1_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature
struct AStealthMission_Objective_C_BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_250_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StealthMission_Objective.StealthMission_Objective_C.BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature
struct AStealthMission_Objective_C_BndEvt__CylindarOverlap_K2Node_ComponentBoundEvent_262_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.OnDespawned_Event_1
struct AStealthMission_Objective_C_OnDespawned_Event_1_Params
{
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.Conversation2Finished
struct AStealthMission_Objective_C_Conversation2Finished_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.Conversation3Finished
struct AStealthMission_Objective_C_Conversation3Finished_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.ExecuteUbergraph_StealthMission_Objective
struct AStealthMission_Objective_C_ExecuteUbergraph_StealthMission_Objective_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.LeftRange__DelegateSignature
struct AStealthMission_Objective_C_LeftRange__DelegateSignature_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.EnteredRange__DelegateSignature
struct AStealthMission_Objective_C_EnteredRange__DelegateSignature_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.TimeHit__DelegateSignature
struct AStealthMission_Objective_C_TimeHit__DelegateSignature_Params
{
	int                                                Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective.StealthMission_Objective_C.ConversationCompleted__DelegateSignature
struct AStealthMission_Objective_C_ConversationCompleted__DelegateSignature_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.Success__DelegateSignature
struct AStealthMission_Objective_C_Success__DelegateSignature_Params
{
};

// Function StealthMission_Objective.StealthMission_Objective_C.Failed__DelegateSignature
struct AStealthMission_Objective_C_Failed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
