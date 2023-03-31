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

// Function InputRemappingMenu.InputRemappingMenu_C.ClearAllConflictingBindings
struct UInputRemappingMenu_C_ClearAllConflictingBindings_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.HideConflictOverlay
struct UInputRemappingMenu_C_HideConflictOverlay_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.ShowConflictOverlay
struct UInputRemappingMenu_C_ShowConflictOverlay_Params
{
	TArray<class UBendInputMapping*>                   ConflictingMappings;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InputRemappingMenu.InputRemappingMenu_C.CheckForConflicts
struct UInputRemappingMenu_C_CheckForConflicts_Params
{
	class UBendInputMapping*                           InputMapping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        NewKey;                                                   // (Parm)
	TArray<class UBendInputMapping*>                   ConflictingMappings;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               HasConflicts;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InputRemappingMenu.InputRemappingMenu_C.AcceptingInputs?
struct UInputRemappingMenu_C_AcceptingInputs__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputRemappingMenu.InputRemappingMenu_C.PopulateKeyBindings
struct UInputRemappingMenu_C_PopulateKeyBindings_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.Construct
struct UInputRemappingMenu_C_Construct_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnMappingSelected
struct UInputRemappingMenu_C_OnMappingSelected_Params
{
	class UBendInputMapping*                           InputMapping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyPressed
struct UInputRemappingMenu_C_OnInputKeyPressed_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function InputRemappingMenu.InputRemappingMenu_C.ShouldWaitForInput
struct UInputRemappingMenu_C_ShouldWaitForInput_Params
{
	bool                                               ShouldWait_;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnCancelPressed
struct UInputRemappingMenu_C_OnCancelPressed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.ClearActiveBinding
struct UInputRemappingMenu_C_ClearActiveBinding_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnClearPressed
struct UInputRemappingMenu_C_OnClearPressed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnClearReleased
struct UInputRemappingMenu_C_OnClearReleased_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.Tick
struct UInputRemappingMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnClearHeld
struct UInputRemappingMenu_C_OnClearHeld_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnConfirmPressed
struct UInputRemappingMenu_C_OnConfirmPressed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature
struct UInputRemappingMenu_C_BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnPauseMenuClosed
struct UInputRemappingMenu_C_OnPauseMenuClosed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnSelect1Pressed
struct UInputRemappingMenu_C_OnSelect1Pressed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissHeld
struct UInputRemappingMenu_C_OnDismissHeld_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissReleased
struct UInputRemappingMenu_C_OnDismissReleased_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyTapped
struct UInputRemappingMenu_C_OnInputKeyTapped_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissPressed
struct UInputRemappingMenu_C_OnDismissPressed_Params
{
};

// Function InputRemappingMenu.InputRemappingMenu_C.ExecuteUbergraph_InputRemappingMenu
struct UInputRemappingMenu_C_ExecuteUbergraph_InputRemappingMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
