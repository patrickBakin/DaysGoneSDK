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

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetInputMode
struct UUI_OptionsMenuController_C_GetInputMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeDisplay_Visibility_1
struct UUI_OptionsMenuController_C_Get_ModeDisplay_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeLabel_Text_1
struct UUI_OptionsMenuController_C_Get_ModeLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_UniversalControls_Visibility_1
struct UUI_OptionsMenuController_C_Get_UniversalControls_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnFootControls_Visibility_1
struct UUI_OptionsMenuController_C_Get_OnFootControls_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnBikeControls_Visibility_1
struct UUI_OptionsMenuController_C_Get_OnBikeControls_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.SetMode
struct UUI_OptionsMenuController_C_SetMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetVisibility_1
struct UUI_OptionsMenuController_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_Footer_Navigation_Visibility_1
struct UUI_OptionsMenuController_C_Get_Footer_Navigation_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Construct
struct UUI_OptionsMenuController_C_Construct_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Tick
struct UUI_OptionsMenuController_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_OptionsMenuController_C_BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_OptionsMenuController_C_BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_OptionsMenuController_C_BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Next
struct UUI_OptionsMenuController_C_Next_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Previous
struct UUI_OptionsMenuController_C_Previous_Params
{
};

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.ExecuteUbergraph_UI_OptionsMenuController
struct UUI_OptionsMenuController_C_ExecuteUbergraph_UI_OptionsMenuController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
