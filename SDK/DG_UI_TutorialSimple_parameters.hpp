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

// Function UI_TutorialSimple.UI_TutorialSimple_C.DisplayQueuedContent
struct UUI_TutorialSimple_C_DisplayQueuedContent_Params
{
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.IsQueueEmpty
struct UUI_TutorialSimple_C_IsQueueEmpty_Params
{
	bool                                               IsEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.QueueEntryComplete
struct UUI_TutorialSimple_C_QueueEntryComplete_Params
{
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.ProcessQueue
struct UUI_TutorialSimple_C_ProcessQueue_Params
{
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.AddToQueue
struct UUI_TutorialSimple_C_AddToQueue_Params
{
	struct FText                                       Content;                                                  // (Parm)
	bool                                               AutoClose;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeForButton;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.SetContent
struct UUI_TutorialSimple_C_SetContent_Params
{
	struct FText                                       Content;                                                  // (Parm)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.Tick
struct UUI_TutorialSimple_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.Construct
struct UUI_TutorialSimple_C_Construct_Params
{
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.RequestClose
struct UUI_TutorialSimple_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.OnExitAnimationFinished
struct UUI_TutorialSimple_C_OnExitAnimationFinished_Params
{
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.ExecuteUbergraph_UI_TutorialSimple
struct UUI_TutorialSimple_C_ExecuteUbergraph_UI_TutorialSimple_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialSimple.UI_TutorialSimple_C.OnButtonPressed__DelegateSignature
struct UUI_TutorialSimple_C_OnButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
