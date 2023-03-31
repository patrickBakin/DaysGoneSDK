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

// Function DropWeaponComponent.DropWeaponComponent_C.StartDrop
struct UDropWeaponComponent_C_StartDrop_Params
{
};

// Function DropWeaponComponent.DropWeaponComponent_C.StopDrop
struct UDropWeaponComponent_C_StopDrop_Params
{
};

// Function DropWeaponComponent.DropWeaponComponent_C.ReceiveTick
struct UDropWeaponComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropWeaponComponent.DropWeaponComponent_C.ExecuteUbergraph_DropWeaponComponent
struct UDropWeaponComponent_C_ExecuteUbergraph_DropWeaponComponent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropWeaponComponent.DropWeaponComponent_C.OnDropUpdate__DelegateSignature
struct UDropWeaponComponent_C_OnDropUpdate__DelegateSignature_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
