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

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetButtonImageSelected
struct UUI_PopupMenuWidget_C_SetButtonImageSelected_Params
{
	class UImage*                                      ImageWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetWidgetVisibility
struct UUI_PopupMenuWidget_C_SetWidgetVisibility_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Construct
struct UUI_PopupMenuWidget_C_Construct_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Configure
struct UUI_PopupMenuWidget_C_Configure_Params
{
	struct FSlatePopupDetails*                         PopupDetails;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OverrideConfirmText
struct UUI_PopupMenuWidget_C_OverrideConfirmText_Params
{
	bool                                               ChangeToYesNo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnConfirmPressed
struct UUI_PopupMenuWidget_C_OnConfirmPressed_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PopupMenuWidget_C_BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PopupMenuWidget_C_BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnCancelPressed
struct UUI_PopupMenuWidget_C_OnCancelPressed_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_PopupMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.ExecuteUbergraph_UI_PopupMenuWidget
struct UUI_PopupMenuWidget_C_ExecuteUbergraph_UI_PopupMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
