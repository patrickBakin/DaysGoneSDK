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

// Function PlayerStatePackage.PlayerStatePackage_C.GetPawnClosestToLocation
struct APlayerStatePackage_C_GetPawnClosestToLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToClosestPawn;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.CheckWhichAttribute
struct APlayerStatePackage_C_CheckWhichAttribute_Params
{
	class UObject*                                     Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.UserConstructionScript
struct APlayerStatePackage_C_UserConstructionScript_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.InpActEvt_F8_UniqueObjectNameForCooking_201
struct APlayerStatePackage_C_InpActEvt_F8_UniqueObjectNameForCooking_201_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationTick
struct APlayerStatePackage_C_PlayerLocationTick_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerStuckTick
struct APlayerStatePackage_C_PlayerStuckTick_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerDiedCall
struct APlayerStatePackage_C_PlayerDiedCall_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.GetOnVehicleCall
struct APlayerStatePackage_C_GetOnVehicleCall_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.GetOffVehicleCall
struct APlayerStatePackage_C_GetOffVehicleCall_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeEnterDumpster
struct APlayerStatePackage_C_HideStateChangeEnterDumpster_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquiredCall
struct APlayerStatePackage_C_SkillAcquiredCall_Params
{
	TEnumAsByte<EInventorySkillID>                     SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill*                         SkillItem;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.LevelUpCall
struct APlayerStatePackage_C_LevelUpCall_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeCall
struct APlayerStatePackage_C_HideStateChangeCall_Params
{
	bool                                               IsHiding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnclosedSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeExitDumpster
struct APlayerStatePackage_C_HideStateChangeExitDumpster_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.GrappleBrokenCall
struct APlayerStatePackage_C_GrappleBrokenCall_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailedCall
struct APlayerStatePackage_C_GrappleFailedCall_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.ItemCraftedCall
struct APlayerStatePackage_C_ItemCraftedCall_Params
{
	struct FInventoryIDDetails                         CraftedItem;                                              // (Parm)
};

// Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlockedCall
struct APlayerStatePackage_C_RecipeUnlockedCall_Params
{
	class UInventoryItemRecipe*                        Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsedCall
struct APlayerStatePackage_C_AttributePointUsedCall_Params
{
	class UBendAttribute*                              Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.EnemyTaggedCall
struct APlayerStatePackage_C_EnemyTaggedCall_Params
{
	class UBendCalloutWidgetComponent*                 PawnTagged;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTriggeredTrapCall
struct APlayerStatePackage_C_PlayerTriggeredTrapCall_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   TriggeringPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.OpenMenuCall
struct APlayerStatePackage_C_OpenMenuCall_Params
{
	struct FString                                     Menu_Class;                                               // (Parm, ZeroConstructor)
};

// Function PlayerStatePackage.PlayerStatePackage_C.CloseMenuCall
struct APlayerStatePackage_C_CloseMenuCall_Params
{
	struct FString                                     MenuClass;                                                // (Parm, ZeroConstructor)
};

// Function PlayerStatePackage.PlayerStatePackage_C.ChangedMenu
struct APlayerStatePackage_C_ChangedMenu_Params
{
	struct FString                                     Menu_Class;                                               // (Parm, ZeroConstructor)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamageCall
struct APlayerStatePackage_C_PlayerTakeDamageCall_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PickedUpMeleeCall
struct APlayerStatePackage_C_PickedUpMeleeCall_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<EWeaponRarity>                         Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PickupItemCall
struct APlayerStatePackage_C_PickupItemCall_Params
{
	class UInventoryItem*                              Pickup_Item;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStartedCall
struct APlayerStatePackage_C_PhotoModeStartedCall_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEndedCall
struct APlayerStatePackage_C_PhotoModeEndedCall_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedModeCall
struct APlayerStatePackage_C_EnteredAdvancedModeCall_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedModeCall
struct APlayerStatePackage_C_ExitedAdvancedModeCall_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.OnPhotoTaken
struct APlayerStatePackage_C_OnPhotoTaken_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.MediumTickEvents
struct APlayerStatePackage_C_MediumTickEvents_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.ReceiveBeginPlay
struct APlayerStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.RecheckPlayer
struct APlayerStatePackage_C_RecheckPlayer_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerDied
struct APlayerStatePackage_C_PlayerDied_Params
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

// Function PlayerStatePackage.PlayerStatePackage_C.ReceivePostSaveGameLoaded
struct APlayerStatePackage_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOnVehicle
struct APlayerStatePackage_C_BeginGetOnVehicle_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOffVehicle
struct APlayerStatePackage_C_BeginGetOffVehicle_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.ShortestTickEvents
struct APlayerStatePackage_C_ShortestTickEvents_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChange
struct APlayerStatePackage_C_HideStateChange_Params
{
	bool                                               IsHiding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnclosedSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.LevelUp
struct APlayerStatePackage_C_LevelUp_Params
{
	class UPlayerExperienceLevel*                      PlayerXP;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.GrappleBroken
struct APlayerStatePackage_C_GrappleBroken_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailed
struct APlayerStatePackage_C_GrappleFailed_Params
{
	class ABendPawn*                                   Grappler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.ItemCrafted
struct APlayerStatePackage_C_ItemCrafted_Params
{
	struct FInventoryIDDetails                         ItemCrafted;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlocked
struct APlayerStatePackage_C_RecipeUnlocked_Params
{
	class UInventoryItemRecipe*                        Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerRespawned
struct APlayerStatePackage_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.CheckTimeSinceClose
struct APlayerStatePackage_C_CheckTimeSinceClose_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.ReceiveEndPlay
struct APlayerStatePackage_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.ResetTimeOffline
struct APlayerStatePackage_C_ResetTimeOffline_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquired
struct APlayerStatePackage_C_SkillAcquired_Params
{
	TEnumAsByte<EInventorySkillID>                     SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemSkill*                         SkillItem;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.EnemyTagged
struct APlayerStatePackage_C_EnemyTagged_Params
{
	class UBendCalloutWidgetComponent*                 PawnTagged;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.TriggeredTrap
struct APlayerStatePackage_C_TriggeredTrap_Params
{
	class ABendTrap*                                   Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   TriggeringPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.RetryGM
struct APlayerStatePackage_C_RetryGM_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuOpened
struct APlayerStatePackage_C_PauseMenuOpened_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuClosed
struct APlayerStatePackage_C_PauseMenuClosed_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelOpened
struct APlayerStatePackage_C_WeaponWheelOpened_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelClosed
struct APlayerStatePackage_C_WeaponWheelClosed_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.3DMenuClosed
struct APlayerStatePackage_C__3DMenuClosed_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.MenuOpened
struct APlayerStatePackage_C_MenuOpened_Params
{
	TEnumAsByte<EMenuTypes>                            OpenedMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamage
struct APlayerStatePackage_C_PlayerTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsed
struct APlayerStatePackage_C_AttributePointUsed_Params
{
	class UBendAttribute*                              Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.InventoryModified
struct APlayerStatePackage_C_InventoryModified_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerStatePackage.PlayerStatePackage_C.OnInventoryItemPickupDelegate_Event_1
struct APlayerStatePackage_C_OnInventoryItemPickupDelegate_Event_1_Params
{
	class UInventoryItem*                              PickupItem;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStarted
struct APlayerStatePackage_C_PhotoModeStarted_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEnded
struct APlayerStatePackage_C_PhotoModeEnded_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedMode
struct APlayerStatePackage_C_EnteredAdvancedMode_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedMode
struct APlayerStatePackage_C_ExitedAdvancedMode_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.PhotoCapture
struct APlayerStatePackage_C_PhotoCapture_Params
{
};

// Function PlayerStatePackage.PlayerStatePackage_C.ExecuteUbergraph_PlayerStatePackage
struct APlayerStatePackage_C_ExecuteUbergraph_PlayerStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationsFull__DelegateSignature
struct APlayerStatePackage_C_PlayerLocationsFull__DelegateSignature_Params
{
	TArray<struct FTelemetryEventAttr>                 PlayerLocations;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
