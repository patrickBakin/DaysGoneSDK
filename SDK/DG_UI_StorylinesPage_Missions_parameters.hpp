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

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Is Golden Path Mission?
struct UUI_StorylinesPage_Missions_C_Is_Golden_Path_Mission__Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Storyline Overview Data
struct UUI_StorylinesPage_Missions_C_Set_Storyline_Overview_Data_Params
{
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Select Tracked Mission
struct UUI_StorylinesPage_Missions_C_Select_Tracked_Mission_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Hero Image By Storyline ID
struct UUI_StorylinesPage_Missions_C_Set_Hero_Image_By_Storyline_ID_Params
{
	TEnumAsByte<EStoryLines>                           Storyline_ID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Current Storyline
struct UUI_StorylinesPage_Missions_C_Set_Current_Storyline_Params
{
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Active Missions
struct UUI_StorylinesPage_Missions_C_Get_Active_Missions_Params
{
	TArray<class UObject*>                             Active_Missions;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FJournalEntryData>                   Active_Mission_data;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Storyline Icons
struct UUI_StorylinesPage_Missions_C_Get_Storyline_Icons_Params
{
	class UBendMissionData*                            MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output_Get;                                               // (Parm, OutParm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CastToMissionOrJob
struct UUI_StorylinesPage_Missions_C_CastToMissionOrJob_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            AsBend_Mission_Data;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               AsJob_Class_Info;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetStorylineEntryData
struct UUI_StorylinesPage_Missions_C_SetStorylineEntryData_Params
{
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetMissionObjectiveCategory
struct UUI_StorylinesPage_Missions_C_GetMissionObjectiveCategory_Params
{
	class UObject*                                     Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  Mission_Category;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTrackingState
struct UUI_StorylinesPage_Missions_C_SetTrackingState_Params
{
	bool                                               Can_Track_;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Currently_Tracked_;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetTaskState
struct UUI_StorylinesPage_Missions_C_GetTaskState_Params
{
	class UObject*                                     Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStates>                        TaskState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TrackMissionOrJob
struct UUI_StorylinesPage_Missions_C_TrackMissionOrJob_Params
{
	class UObject*                                     Mission_or_Job;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetMissionDisplay
struct UUI_StorylinesPage_Missions_C_SetMissionDisplay_Params
{
	bool                                               Show_Active_Missions;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CalculateCompletionForData
struct UUI_StorylinesPage_Missions_C_CalculateCompletionForData_Params
{
	TArray<class UObject*>                             Data;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Completed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetActiveEntryData
struct UUI_StorylinesPage_Missions_C_SetActiveEntryData_Params
{
	struct FJournalEntryData                           Entry_Data;                                               // (Parm)
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ParseEntryData
struct UUI_StorylinesPage_Missions_C_ParseEntryData_Params
{
	class UObject*                                     Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Journal_Entry_Data;                                       // (Parm, OutParm)
	class UBendMissionData*                            Mission_Data;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               Job_Data;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromJobData
struct UUI_StorylinesPage_Missions_C_GetJournalEntryDataFromJobData_Params
{
	class UJobClassInfo*                               Job_Data;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Journal_Entry_Data;                                       // (Parm, OutParm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromMissionData
struct UUI_StorylinesPage_Missions_C_GetJournalEntryDataFromMissionData_Params
{
	class UBendMissionData*                            Mission_Data;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Journal_Entry_Data;                                       // (Parm, OutParm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.StoreDataByFName
struct UUI_StorylinesPage_Missions_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTheMenuHeader
struct UUI_StorylinesPage_Missions_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Construct
struct UUI_StorylinesPage_Missions_C_Construct_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.MenuSelected
struct UUI_StorylinesPage_Missions_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CircleSelectionInputGiven
struct UUI_StorylinesPage_Missions_C_CircleSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TriangleSelectionInputGiven
struct UUI_StorylinesPage_Missions_C_TriangleSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.DirectionalInputGiven
struct UUI_StorylinesPage_Missions_C_DirectionalInputGiven_Params
{
	struct FVector2D*                                  DirectionalInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R2orL2SelectionInputGiven
struct UUI_StorylinesPage_Missions_C_R2orL2SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadAsyncWithSuccess
struct UUI_StorylinesPage_Missions_C_LoadAsyncWithSuccess_Params
{
	TAssetPtr<class UTexture2D>                        Texture_Asset_ID;                                         // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckAsset
struct UUI_StorylinesPage_Missions_C_CheckAsset_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CrossSelectionInputGiven
struct UUI_StorylinesPage_Missions_C_CrossSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature_Params
{
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJournalEntryData                           Data;                                                     // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature_Params
{
	bool                                               Is_Mission;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadHeroAsyncWithSuccess
struct UUI_StorylinesPage_Missions_C_LoadHeroAsyncWithSuccess_Params
{
	TAssetPtr<class UTexture>                          Texture_Asset_ID;                                         // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckHeroImageAsset
struct UUI_StorylinesPage_Missions_C_CheckHeroImageAsset_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SquareSelectionInputGiven
struct UUI_StorylinesPage_Missions_C_SquareSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R1orL1SelectionInputGiven
struct UUI_StorylinesPage_Missions_C_R1orL1SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FininshedDisplayingMenu
struct UUI_StorylinesPage_Missions_C_FininshedDisplayingMenu_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FreeWidgets
struct UUI_StorylinesPage_Missions_C_FreeWidgets_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature
struct UUI_StorylinesPage_Missions_C_BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ExecuteUbergraph_UI_StorylinesPage_Missions
struct UUI_StorylinesPage_Missions_C_ExecuteUbergraph_UI_StorylinesPage_Missions_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnMenuClicked__DelegateSignature
struct UUI_StorylinesPage_Missions_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnClose__DelegateSignature
struct UUI_StorylinesPage_Missions_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
