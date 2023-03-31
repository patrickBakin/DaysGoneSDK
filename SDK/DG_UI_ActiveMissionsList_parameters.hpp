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

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Update Tracked Mission
struct UUI_ActiveMissionsList_C_Update_Tracked_Mission_Params
{
	class UObject*                                     Currently_Tracked_Mission;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Select Storyline Group
struct UUI_ActiveMissionsList_C_Select_Storyline_Group_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Storyline ID by Mission
struct UUI_ActiveMissionsList_C_Get_Storyline_ID_by_Mission_Params
{
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryLines>                           Primary_Storyline_ID;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Down
struct UUI_ActiveMissionsList_C_Section_Down_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Up
struct UUI_ActiveMissionsList_C_Section_Up_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Data By Index
struct UUI_ActiveMissionsList_C_Get_Data_By_Index_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Mission;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Mission_Data;                                             // (Parm, OutParm)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Is Empty
struct UUI_ActiveMissionsList_C_Is_Empty_Params
{
	bool                                               Is_List_Empty_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Selected Index
struct UUI_ActiveMissionsList_C_Set_Selected_Index_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Down
struct UUI_ActiveMissionsList_C_Cursor_Down_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Up
struct UUI_ActiveMissionsList_C_Cursor_Up_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Invalidate
struct UUI_ActiveMissionsList_C_Invalidate_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Data
struct UUI_ActiveMissionsList_C_Set_Data_Params
{
	TArray<class UObject*>                             Missions;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FJournalEntryData>                   Data;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.FreeWidgets
struct UUI_ActiveMissionsList_C_FreeWidgets_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemHovered
struct UUI_ActiveMissionsList_C_HandleItemHovered_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UJournalListItem*                            Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemClicked
struct UUI_ActiveMissionsList_C_HandleItemClicked_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UJournalListItem*                            Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.ExecuteUbergraph_UI_ActiveMissionsList
struct UUI_ActiveMissionsList_C_ExecuteUbergraph_UI_ActiveMissionsList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemClicked__DelegateSignature
struct UUI_ActiveMissionsList_C_OnItemClicked__DelegateSignature_Params
{
};

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemSelected__DelegateSignature
struct UUI_ActiveMissionsList_C_OnItemSelected__DelegateSignature_Params
{
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Data;                                                     // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
