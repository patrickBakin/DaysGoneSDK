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

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1
struct UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1
struct UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1
struct UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1
struct UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.SetPresetEntries
struct UUI_PhotoModeFilters_C_SetPresetEntries_Params
{
	TArray<struct FBendPhotoModePostPreset>            Presets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.GetPresets
struct UUI_PhotoModeFilters_C_GetPresets_Params
{
	TArray<struct FBendPhotoModePostPreset>            Presets;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBendPhotoModePostPreset>            UserCreatedPresets;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.DeletePresetButtonVisibility
struct UUI_PhotoModeFilters_C_DeletePresetButtonVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.HasValidPresetName
struct UUI_PhotoModeFilters_C_HasValidPresetName_Params
{
	struct FBendPhotoModePostPreset                    Preset;                                                   // (Parm)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.LoadPreset
struct UUI_PhotoModeFilters_C_LoadPreset_Params
{
	struct FBendPhotoModePostPreset                    Preset;                                                   // (Parm)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Construct
struct UUI_PhotoModeFilters_C_Construct_Params
{
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.RefreshPresets
struct UUI_PhotoModeFilters_C_RefreshPresets_Params
{
	bool                                               SetNewlyCreatePresetActive;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PresetWasDeleted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature_Params
{
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature
struct UUI_PhotoModeFilters_C_BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature_Params
{
};

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.ExecuteUbergraph_UI_PhotoModeFilters
struct UUI_PhotoModeFilters_C_ExecuteUbergraph_UI_PhotoModeFilters_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
