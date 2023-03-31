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

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.ActiveCollectibleKey
struct UUI_CollectibleInteract_C_ActiveCollectibleKey_Params
{
	int                                                Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Inspect
struct UUI_CollectibleInteract_C_SetState_Inspect_Params
{
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Interact
struct UUI_CollectibleInteract_C_SetState_Interact_Params
{
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetDetailImageActive
struct UUI_CollectibleInteract_C_SetDetailImageActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.Init
struct UUI_CollectibleInteract_C_Init_Params
{
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Active
struct UUI_CollectibleInteract_C_SetState_Active_Params
{
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.Construct
struct UUI_CollectibleInteract_C_Construct_Params
{
};

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.ExecuteUbergraph_UI_CollectibleInteract
struct UUI_CollectibleInteract_C_ExecuteUbergraph_UI_CollectibleInteract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
