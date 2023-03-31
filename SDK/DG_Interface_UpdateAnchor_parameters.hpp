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

// Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor
struct UInterface_UpdateAnchor_C_UpdateAnchor_Params
{
	TEnumAsByte<EAnimNotify_UpdateAnchor_Enum_Type>    UpdateAnchorType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor_DodgeAttack
struct UInterface_UpdateAnchor_C_UpdateAnchor_DodgeAttack_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
