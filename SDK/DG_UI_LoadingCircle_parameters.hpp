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

// Function UI_LoadingCircle.UI_LoadingCircle_C.Hide
struct UUI_LoadingCircle_C_Hide_Params
{
};

// Function UI_LoadingCircle.UI_LoadingCircle_C.Show
struct UUI_LoadingCircle_C_Show_Params
{
};

// Function UI_LoadingCircle.UI_LoadingCircle_C.Construct
struct UUI_LoadingCircle_C_Construct_Params
{
};

// Function UI_LoadingCircle.UI_LoadingCircle_C.BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_LoadingCircle_C_BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_LoadingCircle.UI_LoadingCircle_C.Tick
struct UUI_LoadingCircle_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LoadingCircle.UI_LoadingCircle_C.ExecuteUbergraph_UI_LoadingCircle
struct UUI_LoadingCircle_C_ExecuteUbergraph_UI_LoadingCircle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
