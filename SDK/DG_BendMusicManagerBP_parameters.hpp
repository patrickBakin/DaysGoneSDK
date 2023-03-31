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

// Function BendMusicManagerBP.BendMusicManagerBP_C.StartOW_PostMissionEnd
struct UBendMusicManagerBP_C_StartOW_PostMissionEnd_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetStealthIntensityHigh
struct UBendMusicManagerBP_C_SetStealthIntensityHigh_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetStealthIntensityLow
struct UBendMusicManagerBP_C_SetStealthIntensityLow_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.NeroSpeakerOff
struct UBendMusicManagerBP_C_NeroSpeakerOff_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.NeroSpeakerOn
struct UBendMusicManagerBP_C_NeroSpeakerOn_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.EndJobMusic
struct UBendMusicManagerBP_C_EndJobMusic_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMinHigh
struct UBendMusicManagerBP_C_SetIntensityClampMinHigh_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMaxHigh
struct UBendMusicManagerBP_C_SetIntensityClampMaxHigh_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideHorde
struct UBendMusicManagerBP_C_SetIntensityOverrideHorde_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMaxLow2
struct UBendMusicManagerBP_C_SetIntensityClampMaxLow2_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMaxMedium
struct UBendMusicManagerBP_C_SetIntensityClampMaxMedium_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMinMedium
struct UBendMusicManagerBP_C_SetIntensityClampMinMedium_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMinLow2
struct UBendMusicManagerBP_C_SetIntensityClampMinLow2_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityClampMinLow1
struct UBendMusicManagerBP_C_SetIntensityClampMinLow1_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideDisable
struct UBendMusicManagerBP_C_SetIntensityOverrideDisable_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideIdle
struct UBendMusicManagerBP_C_SetIntensityOverrideIdle_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideLow1
struct UBendMusicManagerBP_C_SetIntensityOverrideLow1_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideLow2
struct UBendMusicManagerBP_C_SetIntensityOverrideLow2_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideMedium
struct UBendMusicManagerBP_C_SetIntensityOverrideMedium_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.SetIntensityOverrideHigh
struct UBendMusicManagerBP_C_SetIntensityOverrideHigh_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnCinematicInterrupted
struct UBendMusicManagerBP_C_OnCinematicInterrupted_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnCinematicStarted
struct UBendMusicManagerBP_C_OnCinematicStarted_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PassQueuedEventsToNewManager
struct UBendMusicManagerBP_C_PassQueuedEventsToNewManager_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnPlayerDeath
struct UBendMusicManagerBP_C_OnPlayerDeath_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.EndEventMusic
struct UBendMusicManagerBP_C_EndEventMusic_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayEventOverlaySync
struct UBendMusicManagerBP_C_PlayEventOverlaySync_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.MusicEventUpdate
struct UBendMusicManagerBP_C_MusicEventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.TickInteractiveMusic
struct UBendMusicManagerBP_C_TickInteractiveMusic_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayInteractiveMusic
struct UBendMusicManagerBP_C_PlayInteractiveMusic_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.BulletNearPlayer
struct UBendMusicManagerBP_C_BulletNearPlayer_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayOverlayMusic
struct UBendMusicManagerBP_C_PlayOverlayMusic_Params
{
	class UClass*                                      Event_Music;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Sound_Cue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Play_During_Pause;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayEventMusic
struct UBendMusicManagerBP_C_PlayEventMusic_Params
{
	class UClass*                                      Event_Music;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Sound_Cue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayEventMusicRequested
struct UBendMusicManagerBP_C_PlayEventMusicRequested_Params
{
	class UClass*                                      Event_Music;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Event_Sound_Cue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.PlayOverlayMusicRequested
struct UBendMusicManagerBP_C_PlayOverlayMusicRequested_Params
{
	class UClass*                                      Overlay_Music;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Overlay_Sound_Cue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnBulletPassedByNearPlayer
struct UBendMusicManagerBP_C_OnBulletPassedByNearPlayer_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.EventUpdate
struct UBendMusicManagerBP_C_EventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnSetAsCurrentMusicManager
struct UBendMusicManagerBP_C_OnSetAsCurrentMusicManager_Params
{
	struct FName*                                      MusicEventName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnRemovedAsCurrentMusicManager
struct UBendMusicManagerBP_C_OnRemovedAsCurrentMusicManager_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnCinematicAudioStarted
struct UBendMusicManagerBP_C_OnCinematicAudioStarted_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnPlayerDied
struct UBendMusicManagerBP_C_OnPlayerDied_Params
{
	TEnumAsByte<EAIFactionType>*                       KilledByFaction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETypeOfBaseDamage>*                    BaseDamageType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETypeOfDamage>*                        DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OnMeleeDeathBlow
struct UBendMusicManagerBP_C_OnMeleeDeathBlow_Params
{
	class ABendPawn*                                   Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.OWMusicHasStarted
struct UBendMusicManagerBP_C_OWMusicHasStarted_Params
{
};

// Function BendMusicManagerBP.BendMusicManagerBP_C.ExecuteUbergraph_BendMusicManagerBP
struct UBendMusicManagerBP_C_ExecuteUbergraph_BendMusicManagerBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
