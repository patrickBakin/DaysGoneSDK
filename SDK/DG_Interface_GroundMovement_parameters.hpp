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

// Function Interface_GroundMovement.Interface_GroundMovement_C.UseTurretRequestTempHack
struct UInterface_GroundMovement_C_UseTurretRequestTempHack_Params
{
	bool                                               UseTurret;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_GroundMovement.Interface_GroundMovement_C.GetDesiredGroundIdleState
struct UInterface_GroundMovement_C_GetDesiredGroundIdleState_Params
{
	TEnumAsByte<Enum_DesiredGroundIdleState>           DesiredGroundIdleState;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_GroundMovement.Interface_GroundMovement_C.SetDesiredGroundIdleState
struct UInterface_GroundMovement_C_SetDesiredGroundIdleState_Params
{
	TEnumAsByte<Enum_DesiredGroundIdleState>           DesiredGroundIldeState;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
