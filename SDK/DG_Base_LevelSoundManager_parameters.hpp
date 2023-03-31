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

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExitedVehicle
struct UBase_LevelSoundManager_C_ExitedVehicle_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.EnteredVehicle
struct UBase_LevelSoundManager_C_EnteredVehicle_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionEnded
struct UBase_LevelSoundManager_C_InteractionEnded_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionStarted
struct UBase_LevelSoundManager_C_InteractionStarted_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationEnded
struct UBase_LevelSoundManager_C_ConversationEnded_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationStarted
struct UBase_LevelSoundManager_C_ConversationStarted_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.MeleeCriticalHitSuccessful
struct UBase_LevelSoundManager_C_MeleeCriticalHitSuccessful_Params
{
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.SetAsCurrentManager
struct UBase_LevelSoundManager_C_SetAsCurrentManager_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.Tick
struct UBase_LevelSoundManager_C_Tick_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.SoundLevelEventUpdate
struct UBase_LevelSoundManager_C_SoundLevelEventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.EventUpdate
struct UBase_LevelSoundManager_C_EventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.OnSetAsCurrentLevelSoundManager
struct UBase_LevelSoundManager_C_OnSetAsCurrentLevelSoundManager_Params
{
	struct FName*                                      LevelSoundEventName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExecuteUbergraph_Base_LevelSoundManager
struct UBase_LevelSoundManager_C_ExecuteUbergraph_Base_LevelSoundManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
