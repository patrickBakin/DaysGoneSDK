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

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelectedRow
struct UUI_PhotoModeMenuBase_C_SetSelectedRow_Params
{
	class UUI_PhotoModeRowBase_C*                      NewSelectedRow;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSubRowSelection
struct UUI_PhotoModeMenuBase_C_SetSubRowSelection_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleSubRowSelection
struct UUI_PhotoModeMenuBase_C_HandleSubRowSelection_Params
{
	int                                                dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.SetSelection
struct UUI_PhotoModeMenuBase_C_SetSelection_Params
{
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.HandleRowSelection
struct UUI_PhotoModeMenuBase_C_HandleRowSelection_Params
{
	int                                                dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MainIndexInputHandled;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Tick
struct UUI_PhotoModeMenuBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.Construct
struct UUI_PhotoModeMenuBase_C_Construct_Params
{
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.MenuActive
struct UUI_PhotoModeMenuBase_C_MenuActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C.ExecuteUbergraph_UI_PhotoModeMenuBase
struct UUI_PhotoModeMenuBase_C_ExecuteUbergraph_UI_PhotoModeMenuBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
