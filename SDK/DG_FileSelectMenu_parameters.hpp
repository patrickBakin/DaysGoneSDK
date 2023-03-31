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

// Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingInfoPopup
struct UFileSelectMenu_C_DisplayBlockingInfoPopup_Params
{
	struct FText                                       Message;                                                  // (Parm)
};

// Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingConfirmationPopup
struct UFileSelectMenu_C_DisplayBlockingConfirmationPopup_Params
{
	struct FText                                       Message;                                                  // (Parm)
	struct FScriptDelegate                             OnConfirm;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnCancel;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FileSelectMenu.FileSelectMenu_C.GetSlotByIndex
struct UFileSelectMenu_C_GetSlotByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFileSelectListItem_C*                       FileItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectMenu.FileSelectMenu_C.SetCursorPosition
struct UFileSelectMenu_C_SetCursorPosition_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectMenu.FileSelectMenu_C.Construct
struct UFileSelectMenu_C_Construct_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnCancelPressed
struct UFileSelectMenu_C_OnCancelPressed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnConfirmPressed
struct UFileSelectMenu_C_OnConfirmPressed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnData
struct UFileSelectMenu_C_OnData_Params
{
	TArray<struct FSaveGameMenuItemData>*              InData;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FileSelectMenu.FileSelectMenu_C.OnItemClicked
struct UFileSelectMenu_C_OnItemClicked_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function FileSelectMenu.FileSelectMenu_C.OnItemHovered
struct UFileSelectMenu_C_OnItemHovered_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function FileSelectMenu.FileSelectMenu_C.SelectSlotIndex
struct UFileSelectMenu_C_SelectSlotIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectMenu.FileSelectMenu_C.OnDialogCancel
struct UFileSelectMenu_C_OnDialogCancel_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnFileConfirm
struct UFileSelectMenu_C_OnFileConfirm_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature
struct UFileSelectMenu_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature
struct UFileSelectMenu_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnDownPressed
struct UFileSelectMenu_C_OnDownPressed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnUpPressed
struct UFileSelectMenu_C_OnUpPressed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnWidgetClosed
struct UFileSelectMenu_C_OnWidgetClosed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnMenuDismissed
struct UFileSelectMenu_C_OnMenuDismissed_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.ExecuteUbergraph_FileSelectMenu
struct UFileSelectMenu_C_ExecuteUbergraph_FileSelectMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectMenu.FileSelectMenu_C.OnActionCompleted__DelegateSignature
struct UFileSelectMenu_C_OnActionCompleted__DelegateSignature_Params
{
};

// Function FileSelectMenu.FileSelectMenu_C.OnSlotSelected__DelegateSignature
struct UFileSelectMenu_C_OnSlotSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
