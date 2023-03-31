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

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DefineCalloutInfo
struct ABP_AmbientEventMarker_C_DefineCalloutInfo_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayDebug
struct ABP_AmbientEventMarker_C_DisplayDebug_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDisplayTextColor
struct ABP_AmbientEventMarker_C_SetDisplayTextColor_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetEventName
struct ABP_AmbientEventMarker_C_SetEventName_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.TextFaceCamera
struct ABP_AmbientEventMarker_C_TextFaceCamera_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DoIStartInDebugMode
struct ABP_AmbientEventMarker_C_DoIStartInDebugMode_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisplayError
struct ABP_AmbientEventMarker_C_DisplayError_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.FindAmbientEventManager
struct ABP_AmbientEventMarker_C_FindAmbientEventManager_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.DisableCollisionForSeconds
struct ABP_AmbientEventMarker_C_DisableCollisionForSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetCollision
struct ABP_AmbientEventMarker_C_SetCollision_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.SetDebugTimeBeingSelected
struct ABP_AmbientEventMarker_C_SetDebugTimeBeingSelected_Params
{
	float                                              TimeSelected;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleUp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.UserConstructionScript
struct ABP_AmbientEventMarker_C_UserConstructionScript_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveBeginPlay
struct ABP_AmbientEventMarker_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.EventDisableCollisionTemporarily
struct ABP_AmbientEventMarker_C_EventDisableCollisionTemporarily_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnRemoveFromWorld
struct ABP_AmbientEventMarker_C_OnRemoveFromWorld_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.Debug Tick From Master
struct ABP_AmbientEventMarker_C_Debug_Tick_From_Master_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoad
struct ABP_AmbientEventMarker_C_OnUMapLoad_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnUMapLoaded
struct ABP_AmbientEventMarker_C_OnUMapLoaded_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventUnloaded
struct ABP_AmbientEventMarker_C_OnEventUnloaded_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventLoaded
struct ABP_AmbientEventMarker_C_OnEventLoaded_Params
{
	bool*                                              PreviouslyLoaded;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.OnEventComplete
struct ABP_AmbientEventMarker_C_OnEventComplete_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckIfDeaconCanSpeak
struct ABP_AmbientEventMarker_C_CheckIfDeaconCanSpeak_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StartPing
struct ABP_AmbientEventMarker_C_StartPing_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CustomEvent_1
struct ABP_AmbientEventMarker_C_CustomEvent_1_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.StopPing
struct ABP_AmbientEventMarker_C_StopPing_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.CheckDistance
struct ABP_AmbientEventMarker_C_CheckDistance_Params
{
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ReceiveEndPlay
struct ABP_AmbientEventMarker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventMarker.BP_AmbientEventMarker_C.ExecuteUbergraph_BP_AmbientEventMarker
struct ABP_AmbientEventMarker_C_ExecuteUbergraph_BP_AmbientEventMarker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
