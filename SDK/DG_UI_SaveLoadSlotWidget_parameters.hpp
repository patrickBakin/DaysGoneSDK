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

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetSelected
struct UUI_SaveLoadSlotWidget_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.UpdateSaveGame
struct UUI_SaveLoadSlotWidget_C_UpdateSaveGame_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SaveGame
struct UUI_SaveLoadSlotWidget_C_SaveGame_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InitializeSlot
struct UUI_SaveLoadSlotWidget_C_InitializeSlot_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetBendSave
struct UUI_SaveLoadSlotWidget_C_SetBendSave_Params
{
	class UBendSaveGame*                               InSave;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.LoadSaveGame
struct UUI_SaveLoadSlotWidget_C_LoadSaveGame_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.IsSlotValid
struct UUI_SaveLoadSlotWidget_C_IsSlotValid_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ConfigSlot
struct UUI_SaveLoadSlotWidget_C_ConfigSlot_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InvalidateSlot
struct UUI_SaveLoadSlotWidget_C_InvalidateSlot_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SaveLoadSlotWidget_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_SaveLoadSlotWidget_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.Construct
struct UUI_SaveLoadSlotWidget_C_Construct_Params
{
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ExecuteUbergraph_UI_SaveLoadSlotWidget
struct UUI_SaveLoadSlotWidget_C_ExecuteUbergraph_UI_SaveLoadSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnHovered__DelegateSignature
struct UUI_SaveLoadSlotWidget_C_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnClicked__DelegateSignature
struct UUI_SaveLoadSlotWidget_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnSaveCompleted__DelegateSignature
struct UUI_SaveLoadSlotWidget_C_OnSaveCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
