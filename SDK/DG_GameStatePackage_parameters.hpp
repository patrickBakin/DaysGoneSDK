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

// Function GameStatePackage.GameStatePackage_C.HaveWeResetThisJobBefore
struct AGameStatePackage_C_HaveWeResetThisJobBefore_Params
{
	class UJobClassInfo*                               Job;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasReset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.FindOutProperID
struct AGameStatePackage_C_FindOutProperID_Params
{
	class UObject*                                     MissionOrJobData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Proper_ID;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GameStatePackage.GameStatePackage_C.UserConstructionScript
struct AGameStatePackage_C_UserConstructionScript_Params
{
};

// Function GameStatePackage.GameStatePackage_C.MissionBeginCall
struct AGameStatePackage_C_MissionBeginCall_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ObjectiveCompleteCall
struct AGameStatePackage_C_ObjectiveCompleteCall_Params
{
	int                                                CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.MissionEndingCall
struct AGameStatePackage_C_MissionEndingCall_Params
{
};

// Function GameStatePackage.GameStatePackage_C.FastTravelBeginCall
struct AGameStatePackage_C_FastTravelBeginCall_Params
{
};

// Function GameStatePackage.GameStatePackage_C.CollectibleCollectedCall
struct AGameStatePackage_C_CollectibleCollectedCall_Params
{
	class UInventoryItemCollectible*                   Collectible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ReachedJobLocationCall
struct AGameStatePackage_C_ReachedJobLocationCall_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobFinishedCall
struct AGameStatePackage_C_JobFinishedCall_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinematicEndCall
struct AGameStatePackage_C_CinematicEndCall_Params
{
	struct FName                                       CinematicLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ItemPurchased
struct AGameStatePackage_C_ItemPurchased_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustRequired;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.WeaponPurchased
struct AGameStatePackage_C_WeaponPurchased_Params
{
	class UInventoryItem*                              Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustRequired;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.WeaponPartPurchased
struct AGameStatePackage_C_WeaponPartPurchased_Params
{
	class UInventoryItem*                              Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItem*                              Part;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustRequired;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.BikePartPurchased
struct AGameStatePackage_C_BikePartPurchased_Params
{
	class UInventoryItem*                              Part;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustRequired;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ItemSold
struct AGameStatePackage_C_ItemSold_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ItemConsumed
struct AGameStatePackage_C_ItemConsumed_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.WeaponPartEquipped
struct AGameStatePackage_C_WeaponPartEquipped_Params
{
	class UInventoryItem*                              Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItem*                              Part;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RepairBike
struct AGameStatePackage_C_RepairBike_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RepairAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RefuelBike
struct AGameStatePackage_C_RefuelBike_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RefuelAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.EarSoldCall
struct AGameStatePackage_C_EarSoldCall_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RepairWeapon
struct AGameStatePackage_C_RepairWeapon_Params
{
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.TrustModifiedCall
struct AGameStatePackage_C_TrustModifiedCall_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ModificationAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetDirectly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.FastTravelEndCall
struct AGameStatePackage_C_FastTravelEndCall_Params
{
};

// Function GameStatePackage.GameStatePackage_C.EnterEncampmentCall
struct AGameStatePackage_C_EnterEncampmentCall_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ExitEncampmentCall
struct AGameStatePackage_C_ExitEncampmentCall_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinematicStartCall
struct AGameStatePackage_C_CinematicStartCall_Params
{
	struct FName                                       CinematicLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.LeftJobLocationCall
struct AGameStatePackage_C_LeftJobLocationCall_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobObjectiveChangeCall
struct AGameStatePackage_C_JobObjectiveChangeCall_Params
{
	struct FName                                       JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStates>                      New_State;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.UserChoiceMadeCall
struct AGameStatePackage_C_UserChoiceMadeCall_Params
{
	TEnumAsByte<EInteractButton>                       ChoiceButton;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ChoiceTitle;                                              // (Parm)
};

// Function GameStatePackage.GameStatePackage_C.SkippableGameplayStartedCall
struct AGameStatePackage_C_SkippableGameplayStartedCall_Params
{
	struct FName                                       MissionSkipIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.SkippableGameplayEndedCall
struct AGameStatePackage_C_SkippableGameplayEndedCall_Params
{
	struct FName                                       MissionSkipIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinStartLoadingCall
struct AGameStatePackage_C_CinStartLoadingCall_Params
{
	struct FName                                       CinematicLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinEndLoadingCall
struct AGameStatePackage_C_CinEndLoadingCall_Params
{
	struct FName                                       CinematicLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CheatMenuUsed
struct AGameStatePackage_C_CheatMenuUsed_Params
{
	struct FString                                     CommandName;                                              // (Parm, ZeroConstructor)
	struct FString                                     CommandArguments;                                         // (Parm, ZeroConstructor)
};

// Function GameStatePackage.GameStatePackage_C.ConflictEscalationAddPawnCall
struct AGameStatePackage_C_ConflictEscalationAddPawnCall_Params
{
	class ABendAIController*                           AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ConflictEscalationCall
struct AGameStatePackage_C_ConflictEscalationCall_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeConflictEventType>                   Conflict_Event;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConflictEscalationReady
struct AGameStatePackage_C_OnConflictEscalationReady_Params
{
};

// Function GameStatePackage.GameStatePackage_C.LeftMissionFailureZoneCall
struct AGameStatePackage_C_LeftMissionFailureZoneCall_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ReturnFromFailureZoneCall
struct AGameStatePackage_C_ReturnFromFailureZoneCall_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.FailedViaFailureZoneCall
struct AGameStatePackage_C_FailedViaFailureZoneCall_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnOWSaveCall
struct AGameStatePackage_C_OnOWSaveCall_Params
{
	bool                                               IsBikeOrBedQuicksave;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMenuSave;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnDifficultyChangedCall
struct AGameStatePackage_C_OnDifficultyChangedCall_Params
{
};

// Function GameStatePackage.GameStatePackage_C.TrophyUnlockedCall
struct AGameStatePackage_C_TrophyUnlockedCall_Params
{
	struct FName                                       TrophyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TrophyTag;                                                // (Parm)
	int                                                TrophyID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationStartedCall
struct AGameStatePackage_C_OnConversationStartedCall_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsesInterruptSystem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationInterruptedCall
struct AGameStatePackage_C_OnConversationInterruptedCall_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConversationInterruptReason>          InterruptReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationResumedCall
struct AGameStatePackage_C_OnConversationResumedCall_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationFinishedCall
struct AGameStatePackage_C_OnConversationFinishedCall_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  ReasonStopped;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnProfileEntryChangedCall
struct AGameStatePackage_C_OnProfileEntryChangedCall_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                EntryName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EntryValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobResetCall
struct AGameStatePackage_C_JobResetCall_Params
{
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ReceiveBeginPlay
struct AGameStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function GameStatePackage.GameStatePackage_C.RecheckMM
struct AGameStatePackage_C_RecheckMM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.ReceivePostSaveGameLoaded
struct AGameStatePackage_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RecheckPlayer
struct AGameStatePackage_C_RecheckPlayer_Params
{
};

// Function GameStatePackage.GameStatePackage_C.RecheckPlayerCont
struct AGameStatePackage_C_RecheckPlayerCont_Params
{
};

// Function GameStatePackage.GameStatePackage_C.RecheckJM
struct AGameStatePackage_C_RecheckJM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.MissionEnding
struct AGameStatePackage_C_MissionEnding_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.MissionBegin
struct AGameStatePackage_C_MissionBegin_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.FastTravelBegin
struct AGameStatePackage_C_FastTravelBegin_Params
{
	struct FName                                       TravelDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinematicSkipped
struct AGameStatePackage_C_CinematicSkipped_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ReachedJobLocation
struct AGameStatePackage_C_ReachedJobLocation_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobFinished
struct AGameStatePackage_C_JobFinished_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.PlayerDamaged
struct AGameStatePackage_C_PlayerDamaged_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinEnded
struct AGameStatePackage_C_CinEnded_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RecheckEM
struct AGameStatePackage_C_RecheckEM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.EventHappened
struct AGameStatePackage_C_EventHappened_Params
{
	struct FBendGameEventBase                          Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameStatePackage.GameStatePackage_C.OnObjectiveComplete
struct AGameStatePackage_C_OnObjectiveComplete_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.PlayerRespawned
struct AGameStatePackage_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.PlayerRespawn
struct AGameStatePackage_C_PlayerRespawn_Params
{
};

// Function GameStatePackage.GameStatePackage_C.EarSold
struct AGameStatePackage_C_EarSold_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.BikeRefuel
struct AGameStatePackage_C_BikeRefuel_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.BikeRepair
struct AGameStatePackage_C_BikeRepair_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnItemSold
struct AGameStatePackage_C_OnItemSold_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnWeaponPartEquip
struct AGameStatePackage_C_OnWeaponPartEquip_Params
{
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemWeaponPart*                    Part;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.WeaponRepaired
struct AGameStatePackage_C_WeaponRepaired_Params
{
	class UInventoryWeaponItem*                        Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.TrustModified
struct AGameStatePackage_C_TrustModified_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ModificationAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetDirectly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.FastTravelEnd
struct AGameStatePackage_C_FastTravelEnd_Params
{
	struct FName                                       TravelDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.EnterEncampment
struct AGameStatePackage_C_EnterEncampment_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ExitEncampment
struct AGameStatePackage_C_ExitEncampment_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobUnlocked
struct AGameStatePackage_C_JobUnlocked_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.LeaveJobLocation
struct AGameStatePackage_C_LeaveJobLocation_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.UserChoiceMade
struct AGameStatePackage_C_UserChoiceMade_Params
{
	TEnumAsByte<EInteractButton>                       ChoiceButton;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ChoiceTitle;                                              // (Parm)
};

// Function GameStatePackage.GameStatePackage_C.SkippableGameplayStarted
struct AGameStatePackage_C_SkippableGameplayStarted_Params
{
	struct FName                                       MissionSkipIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.SkippableGameplaySkipped
struct AGameStatePackage_C_SkippableGameplaySkipped_Params
{
	struct FName                                       MissionSkipIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.SkippableGameplayEnded
struct AGameStatePackage_C_SkippableGameplayEnded_Params
{
	struct FName                                       MissionSkipIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CollectibleCollected
struct AGameStatePackage_C_CollectibleCollected_Params
{
	class UInventoryItemCollectible*                   Collectible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinStartLoading
struct AGameStatePackage_C_CinStartLoading_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinStartPlaying
struct AGameStatePackage_C_CinStartPlaying_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RecheckGM
struct AGameStatePackage_C_RecheckGM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.CinBegin
struct AGameStatePackage_C_CinBegin_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.CinEnd
struct AGameStatePackage_C_CinEnd_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnCheatActivated
struct AGameStatePackage_C_OnCheatActivated_Params
{
	struct FString                                     CommandName;                                              // (Parm, ZeroConstructor)
	struct FString                                     CommandArguments;                                         // (Parm, ZeroConstructor)
};

// Function GameStatePackage.GameStatePackage_C.Recheck AI
struct AGameStatePackage_C_Recheck_AI_Params
{
};

// Function GameStatePackage.GameStatePackage_C.OnConflictEscalation
struct AGameStatePackage_C_OnConflictEscalation_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeConflictEventType>                   ConflictEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConflictEscalationPullPawn
struct AGameStatePackage_C_OnConflictEscalationPullPawn_Params
{
	class ABendAIController*                           AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnEscalationSpawnedTelemetry
struct AGameStatePackage_C_OnEscalationSpawnedTelemetry_Params
{
	class ABendAIController*                           SpawnedController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobObjUpdate
struct AGameStatePackage_C_JobObjUpdate_Params
{
	struct FName                                       JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStates>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnLeftMissionFailureZone
struct AGameStatePackage_C_OnLeftMissionFailureZone_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnReturnFromFailureZone
struct AGameStatePackage_C_OnReturnFromFailureZone_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnFailedViaFailureZone
struct AGameStatePackage_C_OnFailedViaFailureZone_Params
{
	bool                                               ByVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnOWSave
struct AGameStatePackage_C_OnOWSave_Params
{
	bool                                               IsBikeOrBedQuicksave;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMenuSave;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnProfileEntryChanged_Event_1
struct AGameStatePackage_C_OnProfileEntryChanged_Event_1_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                OptionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnTrophyUnlocked
struct AGameStatePackage_C_OnTrophyUnlocked_Params
{
	struct FName                                       TrophyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TrophyTag;                                                // (Parm)
	int                                                TrophyID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.RecheckTM
struct AGameStatePackage_C_RecheckTM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.RecheckAudioM
struct AGameStatePackage_C_RecheckAudioM_Params
{
};

// Function GameStatePackage.GameStatePackage_C.OnConversationBegin
struct AGameStatePackage_C_OnConversationBegin_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsesInterruptSystem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationInterrupted
struct AGameStatePackage_C_OnConversationInterrupted_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConversationInterruptReason>          InterruptReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationResumed
struct AGameStatePackage_C_OnConversationResumed_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnConversationFinished
struct AGameStatePackage_C_OnConversationFinished_Params
{
	struct FName                                       SoundBankName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundFXName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeInQueue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WhoIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  ReasonStopped;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.JobReset
struct AGameStatePackage_C_JobReset_Params
{
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.OnDifficultyChanged
struct AGameStatePackage_C_OnDifficultyChanged_Params
{
	TEnumAsByte<EGameDifficulty>                       NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStatePackage.GameStatePackage_C.ExecuteUbergraph_GameStatePackage
struct AGameStatePackage_C_ExecuteUbergraph_GameStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
