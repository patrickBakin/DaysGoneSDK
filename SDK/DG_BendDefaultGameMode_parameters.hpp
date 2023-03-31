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

// Function BendDefaultGameMode.BendDefaultGameMode_C.GetClosestEncampmentPointFromOriginalLocation
struct ABendDefaultGameMode_C_GetClosestEncampmentPointFromOriginalLocation_Params
{
	struct FTransform                                  Closest;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.GetLocalizedDifficultyString
struct ABendDefaultGameMode_C_GetLocalizedDifficultyString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.BeginFastTravel
struct ABendDefaultGameMode_C_BeginFastTravel_Params
{
	struct FTransform*                                 PlayerTransform;                                          // (Parm, IsPlainOldData)
	struct FTransform*                                 BikeTransform;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.UserConstructionScript
struct ABendDefaultGameMode_C_UserConstructionScript_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.ReceiveBeginPlay
struct ABendDefaultGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerDeathStartFadeToBlack
struct ABendDefaultGameMode_C_PlayerDeathStartFadeToBlack_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerRespawned
struct ABendDefaultGameMode_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.RequestFastTravel
struct ABendDefaultGameMode_C_RequestFastTravel_Params
{
	struct FTransform*                                 PlayerTransform;                                          // (Parm, IsPlainOldData)
	struct FTransform*                                 BikeTransform;                                            // (Parm, IsPlainOldData)
	struct FName*                                      TravelDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel
struct ABendDefaultGameMode_C_OnFadedToBlack_FastTravel_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_FastTravel
struct ABendDefaultGameMode_C_OnFadingFinished_FastTravel_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.ORWorldLoadedIn
struct ABendDefaultGameMode_C_ORWorldLoadedIn_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenu
struct ABendDefaultGameMode_C_GoToMainMenu_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceDLC
struct ABendDefaultGameMode_C_GoToMainMenuForceDLC_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceNGP
struct ABendDefaultGameMode_C_GoToMainMenuForceNGP_Params
{
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.ResetJobCategory
struct ABendDefaultGameMode_C_ResetJobCategory_Params
{
	TEnumAsByte<EJobResetTypes>*                       TypeToReset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel_Copy
struct ABendDefaultGameMode_C_OnFadedToBlack_FastTravel_Copy_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_MM_Event_1
struct ABendDefaultGameMode_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnLoadFailure
struct ABendDefaultGameMode_C_OnLoadFailure_Params
{
	struct FText                                       Message;                                                  // (Parm)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.OnSaveFailure
struct ABendDefaultGameMode_C_OnSaveFailure_Params
{
	struct FText                                       Message;                                                  // (Parm)
};

// Function BendDefaultGameMode.BendDefaultGameMode_C.ExecuteUbergraph_BendDefaultGameMode
struct ABendDefaultGameMode_C_ExecuteUbergraph_BendDefaultGameMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
