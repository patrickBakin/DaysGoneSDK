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

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.ChangeValue
struct UUI_PhotoMode_Selector_C_ChangeValue_Params
{
	int                                                New_Index;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.HandleInput
struct UUI_PhotoMode_Selector_C_HandleInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.Construct
struct UUI_PhotoMode_Selector_C_Construct_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.Tick
struct UUI_PhotoMode_Selector_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.Selected
struct UUI_PhotoMode_Selector_C_Selected_Params
{
	bool*                                              Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.Reset
struct UUI_PhotoMode_Selector_C_Reset_Params
{
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.ManualSetValue
struct UUI_PhotoMode_Selector_C_ManualSetValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.Disable
struct UUI_PhotoMode_Selector_C_Disable_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.enable
struct UUI_PhotoMode_Selector_C_enable_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__PrevInteract_K2Node_ComponentBoundEvent_1345_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__PrevInteract_K2Node_ComponentBoundEvent_1345_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__NextInteract_K2Node_ComponentBoundEvent_1360_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__NextInteract_K2Node_ComponentBoundEvent_1360_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_1681_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_1681_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__NextInteract_K2Node_ComponentBoundEvent_1741_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__NextInteract_K2Node_ComponentBoundEvent_1741_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.BndEvt__PrevInteract_K2Node_ComponentBoundEvent_1756_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Selector_C_BndEvt__PrevInteract_K2Node_ComponentBoundEvent_1756_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.ExecuteUbergraph_UI_PhotoMode_Selector
struct UUI_PhotoMode_Selector_C_ExecuteUbergraph_UI_PhotoMode_Selector_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Selector.UI_PhotoMode_Selector_C.MenuChanged__DelegateSignature
struct UUI_PhotoMode_Selector_C_MenuChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
