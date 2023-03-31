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

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.GetSelectionColor
struct UUI_CategoryMenuEntryWidget_C_GetSelectionColor_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.Construct
struct UUI_CategoryMenuEntryWidget_C_Construct_Params
{
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetSelected
struct UUI_CategoryMenuEntryWidget_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetText
struct UUI_CategoryMenuEntryWidget_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetDisabled
struct UUI_CategoryMenuEntryWidget_C_SetDisabled_Params
{
	bool*                                              IsDisabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_CategoryMenuEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_CategoryMenuEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuEntryWidget
struct UUI_CategoryMenuEntryWidget_C_ExecuteUbergraph_UI_CategoryMenuEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
