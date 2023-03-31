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

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BikeSpeedCheck
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BikeSpeedCheck_Params
{
	bool                                               ShouldSuppressVO;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UpdateBendSpheres
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_UpdateBendSpheres_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.CheckNestStatus
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_CheckNestStatus_Params
{
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.HasCollectible
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_HasCollectible_Params
{
	bool                                               HasCollectible;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.MapIconState
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_MapIconState_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.UserConstructionScript
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNestVOComplete
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_FirstNestVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.FirstNest
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_FirstNest_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNestVOComplete_Copy
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_LastNestVOComplete_Copy_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.LastNest
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_LastNest_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.NearNestVOComplete
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_NearNestVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Near
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_Near_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.SpottedNestVOComplete
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_SpottedNestVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.Spotted
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_Spotted_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ReceiveBeginPlay
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnMapTaken_Event
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnMapTaken_Event_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnNestDestroyed_Event_1
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnNestDestroyed_Event_1_Params
{
	struct FString                                     DestroyedNestID;                                          // (Parm, ZeroConstructor)
	class ABendNest*                                   DestroyedNest;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.OnJobResetCalled_Event_1
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_OnJobResetCalled_Event_1_Params
{
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor
struct ABP_AmbushCamp_Nest_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
