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

// Function FileSelectListItem.FileSelectListItem_C.SetSelected
struct UFileSelectListItem_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature
struct UFileSelectListItem_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature
struct UFileSelectListItem_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function FileSelectListItem.FileSelectListItem_C.Construct
struct UFileSelectListItem_C_Construct_Params
{
};

// Function FileSelectListItem.FileSelectListItem_C.ExecuteUbergraph_FileSelectListItem
struct UFileSelectListItem_C_ExecuteUbergraph_FileSelectListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FileSelectListItem.FileSelectListItem_C.OnHovered__DelegateSignature
struct UFileSelectListItem_C_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

// Function FileSelectListItem.FileSelectListItem_C.OnClicked__DelegateSignature
struct UFileSelectListItem_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGameMenuItemData                       Data;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
