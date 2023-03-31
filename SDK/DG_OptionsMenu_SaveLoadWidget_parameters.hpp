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

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnOverwriteSavePopup
struct UOptionsMenu_SaveLoadWidget_C_SpawnOverwriteSavePopup_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ValidateSlotAction
struct UOptionsMenu_SaveLoadWidget_C_ValidateSlotAction_Params
{
	class UUI_SaveLoadSlotWidget_C*                    Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPerformAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Init
struct UOptionsMenu_SaveLoadWidget_C_Init_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.GetSlotByIndex
struct UOptionsMenu_SaveLoadWidget_C_GetSlotByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SaveLoadSlotWidget_C*                    Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSlotSelected
struct UOptionsMenu_SaveLoadWidget_C_OnSaveSlotSelected_Params
{
	class UUI_SaveLoadSlotWidget_C*                    Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.LoadGame
struct UOptionsMenu_SaveLoadWidget_C_LoadGame_Params
{
	TEnumAsByte<ESaveGameType>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SaveGame
struct UOptionsMenu_SaveLoadWidget_C_SaveGame_Params
{
	class UUI_SaveLoadSlotWidget_C*                    Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.DisplayNotification
struct UOptionsMenu_SaveLoadWidget_C_DisplayNotification_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Load
struct UOptionsMenu_SaveLoadWidget_C_ConfigFor_Load_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Save
struct UOptionsMenu_SaveLoadWidget_C_ConfigFor_Save_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SetCursorPosition
struct UOptionsMenu_SaveLoadWidget_C_SetCursorPosition_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Construct
struct UOptionsMenu_SaveLoadWidget_C_Construct_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnInfoPopup
struct UOptionsMenu_SaveLoadWidget_C_SpawnInfoPopup_Params
{
	struct FText                                       PopupText;                                                // (Parm)
	bool                                               IsInfoOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnInfoPopupClosed
struct UOptionsMenu_SaveLoadWidget_C_OnInfoPopupClosed_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveConfirm
struct UOptionsMenu_SaveLoadWidget_C_OnSaveConfirm_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveCompleted
struct UOptionsMenu_SaveLoadWidget_C_OnSaveCompleted_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.RequestClose
struct UOptionsMenu_SaveLoadWidget_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnCancelPressed
struct UOptionsMenu_SaveLoadWidget_C_OnCancelPressed_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnConfirmPressed
struct UOptionsMenu_SaveLoadWidget_C_OnConfirmPressed_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnData
struct UOptionsMenu_SaveLoadWidget_C_OnData_Params
{
	TArray<struct FSaveGameMenuItemData>*              InData;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemClicked
struct UOptionsMenu_SaveLoadWidget_C_OnItemClicked_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemHovered
struct UOptionsMenu_SaveLoadWidget_C_OnItemHovered_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SelectSlotIndex
struct UOptionsMenu_SaveLoadWidget_C_SelectSlotIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.CreateMessageDialog
struct UOptionsMenu_SaveLoadWidget_C_CreateMessageDialog_Params
{
	struct FText                                       Message;                                                  // (Parm)
	TEnumAsByte<ESlatePopupStyle>                      PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogCancel
struct UOptionsMenu_SaveLoadWidget_C_OnDialogCancel_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogConfirm
struct UOptionsMenu_SaveLoadWidget_C_OnDialogConfirm_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature
struct UOptionsMenu_SaveLoadWidget_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature
struct UOptionsMenu_SaveLoadWidget_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDownPressed
struct UOptionsMenu_SaveLoadWidget_C_OnDownPressed_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnUpPressed
struct UOptionsMenu_SaveLoadWidget_C_OnUpPressed_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadFailure
struct UOptionsMenu_SaveLoadWidget_C_OnLoadFailure_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadSuccess
struct UOptionsMenu_SaveLoadWidget_C_OnLoadSuccess_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveFailure
struct UOptionsMenu_SaveLoadWidget_C_OnSaveFailure_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSuccess
struct UOptionsMenu_SaveLoadWidget_C_OnSaveSuccess_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ExecuteUbergraph_OptionsMenu_SaveLoadWidget
struct UOptionsMenu_SaveLoadWidget_C_ExecuteUbergraph_OptionsMenu_SaveLoadWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnActionCompleted__DelegateSignature
struct UOptionsMenu_SaveLoadWidget_C_OnActionCompleted__DelegateSignature_Params
{
};

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSlotSelected__DelegateSignature
struct UOptionsMenu_SaveLoadWidget_C_OnSlotSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
