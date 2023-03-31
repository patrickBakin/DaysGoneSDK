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

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.CloseTitleScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TitleScreenWidget_C::CloseTitleScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.CloseTitleScreen");

	UUI_TitleScreenWidget_C_CloseTitleScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ButtonAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TitleScreenWidget_C::ButtonAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ButtonAnimation");

	UUI_TitleScreenWidget_C_ButtonAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TitleScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.Construct");

	UUI_TitleScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleScreenWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.OnAnimationFinished");

	UUI_TitleScreenWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ExecuteUbergraph_UI_TitleScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleScreenWidget_C::ExecuteUbergraph_UI_TitleScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ExecuteUbergraph_UI_TitleScreenWidget");

	UUI_TitleScreenWidget_C_ExecuteUbergraph_UI_TitleScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.TitleClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TitleScreenWidget_C::TitleClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.TitleClosed__DelegateSignature");

	UUI_TitleScreenWidget_C_TitleClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
