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

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.GetSelectionColor
struct UUI_CategoryMenuHorzEntryWidget_C_GetSelectionColor_Params
{
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.Construct
struct UUI_CategoryMenuHorzEntryWidget_C_Construct_Params
{
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetSelected
struct UUI_CategoryMenuHorzEntryWidget_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetText
struct UUI_CategoryMenuHorzEntryWidget_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetDisabled
struct UUI_CategoryMenuHorzEntryWidget_C_SetDisabled_Params
{
	bool*                                              IsDisabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_CategoryMenuHorzEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_CategoryMenuHorzEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget
struct UUI_CategoryMenuHorzEntryWidget_C_ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
