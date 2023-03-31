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

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetSliderValue
struct UUI_PhotoMode_Silder_C_SetSliderValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangedByUser;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Hold
struct UUI_PhotoMode_Silder_C_HandleAdjustInput_Hold_Params
{
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetDisplayedTextValue
struct UUI_PhotoMode_Silder_C_SetDisplayedTextValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESliderDisplayType>                    Display_Type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.AdjustSlider
struct UUI_PhotoMode_Silder_C_AdjustSlider_Params
{
	bool                                               Positive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CircleHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Press
struct UUI_PhotoMode_Silder_C_HandleAdjustInput_Press_Params
{
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Construct
struct UUI_PhotoMode_Silder_C_Construct_Params
{
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Tick
struct UUI_PhotoMode_Silder_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selected
struct UUI_PhotoMode_Silder_C_Selected_Params
{
	bool*                                              Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Reset
struct UUI_PhotoMode_Silder_C_Reset_Params
{
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ManualSetValue
struct UUI_PhotoMode_Silder_C_ManualSetValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.enable
struct UUI_PhotoMode_Silder_C_enable_Params
{
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Disable
struct UUI_PhotoMode_Silder_C_Disable_Params
{
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_PhotoMode_Silder_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature
struct UUI_PhotoMode_Silder_C_BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_Silder_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ExecuteUbergraph_UI_PhotoMode_Silder
struct UUI_PhotoMode_Silder_C_ExecuteUbergraph_UI_PhotoMode_Silder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selection__DelegateSignature
struct UUI_PhotoMode_Silder_C_Selection__DelegateSignature_Params
{
};

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SliderValueChanged__DelegateSignature
struct UUI_PhotoMode_Silder_C_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangedByUser;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
