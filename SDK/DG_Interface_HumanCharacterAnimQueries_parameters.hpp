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

// Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_Character
struct UInterface_HumanCharacterAnimQueries_C_GetAnimSet_Character_Params
{
	TEnumAsByte<ECharacterAnimSetEnum>                 AnimSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_RideVehicle
struct UInterface_HumanCharacterAnimQueries_C_GetAnimSet_RideVehicle_Params
{
	TEnumAsByte<Enum_AnimSet_RideVehicle>              AnimSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
