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

// Function UI_SkillMenu.UI_SkillMenu_C.UpdateSubMenuLocations
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::UpdateSubMenuLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.UpdateSubMenuLocations");

	UUI_SkillMenu_C_UpdateSubMenuLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.DisplaySubmenus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::DisplaySubmenus(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.DisplaySubmenus");

	UUI_SkillMenu_C_DisplaySubmenus_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.Initialize");

	UUI_SkillMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.GoToPageByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   MenuType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::GoToPageByType(TEnumAsByte<ENUM_Menu_Type>* MenuType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.GoToPageByType");

	UUI_SkillMenu_C_GoToPageByType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_SkillMenu.UI_SkillMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.Construct");

	UUI_SkillMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.Tick");

	UUI_SkillMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::DisplayAlternateNavigation(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.DisplayAlternateNavigation");

	UUI_SkillMenu_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.SetNavigationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>*       Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::SetNavigationState(TEnumAsByte<EMenuTypes>* Menu, float* angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.SetNavigationState");

	UUI_SkillMenu_C_SetNavigationState_Params params;
	params.Menu = Menu;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.FlushStaticImages");

	UUI_SkillMenu_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.InitStaticImages");

	UUI_SkillMenu_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature");

	UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_SkillMenu_C::BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature");

	UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_SkillMenu_C::BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature");

	UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.ExecuteUbergraph_UI_SkillMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::ExecuteUbergraph_UI_SkillMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.ExecuteUbergraph_UI_SkillMenu");

	UUI_SkillMenu_C_ExecuteUbergraph_UI_SkillMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.OnGoToPrevPage__DelegateSignature");

	UUI_SkillMenu_C_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SkillMenu_C::OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.OnGoToNextPage__DelegateSignature");

	UUI_SkillMenu_C_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillMenu.UI_SkillMenu_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillMenu_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillMenu.UI_SkillMenu_C.OnMenuClicked__DelegateSignature");

	UUI_SkillMenu_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
