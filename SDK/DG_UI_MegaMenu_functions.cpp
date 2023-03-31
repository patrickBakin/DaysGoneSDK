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

// Function UI_MegaMenu.UI_MegaMenu_C.UpdatePanelLocations
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::UpdatePanelLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.UpdatePanelLocations");

	UUI_MegaMenu_C_UpdatePanelLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.FlushStaticImages");

	UUI_MegaMenu_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.InitStaticImages");

	UUI_MegaMenu_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.SetCurrentMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::SetCurrentMenu(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.SetCurrentMenu");

	UUI_MegaMenu_C_SetCurrentMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature
// (BlueprintEvent)

void UUI_MegaMenu_C::BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature");

	UUI_MegaMenu_C_BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.ExecuteUbergraph_UI_MegaMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::ExecuteUbergraph_UI_MegaMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.ExecuteUbergraph_UI_MegaMenu");

	UUI_MegaMenu_C_ExecuteUbergraph_UI_MegaMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.OnGoToPrevPage__DelegateSignature");

	UUI_MegaMenu_C_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.OnGoToNextPage__DelegateSignature");

	UUI_MegaMenu_C_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.OnRequestClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MegaMenu_C::OnRequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.OnRequestClose__DelegateSignature");

	UUI_MegaMenu_C_OnRequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MegaMenu.UI_MegaMenu_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MegaMenu_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MegaMenu.UI_MegaMenu_C.OnMenuClicked__DelegateSignature");

	UUI_MegaMenu_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
