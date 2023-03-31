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

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ChangeValue
struct UUI_PhotoMode_Checkbox_C_ChangeValue_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.HandleInput
struct UUI_PhotoMode_Checkbox_C_HandleInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Construct
struct UUI_PhotoMode_Checkbox_C_Construct_Params
{
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Tick
struct UUI_PhotoMode_Checkbox_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Selected
struct UUI_PhotoMode_Checkbox_C_Selected_Params
{
	bool*                                              Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Reset
struct UUI_PhotoMode_Checkbox_C_Reset_Params
{
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ManualSetValue
struct UUI_PhotoMode_Checkbox_C_ManualSetValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Disable
struct UUI_PhotoMode_Checkbox_C_Disable_Params
{
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.enable
struct UUI_PhotoMode_Checkbox_C_enable_Params
{
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PhotoMode_Checkbox_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Checkbox_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ExecuteUbergraph_UI_PhotoMode_Checkbox
struct UUI_PhotoMode_Checkbox_C_ExecuteUbergraph_UI_PhotoMode_Checkbox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.MenuChanged__DelegateSignature
struct UUI_PhotoMode_Checkbox_C_MenuChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
