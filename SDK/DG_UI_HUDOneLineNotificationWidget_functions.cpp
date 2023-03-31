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

// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (Parm)
// TEnumAsByte<ETextJustify>      Justification                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDOneLineNotificationWidget_C::SetDetails(const struct FText& TitleText, TEnumAsByte<ETextJustify> Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.SetDetails");

	UUI_HUDOneLineNotificationWidget_C_SetDetails_Params params;
	params.TitleText = TitleText;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDOneLineNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.Construct");

	UUI_HUDOneLineNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.ExecuteUbergraph_UI_HUDOneLineNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDOneLineNotificationWidget_C::ExecuteUbergraph_UI_HUDOneLineNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.ExecuteUbergraph_UI_HUDOneLineNotificationWidget");

	UUI_HUDOneLineNotificationWidget_C_ExecuteUbergraph_UI_HUDOneLineNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
