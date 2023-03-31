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

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.UserConstructionScript
struct AStealthMission_Objective_New_C_UserConstructionScript_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ReceiveBeginPlay
struct AStealthMission_Objective_New_C_ReceiveBeginPlay_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OnDied
struct AStealthMission_Objective_New_C_OnDied_Params
{
	float*                                             ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.StartDelayComplete
struct AStealthMission_Objective_New_C_StartDelayComplete_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OnBecomeUnawareEvent
struct AStealthMission_Objective_New_C_OnBecomeUnawareEvent_Params
{
	class ABendAIController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>*                        PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OnBecomeSemiAwareEvent
struct AStealthMission_Objective_New_C_OnBecomeSemiAwareEvent_Params
{
	class ABendAIController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>*                        PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OnBecomeAwareEvent
struct AStealthMission_Objective_New_C_OnBecomeAwareEvent_Params
{
	class ABendAIController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>*                        PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ReceivePostSaveGameLoaded
struct AStealthMission_Objective_New_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.TimerExpire
struct AStealthMission_Objective_New_C_TimerExpire_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.FirstActorSpawned
struct AStealthMission_Objective_New_C_FirstActorSpawned_Params
{
	class ABendAIController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn**                                  Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase**                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.SecondActorSpawned
struct AStealthMission_Objective_New_C_SecondActorSpawned_Params
{
	class ABendAIController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn**                                  Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase**                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.RecheckSecondPawn
struct AStealthMission_Objective_New_C_RecheckSecondPawn_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ResetEndDoOnce
struct AStealthMission_Objective_New_C_ResetEndDoOnce_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.PauseEverything
struct AStealthMission_Objective_New_C_PauseEverything_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ContinueEverything
struct AStealthMission_Objective_New_C_ContinueEverything_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.UpdateRadius
struct AStealthMission_Objective_New_C_UpdateRadius_Params
{
	float*                                             NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.PlayConvo2
struct AStealthMission_Objective_New_C_PlayConvo2_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.PlayConvo3
struct AStealthMission_Objective_New_C_PlayConvo3_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.PlayerDied
struct AStealthMission_Objective_New_C_PlayerDied_Params
{
	float*                                             ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.RecheckVert
struct AStealthMission_Objective_New_C_RecheckVert_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OnDespawned
struct AStealthMission_Objective_New_C_OnDespawned_Params
{
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ActivateStealthObjective
struct AStealthMission_Objective_New_C_ActivateStealthObjective_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.DeactivateStealthObjective
struct AStealthMission_Objective_New_C_DeactivateStealthObjective_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ListeningSequenceUpdate
struct AStealthMission_Objective_New_C_ListeningSequenceUpdate_Params
{
	bool*                                              Failing_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.FailedTheSequence
struct AStealthMission_Objective_New_C_FailedTheSequence_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature
struct AStealthMission_Objective_New_C_BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_362_ComponentEndOverlapSignature__DelegateSignature
struct AStealthMission_Objective_New_C_BndEvt__CylinderOverlap_K2Node_ComponentBoundEvent_362_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.SetUpConversation
struct AStealthMission_Objective_New_C_SetUpConversation_Params
{
	TEnumAsByte<Evo_nero_intel>*                       SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.StartConversation
struct AStealthMission_Objective_New_C_StartConversation_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.GiveCollectible
struct AStealthMission_Objective_New_C_GiveCollectible_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ReceiveEndPlay
struct AStealthMission_Objective_New_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.OpenedWeaponWheel
struct AStealthMission_Objective_New_C_OpenedWeaponWheel_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ClosedWeaponWheel
struct AStealthMission_Objective_New_C_ClosedWeaponWheel_Params
{
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ConversationFinished
struct AStealthMission_Objective_New_C_ConversationFinished_Params
{
	class ABendPawn**                                  PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>*                 SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.Conversation2Finished
struct AStealthMission_Objective_New_C_Conversation2Finished_Params
{
	class ABendPawn**                                  PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>*                 SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.Conversation3Finished
struct AStealthMission_Objective_New_C_Conversation3Finished_Params
{
	class ABendPawn**                                  PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>*                 SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.ExecuteUbergraph_StealthMission_Objective_New
struct AStealthMission_Objective_New_C_ExecuteUbergraph_StealthMission_Objective_New_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMission_Objective_New.StealthMission_Objective_New_C.FirstTimeIn__DelegateSignature
struct AStealthMission_Objective_New_C_FirstTimeIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
