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

// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Update Tracked Mission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Currently_Tracked_Mission      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::Update_Tracked_Mission(class UObject* Currently_Tracked_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Update Tracked Mission");

	UUI_ActiveMissionsList_C_Update_Tracked_Mission_Params params;
	params.Currently_Tracked_Mission = Currently_Tracked_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Select Storyline Group
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::Select_Storyline_Group(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Select Storyline Group");

	UUI_ActiveMissionsList_C_Select_Storyline_Group_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Storyline ID by Mission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStoryLines>       Primary_Storyline_ID           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::Get_Storyline_ID_by_Mission(class UObject* Mission, TEnumAsByte<EStoryLines>* Primary_Storyline_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Storyline ID by Mission");

	UUI_ActiveMissionsList_C_Get_Storyline_ID_by_Mission_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Primary_Storyline_ID != nullptr)
		*Primary_Storyline_ID = params.Primary_Storyline_ID;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Down
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::Section_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Down");

	UUI_ActiveMissionsList_C_Section_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Up
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::Section_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Section Up");

	UUI_ActiveMissionsList_C_Section_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Data By Index
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Mission                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Mission_Data                   (Parm, OutParm)

void UUI_ActiveMissionsList_C::Get_Data_By_Index(int Index, class UObject** Mission, struct FJournalEntryData* Mission_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Get Data By Index");

	UUI_ActiveMissionsList_C_Get_Data_By_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mission != nullptr)
		*Mission = params.Mission;
	if (Mission_Data != nullptr)
		*Mission_Data = params.Mission_Data;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Is Empty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is_List_Empty_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::Is_Empty(bool* Is_List_Empty_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Is Empty");

	UUI_ActiveMissionsList_C_Is_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_List_Empty_ != nullptr)
		*Is_List_Empty_ = params.Is_List_Empty_;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Selected Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::Set_Selected_Index(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Selected Index");

	UUI_ActiveMissionsList_C_Set_Selected_Index_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Down
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::Cursor_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Down");

	UUI_ActiveMissionsList_C_Cursor_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Up
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::Cursor_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Cursor Up");

	UUI_ActiveMissionsList_C_Cursor_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Invalidate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Invalidate");

	UUI_ActiveMissionsList_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Missions                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FJournalEntryData> Data                           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_ActiveMissionsList_C::Set_Data(TArray<class UObject*>* Missions, TArray<struct FJournalEntryData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.Set Data");

	UUI_ActiveMissionsList_C_Set_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Missions != nullptr)
		*Missions = params.Missions;
	if (Data != nullptr)
		*Data = params.Data;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.FreeWidgets
// (BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::FreeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.FreeWidgets");

	UUI_ActiveMissionsList_C_FreeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UJournalListItem*        Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::HandleItemHovered(int Index, class UJournalListItem* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemHovered");

	UUI_ActiveMissionsList_C_HandleItemHovered_Params params;
	params.Index = Index;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UJournalListItem*        Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::HandleItemClicked(int Index, class UJournalListItem* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.HandleItemClicked");

	UUI_ActiveMissionsList_C_HandleItemClicked_Params params;
	params.Index = Index;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.ExecuteUbergraph_UI_ActiveMissionsList
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsList_C::ExecuteUbergraph_UI_ActiveMissionsList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.ExecuteUbergraph_UI_ActiveMissionsList");

	UUI_ActiveMissionsList_C_ExecuteUbergraph_UI_ActiveMissionsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ActiveMissionsList_C::OnItemClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemClicked__DelegateSignature");

	UUI_ActiveMissionsList_C_OnItemClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FJournalEntryData       Data                           (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_ActiveMissionsList_C::OnItemSelected__DelegateSignature(class UObject* Mission, const struct FJournalEntryData& Data, int Index, const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsList.UI_ActiveMissionsList_C.OnItemSelected__DelegateSignature");

	UUI_ActiveMissionsList_C_OnItemSelected__DelegateSignature_Params params;
	params.Mission = Mission;
	params.Data = Data;
	params.Index = Index;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
