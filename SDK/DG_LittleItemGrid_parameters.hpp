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

// Function LittleItemGrid.LittleItemGrid_C.BindMouseEvents
struct ULittleItemGrid_C_BindMouseEvents_Params
{
};

// Function LittleItemGrid.LittleItemGrid_C.OnHover
struct ULittleItemGrid_C_OnHover_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LittleItemGrid.LittleItemGrid_C.OnClick
struct ULittleItemGrid_C_OnClick_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature
struct ULittleItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature
struct ULittleItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature_Params
{
};

// Function LittleItemGrid.LittleItemGrid_C.ExecuteUbergraph_LittleItemGrid
struct ULittleItemGrid_C_ExecuteUbergraph_LittleItemGrid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LittleItemGrid.LittleItemGrid_C.OnSelectionChanged__DelegateSignature
struct ULittleItemGrid_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function LittleItemGrid.LittleItemGrid_C.OnItemClicked__DelegateSignature
struct ULittleItemGrid_C_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LittleItemGrid.LittleItemGrid_C.OnItemHovered__DelegateSignature
struct ULittleItemGrid_C_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
