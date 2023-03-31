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

// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.SelectMission
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 MissionOrJob                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_CompletedMissionsList_C::SelectMission(class UObject* MissionOrJob)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.SelectMission");

	UUI_CompletedMissionsList_C_SelectMission_Params params;
	params.MissionOrJob = MissionOrJob;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Highlight Group
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CompletedMissionsStorylineGroup_C* Group                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Highlight               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Highlight_Group(class UUI_CompletedMissionsStorylineGroup_C* Group, bool Should_Highlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Highlight Group");

	UUI_CompletedMissionsList_C_Highlight_Group_Params params;
	params.Group = Group;
	params.Should_Highlight = Should_Highlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Collapse Storyline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Did_Collapse                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Collapse_Storyline(bool* Did_Collapse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Collapse Storyline");

	UUI_CompletedMissionsList_C_Collapse_Storyline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Collapse != nullptr)
		*Did_Collapse = params.Did_Collapse;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Expand Storyline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Did_Expand_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Expand_Storyline(bool* Did_Expand_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Expand Storyline");

	UUI_CompletedMissionsList_C_Expand_Storyline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Expand_ != nullptr)
		*Did_Expand_ = params.Did_Expand_;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Storyline Group At Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CompletedMissionsStorylineGroup_C* Storyline_Group                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Storyline_Group_Index          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Get_Storyline_Group_At_Index(int Index, class UUI_CompletedMissionsStorylineGroup_C** Storyline_Group, int* Storyline_Group_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Storyline Group At Index");

	UUI_CompletedMissionsList_C_Get_Storyline_Group_At_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Storyline_Group != nullptr)
		*Storyline_Group = params.Storyline_Group;
	if (Storyline_Group_Index != nullptr)
		*Storyline_Group_Index = params.Storyline_Group_Index;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Toggle Expansion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Was_Expanded_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Toggle_Expansion(bool* Was_Expanded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Toggle Expansion");

	UUI_CompletedMissionsList_C_Toggle_Expansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Was_Expanded_ != nullptr)
		*Was_Expanded_ = params.Was_Expanded_;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Down
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::Section_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Down");

	UUI_CompletedMissionsList_C_Section_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Up
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::Section_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Section Up");

	UUI_CompletedMissionsList_C_Section_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Data By Index
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Mission                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm, OutParm)
// bool                           Is_Storyline_Header_           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Get_Data_By_Index(int Index, class UObject** Mission, struct FBendStoryLinesForScripting* StoryLine, bool* Is_Storyline_Header_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Get Data By Index");

	UUI_CompletedMissionsList_C_Get_Data_By_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mission != nullptr)
		*Mission = params.Mission;
	if (StoryLine != nullptr)
		*StoryLine = params.StoryLine;
	if (Is_Storyline_Header_ != nullptr)
		*Is_Storyline_Header_ = params.Is_Storyline_Header_;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Is Empty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is_List_Empty_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Is_Empty(bool* Is_List_Empty_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Is Empty");

	UUI_CompletedMissionsList_C_Is_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_List_Empty_ != nullptr)
		*Is_List_Empty_ = params.Is_List_Empty_;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Selected Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Set_Selected_Index(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Selected Index");

	UUI_CompletedMissionsList_C_Set_Selected_Index_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Down
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::Cursor_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Down");

	UUI_CompletedMissionsList_C_Cursor_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Up
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::Cursor_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Cursor Up");

	UUI_CompletedMissionsList_C_Cursor_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Invalidate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Invalidate");

	UUI_CompletedMissionsList_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendStoryLinesForScripting> Storylines_Data                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_CompletedMissionsList_C::Set_Data(TArray<struct FBendStoryLinesForScripting>* Storylines_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Set Data");

	UUI_CompletedMissionsList_C_Set_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Storylines_Data != nullptr)
		*Storylines_Data = params.Storylines_Data;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.Tick");

	UUI_CompletedMissionsList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.FreeWidgets
// (BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsList_C::FreeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.FreeWidgets");

	UUI_CompletedMissionsList_C_FreeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::HandleGroupClicked(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupClicked");

	UUI_CompletedMissionsList_C_HandleGroupClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UJournalListItem*        Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::HandleItemHovered(int Index, class UJournalListItem* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleItemHovered");

	UUI_CompletedMissionsList_C_HandleItemHovered_Params params;
	params.Index = Index;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::HandleGroupHovered(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.HandleGroupHovered");

	UUI_CompletedMissionsList_C_HandleGroupHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.ExecuteUbergraph_UI_CompletedMissionsList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::ExecuteUbergraph_UI_CompletedMissionsList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.ExecuteUbergraph_UI_CompletedMissionsList");

	UUI_CompletedMissionsList_C_ExecuteUbergraph_UI_CompletedMissionsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Mission                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsList_C::OnItemSelected__DelegateSignature(bool Is_Mission, class UObject* Mission, const struct FBendStoryLinesForScripting& StoryLine, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsList.UI_CompletedMissionsList_C.OnItemSelected__DelegateSignature");

	UUI_CompletedMissionsList_C_OnItemSelected__DelegateSignature_Params params;
	params.Is_Mission = Is_Mission;
	params.Mission = Mission;
	params.StoryLine = StoryLine;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
