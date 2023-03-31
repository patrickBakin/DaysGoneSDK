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

// Function UI_SavePreset.UI_SavePreset_C.IsPresetNameValid
struct UUI_SavePreset_C_IsPresetNameValid_Params
{
	struct FText                                       InPresetName;                                             // (Parm)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SavePreset.UI_SavePreset_C.SavePreset
struct UUI_SavePreset_C_SavePreset_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBendPhotoModePostPreset                    StructOut;                                                // (Parm, OutParm)
};

// Function UI_SavePreset.UI_SavePreset_C.ShowSaveButton
struct UUI_SavePreset_C_ShowSaveButton_Params
{
	bool                                               AllowedToSave;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SavePreset.UI_SavePreset_C.BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SavePreset_C_BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_SavePreset_C_BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_SavePreset_C_BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SavePreset.UI_SavePreset_C.BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SavePreset_C_BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SavePreset.UI_SavePreset_C.Tick
struct UUI_SavePreset_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SavePreset.UI_SavePreset_C.ExecuteUbergraph_UI_SavePreset
struct UUI_SavePreset_C_ExecuteUbergraph_UI_SavePreset_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
