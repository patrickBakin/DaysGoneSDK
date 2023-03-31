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

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.OverrideOptionsText
struct UOptionsMenuInputBarWidget_C_OverrideOptionsText_Params
{
	struct FText                                       Option0;                                                  // (Parm)
	struct FText                                       Option1;                                                  // (Parm)
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.SetPopupStyle
struct UOptionsMenuInputBarWidget_C_SetPopupStyle_Params
{
	TEnumAsByte<ESlatePopupStyle>                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.Construct
struct UOptionsMenuInputBarWidget_C_Construct_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_925_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuInputBarWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_925_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_927_OnMenuInteractHoverEvent__DelegateSignature
struct UOptionsMenuInputBarWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_927_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_930_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuInputBarWidget_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_930_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_934_OnMenuInteractHoverEvent__DelegateSignature
struct UOptionsMenuInputBarWidget_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_934_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.ExecuteUbergraph_OptionsMenuInputBarWidget
struct UOptionsMenuInputBarWidget_C_ExecuteUbergraph_OptionsMenuInputBarWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.OnCancelClicked__DelegateSignature
struct UOptionsMenuInputBarWidget_C_OnCancelClicked__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.OnCancelHovered__DelegateSignature
struct UOptionsMenuInputBarWidget_C_OnCancelHovered__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.OnConfirmClicked__DelegateSignature
struct UOptionsMenuInputBarWidget_C_OnConfirmClicked__DelegateSignature_Params
{
};

// Function OptionsMenuInputBarWidget.OptionsMenuInputBarWidget_C.OnConfirmHovered__DelegateSignature
struct UOptionsMenuInputBarWidget_C_OnConfirmHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
