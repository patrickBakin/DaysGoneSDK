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

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RequestMenuChange
struct UDisplayOptionsPanel_C_RequestMenuChange_Params
{
	TEnumAsByte<EOptionListReply>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.UpdateOptionLocks
struct UDisplayOptionsPanel_C_UpdateOptionLocks_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.PopulateOptions
struct UDisplayOptionsPanel_C_PopulateOptions_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindRefreshIndex
struct UDisplayOptionsPanel_C_FindRefreshIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                _0;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                _1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ClearParameters
struct UDisplayOptionsPanel_C_ClearParameters_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RefreshParameters
struct UDisplayOptionsPanel_C_RefreshParameters_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RevertVideoSettings
struct UDisplayOptionsPanel_C_RevertVideoSettings_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindResolutionIndex
struct UDisplayOptionsPanel_C_FindResolutionIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Construct
struct UDisplayOptionsPanel_C_Construct_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ResetToDefaults
struct UDisplayOptionsPanel_C_ResetToDefaults_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.SynchronizeOptionValues
struct UDisplayOptionsPanel_C_SynchronizeOptionValues_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Confirm Display
struct UDisplayOptionsPanel_C_Confirm_Display_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Tick
struct UDisplayOptionsPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Match Settings
struct UDisplayOptionsPanel_C_Match_Settings_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Apply Display Changes
struct UDisplayOptionsPanel_C_Apply_Display_Changes_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Notify On Unsaved Settings
struct UDisplayOptionsPanel_C_Notify_On_Unsaved_Settings_Params
{
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.On Unsaved Settings Selection
struct UDisplayOptionsPanel_C_On_Unsaved_Settings_Selection_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature
struct UDisplayOptionsPanel_C_BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ExecuteUbergraph_DisplayOptionsPanel
struct UDisplayOptionsPanel_C_ExecuteUbergraph_DisplayOptionsPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.OnMonitorChanged__DelegateSignature
struct UDisplayOptionsPanel_C_OnMonitorChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
