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

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.DataChanged
struct UAdvancedDisplayMenuEntry_C_DataChanged_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Init
struct UAdvancedDisplayMenuEntry_C_Init_Params
{
	TArray<struct FText>                               Items;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultValueIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.GetCurrentItem
struct UAdvancedDisplayMenuEntry_C_GetCurrentItem_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousItem
struct UAdvancedDisplayMenuEntry_C_PreviousItem_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextItem
struct UAdvancedDisplayMenuEntry_C_NextItem_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature
struct UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature
struct UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature
struct UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.HandleStateChanged
struct UAdvancedDisplayMenuEntry_C_HandleStateChanged_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextValue
struct UAdvancedDisplayMenuEntry_C_NextValue_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousValue
struct UAdvancedDisplayMenuEntry_C_PreviousValue_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Construct
struct UAdvancedDisplayMenuEntry_C_Construct_Params
{
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ExecuteUbergraph_AdvancedDisplayMenuEntry
struct UAdvancedDisplayMenuEntry_C_ExecuteUbergraph_AdvancedDisplayMenuEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ItemChanged__DelegateSignature
struct UAdvancedDisplayMenuEntry_C_ItemChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
};

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.OnHovered_0__DelegateSignature
struct UAdvancedDisplayMenuEntry_C_OnHovered_0__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
