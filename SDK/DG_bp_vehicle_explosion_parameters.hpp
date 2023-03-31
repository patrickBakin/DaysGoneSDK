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

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.UserConstructionScript
struct Abp_vehicle_explosion_C_UserConstructionScript_Params
{
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveAnyDamage
struct Abp_vehicle_explosion_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ReceiveBeginPlay
struct Abp_vehicle_explosion_C_ReceiveBeginPlay_Params
{
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.On Exploded
struct Abp_vehicle_explosion_C_On_Exploded_Params
{
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.HandleUsedWhenstreamIn
struct Abp_vehicle_explosion_C_HandleUsedWhenstreamIn_Params
{
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.ExecuteUbergraph_bp_vehicle_explosion
struct Abp_vehicle_explosion_C_ExecuteUbergraph_bp_vehicle_explosion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_vehicle_explosion.bp_vehicle_explosion_C.DestructibleExploded__DelegateSignature
struct Abp_vehicle_explosion_C_DestructibleExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
