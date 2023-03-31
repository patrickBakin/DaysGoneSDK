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

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.HideHit
struct UUI_Reticle_Pistol_Blindfire_C_HideHit_Params
{
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetHit
struct UUI_Reticle_Pistol_Blindfire_C_SetHit_Params
{
	bool                                               KillShot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitArmor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetVisible
struct UUI_Reticle_Pistol_Blindfire_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Construct
struct UUI_Reticle_Pistol_Blindfire_C_Construct_Params
{
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetAccuracy
struct UUI_Reticle_Pistol_Blindfire_C_SetAccuracy_Params
{
	float*                                             AccuracyScale;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotSomeone
struct UUI_Reticle_Pistol_Blindfire_C_OnPlayerShotSomeone_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromForceKill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnBulletDamageFromPlayer
struct UUI_Reticle_Pistol_Blindfire_C_OnBulletDamageFromPlayer_Params
{
	struct FBendCrowdMemberHandle                      CrowdMemberHandle;                                        // (Parm)
	bool                                               bWasHeadShot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotDamageableObject
struct UUI_Reticle_Pistol_Blindfire_C_OnPlayerShotDamageableObject_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnEnemyKilled
struct UUI_Reticle_Pistol_Blindfire_C_OnEnemyKilled_Params
{
	class ABendPawn*                                   VictimPawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnCrowdMemberKilled
struct UUI_Reticle_Pistol_Blindfire_C_OnCrowdMemberKilled_Params
{
	class USkeletalMeshComponent*                      VictimMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Tick
struct UUI_Reticle_Pistol_Blindfire_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.ExecuteUbergraph_UI_Reticle_Pistol_Blindfire
struct UUI_Reticle_Pistol_Blindfire_C_ExecuteUbergraph_UI_Reticle_Pistol_Blindfire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.FireComplete__DelegateSignature
struct UUI_Reticle_Pistol_Blindfire_C_FireComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
