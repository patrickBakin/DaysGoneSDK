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

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.MakeNeverSpawnAgainCounter
struct AGlobalPopulation_Casl_C_MakeNeverSpawnAgainCounter_Params
{
	TEnumAsByte<EAIFactionType>                        UnitSpawnedFactionType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.PlayedEncounter
struct AGlobalPopulation_Casl_C_PlayedEncounter_Params
{
	TEnumAsByte<EAIFactionType>                        UnitSpawnedFactionType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Construction function call-setup poi's
struct AGlobalPopulation_Casl_C_Construction_function_call_setup_poi_s_Params
{
	TArray<class ABendPOI*>                            Bend_POI;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Set correct poi array to use
struct AGlobalPopulation_Casl_C_Set_correct_poi_array_to_use_Params
{
	TArray<class ABendPOI*>                            NewParam;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Find an open poi force use
struct AGlobalPopulation_Casl_C_Find_an_open_poi_force_use_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserConstructionScript
struct AGlobalPopulation_Casl_C_UserConstructionScript_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ReceiveBeginPlay
struct AGlobalPopulation_Casl_C_ReceiveBeginPlay_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Play Anim On Spawn
struct AGlobalPopulation_Casl_C_Play_Anim_On_Spawn_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserLeavesSlotDelegate_Event
struct AGlobalPopulation_Casl_C_UserLeavesSlotDelegate_Event_Params
{
	class ABendPOISlot*                                Slot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABendAIController*                           User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnAutoNavSuccess_Event
struct AGlobalPopulation_Casl_C_OnAutoNavSuccess_Event_Params
{
	class ABendPOISlot*                                Slot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Setup auto awarness changes based on distance and camera
struct AGlobalPopulation_Casl_C_Setup_auto_awarness_changes_based_on_distance_and_camera_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Tick for distance and sight timer
struct AGlobalPopulation_Casl_C_Tick_for_distance_and_sight_timer_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Unit become semi aware of player
struct AGlobalPopulation_Casl_C_Unit_become_semi_aware_of_player_Params
{
	class ABendAIController*                           AI_Controller;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.unit become full aware of player
struct AGlobalPopulation_Casl_C_unit_become_full_aware_of_player_Params
{
	class ABendAIController*                           AI_Controller;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Timer update to spawn
struct AGlobalPopulation_Casl_C_Timer_update_to_spawn_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnDiedOrDestroyed_Event_1
struct AGlobalPopulation_Casl_C_OnDiedOrDestroyed_Event_1_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDied;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimStarted_Event_1
struct AGlobalPopulation_Casl_C_ExitAnimStarted_Event_1_Params
{
	class ABendPOISlot*                                Slot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnBendPawnTakeAnyDamage_Event_1
struct AGlobalPopulation_Casl_C_OnBendPawnTakeAnyDamage_Event_1_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   PawnDamaged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CriticalHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KillingBlow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimComplete_Event_1
struct AGlobalPopulation_Casl_C_ExitAnimComplete_Event_1_Params
{
	class ABendPOISlot*                                Slot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.TestForBetterSpawnLocation
struct AGlobalPopulation_Casl_C_TestForBetterSpawnLocation_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Plusonevent
struct AGlobalPopulation_Casl_C_Plusonevent_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.FailGroupTest
struct AGlobalPopulation_Casl_C_FailGroupTest_Params
{
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExecuteUbergraph_GlobalPopulation_Casl
struct AGlobalPopulation_Casl_C_ExecuteUbergraph_GlobalPopulation_Casl_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.LeftPOI__DelegateSignature
struct AGlobalPopulation_Casl_C_LeftPOI__DelegateSignature_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
