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

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.HandleInput
struct UUI_PhotoMode_Button_C_HandleInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Construct
struct UUI_PhotoMode_Button_C_Construct_Params
{
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Tick
struct UUI_PhotoMode_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Selected
struct UUI_PhotoMode_Button_C_Selected_Params
{
	bool*                                              Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Reset
struct UUI_PhotoMode_Button_C_Reset_Params
{
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Button_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PhotoMode_Button_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Lock
struct UUI_PhotoMode_Button_C_Lock_Params
{
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Unlock
struct UUI_PhotoMode_Button_C_Unlock_Params
{
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ExecuteUbergraph_UI_PhotoMode_Button
struct UUI_PhotoMode_Button_C_ExecuteUbergraph_UI_PhotoMode_Button_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ButtonClicked__DelegateSignature
struct UUI_PhotoMode_Button_C_ButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
