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

// Function OptionToggle.OptionToggle_C.UpdateToggle
struct UOptionToggle_C_UpdateToggle_Params
{
};

// Function OptionToggle.OptionToggle_C.Get_OnHighlight_Visibility_1
struct UOptionToggle_C_Get_OnHighlight_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionToggle.OptionToggle_C.Get_OffHighlight_Visibility_1
struct UOptionToggle_C_Get_OffHighlight_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionToggle.OptionToggle_C.Get_OnBorder_ContentColorAndOpacity_1
struct UOptionToggle_C_Get_OnBorder_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionToggle.OptionToggle_C.Get_OffBorder_ContentColorAndOpacity_1
struct UOptionToggle_C_Get_OffBorder_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionToggle.OptionToggle_C.Get_OnLabel_Text_1
struct UOptionToggle_C_Get_OnLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionToggle.OptionToggle_C.Get_OffLabel_Text_1
struct UOptionToggle_C_Get_OffLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionToggle.OptionToggle_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1229_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionToggle_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1229_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionToggle.OptionToggle_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1427_OnMenuInteractHoverEvent__DelegateSignature
struct UOptionToggle_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1427_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function OptionToggle.OptionToggle_C.OnLocked
struct UOptionToggle_C_OnLocked_Params
{
};

// Function OptionToggle.OptionToggle_C.OnUnlocked
struct UOptionToggle_C_OnUnlocked_Params
{
};

// Function OptionToggle.OptionToggle_C.OnClicked
struct UOptionToggle_C_OnClicked_Params
{
};

// Function OptionToggle.OptionToggle_C.Construct
struct UOptionToggle_C_Construct_Params
{
};

// Function OptionToggle.OptionToggle_C.OnValueChanged_Event_1
struct UOptionToggle_C_OnValueChanged_Event_1_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionToggle.OptionToggle_C.ExecuteUbergraph_OptionToggle
struct UOptionToggle_C_ExecuteUbergraph_OptionToggle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
