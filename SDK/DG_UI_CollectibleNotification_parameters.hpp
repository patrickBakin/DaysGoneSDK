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

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.DeactivateNotification
struct UUI_CollectibleNotification_C_DeactivateNotification_Params
{
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActivateNotification
struct UUI_CollectibleNotification_C_ActivateNotification_Params
{
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetDisplayTimer
struct UUI_CollectibleNotification_C_SetDisplayTimer_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActiveCollectibleKey
struct UUI_CollectibleNotification_C_ActiveCollectibleKey_Params
{
	int                                                Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.TickCollectible
struct UUI_CollectibleNotification_C_TickCollectible_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetCollectibleItem
struct UUI_CollectibleNotification_C_SetCollectibleItem_Params
{
	class UInventoryItemCollectible*                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.Construct
struct UUI_CollectibleNotification_C_Construct_Params
{
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.Tick
struct UUI_CollectibleNotification_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SpawnPauseMenu
struct UUI_CollectibleNotification_C_SpawnPauseMenu_Params
{
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.OnAnimationFinished_Event_1
struct UUI_CollectibleNotification_C_OnAnimationFinished_Event_1_Params
{
};

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ExecuteUbergraph_UI_CollectibleNotification
struct UUI_CollectibleNotification_C_ExecuteUbergraph_UI_CollectibleNotification_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
