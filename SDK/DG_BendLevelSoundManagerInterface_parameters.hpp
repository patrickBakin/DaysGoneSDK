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

// Function BendLevelSoundManagerInterface.BendLevelSoundManagerInterface_C.EventUpdate
struct UBendLevelSoundManagerInterface_C_EventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Making_Sound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sound_Location;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
