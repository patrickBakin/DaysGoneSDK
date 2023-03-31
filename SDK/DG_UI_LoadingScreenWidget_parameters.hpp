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

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_SetLoadingTipText
struct UUI_LoadingScreenWidget_C_DLC_SetLoadingTipText_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TextSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_VerifyLoadingTip
struct UUI_LoadingScreenWidget_C_DLC_VerifyLoadingTip_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Verified;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_ReloadLoadingTips
struct UUI_LoadingScreenWidget_C_DLC_ReloadLoadingTips_Params
{
	bool                                               TipsReloaded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_GetNextLoadingTip
struct UUI_LoadingScreenWidget_C_DLC_GetNextLoadingTip_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.UpdateProgressBar
struct UUI_LoadingScreenWidget_C_UpdateProgressBar_Params
{
	float                                              In_Delta_Time;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.SetLoadingTipText
struct UUI_LoadingScreenWidget_C_SetLoadingTipText_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TextSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.VerifyLoadingTip
struct UUI_LoadingScreenWidget_C_VerifyLoadingTip_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Verified;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ReloadLoadingTips
struct UUI_LoadingScreenWidget_C_ReloadLoadingTips_Params
{
	bool                                               TipsReloaded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.GetNextLoadingTip
struct UUI_LoadingScreenWidget_C_GetNextLoadingTip_Params
{
	struct FName                                       LoadingTipRowName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Construct
struct UUI_LoadingScreenWidget_C_Construct_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Tick
struct UUI_LoadingScreenWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Switch To Next Tip
struct UUI_LoadingScreenWidget_C_Switch_To_Next_Tip_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_LoadingScreenWidget_C_BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Destruct
struct UUI_LoadingScreenWidget_C_Destruct_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DisplayFirstTip
struct UUI_LoadingScreenWidget_C_DisplayFirstTip_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_LoadingScreenWidget_C_BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ExecuteUbergraph_UI_LoadingScreenWidget
struct UUI_LoadingScreenWidget_C_ExecuteUbergraph_UI_LoadingScreenWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
