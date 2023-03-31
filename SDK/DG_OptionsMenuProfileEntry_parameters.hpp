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

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.InitAimSnap
struct UOptionsMenuProfileEntry_C_InitAimSnap_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetDefaults
struct UOptionsMenuProfileEntry_C_SetDefaults_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.HandleEntryNav
struct UOptionsMenuProfileEntry_C_HandleEntryNav_Params
{
	int                                                InputDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ContainsTextFields
struct UOptionsMenuProfileEntry_C_ContainsTextFields_Params
{
	bool                                               HasFields;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.AdjustEntry
struct UOptionsMenuProfileEntry_C_AdjustEntry_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.CanBeModified
struct UOptionsMenuProfileEntry_C_CanBeModified_Params
{
	bool                                               CanModify;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetSelected
struct UOptionsMenuProfileEntry_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SyncValue
struct UOptionsMenuProfileEntry_C_SyncValue_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Init
struct UOptionsMenuProfileEntry_C_Init_Params
{
	struct FPlayerSaveProfileMenuEntry                 InEntry;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Construct
struct UOptionsMenuProfileEntry_C_Construct_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature
struct UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ExecuteUbergraph_OptionsMenuProfileEntry
struct UOptionsMenuProfileEntry_C_ExecuteUbergraph_OptionsMenuProfileEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnHover__DelegateSignature
struct UOptionsMenuProfileEntry_C_OnHover__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryModified__DelegateSignature
struct UOptionsMenuProfileEntry_C_OnProfileEntryModified__DelegateSignature_Params
{
	class UOptionsMenuProfileEntry_C*                  ProfileEntry;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryAdjustRequest__DelegateSignature
struct UOptionsMenuProfileEntry_C_OnProfileEntryAdjustRequest__DelegateSignature_Params
{
	class UOptionsMenuProfileEntry_C*                  ProfileEntry;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
