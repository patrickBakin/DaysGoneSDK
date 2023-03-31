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

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.UpdateSubMenuLocations
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Storylines_Menu_C::UpdateSubMenuLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.UpdateSubMenuLocations");

	UUI_Storylines_Menu_C_UpdateSubMenuLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplaySubmenus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::DisplaySubmenus(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplaySubmenus");

	UUI_Storylines_Menu_C_DisplaySubmenus_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.GoToPageByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   MenuType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::GoToPageByType(TEnumAsByte<ENUM_Menu_Type>* MenuType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.GoToPageByType");

	UUI_Storylines_Menu_C_GoToPageByType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Storylines_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.Construct");

	UUI_Storylines_Menu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.Tick");

	UUI_Storylines_Menu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::DisplayAlternateNavigation(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplayAlternateNavigation");

	UUI_Storylines_Menu_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.SetNavigationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>*       Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::SetNavigationState(TEnumAsByte<EMenuTypes>* Menu, float* angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.SetNavigationState");

	UUI_Storylines_Menu_C_SetNavigationState_Params params;
	params.Menu = Menu;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Storylines_Menu_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.InitStaticImages");

	UUI_Storylines_Menu_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Storylines_Menu_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.FlushStaticImages");

	UUI_Storylines_Menu_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_Storylines_Menu_C::BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_Storylines_Menu_C::BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature
// (BlueprintEvent)

void UUI_Storylines_Menu_C::BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature");

	UUI_Storylines_Menu_C_BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.ExecuteUbergraph_UI_Storylines_Menu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::ExecuteUbergraph_UI_Storylines_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.ExecuteUbergraph_UI_Storylines_Menu");

	UUI_Storylines_Menu_C_ExecuteUbergraph_UI_Storylines_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Storylines_Menu_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnMenuClicked__DelegateSignature");

	UUI_Storylines_Menu_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Storylines_Menu_C::OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToPrevPage__DelegateSignature");

	UUI_Storylines_Menu_C_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Storylines_Menu_C::OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToNextPage__DelegateSignature");

	UUI_Storylines_Menu_C_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
