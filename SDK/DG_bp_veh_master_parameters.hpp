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

// Function bp_veh_master.bp_veh_master_C.checkForUncollectableStaticMeshes
struct Abp_veh_master_C_checkForUncollectableStaticMeshes_Params
{
};

// Function bp_veh_master.bp_veh_master_C.autoSetTireEnum
struct Abp_veh_master_C_autoSetTireEnum_Params
{
};

// Function bp_veh_master.bp_veh_master_C.setTireState
struct Abp_veh_master_C_setTireState_Params
{
};

// Function bp_veh_master.bp_veh_master_C.setExcludeFromTerrainColorCapture
struct Abp_veh_master_C_setExcludeFromTerrainColorCapture_Params
{
};

// Function bp_veh_master.bp_veh_master_C.setPawnCollideHidden
struct Abp_veh_master_C_setPawnCollideHidden_Params
{
};

// Function bp_veh_master.bp_veh_master_C.turnOffReceivesDecals
struct Abp_veh_master_C_turnOffReceivesDecals_Params
{
};

// Function bp_veh_master.bp_veh_master_C.getBendCoverChildTransforms
struct Abp_veh_master_C_getBendCoverChildTransforms_Params
{
	class UStaticMesh*                                 car;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BendCoverChildTransforms;                                 // (Parm, OutParm, IsPlainOldData)
};

// Function bp_veh_master.bp_veh_master_C.SnapToSurface
struct Abp_veh_master_C_SnapToSurface_Params
{
};

// Function bp_veh_master.bp_veh_master_C.CreateDynamicMaterials
struct Abp_veh_master_C_CreateDynamicMaterials_Params
{
	TArray<int>                                        Paint_Color_Indexes;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Material_Instances;                               // (Parm, OutParm, ZeroConstructor)
};

// Function bp_veh_master.bp_veh_master_C.ReadPaintedColorEnum_GetRandom
struct Abp_veh_master_C_ReadPaintedColorEnum_GetRandom_Params
{
	TArray<int>                                        Paint_Indexes;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum_GetIndexes
struct Abp_veh_master_C_ReadPaintColorEnum_GetIndexes_Params
{
	struct FString                                     Enum_Value;                                               // (Parm, ZeroConstructor)
	TArray<int>                                        PaintIndexes;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum
struct Abp_veh_master_C_ReadPaintColorEnum_Params
{
	TArray<int>                                        Paint_Color_Indexes;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function bp_veh_master.bp_veh_master_C.TokenizeStringToList
struct Abp_veh_master_C_TokenizeStringToList_Params
{
	struct FString                                     In_String;                                                // (Parm, ZeroConstructor)
	struct FString                                     Split_By;                                                 // (Parm, ZeroConstructor)
	TArray<struct FString>                             Token_List_as_String;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Token_List_as_Int;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function bp_veh_master.bp_veh_master_C.BendVehCarArt_SplitPaintColorEnum
struct Abp_veh_master_C_BendVehCarArt_SplitPaintColorEnum_Params
{
};

// Function bp_veh_master.bp_veh_master_C.SetMaterialParams
struct Abp_veh_master_C_SetMaterialParams_Params
{
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instances;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_veh_master.bp_veh_master_C.BendVehCarArt_ReadPaintColorEnum
struct Abp_veh_master_C_BendVehCarArt_ReadPaintColorEnum_Params
{
};

// Function bp_veh_master.bp_veh_master_C.ArtFunctions
struct Abp_veh_master_C_ArtFunctions_Params
{
};

// Function bp_veh_master.bp_veh_master_C.RemoveParts
struct Abp_veh_master_C_RemoveParts_Params
{
	class UStaticMeshComponent*                        Hood;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Trunk;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SteeringWheel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_veh_master.bp_veh_master_C.UserConstructionScript
struct Abp_veh_master_C_UserConstructionScript_Params
{
};

// Function bp_veh_master.bp_veh_master_C.ReceiveTick
struct Abp_veh_master_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature
struct Abp_veh_master_C_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature_Params
{
};

// Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature
struct Abp_veh_master_C_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature_Params
{
};

// Function bp_veh_master.bp_veh_master_C.ExecuteUbergraph_bp_veh_master
struct Abp_veh_master_C_ExecuteUbergraph_bp_veh_master_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
