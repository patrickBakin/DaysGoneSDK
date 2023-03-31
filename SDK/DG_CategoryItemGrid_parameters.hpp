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

// Function CategoryItemGrid.CategoryItemGrid_C.BindMouseEvents
struct UCategoryItemGrid_C_BindMouseEvents_Params
{
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnHover
struct UCategoryItemGrid_C_OnHover_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnClick
struct UCategoryItemGrid_C_OnClick_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature
struct UCategoryItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature
struct UCategoryItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature_Params
{
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnHold
struct UCategoryItemGrid_C_OnHold_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.ExecuteUbergraph_CategoryItemGrid
struct UCategoryItemGrid_C_ExecuteUbergraph_CategoryItemGrid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnItemHold__DelegateSignature
struct UCategoryItemGrid_C_OnItemHold__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnSelectionChanged__DelegateSignature
struct UCategoryItemGrid_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnItemClicked__DelegateSignature
struct UCategoryItemGrid_C_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryItemGrid.CategoryItemGrid_C.OnItemHovered__DelegateSignature
struct UCategoryItemGrid_C_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
