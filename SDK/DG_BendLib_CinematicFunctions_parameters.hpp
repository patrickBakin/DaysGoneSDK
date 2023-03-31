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

// Function BendLib_CinematicFunctions.BendLib_CinematicFunctions_C.CinematicMode
struct UBendLib_CinematicFunctions_C_CinematicMode_Params
{
	bool                                               CinematicActive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Affects_HUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_CinematicHidePawns>               HideActors;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
