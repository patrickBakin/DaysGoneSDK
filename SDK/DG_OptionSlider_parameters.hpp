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

// Function OptionSlider.OptionSlider_C.UpdateFill
struct UOptionSlider_C_UpdateFill_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.Get_MenuInteract_Previous_Visibility_1
struct UOptionSlider_C_Get_MenuInteract_Previous_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.Get_MenuInteract_Next_Visibility_1
struct UOptionSlider_C_Get_MenuInteract_Next_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.Construct
struct UOptionSlider_C_Construct_Params
{
};

// Function OptionSlider.OptionSlider_C.Tick
struct UOptionSlider_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function OptionSlider.OptionSlider_C.OnLocked
struct UOptionSlider_C_OnLocked_Params
{
};

// Function OptionSlider.OptionSlider_C.OnUnlocked
struct UOptionSlider_C_OnUnlocked_Params
{
};

// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature
struct UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.OnValueChanged_Event_1
struct UOptionSlider_C_OnValueChanged_Event_1_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionSlider.OptionSlider_C.ExecuteUbergraph_OptionSlider
struct UOptionSlider_C_ExecuteUbergraph_OptionSlider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
