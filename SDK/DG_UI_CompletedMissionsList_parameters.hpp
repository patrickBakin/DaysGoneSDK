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

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.SelectMission
struct UUI_CompletedMissionsList_C_SelectMission_Params
{
	class UObject*                                     MissionOrJob;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Highlight Group
struct UUI_CompletedMissionsList_C_Highlight_Group_Params
{
	class UUI_CompletedMissionsStorylineGroup_C*       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Highlight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Collapse Storyline
struct UUI_CompletedMissionsList_C_Collapse_Storyline_Params
{
	bool                                               Did_Collapse;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Expand Storyline
struct UUI_CompletedMissionsList_C_Expand_Storyline_Params
{
	bool                                               Did_Expand_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Storyline Group At Index
struct UUI_CompletedMissionsList_C_Get_Storyline_Group_At_Index_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_CompletedMissionsStorylineGroup_C*       Storyline_Group;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Storyline_Group_Index;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Toggle Expansion
struct UUI_CompletedMissionsList_C_Toggle_Expansion_Params
{
	bool                                               Was_Expanded_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Down
struct UUI_CompletedMissionsList_C_Section_Down_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Up
struct UUI_CompletedMissionsList_C_Section_Up_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Data By Index
struct UUI_CompletedMissionsList_C_Get_Data_By_Index_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Mission;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm, OutParm)
	bool                                               Is_Storyline_Header_;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Is Empty
struct UUI_CompletedMissionsList_C_Is_Empty_Params
{
	bool                                               Is_List_Empty_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Selected Index
struct UUI_CompletedMissionsList_C_Set_Selected_Index_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Down
struct UUI_CompletedMissionsList_C_Cursor_Down_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Up
struct UUI_CompletedMissionsList_C_Cursor_Up_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Invalidate
struct UUI_CompletedMissionsList_C_Invalidate_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Data
struct UUI_CompletedMissionsList_C_Set_Data_Params
{
	TArray<struct FBendStoryLinesForScripting>         Storylines_Data;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Tick
struct UUI_CompletedMissionsList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.FreeWidgets
struct UUI_CompletedMissionsList_C_FreeWidgets_Params
{
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupClicked
struct UUI_CompletedMissionsList_C_HandleGroupClicked_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleItemHovered
struct UUI_CompletedMissionsList_C_HandleItemHovered_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UJournalListItem*                            Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupHovered
struct UUI_CompletedMissionsList_C_HandleGroupHovered_Params
{
	class UJournalListItem*                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.ExecuteUbergraph_UI_CompletedMissionsList
struct UUI_CompletedMissionsList_C_ExecuteUbergraph_UI_CompletedMissionsList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.OnItemSelected__DelegateSignature
struct UUI_CompletedMissionsList_C_OnItemSelected__DelegateSignature_Params
{
	bool                                               Is_Mission;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
