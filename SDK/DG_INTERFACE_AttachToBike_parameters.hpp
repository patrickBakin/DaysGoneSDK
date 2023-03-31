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

// Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_DeathStrandingForceUpdate
struct UINTERFACE_AttachToBike_C_I_DeathStrandingForceUpdate_Params
{
	bool                                               forcereset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_AttachToBike.INTERFACE_AttachToBike_C.I_InteractRangeUpdate
struct UINTERFACE_AttachToBike_C_I_InteractRangeUpdate_Params
{
	bool                                               InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
