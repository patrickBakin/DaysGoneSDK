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

// Function INTERFACE_GasCan.INTERFACE_GasCan_C.I_DisplayFuelInteract
struct UINTERFACE_GasCan_C_I_DisplayFuelInteract_Params
{
	bool                                               DisplayInteract;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToFuel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ObjectAnimAnchorRef;                                      // (Parm, IsPlainOldData)
	struct FTransform                                  WidgetTransform;                                          // (Parm, IsPlainOldData)
	bool                                               NeedsRefilling;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
