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

// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TypeText                       (Parm)
// struct FText                   NameText                       (Parm)
// TEnumAsByte<ETextJustify>      Justification                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowTouchpad                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDTwoLineNotificationWidget_C::SetDetails(const struct FText& TypeText, const struct FText& NameText, TEnumAsByte<ETextJustify> Justification, bool ShowTouchpad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.SetDetails");

	UUI_HUDTwoLineNotificationWidget_C_SetDetails_Params params;
	params.TypeText = TypeText;
	params.NameText = NameText;
	params.Justification = Justification;
	params.ShowTouchpad = ShowTouchpad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDTwoLineNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.Construct");

	UUI_HUDTwoLineNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.ExecuteUbergraph_UI_HUDTwoLineNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDTwoLineNotificationWidget_C::ExecuteUbergraph_UI_HUDTwoLineNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.ExecuteUbergraph_UI_HUDTwoLineNotificationWidget");

	UUI_HUDTwoLineNotificationWidget_C_ExecuteUbergraph_UI_HUDTwoLineNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
