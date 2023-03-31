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

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.GetContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            PanelWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::GetContainer(class UPanelWidget** PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.GetContainer");

	UUI_CategoryMenuWidget_C_GetContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PanelWidget != nullptr)
		*PanelWidget = params.PanelWidget;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.InitWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CategoryMenuWidget_C::InitWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.InitWidgets");

	UUI_CategoryMenuWidget_C_InitWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.CreateEntries
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::CreateEntries(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.CreateEntries");

	UUI_CategoryMenuWidget_C_CreateEntries_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CategoryMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Construct");

	UUI_CategoryMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.SetCategoryActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activated                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::SetCategoryActivated(bool* Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.SetCategoryActivated");

	UUI_CategoryMenuWidget_C_SetCategoryActivated_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Click Category
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::Click_Category(int CategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Click Category");

	UUI_CategoryMenuWidget_C_Click_Category_Params params;
	params.CategoryIndex = CategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.ExecuteUbergraph_UI_CategoryMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::ExecuteUbergraph_UI_CategoryMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.ExecuteUbergraph_UI_CategoryMenuWidget");

	UUI_CategoryMenuWidget_C_ExecuteUbergraph_UI_CategoryMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.BroadcastActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuWidget_C::BroadcastActive__DelegateSignature(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.BroadcastActive__DelegateSignature");

	UUI_CategoryMenuWidget_C_BroadcastActive__DelegateSignature_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
