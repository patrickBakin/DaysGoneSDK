// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Is Golden Path Mission?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_StorylinesPage_Missions_C::Is_Golden_Path_Mission_(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Is Golden Path Mission?");

	UUI_StorylinesPage_Missions_C_Is_Golden_Path_Mission__Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Storyline Overview Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_StorylinesPage_Missions_C::Set_Storyline_Overview_Data(const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Storyline Overview Data");

	UUI_StorylinesPage_Missions_C_Set_Storyline_Overview_Data_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Select Tracked Mission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::Select_Tracked_Mission()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Select Tracked Mission");

	UUI_StorylinesPage_Missions_C_Select_Tracked_Mission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Hero Image By Storyline ID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStoryLines>       Storyline_ID                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::Set_Hero_Image_By_Storyline_ID(TEnumAsByte<EStoryLines> Storyline_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Hero Image By Storyline ID");

	UUI_StorylinesPage_Missions_C_Set_Hero_Image_By_Storyline_ID_Params params;
	params.Storyline_ID = Storyline_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Current Storyline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_StorylinesPage_Missions_C::Set_Current_Storyline(const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Set Current Storyline");

	UUI_StorylinesPage_Missions_C_Set_Current_Storyline_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Active Missions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Active_Missions                (Parm, OutParm, ZeroConstructor)
// TArray<struct FJournalEntryData> Active_Mission_data            (Parm, OutParm, ZeroConstructor)

void UUI_StorylinesPage_Missions_C::Get_Active_Missions(TArray<class UObject*>* Active_Missions, TArray<struct FJournalEntryData>* Active_Mission_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Active Missions");

	UUI_StorylinesPage_Missions_C_Get_Active_Missions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active_Missions != nullptr)
		*Active_Missions = params.Active_Missions;
	if (Active_Mission_data != nullptr)
		*Active_Mission_data = params.Active_Mission_data;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Storyline Icons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData*        MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           JobData                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Output_Get                     (Parm, OutParm)

void UUI_StorylinesPage_Missions_C::Get_Storyline_Icons(class UBendMissionData* MissionData, class UJobClassInfo* JobData, struct FText* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Get Storyline Icons");

	UUI_StorylinesPage_Missions_C_Get_Storyline_Icons_Params params;
	params.MissionData = MissionData;
	params.JobData = JobData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CastToMissionOrJob
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UBendMissionData*        AsBend_Mission_Data            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           AsJob_Class_Info               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::CastToMissionOrJob(class UObject* Object, class UBendMissionData** AsBend_Mission_Data, class UJobClassInfo** AsJob_Class_Info, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CastToMissionOrJob");

	UUI_StorylinesPage_Missions_C_CastToMissionOrJob_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBend_Mission_Data != nullptr)
		*AsBend_Mission_Data = params.AsBend_Mission_Data;
	if (AsJob_Class_Info != nullptr)
		*AsJob_Class_Info = params.AsJob_Class_Info;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetStorylineEntryData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_StorylinesPage_Missions_C::SetStorylineEntryData(class UObject* Mission, const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetStorylineEntryData");

	UUI_StorylinesPage_Missions_C_SetStorylineEntryData_Params params;
	params.Mission = Mission;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetMissionObjectiveCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Task                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Mission_Category               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::GetMissionObjectiveCategory(class UObject* Task, TEnumAsByte<EObjectiveCategories>* Mission_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetMissionObjectiveCategory");

	UUI_StorylinesPage_Missions_C_GetMissionObjectiveCategory_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mission_Category != nullptr)
		*Mission_Category = params.Mission_Category;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTrackingState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Track_                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Currently_Tracked_             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::SetTrackingState(bool Can_Track_, bool Currently_Tracked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTrackingState");

	UUI_StorylinesPage_Missions_C_SetTrackingState_Params params;
	params.Can_Track_ = Can_Track_;
	params.Currently_Tracked_ = Currently_Tracked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetTaskState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Task                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionStates>    TaskState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::GetTaskState(class UObject* Task, TEnumAsByte<EMissionStates>* TaskState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetTaskState");

	UUI_StorylinesPage_Missions_C_GetTaskState_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TaskState != nullptr)
		*TaskState = params.TaskState;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TrackMissionOrJob
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Mission_or_Job                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::TrackMissionOrJob(class UObject* Mission_or_Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TrackMissionOrJob");

	UUI_StorylinesPage_Missions_C_TrackMissionOrJob_Params params;
	params.Mission_or_Job = Mission_or_Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetMissionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Active_Missions           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::SetMissionDisplay(bool Show_Active_Missions, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetMissionDisplay");

	UUI_StorylinesPage_Missions_C_SetMissionDisplay_Params params;
	params.Show_Active_Missions = Show_Active_Missions;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CalculateCompletionForData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Data                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::CalculateCompletionForData(TArray<class UObject*>* Data, int* Completed, int* Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CalculateCompletionForData");

	UUI_StorylinesPage_Missions_C_CalculateCompletionForData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (Completed != nullptr)
		*Completed = params.Completed;
	if (Total != nullptr)
		*Total = params.Total;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetActiveEntryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJournalEntryData       Entry_Data                     (Parm)
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::SetActiveEntryData(const struct FJournalEntryData& Entry_Data, class UObject* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetActiveEntryData");

	UUI_StorylinesPage_Missions_C_SetActiveEntryData_Params params;
	params.Entry_Data = Entry_Data;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ParseEntryData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Journal_Entry_Data             (Parm, OutParm)
// class UBendMissionData*        Mission_Data                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           Job_Data                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::ParseEntryData(class UObject* Data, struct FJournalEntryData* Journal_Entry_Data, class UBendMissionData** Mission_Data, class UJobClassInfo** Job_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ParseEntryData");

	UUI_StorylinesPage_Missions_C_ParseEntryData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Journal_Entry_Data != nullptr)
		*Journal_Entry_Data = params.Journal_Entry_Data;
	if (Mission_Data != nullptr)
		*Mission_Data = params.Mission_Data;
	if (Job_Data != nullptr)
		*Job_Data = params.Job_Data;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromJobData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           Job_Data                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Journal_Entry_Data             (Parm, OutParm)

void UUI_StorylinesPage_Missions_C::GetJournalEntryDataFromJobData(class UJobClassInfo* Job_Data, struct FJournalEntryData* Journal_Entry_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromJobData");

	UUI_StorylinesPage_Missions_C_GetJournalEntryDataFromJobData_Params params;
	params.Job_Data = Job_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Journal_Entry_Data != nullptr)
		*Journal_Entry_Data = params.Journal_Entry_Data;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromMissionData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData*        Mission_Data                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Journal_Entry_Data             (Parm, OutParm)

void UUI_StorylinesPage_Missions_C::GetJournalEntryDataFromMissionData(class UBendMissionData* Mission_Data, struct FJournalEntryData* Journal_Entry_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.GetJournalEntryDataFromMissionData");

	UUI_StorylinesPage_Missions_C_GetJournalEntryDataFromMissionData_Params params;
	params.Mission_Data = Mission_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Journal_Entry_Data != nullptr)
		*Journal_Entry_Data = params.Journal_Entry_Data;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.StoreDataByFName");

	UUI_StorylinesPage_Missions_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTheMenuHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SetTheMenuHeader");

	UUI_StorylinesPage_Missions_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.Construct");

	UUI_StorylinesPage_Missions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.MenuSelected");

	UUI_StorylinesPage_Missions_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CircleSelectionInputGiven");

	UUI_StorylinesPage_Missions_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TriangleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::TriangleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.TriangleSelectionInputGiven");

	UUI_StorylinesPage_Missions_C_TriangleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.DirectionalInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              DirectionalInput               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::DirectionalInputGiven(struct FVector2D* DirectionalInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.DirectionalInputGiven");

	UUI_StorylinesPage_Missions_C_DirectionalInputGiven_Params params;
	params.DirectionalInput = DirectionalInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R2orL2SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::R2orL2SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R2orL2SelectionInputGiven");

	UUI_StorylinesPage_Missions_C_R2orL2SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadAsyncWithSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture_Asset_ID               (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::LoadAsyncWithSuccess(TAssetPtr<class UTexture2D> Texture_Asset_ID, class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadAsyncWithSuccess");

	UUI_StorylinesPage_Missions_C_LoadAsyncWithSuccess_Params params;
	params.Texture_Asset_ID = Texture_Asset_ID;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_StorylinesPage_Missions_C::CheckAsset(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckAsset");

	UUI_StorylinesPage_Missions_C_CheckAsset_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CrossSelectionInputGiven");

	UUI_StorylinesPage_Missions_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Data                           (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_StorylinesPage_Missions_C::BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature(class UObject* Mission, const struct FJournalEntryData& Data, int Index, const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_276_OnItemSelected__DelegateSignature_Params params;
	params.Mission = Mission;
	params.Data = Data;
	params.Index = Index;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Is_Mission                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature(bool Is_Mission, class UObject* Mission, const struct FBendStoryLinesForScripting& StoryLine, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__CompletedMissionsList_K2Node_ComponentBoundEvent_201_OnItemSelected__DelegateSignature_Params params;
	params.Is_Mission = Is_Mission;
	params.Mission = Mission;
	params.StoryLine = StoryLine;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadHeroAsyncWithSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture>      Texture_Asset_ID               (Parm)

void UUI_StorylinesPage_Missions_C::LoadHeroAsyncWithSuccess(TAssetPtr<class UTexture> Texture_Asset_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.LoadHeroAsyncWithSuccess");

	UUI_StorylinesPage_Missions_C_LoadHeroAsyncWithSuccess_Params params;
	params.Texture_Asset_ID = Texture_Asset_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckHeroImageAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_StorylinesPage_Missions_C::CheckHeroImageAsset(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.CheckHeroImageAsset");

	UUI_StorylinesPage_Missions_C_CheckHeroImageAsset_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SquareSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::SquareSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.SquareSelectionInputGiven");

	UUI_StorylinesPage_Missions_C_SquareSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::R1orL1SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.R1orL1SelectionInputGiven");

	UUI_StorylinesPage_Missions_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FininshedDisplayingMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::FininshedDisplayingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FininshedDisplayingMenu");

	UUI_StorylinesPage_Missions_C_FininshedDisplayingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FreeWidgets
// (BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::FreeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.FreeWidgets");

	UUI_StorylinesPage_Missions_C_FreeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1796_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1856_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_4416_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_4616_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_4623_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_4631_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_4640_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Missions_C::BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature");

	UUI_StorylinesPage_Missions_C_BndEvt__ActiveMissionsList_K2Node_ComponentBoundEvent_14073_OnItemClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ExecuteUbergraph_UI_StorylinesPage_Missions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::ExecuteUbergraph_UI_StorylinesPage_Missions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.ExecuteUbergraph_UI_StorylinesPage_Missions");

	UUI_StorylinesPage_Missions_C_ExecuteUbergraph_UI_StorylinesPage_Missions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Missions_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnMenuClicked__DelegateSignature");

	UUI_StorylinesPage_Missions_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Missions_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Missions.UI_StorylinesPage_Missions_C.OnClose__DelegateSignature");

	UUI_StorylinesPage_Missions_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
