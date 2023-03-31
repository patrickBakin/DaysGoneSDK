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

// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.RemoveLevelSoundManager
struct UBendLib_LevelSoundFunctions_C_RemoveLevelSoundManager_Params
{
	TAssetPtr<class UClass>                            LevelSoundManager;                                        // (Parm)
	struct FName                                       LevelSoundEventUpdate;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.SetLevelSoundManager
struct UBendLib_LevelSoundFunctions_C_SetLevelSoundManager_Params
{
	TAssetPtr<class UClass>                            LevelSoundManager;                                        // (Parm)
	struct FName                                       LevelSoundEventUpdate;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.LevelSoundEventUpdate
struct UBendLib_LevelSoundFunctions_C_LevelSoundEventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
