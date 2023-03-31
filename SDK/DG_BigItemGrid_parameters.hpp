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

// Function BigItemGrid.BigItemGrid_C.BindMouseEvents
struct UBigItemGrid_C_BindMouseEvents_Params
{
};

// Function BigItemGrid.BigItemGrid_C.OnHover
struct UBigItemGrid_C_OnHover_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigItemGrid.BigItemGrid_C.OnClick
struct UBigItemGrid_C_OnClick_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature
struct UBigItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature
struct UBigItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature_Params
{
};

// Function BigItemGrid.BigItemGrid_C.ExecuteUbergraph_BigItemGrid
struct UBigItemGrid_C_ExecuteUbergraph_BigItemGrid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigItemGrid.BigItemGrid_C.OnSelectionChanged__DelegateSignature
struct UBigItemGrid_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function BigItemGrid.BigItemGrid_C.OnItemClicked__DelegateSignature
struct UBigItemGrid_C_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigItemGrid.BigItemGrid_C.OnItemHovered__DelegateSignature
struct UBigItemGrid_C_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
