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

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.NewDirectionalHitIndicator
struct UUI_HudHitEffects2_C_NewDirectionalHitIndicator_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.Init
struct UUI_HudHitEffects2_C_Init_Params
{
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.ShowHit
struct UUI_HudHitEffects2_C_ShowHit_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.Construct
struct UUI_HudHitEffects2_C_Construct_Params
{
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.OnTakeDamage
struct UUI_HudHitEffects2_C_OnTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   PawnDamaged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CriticalHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KillingBlow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.BindPlayerEvents
struct UUI_HudHitEffects2_C_BindPlayerEvents_Params
{
	class ABendPlayerPawn*                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.ExecuteUbergraph_UI_HudHitEffects2
struct UUI_HudHitEffects2_C_ExecuteUbergraph_UI_HudHitEffects2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
