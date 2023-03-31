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

// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.SetDetails
struct UUI_SurvivalWheelAction_C_SetDetails_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	bool                                               IsUnavailable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature
struct UUI_SurvivalWheelAction_C_BndEvt__Icon_K2Node_ComponentBoundEvent_953_OnColorEvent__DelegateSignature_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelAction.UI_SurvivalWheelAction_C.ExecuteUbergraph_UI_SurvivalWheelAction
struct UUI_SurvivalWheelAction_C_ExecuteUbergraph_UI_SurvivalWheelAction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
