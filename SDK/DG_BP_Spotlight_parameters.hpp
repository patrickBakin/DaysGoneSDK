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

// Function BP_Spotlight.BP_Spotlight_C.UpdateNightimeTOD
struct ABP_Spotlight_C_UpdateNightimeTOD_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.UpdateDaytimeTOD
struct ABP_Spotlight_C_UpdateDaytimeTOD_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.InitializeRig
struct ABP_Spotlight_C_InitializeRig_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.GetMaterialReferences
struct ABP_Spotlight_C_GetMaterialReferences_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.CheckRigState
struct ABP_Spotlight_C_CheckRigState_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.HandleMidMission
struct ABP_Spotlight_C_HandleMidMission_Params
{
	struct FString                                     CustomMessage;                                            // (Parm, ZeroConstructor)
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.CheckWorldState
struct ABP_Spotlight_C_CheckWorldState_Params
{
	bool                                               PowerOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.UserConstructionScript
struct ABP_Spotlight_C_UserConstructionScript_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.ReceiveBeginPlay
struct ABP_Spotlight_C_ReceiveBeginPlay_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOnPower_Event
struct ABP_Spotlight_C_TurnOnPower_Event_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOffPower_Event
struct ABP_Spotlight_C_TurnOffPower_Event_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.OnMissionComplete
struct ABP_Spotlight_C_OnMissionComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.MissionSpecial
struct ABP_Spotlight_C_MissionSpecial_Params
{
	struct FString                                     CustomMessage;                                            // (Parm, ZeroConstructor)
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOnRig
struct ABP_Spotlight_C_TurnOnRig_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOffRig
struct ABP_Spotlight_C_TurnOffRig_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.CinematicStart
struct ABP_Spotlight_C_CinematicStart_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.CinematicEnd
struct ABP_Spotlight_C_CinematicEnd_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.EditorTicker
struct ABP_Spotlight_C_EditorTicker_Params
{
	float                                              Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.CheckWorldPowerSettings
struct ABP_Spotlight_C_CheckWorldPowerSettings_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.ExecuteUbergraph_BP_Spotlight
struct ABP_Spotlight_C_ExecuteUbergraph_BP_Spotlight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOffPower__DelegateSignature
struct ABP_Spotlight_C_TurnOffPower__DelegateSignature_Params
{
};

// Function BP_Spotlight.BP_Spotlight_C.TurnOnPower__DelegateSignature
struct ABP_Spotlight_C_TurnOnPower__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
