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

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddActiveItem
struct UUI_CompletedMissionsStorylineGroup_C_AddActiveItem_Params
{
	struct FJournalEntryData                           Data;                                                     // (Parm)
	class UUI_ActiveMissionsListItem_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddCompletedItem
struct UUI_CompletedMissionsStorylineGroup_C_AddCompletedItem_Params
{
	struct FJournalEntryData                           Data;                                                     // (Parm)
	class UUI_CompletedMissionsListItem_C*             Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.GetExpansionIcon
struct UUI_CompletedMissionsStorylineGroup_C_GetExpansionIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Is Empty
struct UUI_CompletedMissionsStorylineGroup_C_Is_Empty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get Visible List Items
struct UUI_CompletedMissionsStorylineGroup_C_Get_Visible_List_Items_Params
{
	TArray<class UJournalListItem*>                    Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get All List Items
struct UUI_CompletedMissionsStorylineGroup_C_Get_All_List_Items_Params
{
	TArray<class UJournalListItem*>                    Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Expand
struct UUI_CompletedMissionsStorylineGroup_C_Expand_Params
{
	bool                                               Shoud_Be_Expanded;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Select
struct UUI_CompletedMissionsStorylineGroup_C_Select_Params
{
	bool                                               Is_Selected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Set Storyline
struct UUI_CompletedMissionsStorylineGroup_C_Set_Storyline_Params
{
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Construct
struct UUI_CompletedMissionsStorylineGroup_C_Construct_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Tick
struct UUI_CompletedMissionsStorylineGroup_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnSelected
struct UUI_CompletedMissionsStorylineGroup_C_OnSelected_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnDeselected
struct UUI_CompletedMissionsStorylineGroup_C_OnDeselected_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnData
struct UUI_CompletedMissionsStorylineGroup_C_OnData_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.FreeWidgets
struct UUI_CompletedMissionsStorylineGroup_C_FreeWidgets_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemHovered
struct UUI_CompletedMissionsStorylineGroup_C_HandleItemHovered_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemClicked
struct UUI_CompletedMissionsStorylineGroup_C_HandleItemClicked_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.ExecuteUbergraph_UI_CompletedMissionsStorylineGroup
struct UUI_CompletedMissionsStorylineGroup_C_ExecuteUbergraph_UI_CompletedMissionsStorylineGroup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemClicked__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnItemClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UJournalListItem*                            Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnHovered__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnHovered__DelegateSignature_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemHovered__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnItemHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UJournalListItem*                            Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnClicked__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnClicked__DelegateSignature_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnCollapsed__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnCollapsed__DelegateSignature_Params
{
};

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnExpanded__DelegateSignature
struct UUI_CompletedMissionsStorylineGroup_C_OnExpanded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
