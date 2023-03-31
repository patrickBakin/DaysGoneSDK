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

// Function BP_Storm.BP_Storm_C.Spawn Lighting Blueprint
struct ABP_Storm_C_Spawn_Lighting_Blueprint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_LightningBase_C*                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm.BP_Storm_C.Choose Location
struct ABP_Storm_C_Choose_Location_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm.BP_Storm_C.SpawnLighting
struct ABP_Storm_C_SpawnLighting_Params
{
	struct FVector                                     LightningCenter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm.BP_Storm_C.UserConstructionScript
struct ABP_Storm_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
