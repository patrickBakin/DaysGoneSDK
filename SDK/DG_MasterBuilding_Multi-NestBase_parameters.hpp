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

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.CreateDynamicNestMaterials
struct AMasterBuilding_Multi_NestBase_C_CreateDynamicNestMaterials_Params
{
	TArray<class UStaticMeshComponent*>                Static_Mesh_s;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Material_Array;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.UserConstructionScript
struct AMasterBuilding_Multi_NestBase_C_UserConstructionScript_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_2__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_2__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_3__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_3__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_4__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_4__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_5__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_5__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_6__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_6__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__FinishedFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_7__FinishedFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__UpdateFunc
struct AMasterBuilding_Multi_NestBase_C_Timeline_7__UpdateFunc_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ReceiveBeginPlay
struct AMasterBuilding_Multi_NestBase_C_ReceiveBeginPlay_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Nest Destroyed
struct AMasterBuilding_Multi_NestBase_C_Nest_Destroyed_Params
{
	struct FString                                     Nest_s_ID;                                                // (Parm, ZeroConstructor)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BoundOnNestDestroyed_Event
struct AMasterBuilding_Multi_NestBase_C_BoundOnNestDestroyed_Event_Params
{
	struct FString                                     DestroyedNestID;                                          // (Parm, ZeroConstructor)
	class ABendNest*                                   DestroyedNest;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.RetryLoad
struct AMasterBuilding_Multi_NestBase_C_RetryLoad_Params
{
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.FireGoneOut
struct AMasterBuilding_Multi_NestBase_C_FireGoneOut_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.NestFireGoneOut_Event
struct AMasterBuilding_Multi_NestBase_C_NestFireGoneOut_Event_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BurnTheMaterials
struct AMasterBuilding_Multi_NestBase_C_BurnTheMaterials_Params
{
	struct FString                                     NestID;                                                   // (Parm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ExecuteUbergraph_MasterBuilding_Multi-NestBase
struct AMasterBuilding_Multi_NestBase_C_ExecuteUbergraph_MasterBuilding_Multi_NestBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
