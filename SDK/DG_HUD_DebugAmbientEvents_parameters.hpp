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

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetPriorityScore
struct UHUD_DebugAmbientEvents_C_SetPriorityScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.Set AEM Status Text
struct UHUD_DebugAmbientEvents_C_Set_AEM_Status_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetFinalScore
struct UHUD_DebugAmbientEvents_C_SetFinalScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetTimeScore
struct UHUD_DebugAmbientEvents_C_SetTimeScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetRepeatScore
struct UHUD_DebugAmbientEvents_C_SetRepeatScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetClassScore
struct UHUD_DebugAmbientEvents_C_SetClassScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetTransportationScore
struct UHUD_DebugAmbientEvents_C_SetTransportationScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetWeatherScore
struct UHUD_DebugAmbientEvents_C_SetWeatherScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetLocationScore
struct UHUD_DebugAmbientEvents_C_SetLocationScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetDistanceScore
struct UHUD_DebugAmbientEvents_C_SetDistanceScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetFacingScore
struct UHUD_DebugAmbientEvents_C_SetFacingScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.SetAEStatusText
struct UHUD_DebugAmbientEvents_C_SetAEStatusText_Params
{
	struct FText                                       Status;                                                   // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.BndEvt__RunScoringTest_K2Node_ComponentBoundEvent_800_OnButtonClickedEvent__DelegateSignature
struct UHUD_DebugAmbientEvents_C_BndEvt__RunScoringTest_K2Node_ComponentBoundEvent_800_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.BndEvt__RunScoreReal_K2Node_ComponentBoundEvent_804_OnButtonClickedEvent__DelegateSignature
struct UHUD_DebugAmbientEvents_C_BndEvt__RunScoreReal_K2Node_ComponentBoundEvent_804_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.BndEvt__TogglePauseButton_K2Node_ComponentBoundEvent_657_OnButtonClickedEvent__DelegateSignature
struct UHUD_DebugAmbientEvents_C_BndEvt__TogglePauseButton_K2Node_ComponentBoundEvent_657_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.Construct
struct UHUD_DebugAmbientEvents_C_Construct_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.Tick
struct UHUD_DebugAmbientEvents_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.UpdatePause
struct UHUD_DebugAmbientEvents_C_UpdatePause_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.BndEvt__RefreshList_K2Node_ComponentBoundEvent_737_OnButtonClickedEvent__DelegateSignature
struct UHUD_DebugAmbientEvents_C_BndEvt__RefreshList_K2Node_ComponentBoundEvent_737_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_623_OnButtonClickedEvent__DelegateSignature
struct UHUD_DebugAmbientEvents_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_623_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_DebugAmbientEvents.HUD_DebugAmbientEvents_C.ExecuteUbergraph_HUD_DebugAmbientEvents
struct UHUD_DebugAmbientEvents_C_ExecuteUbergraph_HUD_DebugAmbientEvents_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
