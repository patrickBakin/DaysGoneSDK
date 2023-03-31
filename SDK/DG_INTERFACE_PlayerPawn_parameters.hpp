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

// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_WearRadioOnChest
struct UINTERFACE_PlayerPawn_C_I_WearRadioOnChest_Params
{
	bool                                               WearRadio;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusic2ndTrackComponent
struct UINTERFACE_PlayerPawn_C_I_GetPlayerMusic2ndTrackComponent_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusicComponent
struct UINTERFACE_PlayerPawn_C_I_GetPlayerMusicComponent_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_SetPlayerTakeFallDamage
struct UINTERFACE_PlayerPawn_C_I_SetPlayerTakeFallDamage_Params
{
	bool                                               TakeDamage_;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
