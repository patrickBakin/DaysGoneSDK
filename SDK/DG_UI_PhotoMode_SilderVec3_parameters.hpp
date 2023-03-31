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

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetSliderValue
struct UUI_PhotoMode_SilderVec3_C_GetSliderValue_Params
{
	class USlider*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetSliderValue
struct UUI_PhotoMode_SilderVec3_C_SetSliderValue_Params
{
	class USlider*                                     Slider;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.TextBoxUpdateSlider
struct UUI_PhotoMode_SilderVec3_C_TextBoxUpdateSlider_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetMappedRange
struct UUI_PhotoMode_SilderVec3_C_GetMappedRange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.FloatToText
struct UUI_PhotoMode_SilderVec3_C_FloatToText_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Hold
struct UUI_PhotoMode_SilderVec3_C_HandleAdjustInput_Hold_Params
{
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetDisplayedTextValue
struct UUI_PhotoMode_SilderVec3_C_SetDisplayedTextValue_Params
{
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.AdjustSlider
struct UUI_PhotoMode_SilderVec3_C_AdjustSlider_Params
{
	bool                                               Positive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CircleHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USlider*                                     Slider;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Press
struct UUI_PhotoMode_SilderVec3_C_HandleAdjustInput_Press_Params
{
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Construct
struct UUI_PhotoMode_SilderVec3_C_Construct_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Tick
struct UUI_PhotoMode_SilderVec3_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selected
struct UUI_PhotoMode_SilderVec3_C_Selected_Params
{
	bool*                                              Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Reset
struct UUI_PhotoMode_SilderVec3_C_Reset_Params
{
	bool*                                              ResetAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ManualSetValue
struct UUI_PhotoMode_SilderVec3_C_ManualSetValue_Params
{
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ExecuteUbergraph_UI_PhotoMode_SilderVec3
struct UUI_PhotoMode_SilderVec3_C_ExecuteUbergraph_UI_PhotoMode_SilderVec3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selection__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_Selection__DelegateSignature_Params
{
};

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SliderValueChanged__DelegateSignature
struct UUI_PhotoMode_SilderVec3_C_SliderValueChanged__DelegateSignature_Params
{
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
