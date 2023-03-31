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

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugUpdateResetTimeTable
struct ABP_AmbientEventManager_C_DebugUpdateResetTimeTable_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateEventResetTimeHUD
struct ABP_AmbientEventManager_C_CreateEventResetTimeHUD_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleEventResetTimesHUD
struct ABP_AmbientEventManager_C_ToggleEventResetTimesHUD_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.AddEventToRunningList
struct ABP_AmbientEventManager_C_AddEventToRunningList_Params
{
	class ABendAmbientEventMarker*                     AmbientEventMarker;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.RemoveEventFromRunningList
struct ABP_AmbientEventManager_C_RemoveEventFromRunningList_Params
{
	class ABendAmbientEventMarker*                     AmbientEventMarker;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleRunningEventListHUD
struct ABP_AmbientEventManager_C_ToggleRunningEventListHUD_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateRunning_AE_List
struct ABP_AmbientEventManager_C_CreateRunning_AE_List_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.RefreshScoreDebugButtons
struct ABP_AmbientEventManager_C_RefreshScoreDebugButtons_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugFillInGradeUI
struct ABP_AmbientEventManager_C_DebugFillInGradeUI_Params
{
	struct FStructAmbientEventDebugData                Data;                                                     // (Parm)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateScoreDebugButtons
struct ABP_AmbientEventManager_C_CreateScoreDebugButtons_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CleanDebugUI
struct ABP_AmbientEventManager_C_CleanDebugUI_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugHudButtonPressed
struct ABP_AmbientEventManager_C_DebugHudButtonPressed_Params
{
	struct FText                                       ButtonName;                                               // (Parm)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.Toggle Debug HUD
struct ABP_AmbientEventManager_C_Toggle_Debug_HUD_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.SetupValues
struct ABP_AmbientEventManager_C_SetupValues_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerCollision
struct ABP_AmbientEventManager_C_ToggleMarkerCollision_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CachePlayerController
struct ABP_AmbientEventManager_C_CachePlayerController_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugTest
struct ABP_AmbientEventManager_C_DebugTest_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugUnloadSelectedEvent
struct ABP_AmbientEventManager_C_CheckIfDebugUnloadSelectedEvent_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugLoadSelectedEvent
struct ABP_AmbientEventManager_C_CheckIfDebugLoadSelectedEvent_Params
{
	bool                                               Loaded;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleDebugMode
struct ABP_AmbientEventManager_C_ToggleDebugMode_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerIcons
struct ABP_AmbientEventManager_C_ToggleMarkerIcons_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.UserConstructionScript
struct ABP_AmbientEventManager_C_UserConstructionScript_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveTick
struct ABP_AmbientEventManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveBeginPlay
struct ABP_AmbientEventManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventLoaded
struct ABP_AmbientEventManager_C_OnEventLoaded_Params
{
	class ABendAmbientEventMarker**                    AmbientEventMarker;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventUnloaded
struct ABP_AmbientEventManager_C_OnEventUnloaded_Params
{
	class ABendAmbientEventMarker**                    AmbientEventMarker;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventChosen_Event_1
struct ABP_AmbientEventManager_C_OnAmbientEventChosen_Event_1_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysLoaded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventLoaded_Event_1
struct ABP_AmbientEventManager_C_OnAmbientEventLoaded_Event_1_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventManagerBlocked_Event_1
struct ABP_AmbientEventManager_C_OnAmbientEventManagerBlocked_Event_1_Params
{
	TEnumAsByte<EAmbientEventManagerBlockMsg>          BlockReason;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.Remove Block
struct ABP_AmbientEventManager_C_Remove_Block_Params
{
};

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ExecuteUbergraph_BP_AmbientEventManager
struct ABP_AmbientEventManager_C_ExecuteUbergraph_BP_AmbientEventManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
