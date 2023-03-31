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

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.RemoveMusicManager
struct UBendLib_MusicFunctions_C_RemoveMusicManager_Params
{
	TAssetPtr<class UClass>                            MusicManager;                                             // (Parm)
	struct FName                                       MusicEventUpdate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.SetMusicManager
struct UBendLib_MusicFunctions_C_SetMusicManager_Params
{
	TAssetPtr<class UClass>                            MusicManager;                                             // (Parm)
	struct FName                                       MusicEventUpdate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.MusicEventUpdate
struct UBendLib_MusicFunctions_C_MusicEventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopOverlayMusic
struct UBendLib_MusicFunctions_C_StopOverlayMusic_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopAllMusic
struct UBendLib_MusicFunctions_C_StopAllMusic_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayOverlayMusic
struct UBendLib_MusicFunctions_C_PlayOverlayMusic_Params
{
	class UClass*                                      EventMusic;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundCue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopEventMusic
struct UBendLib_MusicFunctions_C_StopEventMusic_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayEventMusic
struct UBendLib_MusicFunctions_C_PlayEventMusic_Params
{
	class UClass*                                      EventMusic;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundCue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic_2ndTrack
struct UBendLib_MusicFunctions_C_StopMusic_2ndTrack_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic_2ndTrack
struct UBendLib_MusicFunctions_C_PlayMusic_2ndTrack_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic
struct UBendLib_MusicFunctions_C_StopMusic_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic
struct UBendLib_MusicFunctions_C_PlayMusic_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
